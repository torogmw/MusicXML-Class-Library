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
    bool goMsItemElementTestImplementOne();
    
    inline void goMsItemElementTest()
    {
        while ( goMsItemElementTestImplementOne() )
        {
            ;
        }
    }
    
    inline bool goMsItemElementTestImplementOne()
    {
        using namespace xsd;
        
        fs::Directory dir( globals::getOutputDirectory() );
        
        MsItemWeb xdoc;
        XpItemPtr root = xdoc.getXpDom()->getRootItem();
        
        MsItemKind kind = MsItemKind::element;
        MsItemSet filteredset = xdoc.getFilteredMsItemSet( kind );
        MsItemElementSet eset;
        int total{ 0 };
        for ( auto e : filteredset )
        {
            MsItemElement x( *e );
            MsItemElementPtr element = std::make_shared<MsItemElement>( *e );
            eset.push_back( element );
            if ( element->getIsImplemented() == false )
            {
                if ( codegenIsValueElement( element ) )
                {
                    codegenValueElement( element, true, false );
                    return true;
                }
            }
        }
        return false;
    }
}