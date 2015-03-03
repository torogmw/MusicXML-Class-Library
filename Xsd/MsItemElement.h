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
        unknown = -1,
        empty = 0,
        valuetype = 2,
        composite = 3
    };
    inline std::string toString( MsItemElementKind value )
    {
        if (value == MsItemElementKind::empty )
        {
            return "empty";
        }
        else if (value == MsItemElementKind::composite )
        {
            return "composite";
        }
        else if (value == MsItemElementKind::valuetype )
        {
            return "valuetype";
        }
        else
        {
            return "unknown";
        }
    }
    
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
        MsItemElementKind getMsItemElementKind() const;
        MsItemPtr myReferencedItem;
    
    private:
        MsItemAttributeSet myAttributes;
        std::string myCppName;
        MsItemElementKind myMsItemElementKind;
        void parseAttributes();
        void parseCppName();
        void parseMsElementItemKind();
        void parseReferencedType();
    };
}