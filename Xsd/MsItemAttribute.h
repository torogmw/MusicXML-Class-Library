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
        static MsItemAttributeSet findAllAttributes( const MsItem* item );
        static void findItemRecursively( const std::string& ref, MsItemPtr& output, const MsItem* cur, bool& found );
        static void findAllAttributesRecursively( const MsItem* item, MsItemAttributeSet& output );
        static MsItemPtr findItem( const MsItemKind kind, const std::string& ref, const MsItem* top );
        
    private:
        MsItemSimpleTypePtr myMsItemSimpleType;
        std::string myCppName;
        void parseMsItemSimpleType();
        void parseCppName();
    };
    
    
    
}