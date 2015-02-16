/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include <fstream>
#include <map>

#include "globals.h"
#include "DbQuery.h"
#include "MsItemWeb.h"
#include "XpReader.h"

namespace xsd
{
    /* ctor */
    MsItemWeb::MsItemWeb( const std::string& xsdFilePath )
    :myXpDomPtr( nullptr )
    ,myDbQueryPtr( nullptr )
    {
        loadXpDom( xsdFilePath );
        init();
    }
    
    MsItemWeb::MsItemWeb()
    :myXpDomPtr( nullptr )
    ,myDbQueryPtr( nullptr )
    {
        loadXpDom( globals::getMusicXmlXsdFilePath() );
        init();
        
    }
    const MsItemSet& MsItemWeb::getMsItemSet() const
    {
        return myMsItemSet;
    }
    void MsItemWeb::init()
    {
        myDbQueryPtr = std::make_shared<db::DbQuery>();
        myDbQueryPtr->setSql( "SELECT ID, IsImplemented FROM xsd" );
        createMsItemSet();
    }
    
    
    /* dtor */
    MsItemWeb::~MsItemWeb() {}
    
    void MsItemWeb::createMsItemSet()
    {
        myMsItemSet.clear();
        myMsItemSet = MsItem::buildMsItemWeb( myXpDomPtr->getRootItem() );
        MsItem::resolveInheritenceInWeb( myMsItemSet );
        refreshDbQuery();
    }
    
    
    MsItemSetIter MsItemWeb::getMsItemSetBegin()
    {
        return myMsItemSet.begin();
    }
    MsItemSetIter MsItemWeb::getMsItemSetEnd()
    {
        return myMsItemSet.end();
    }
    MsItemSetIterConst MsItemWeb::getMsItemSetBeginConst() const
    {
        return myMsItemSet.cbegin();
    }
    MsItemSetIterConst MsItemWeb::getMsItemSetEndConst() const
    {
        return myMsItemSet.cend();
    }
    
//    void MsItemWeb::recursivelyBuildMsItems( const xsd::XpItemPtr& i, xsd::MsItemSet& output )
//    {
//        using namespace xsd;
//        if( i )
//        {
//            output.push_back( std::make_shared<MsItem>( i ) );
//            if ( i->hasChildren() )
//            {
//                for ( auto c : i->getChildren() )
//                {
//                    if ( c )
//                    {
//                        recursivelyBuildMsItems( c, output );
//                    }
//                }
//            }
//        }
//    }
    
    XpDomPtr MsItemWeb::getXpDom() const
    {
        return myXpDomPtr;
    }
    
    void MsItemWeb::loadXpDom( const std::string& xsdFilePath )
    {
        std::ifstream inputfile( xsdFilePath, std::ios_base::binary );
        if ( inputfile.is_open() )
        {
            XpReader reader( inputfile );
            myXpDomPtr = reader.getXpDomPtr();
            inputfile.close();
        }
        else
        {
            std::string errormsg = xsdFilePath + " failed to load.";
            throw std::runtime_error( errormsg.c_str() );
        }
        
        
    }
    
    
    
    void MsItemWeb::refreshDbQuery()
    {
        myDbQueryPtr->execute();
        std::map<int,bool> implmap;

        for ( auto row = myDbQueryPtr->rowsBegin(); row != myDbQueryPtr->rowsEnd(); ++row )
        {

            auto field = row->begin();
            std::pair<int, bool> implpair;
            implpair.first = field->getValueInt();
            implpair.second = (++field)->getValueBool();
            implmap.insert( implpair );
        }
        for ( auto i : myMsItemSet )
        {
            bool isImplemented = false;
            std::map<int,bool>::iterator it = implmap.find( i->getID() );
            if ( it != implmap.end() )
            {
                isImplemented = it->second;
            }
            i->setIsImplemented( isImplemented );
        }
    }
    

    
    void MsItemWeb::findItemByID( int ID, const XpItemPtr& e, XpItemPtr& foundItem )
    {
        if ( e )
        {
            if ( e->getID() == ID )
            {
                foundItem = e;
                return;
            }
            else
            {
                for ( int i = 0; i < e->countChildren(); ++i )
                {
                    XpItemPtr child = e->getChild( i );
                    findItemByID( ID, child, foundItem );
                }
            }
        }
    }
}

