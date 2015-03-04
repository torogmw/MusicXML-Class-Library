#pragma once
#include "MsItem.h"
#include "MsItemWeb.h"
#include "MsItemAttribute.h"
#include "XpItem.h"
#include <set>
#include "File.h"
#include "globals.h"
#include "MsItemElement.h"

namespace go
{
    inline void goMsItemElementTest()
    {
        using namespace xsd;
        
        fs::Directory dir( globals::getOutputDirectory() );
        
        MsItemWeb xdoc;
        XpItemPtr root = xdoc.getXpDom()->getRootItem();
        
        MsItemKind kind = MsItemKind::element;
        MsItemSet filteredset = xdoc.getFilteredMsItemSet( kind );
        MsItemElementSet eset;
        for ( auto e : filteredset )
        {
            MsItemElementPtr element = std::make_shared<MsItemElement>( *e );
            eset.push_back( element );
            if ( element->getDtDef() == "accidental-text" )
            {
                
                for( auto a : element->getAttributes() )
                {
                    std::cout << a->csv() << std::endl;
                }
                int x = 0;
            }
        }
        
        
        
//        MsItemAttributeSet attributes;
//        MsItemSet slicedattributes;
//        for ( auto i : aset )
//        {
//            attributes.push_back( std::make_shared<MsItemAttribute>( *i ) );
//        }
//        std::copy(attributes.begin(), attributes.end(), std::back_inserter( slicedattributes ) );
//        fs::writeStringToFile(globals::getOutputDirectory(),
//                              "xsd_attribute.csv",
//                              toString( slicedattributes ) );
    }
}