/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "SchDocument.h"
#include "XpReader.h"
#include <fstream>
#include "globals.h"

#include "DbQuery.h"

namespace xsd
{
    SchDocument::IntBools SchDocument::ourIsImplemented;
    
    /* ctor */
    SchDocument::SchDocument( const std::string& xsdFilePath )
    :myDocument( nullptr )
    ,myDbQueryPtr( std::make_shared<db::DbQuery>( "SELECT ID, IsImplemented FROM xsd" ) )
    {
        init();
        LoadXpDom( xsdFilePath );
    }
    
    SchDocument::SchDocument()
    :myDocument( nullptr )
    {
        init();
        LoadXpDom( globals::getMusicXmlXsdFilePath() );
    }
    
    
    /* dtor */
    SchDocument::~SchDocument() {}
    
    XpDomPtr SchDocument::getXpDom() const
    {
        return myDocument;
    }
    
    void SchDocument::LoadXpDom( const std::string& xsdFilePath )
    {
        std::ifstream inputfile( xsdFilePath, std::ios_base::binary );
        XpReader reader( inputfile );
        inputfile.close();
        myDocument = reader.documentPtr();
    }
    
    void SchDocument::init()
    {
        if ( ourIsImplemented.size() == 0 )
        {
            this->refreshDbQuery();
        }
    }
    
    void SchDocument::refreshDbQuery()
    {
        myDbQueryPtr->execute();
        ourIsImplemented.clear();
        for ( auto row = myDbQueryPtr->rowsBegin(); row != myDbQueryPtr->rowsEnd(); ++row )
        {
            IntBool vals;
            auto field = row->begin();
            vals.ID = field->getValueInt();
            vals.IsImplemented = (++field)->getValueBool();
            ourIsImplemented.push_back( vals );
        }
    }
    
    bool SchDocument::isImplemented( const XpItemPtr& e ) const
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
    
    XpItemPtr SchDocument::getElementNodeByID( int ID, const XpItemPtr& e )
    {
        XpItemPtr output;
        SchDocument::findElementByID( ID, e, output );
        return output;
    }
    
    XpItemPtr SchDocument::getElementNodeByID( int ID )
    {
        SchDocument xsd;
        XpItemPtr output;
        output = getElementNodeByID( ID, xsd.getXpDom()->root_element() );
        return output;
    }
    
    void SchDocument::findElementByID( int ID, const XpItemPtr& e, XpItemPtr& foundElement )
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

