/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "XpDocument.h"
#include "XpReader.h"
#include <fstream>
#include "globals.h"

// #include "ExecuteQuery.h"

namespace xsd
{
    XpDocument::IntBools XpDocument::ourIsImplemented;
    
    /* ctor */
    XpDocument::XpDocument( const std::string& xsdFilePath )
    :myDocument( nullptr )
    {
        init();
        LoadXpDom( xsdFilePath );
    }
    
    XpDocument::XpDocument()
    :myDocument( nullptr )
    {
        init();
        LoadXpDom( globals::getMusicXmlXsdFilePath() );
    }
    
    
    /* dtor */
    XpDocument::~XpDocument() {}
    
    XpDomPtr XpDocument::getXpDom() const
    {
        return myDocument;
    }
    
    void XpDocument::LoadXpDom( const std::string& xsdFilePath )
    {
        std::ifstream inputfile( xsdFilePath, std::ios_base::binary );
        Reader reader( inputfile );
        inputfile.close();
        myDocument = reader.documentPtr();
    }
    
    void XpDocument::init()
    {
        if ( ourIsImplemented.size() == 0 )
        {
//            std::string sql = "SELECT ID, IsImplemented FROM xsd";
//            auto res = mysqlpp::ExecuteQuery( sql );
//            for ( auto it = res.begin(); it != res.end(); ++it )
//            {
//                mysqlpp::Row row = *it;
//                IntBool newIntBool;
//                newIntBool.ID = mysqlpp::getFieldInt( row, "ID" );
//                newIntBool.IsImplemented = mysqlpp::getFieldBool( row, "IsImplemented" );
//                ourIsImplemented.push_back( newIntBool );
//            }
        }
    }
    
    bool XpDocument::isImplemented( const XpItemPtr& e ) const
    {
        if ( e )
        {
            auto it = std::find_if(ourIsImplemented.begin(), ourIsImplemented.end(), [e](const IntBool& insideItem)
                                { return e->getIndex() == insideItem.ID;});
            if ( it != ourIsImplemented.end() )
            {
                return it->IsImplemented;
            }
        }
        
        return false;
    }
    
    XpItemPtr XpDocument::getElementNodeByID( int ID, const XpItemPtr& e )
    {
        XpItemPtr output;
        XpDocument::findElementByID( ID, e, output );
        return output;
    }
    
    XpItemPtr XpDocument::getElementNodeByID( int ID )
    {
        XpDocument xsd;
        XpItemPtr output;
        output = getElementNodeByID( ID, xsd.getXpDom()->root_element() );
        return output;
    }
    
    void XpDocument::findElementByID( int ID, const XpItemPtr& e, XpItemPtr& foundElement )
    {
        if ( e )
        {
            if ( e->getIndex() == ID )
            {
                foundElement = e;
                return;
            }
            else
            {
                for ( int i = 0; i < e->count_children(); ++i )
                {
                    XpItemPtr child = e->get_child( i );
                    findElementByID( ID, child, foundElement );
                }
            }
        }
    }
}

