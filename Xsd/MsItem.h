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
        
        /* Ctor, Dtor */
        MsItem( const XpItemPtr& xpItemPtr );
        virtual ~MsItem();
        
        /* MsItem features */
        int getID() const;
        std::string getDtDef() const;
        MsItemKind getMsItemKind() const;
        std::string getMsItemKindString() const;
        void setIsImplemented( bool isImplemented );
        bool getIsImplemented() const;
        bool getIsFirstClassConcept() const;
        XpItemPtr getXpItem() const;
        
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
        
    private:
        XpItemPtr myXpItemPtr;
        std::string myDtDef;
        MsItemKind myMsItemKind;
        bool myIsImplemented;
        bool myIsFirstClassConcept;
        MsItemPtr myParent;
        MsItemSet myChildren;
        
        /* parsing functions */
        void parseDtDef();
        void parseMsItemKind();
        void parseIsFirstClassConcept();
        void parseSpecialCases();
        
        /* static web building functions */
        static void constructMsItemWebScaffold( const XpItemPtr& root, MsItemSet& output );
        static void buildMsItemWebRecursive( const MsItemPtr& current, MsItemSet& web );
        
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
    
}