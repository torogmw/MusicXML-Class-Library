/* matthew james briggs */

#pragma once
#include <iostream>
#include "MsItem.h"
#include <memory>
#include <vector>

namespace xsd
{
    class MsItemEnumValue;
    using MsItemEnumValuePtr = std::shared_ptr<MsItemEnumValue>;
    using MsItemEnumValueSet = std::vector<MsItemEnumValuePtr>;
    using MsItemEnumValueSetIter = MsItemEnumValueSet::iterator;
    using MsItemEnumValueSetIterConst = MsItemEnumValueSet::const_iterator;
    
    class MsItemEnumValue : public MsItem
    {

    public:
        MsItemEnumValue( const MsItem& value );
        virtual ~MsItemEnumValue();
        
        std::string getCppName() const;
        
    private:
        std::string myCppName;
        void parseCppName();
    };
}