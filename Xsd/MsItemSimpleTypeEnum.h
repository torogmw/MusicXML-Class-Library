/* matthew james briggs */

#pragma once
#include <iostream>
#include "MsItemSimpleType.h"
#include "MsItemEnumValue.h"
#include "MsitemWeb.h"

namespace xsd
{
    class MsItemSimpleTypeEnum;
    using MsItemSimpleTypeEnumPtr = std::shared_ptr<MsItemSimpleTypeEnum>;
    using MsItemSimpleTypeEnumSet = std::vector<MsItemSimpleTypeEnumPtr>;
    using MsItemSimpleTypeEnumSetIter = MsItemSimpleTypeEnumSet::iterator;
    using MsItemSimpleTypeEnumSetIterConst = MsItemSimpleTypeEnumSet::const_iterator;
    
    class MsItemSimpleTypeEnum : public MsItemSimpleType
    {

    public:
        MsItemSimpleTypeEnum( const MsItemSimpleType& value );
        virtual ~MsItemSimpleTypeEnum();
        const MsItemEnumValueSet& getEnumValues() const;
        static MsItemSimpleTypeEnumSet construct( const MsItemWeb& web );
        
    private:
        MsItemEnumValueSet myEnumValues;
        void parseEnumValues();
    };
}