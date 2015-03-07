/* matthew james briggs */

#pragma once
#include <iostream>
#include "XpItem.h"
#include <memory>
#include <vector>
#include "MsItemKind.h"

namespace xsd
{
    class MsItem;
    using MsItemPtr = std::shared_ptr<MsItem>;
    using MsItemSet = std::vector<MsItemPtr>;
    using MsItemSetIter = MsItemSet::iterator;
    using MsItemSetIterConst = MsItemSet::const_iterator;
    
    class MsItem
    {

    public:
        
        /* Static Builder */
        static MsItemSet buildMsItemWeb( const XpItemPtr& root );
        static void resolveInheritenceInWeb( MsItemSet& web );
        
        /* Ctor, Dtor */
        MsItem( const XpItemPtr& xpItemPtr );
        virtual ~MsItem();
        
        /* MsItem features */
        int getID() const;
        std::string getDtDef() const;
        MsItemKind getMsItemKind() const;
        void setMsItemKind( const MsItemKind& value );
        std::string getMsItemKindString() const;
        void setIsImplemented( bool isImplemented );
        bool getIsImplemented() const;
        bool getIsFirstClassConcept() const;
        XpItemPtr getXpItem() const;
        bool getIsSpecialCase() const;
        bool getInherits() const;
        MsItemPtr getInheritedMsItem() const;
        void setInheritedMsItem( const MsItemPtr& inheriteditem );
        MsItemKind getInheritedMsItemKind() const;
        std::string getInheritedMsItemKindString() const;
        std::string getXml() const;
        
        /* returns the top level root for the ItemWeb,
         i.e. it starts at this->getParent() and traverses upwards
         until it finds the root MsItemPrt (xs:schema) */
        MsItemPtr getRoot() const;
        
        /* Parent MsItem */
        MsItemPtr getParent() const;
        void setParent( const MsItemPtr& parent );
        
        /* Child MsItems */
        MsItemSetIter getChildrenBegin();
        MsItemSetIter getChildrenEnd();
        MsItemSetIterConst getChildrenBegin() const;
        MsItemSetIterConst getChildrenEnd() const;
        const MsItemSet& getChildren() const;
        void addChild( const MsItemPtr& child );
        void clearChildren();
        std::string getCppName() const;
        
        virtual std::string csvHeaders() const;
        virtual std::string csv() const;
        
    private:
        XpItemPtr myXpItemPtr;
        std::string myDtDef;
        MsItemKind myMsItemKind;
        std::string myMsItemKindString;
        bool myIsImplemented;
        bool myIsFirstClassConcept;
        MsItemPtr myParent;
        MsItemSet myChildren;
        bool myIsSpecialCase;
        MsItemPtr myInheritedDt;
        
        /* parsing functions */
        void parseDtDef();
        void parseMsItemKind();
        void parseIsFirstClassConcept();
        void parseSpecialCases();
        static void parseInheritence( MsItemSet& web, const MsItemPtr& itemToParse );
        
        /* static web building functions */
        static void constructMsItemWebScaffold( const XpItemPtr& root, MsItemSet& output );
        static void buildMsItemWebRecursive( const MsItemPtr& current, MsItemSet& web );
        
        /* special functions */
        static void addItemToXsd( const std::string& name, const std::string& tag, int& nodeid, const XpItemPtr& root );
    };

    bool operator<( const MsItem& lhs, const MsItem& rhs );
    bool operator>( const MsItem& lhs, const MsItem& rhs );
    bool operator<=( const MsItem& lhs, const MsItem& rhs );
    bool operator>=( const MsItem& lhs, const MsItem& rhs );
    bool operator==( const MsItem& lhs, const MsItem& rhs );
    bool operator!=( const MsItem& lhs, const MsItem& rhs );
    
    bool operator<( const MsItemPtr& lhs, const MsItemPtr& rhs );
    bool operator>( const MsItemPtr& lhs, const MsItemPtr& rhs );
    bool operator<=( const MsItemPtr& lhs, const MsItemPtr& rhs );
    bool operator>=( const MsItemPtr& lhs, const MsItemPtr& rhs );
    bool operator==( const MsItemPtr& lhs, const MsItemPtr& rhs );
    bool operator!=( const MsItemPtr& lhs, const MsItemPtr& rhs );
    
    std::string toString( const MsItemSet& input );
    
}