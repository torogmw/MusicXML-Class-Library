/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

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
        XpItem( const std::string& tag, const std::string& text="", XpItem* ParentXpItem = nullptr, int index = 0 );
        virtual ~XpItem();
        
        std::string getTag() const;
        void setTag( const std::string& value );
        
        std::string text() const;
        void text( const std::string& new_text );
        
        bool has_children() const;
        bool has_text() const;
        bool has_attributes() const;
        
        void add_child( const XpItemPtr& e );
        void remove_child( int index );
        XpItemPtr get_child( int index );
        int count_children() const;
        
        void add_attribute( const XpPropertyPtr& a );
        void remove_attribute( int index );
        XpPropertyPtr get_attribute( int index );
        int count_attributes() const;
        
        std::ostream& stream( std::ostream& os, int indent ) const;
        std::string str() const;
        
        void setParent ( XpItem* parent );
        XpItem* getParent() const;
        
        int getIndex() const;
        void setIndex( int index );
        
    private:
        std::string myTag;
        std::string myText;
        XpItemSet myChildItems;
        XpPropertySet myProperties;
        XpItem* myParentItem;
        int m_index;
    };
}

std::ostream& operator<<( std::ostream& os, const xsd::XpItem& rhs );

