#pragma once
#include "MsItem.h"
#include "MsItemElement.h"
#include "tab.h"
#include "end.h"
#include "convertFunkyTypeName.h"

namespace xsd
{
    inline void codegenAttributesStructH( std::ostream& h, const std::string& attStructName, const MsItemElementPtr& e, bool printXmlDocumentation, bool skipIfDuplicate )
    {
        MsItemElementSet equivs = findEquivalentElements( e );
        auto eqb = equivs.cbegin();
        auto eqe = equivs.cend();
        auto eqi = eqb;
        bool isDuplicate = !doesElementHaveTheLowestIDAmongPeers( e, equivs );
        std::string attStructPtrName = attStructName+"Ptr";
        MsItemPtr inheritedMsItem = e->getInheritedMsItem();
        
        if ( printXmlDocumentation )
        {
            h << "/*" << end();
            h << e->getID();
            if ( equivs.size() > 1 )
            {
                h << " [ equivalents ";
                eqi = eqb;
                for ( ; eqi != eqe; ++eqi )
                {
                    if ( eqi != eqb )
                    {
                        h << ", ";
                    }
                    h << (*eqi)->getID();
                }
                h << " ]" << end();
            }
            else
            {
                h << end();
            }
            e->getXpItem()->stream( h, 0 );
            if ( inheritedMsItem )
            {
                inheritedMsItem->getXpItem()->stream( h, 0 );
            }
            h << " */" << end();
        } // end if ( printXmlDocumentation )
        

        h << end();
        
        if ( (!isDuplicate) || (!skipIfDuplicate) )
        {
            h << "struct " << attStructName << ";" << end();
            h << "using " << attStructPtrName << " = std::shared_ptr<" << attStructName << ">;" << end(2);
            h << "struct " << attStructName << " : public AttributesInterface" << end();
            h << "{" << end();
            h << "public:" << end();
            h << tab(1) << attStructName << "();" << end();
            h << tab(1) << "virtual bool hasValues() const;" << end();
            h << tab(1) << "virtual std::ostream& toStream( std::ostream& os ) const;" << end();
            const MsItemAttributeSetIterConst attBegin = e->getAttributes().cbegin();
            const MsItemAttributeSetIterConst attEnd = e->getAttributes().cend();
            for ( auto it = attBegin; it != attEnd; ++it)
            {
                MsItemPtr typeitem = (*it)->getInheritedMsItem();
                std::string typeItemName = convertFunkyTypeName( typeitem->getCppName() );
                std::string curattName = (*it)->getCppName();
                curattName[0] = tolower( curattName[0] );
                h << tab(1) << "types::" << typeItemName << " " << curattName << ";" << end();
            }
            for ( auto it = attBegin; it != attEnd; ++it)
            {
                MsItemPtr typeitem = (*it)->getInheritedMsItem();
                std::string curattName = (*it)->getCppName();
                curattName[0] = tolower( curattName[0] );
                if ( (*it)->getIsRequired() )
                {
                    h << "const ";
                }
                h << tab(1) << "bool has" << (*it)->getCppName() << ";" << end();
            }
            h << "};" << end(2);
        }
    }
}