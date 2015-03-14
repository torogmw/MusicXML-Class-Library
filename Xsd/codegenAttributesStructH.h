#pragma once
#include "MsItem.h"
#include "MsItemElement.h"
#include "tab.h"
#include "end.h"

namespace xsd
{
    inline void codegenAttributesStructH( std::ostream& h, const std::string& attStructName, const MsItemElementPtr& e )
    {
        std::string attStructPtrName = attStructName+"Ptr";
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
            std::string curattName = (*it)->getCppName();
            curattName[0] = tolower( curattName[0] );
            h << tab(1) << "types::" << typeitem->getCppName() << " " << curattName << ";" << end();
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