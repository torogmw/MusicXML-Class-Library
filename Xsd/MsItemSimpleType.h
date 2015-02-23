/* matthew james briggs */

#pragma once
#include <iostream>
#include "MsItem.h"
#include "MsItemSimpleTypeKind.h"
#include <memory>
#include <vector>

namespace xsd
{
    class MsItemSimpleType;
    using MsItemSimpleTypePtr = std::shared_ptr<MsItemSimpleType>;
    using MsItemSimpleTypeSet = std::vector<MsItemSimpleTypePtr>;
    using MsItemSimpleTypeSetIter = MsItemSimpleTypeSet::iterator;
    using MsItemSimpleTypeSetIterConst = MsItemSimpleTypeSet::const_iterator;
    
    class MsItemSimpleType : public MsItem
    {

    public:
        MsItemSimpleType( const MsItem& item );
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