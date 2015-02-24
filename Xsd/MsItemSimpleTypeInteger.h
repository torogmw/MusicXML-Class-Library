/* matthew james briggs */

#pragma once
#include <iostream>
#include "MsItemSimpleType.h"
#include "MsItemWeb.h"
#include <memory>
#include <vector>

namespace xsd
{
    class MsItemSimpleTypeInteger;
    using MsItemSimpleTypeIntegerPtr = std::shared_ptr<MsItemSimpleTypeInteger>;
    using MsItemSimpleTypeIntegerSet = std::vector<MsItemSimpleTypeIntegerPtr>;
    using MsItemSimpleTypeIntegerSetIter = MsItemSimpleTypeIntegerSet::iterator;
    using MsItemSimpleTypeIntegerSetIterConst = MsItemSimpleTypeIntegerSet::const_iterator;
    
    class MsItemSimpleTypeInteger : public MsItemSimpleType
    {

    public:
        MsItemSimpleTypeInteger( const MsItemSimpleType& item );
        virtual ~MsItemSimpleTypeInteger();
        static MsItemSimpleTypeIntegerSet construct( const MsItemWeb& web );
        virtual std::string csvHeaders() const;
        virtual std::string csv() const;
    private:
        bool myHasMinInclusive;
        bool myHasMaxInclusive;
        bool myHasMinExclusive;
        bool myHasMaxExclusive;
        int myMinInclusive;
        int myMaxInclusive;
        int myMinExclusive;
        int myMaxExclusive;
        void parseMinMax();
    };
}