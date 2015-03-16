#pragma once
#include "MsItem.h"
#include "MsItemElement.h"
#include "tab.h"
#include "end.h"

namespace xsd
{
    inline void codegenEmptyElementWithAttributesH( std::ostream& h, const std::string& attStructName, const MsItemElementPtr& e )
    {
        MsItemElementSet equivs = findEquivalentElements( e );
        auto eqb = equivs.cbegin();
        auto eqe = equivs.cend();
        auto eqi = eqb;
        bool isDuplicate = !doesElementHaveTheLowestIDAmongPeers( e, equivs );
        std::string attStructPtrName = attStructName+"Ptr";
        MsItemPtr inheritedMsItem = e->getInheritedMsItem();
#if 1 == 0
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
        if ( isDuplicate )
        {
            h << end();
        }
#endif
        if ( !isDuplicate )
        {
            h << "class " << e->getCppName() << " : public ElementInterface" << end();
            h << "{" << end();
            h << "public:" << end();
            h << tab(1) << e->getCppName() << "();" << end();
            // h << tab(1) << e->getCppName() << "( const types::" << inheritedMsItem->getCppName() << "& value );" << end();
            h << tab(1) << "virtual bool hasAttributes() const;" << end();
            h << tab(1) << "virtual bool hasContents() const;" << end();
            h << tab(1) << "virtual std::ostream& streamAttributes( std::ostream& os ) const;" << end();
            h << tab(1) << "virtual std::ostream& streamName( std::ostream& os ) const;" << end();
            h << tab(1) << "virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;" << end();
            h << tab(1) << attStructPtrName << " getAttributes() const;" << end();
            h << tab(1) << "void setAttributes( const " << attStructPtrName << "& attributes );" << end();
            // h << tab(1) << "types::" << inheritedMsItem->getCppName() << " getValue() const;" << end();
            // h << tab(1) << "void setValue( const types::" << inheritedMsItem->getCppName() << "& value );" << end();
            h << "private:" << end();
            // h << tab(1) << "types::" << inheritedMsItem->getCppName() << " myValue;" << end();
            h << tab(1) << attStructPtrName << " myAttributes;" << end();
            h << "};" << end( 2 );
        }
    }
}