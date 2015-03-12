#pragma once
#include "MsItem.h"
#include "MsItemWeb.h"
#include "MsItemAttribute.h"
#include "XpItem.h"
#include <set>
#include "File.h"
#include "globals.h"
#include "MsItemElement.h"
#include "codegenValueElementNoAttributes.h"

namespace go
{
    bool goCreateValueNoAttributeElementsImplementOne();
    
    inline void goCreateValueNoAttributeElements()
    {
        while ( goCreateValueNoAttributeElementsImplementOne() )
        {
            ;
        }
    }
    
    inline bool goCreateValueNoAttributeElementsImplementOne()
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
            if ( codegenIsValueElementNoAttributes( element ) )
            {
                if ( ! element->getIsImplemented() )
                {
                    //element->getXpItem()->stream( std::cout, 0 );
                    std::cout << "," << element->getID();
                    std::cout << end();
                    codegenValueElementNoAttributes( element, true, true );
                }
            }
//            XpItemPtr xp = element->getXpItem();
//            auto xpchildrencount = xp->getChildren().size();
//            XpItemPtr firstchild;
//            XpPropertyPtr typeproperty;
//            std::string type_name;
//            MsItemPtr simpletypemsitem;
//            if ( xpchildrencount > 0 )
//            {
//                firstchild = *( xp->getChildrenBegin() );
//            }
//            if ( xpchildrencount == 0 ||
//                ( xpchildrencount == 1 && firstchild->getTag() == "xs:annotation" )
//                )
//            {
//                if ( xp->getProperties().size() >= 2 )
//                {
//                    typeproperty = (*(++(xp->getProperties().begin())));
//                    if ( typeproperty->getLabel() == "type" )
//                    {
//                        type_name = typeproperty->getValue();
//                        simpletypemsitem = findItemByNameAndKind( type_name, MsItemKind::simpleType, element );
//                        if ( simpletypemsitem )
//                        {
//                            if ( ! element->getIsImplemented() )
//                            {
//                                element->getXpItem()->stream( std::cout, 0 );
//                                std::cout << end( 2 );
//                            }
//                        }
//                    }
//                }
//            }
//            if ( element->getDtDef() == "measure-style" )
//            {
//                int total{ 0 };
//                ++total;
//            }
//            if ( element->getIsImplemented() == false )
//            {
//                if ( codegenIsValueElement( element ) )
//                {
//                    codegenValueElementNoAttributes( element, true, true );
//                    int xyz = 0;
//                    ++xyz;
//                }
//            }
            
        }
        return false;
    }
}