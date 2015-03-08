#pragma once
#include "MsItem.h"
#include "MsItemWeb.h"
#include "MsItemAttribute.h"
#include "XpItem.h"
#include <set>
#include "File.h"
#include "globals.h"
#include "MsItemElement.h"
#include "codegenValueElement.h"

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
            MsItemElement x( *e );
            MsItemElementPtr element = std::make_shared<MsItemElement>( *e );
            eset.push_back( element );
            if ( e->getDtDef() == "accidental-text" )
            {
                codegenValueElement( element );
                int x = 0;
                return;
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