#pragma once
#include <iostream>
#include "MsItem.h"
#include <memory>
#include <vector>
#include "MsItemSimpleType.h"
#include "MsItemAttribute.h"

namespace xsd
{
    enum class MsItemElementKind
    {
        emptyempty = 0,
        emptyattributes = 1,
        valuetype = 2,
        composite = 3
    };
    
    class MsItemElement;
    using MsItemElementPtr = std::shared_ptr<MsItemElement>;
    using MsItemElementSet = std::vector<MsItemElementPtr>;
    using MsItemElementSetIter = MsItemElementSet::iterator;
    using MsItemElementSetIterConst = MsItemElementSet::const_iterator;
    
    class MsItemElement : public MsItem
    {
    public:
        MsItemElement( const MsItem item );
        virtual ~MsItemElement();
        std::string getXmlName() const;
        std::string getCppName() const;
        const MsItemAttributeSet& getAttributes() const;
    
    private:
        MsItemAttributeSet myAttributes;
        std::string myCppName();
        
        void parseAttributes();
        void parseCppName();
    };
}