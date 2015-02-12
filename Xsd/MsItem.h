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
        MsItem( const XpItemPtr& xpItemPtr );
        virtual ~MsItem();
        
        int getID() const;
        std::string getDtDef() const;
        MsItemKind getMsItemKind() const;
        std::string getMsItemKindString() const;
        void setIsImplemented( bool isImplemented );
        bool getIsImplemented() const;
        bool getIsFirstClassConcept() const;
        
    private:
        XpItemPtr myXpItemPtr;
        std::string myDtDef;
        MsItemKind myMsItemKind;
        bool myIsImplemented;
        bool myIsFirstClassConcept;
        
        /* parsing functions */
        void parseDtDef();
        void parseMsItemKind();
        void parseIsFirstClassConcept();
        
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