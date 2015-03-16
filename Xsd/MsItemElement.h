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
        MsItemElementSet mySubElements;
        void parseAttributes();
        void parseCppName();
        void parseMsElementItemKind();
        void parseReferencedType();
        void parseSubElements();
    };
    MsItemElementSet findEquivalentElements( const MsItemElementPtr& pattern );
    void findEquivalentElementsRecursively( const MsItemElementPtr& pattern, const MsItemPtr& searchHere, MsItemElementSet& output );
    void findSubElementsRecursively( const MsItemPtr& e, MsItemSet& output, const int topElementID );
    MsItemElementSet findSubElements( const MsItemPtr& i );
    
    class MsItemWeb;
    using MsItemWebPtr = std::shared_ptr<MsItemWeb>;
    MsItemElementSet findUnimplementedElements( const MsItemWebPtr& web );
    bool doesElementHaveTheLowestIDAmongPeers( const MsItemElementPtr& elementToCheck, const MsItemElementSet& peerElements );
    MsItemElementSetIterConst findElementWithLowestID( const MsItemElementSet& elements );
}