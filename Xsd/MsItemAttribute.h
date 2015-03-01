/* matthew james briggs */

#pragma once
#include <iostream>
#include "MsItem.h"
#include <memory>
#include <vector>
#include "MsItemSimpleType.h"

namespace xsd
{
    class MsItemAttribute;
    using MsItemAttributePtr = std::shared_ptr<MsItemAttribute>;
    using MsItemAttributeSet = std::vector<MsItemAttributePtr>;
    using MsItemAttributeSetIter = MsItemAttributeSet::iterator;
    using MsItemAttributeSetIterConst = MsItemAttributeSet::const_iterator;
    
    class MsItemAttribute : public MsItem
    {
        
    public:
        MsItemAttribute( const MsItem& item );
        MsItemSimpleTypePtr getMsItemSimpleType() const;
        std::string getXmlName() const;
        std::string getCppName() const;
        virtual std::string csv() const;
        virtual std::string csvHeaders() const;
        
    private:
        MsItemSimpleTypePtr myMsItemSimpleType;
        std::string myCppName;
        
        void parseMsItemSimpleType();
        void parseCppName();
    };
    
    void findAllAttributesRecursively( const MsItemPtr& item, MsItemAttributeSet& output );
}