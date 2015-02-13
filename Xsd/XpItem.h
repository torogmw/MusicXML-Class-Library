#pragma once
#include <iostream>
#include <vector>
#include "XpProperty.h"
#include <memory>

namespace xsd
{
    // forward declaration
    class XpItem;
    
    // declare a shared pointer typedef for XpItem
    typedef std::shared_ptr<XpItem> XpItemPtr;
    
    // also a shared pointer for XpPropertys
    typedef std::shared_ptr<XpProperty> XpPropertyPtr;
    
    typedef std::vector<XpItemPtr> XpItemSet;
    typedef XpItemSet::iterator XpItemSetIter;
    typedef XpItemSet::const_iterator XpItemSetIterConst;
    
    // declare XpItem
    class XpItem
    {

    public:
        XpItem();
        XpItem( const std::string& tag, const std::string& text="", XpItem* ParentXpItem = nullptr, int index = 0 );
        virtual ~XpItem();
        
        std::string getTag() const;
        void setTag( const std::string& value );
        
        std::string getText() const;
        void setText( const std::string& new_text );
        
        bool hasChildren() const;
        bool hasText() const;
        bool hasProperties() const;
        
        void addChild( const XpItemPtr& e );
        void removeChild( int index );
        XpItemPtr getChild( int index );
        int countChildren() const;
        const XpItemSet& getChildren() const;
        XpItemSetIter getChildrenBegin();
        XpItemSetIter getChildrenEnd();
        XpItemSetIterConst getChildrenBegin() const;
        XpItemSetIterConst getChildrenEnd() const;
        
        void addProperty( const XpPropertyPtr& a );
        void removeProperty( int index );
        XpPropertyPtr getProperty( int index );
        int countProperties() const;
        const XpPropertySet& getProperties() const;
        
        std::ostream& stream( std::ostream& os, int indent ) const;
        std::string str() const;
        
        void setParent ( XpItem* parent );
        XpItem* getParent() const;
        
        int getID() const;
        void setID( int index );
        
    private:
        std::string myTag;
        std::string myText;
        XpItemSet myChildItems;
        XpPropertySet myProperties;
        XpItem* myParentItem;
        int myID;
    };
}

std::ostream& operator<<( std::ostream& os, const xsd::XpItem& rhs );

