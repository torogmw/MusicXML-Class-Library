/* matthew james briggs */

#pragma once
#include <iostream>
#include "MsItem.h"
#include "MsItemSimpleTypeKind.h"

namespace xsd
{
    class MsItemSimpleType : public MsItem
    {

    public:
        MsItemSimpleType( const XpItemPtr& item );
        virtual ~MsItemSimpleType();
        
        MsItemSimpleTypeKind getMsItemSimpleTypeKind() const;
        virtual std::string csv() const;
        virtual std::string csvHeaders() const;
        
    private:
        MsItemSimpleTypeKind myMsItemSimpleTypeKind;
        
        /* parsing functions */
        void parseMsItemSimpleTypeKind();
        bool parseIsEnumeration() const;
        bool parseIsDecimal() const;
        bool parseIsInteger() const;
        MsItemSimpleTypeKind parseSpecialCases() const;
    };
}