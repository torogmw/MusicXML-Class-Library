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
    bool goCreateValueElementsImplementOne();
    
    inline void goCreateValueElements()
    {
        while ( goCreateValueElementsImplementOne() )
        {
            ;
        }
    }
    
    inline bool goCreateValueElementsImplementOne()
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
            if ( element->getDtDef() == "measure-style" )
            {
                int total{ 0 };
                ++total;
            }
            if ( element->getIsImplemented() == false )
            {
                if ( codegenIsValueElement( element ) )
                {
                    codegenValueElement( element, true, true );
                    int xyz = 0;
                    ++xyz;
                }
            }
            
        }
        return false;
    }
}