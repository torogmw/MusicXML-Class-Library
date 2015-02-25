/* matthew james briggs */

#pragma once
#include <iostream>
#include "MsItemSimpleType.h"
#include "MsItemWeb.h"
#include <memory>
#include <vector>

namespace xsd
{
    class MsItemSimpleTypeDecimal;
    using MsItemSimpleTypeDecimalPtr = std::shared_ptr<MsItemSimpleTypeDecimal>;
    using MsItemSimpleTypeDecimalSet = std::vector<MsItemSimpleTypeDecimalPtr>;
    using MsItemSimpleTypeDecimalSetIter = MsItemSimpleTypeDecimalSet::iterator;
    using MsItemSimpleTypeDecimalSetIterConst = MsItemSimpleTypeDecimalSet::const_iterator;
    
    class MsItemSimpleTypeDecimal : public MsItemSimpleType
    {
        
    public:
        MsItemSimpleTypeDecimal( const MsItemSimpleType& item );
        virtual ~MsItemSimpleTypeDecimal();
        static MsItemSimpleTypeDecimalSet construct( const MsItemWeb& web );
        virtual std::string csvHeaders() const;
        virtual std::string csv() const;
    private:
        bool myHasMinInclusive;
        bool myHasMaxInclusive;
        bool myHasMinExclusive;
        bool myHasMaxExclusive;
        double myMinInclusive;
        double myMaxInclusive;
        double myMinExclusive;
        double myMaxExclusive;
        void parseMinMax();
    };
}