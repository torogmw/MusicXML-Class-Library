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
        simple,
        composite
    };
    enum class MsItemElementCardinality
    {
        Unidentified = -1,
        RequiredSingleOccurrence = 0,
        OptionalSingleOccurrence = 1,
        OneOrMMany = 2,
        ZeroOrMany = 3,
        RangeBound = 4
    };
    std::string toString( const MsItemElementCardinality v );
    inline std::string toString( MsItemElementKind value )
    {
        if (value == MsItemElementKind::simple )
        {
            return "simple";
        }
        else if (value == MsItemElementKind::composite )
        {
            return "composite";
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
        unsigned int getMinOccurs() const;
        unsigned int getMaxOccurs() const;
        MsItemElementCardinality getCardinality() const;
        const MsItemElementSet& getSubElements() const;
        bool getSubElementsImplemented() const;
        std::string toString() const;
        std::ostream& toStream( std::ostream& os ) const;
        
    private:
        MsItemAttributeSet myAttributes;
        std::string myCppName;
        MsItemElementKind myMsItemElementKind;
        MsItemElementSet mySubElements;
        unsigned int myMinOccurs;
        unsigned int myMaxOccurs;
        MsItemElementCardinality myCardinality;
        void parseAttributes();
        void parseCppName();
        void parseMsElementItemKind();
        void parseReferencedType();
        void parseSubElements();
        void parseMinMaxOccurs();
        
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