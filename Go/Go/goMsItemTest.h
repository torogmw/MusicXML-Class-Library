#include "MsItem.h"
#include "MsItemWeb.h"
#include "XpItem.h"
#include <set>

namespace go
{
    void goRecursivelyBuildMsItems( const xsd::XpItemPtr& i, xsd::MsItemSet& output );
    
    inline void goMsItemTest()
    {
        using namespace xsd;
        MsItemWeb xdoc;
        XpItemPtr root = xdoc.getXpDom()->getRootItem();

        
        MsItemSet firstClass;
        for ( auto it = xdoc.getMsItemSetBeginConst(); it != xdoc.getMsItemSetEndConst(); ++it )
        {
            if( (*it)->getIsFirstClassConcept() )
            {
                firstClass.push_back( *it );
//                std::cout << (*it)->getDtDef() << ",";
//                std::cout << (*it)->getMsItemKindString() << ",";
//                std::cout << std::boolalpha << (*it)->getIsImplemented() << std::endl;
            }
            if( (*it)->getXpItem()->getID() == 279
               || (*it)->getXpItem()->getID() == 283
               || (*it)->getXpItem()->getID() == 285
               ||(*it)->getXpItem()->getID() == 326
               ||(*it)->getXpItem()->getID() == 330
               ||(*it)->getXpItem()->getID() == 2031
               ||(*it)->getXpItem()->getID() == 2033
               ||(*it)->getXpItem()->getID() == 2168
               )
            {
                std::cout << (*it)->getXpItem()->getID() << std::endl;
                std::cout << *((*it)->getXpItem()) << std::endl << std::endl;
            }
        }
        for ( auto it = xdoc.getMsItemSetBeginConst(); it != xdoc.getMsItemSetEndConst(); ++it )
        {
            if ( (*it)->getDtDef().size() == 0 && (*it)->getIsFirstClassConcept() )
            {
                std::cout << (*it)->getID() << std::endl;
                std::cout << *((*it)->getXpItem()) << std::endl << std::endl;
            }
        }
        std::set<std::string> alltypes;
        std::set<std::string> firstclasstypes;
        
        for ( auto it = xdoc.getMsItemSetBeginConst(); it != xdoc.getMsItemSetEndConst(); ++it )
        {
            if ( (*it)->getIsFirstClassConcept() ||
                (*it)->getMsItemKind() == MsItemKind::group ||
                (*it)->getMsItemKind() == MsItemKind::sequence ||
                (*it)->getMsItemKind() == MsItemKind::choice ||
                (*it)->getMsItemKind() == MsItemKind::attributeGroup ||
                (*it)->getMsItemKind() == MsItemKind::complexType ||
                (*it)->getMsItemKind() == MsItemKind::group )
            {
                firstclasstypes.insert( (*it)->getDtDef() );
            }
            XpItemPtr x = (*it)->getXpItem();
            if ( x )
            {
                if ( x -> hasProperties() )
                {
                    for ( auto p : x->getProperties() )
                    {
                        if ( ( p->getLabel() == "ref" || p->getLabel() == "type" ))
                        {
                            alltypes.insert( p->getValue() );
                        }
                    }
                }
            }
        }
        for ( auto s : alltypes )
        {
            if ( std::find( firstclasstypes.begin(), firstclasstypes.end(), s ) == firstclasstypes.end() )
            {
                std::cout << s << std::endl;
            }
        }
        int wow = 1;
    }

}