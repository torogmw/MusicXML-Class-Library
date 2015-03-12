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
    void goSDKJGFHSDLFJKGH()
    {
        using namespace xsd;
        using namespace fs;
        
        MsItemWeb w;
        MsItemSet iset = w.getFilteredMsItemSet( MsItemKind::element );
        MsItemElementSet elements;
        for ( const auto currentitem : iset )
        {
            if ( currentitem->getIsImplemented() == false )
            {
                MsItemElementPtr newe = std::make_shared<MsItemElement>( *currentitem );
                elements.push_back( newe );
            }
        }
        
        for ( auto e : elements )
        {
            auto childrenCount = e->getChildren().size();
            auto childrenIter = e->getChildren().begin();
            auto properties = e->getXpItem()->getProperties();
            std::string complexTypeName;
            MsItemPtr complexType;
            MsItemElementSet sequenceElements;
            if ( childrenCount == 0 ||
                (childrenCount == 1 && (*childrenIter)->getXpItem()->getTag() == "xs:annotation" ) )
            {
                if ( properties.size() >= 2 )
                {
                    if ( ( *( ++properties.begin() ))->getLabel() == "type" )
                    {
                        complexTypeName = ( *( ++properties.begin() ))->getValue();
                        complexType = findItemByNameAndKind( complexTypeName, MsItemKind::complexType, e );
                        if ( complexType )
                        {
                            auto cmplxChildrenCount = complexType->getChildren().size();
                            auto cmplxChildrenIter = complexType->getChildren().begin();
                            auto cmplxChildrenEnd = complexType->getChildren().end();
                            int sequenceCount = 0;
                            int badElementsCount = 0;
                            MsItemPtr sequence;
                            if ( cmplxChildrenIter != cmplxChildrenEnd
                                && (*cmplxChildrenIter)->getMsItemKind() == MsItemKind::annotation )
                            {
                                ++cmplxChildrenIter;
                            }
                            for (; cmplxChildrenIter != cmplxChildrenEnd; ++cmplxChildrenIter )
                            {
                                MsItemPtr currentCmplxChild = *cmplxChildrenIter;
                                if( currentCmplxChild->getMsItemKind() == MsItemKind::sequence )
                                {
                                    ++sequenceCount;
                                    sequence = currentCmplxChild;
                                }
                                else if ( currentCmplxChild->getMsItemKind() == MsItemKind::annotation ||
                                         currentCmplxChild->getMsItemKind() == MsItemKind::attribute ||
                                         currentCmplxChild->getMsItemKind() == MsItemKind::attributeGroup )
                                {
                                    ; // ignore
                                }
                                else
                                {
                                    ++badElementsCount;
                                }
                            }
                            if ( badElementsCount == 0 && sequenceCount == 1 && sequence )
                            {
                                for ( auto sc : sequence->getChildren() )
                                {
                                    if ( sc->getMsItemKind() == MsItemKind::element )
                                    {
                                        sequenceElements.push_back( std::make_shared<MsItemElement>( *sc ) );
                                    }
                                    else
                                    {
                                        ++badElementsCount;
                                    }
                                }
                                if ( badElementsCount == 0 )
                                {
                                    // return true here;
                                    std::cout << e->getDtDef() << std::endl;
                                }
                            }
                            
                        }
                    }
                }
                
            }
        }
    }
}