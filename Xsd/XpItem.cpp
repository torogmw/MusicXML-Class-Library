/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "XpItem.h"
#include <sstream>

namespace xsd
{
    /* ctor */
    
    XpItem::XpItem( const std::string& name, const std::string& text, XpItem* ParentXpItem, int index )
    :myTag( name )
    ,myText( text )
    ,myChildItems()
    ,myProperties()
    ,myParentItem( ParentXpItem )
    ,m_index( index )
    {}

    /* dtor */
    XpItem::~XpItem() {}
    
    std::string XpItem::getTag() const
    {
        return myTag;
    }
    
    void XpItem::setTag( const std::string& value )
    {
        myTag = value;
    }
    
    std::string XpItem::text() const
    {
        return myText;
    }
   
    void XpItem::text( const std::string& new_text )
    {
        if( has_children() )
        {
            throw std::runtime_error( "An element cannot contain both text and child elements." );
        }
        myText = new_text;
    }
    
    bool XpItem::has_children() const
    {
        return !myChildItems.empty();
    }
    
    bool XpItem::has_text() const
    {
        return myText.length() > 0;
    }
    
    bool XpItem::has_attributes() const
    {
        return !myProperties.empty();
    }
  
    void XpItem::add_child( const XpItemPtr& e )
    {
        if ( has_text() )
        {
            throw std::runtime_error( "An element cannot contain both text and child elements." );
        }
        e->setParent( this );
        myChildItems.push_back( e );
    }
    
    void XpItem::remove_child( int index )
    {
        auto it = myChildItems.begin() + index;
        myChildItems.erase( it );
    }
    
    XpItemPtr XpItem::get_child( int index )
    {
        auto it = myChildItems.begin() + index;
        return *it;
    }
    int XpItem::count_children() const
    {
        return (int)myChildItems.size();
    }
    
    void XpItem::add_attribute( const XpPropertyPtr& a )
    {
        a->setParentXpItem( this );
        myProperties.push_back( a );
    }
    
    void XpItem::remove_attribute( int index )
    {
        auto it = myProperties.begin() + index;
        myProperties.erase( it );
    }
    
    XpPropertyPtr XpItem::get_attribute( int index )
    {
        auto it = myProperties.begin() + index;
        return *it;
    }
    
    int XpItem::count_attributes() const
    {
        return (int)myProperties.size();
    }
    
    XpItem* XpItem::getParent() const
    {
        return myParentItem;
    }
    
    std::ostream& XpItem::stream( std::ostream& os, int indent ) const
    {
        std::stringstream tabs;
        for (int i = 0; i < indent; ++i)
        {
            tabs << '\t';
        }
        
        os << tabs.str() << "<" << myTag;
        for( const XpPropertyPtr& a : myProperties )
        {
            os << " " << *a;
        }
        if ( has_text() )
        {
            os << ">" << myText;
            os << "</" << myTag << ">";
            os << std::endl;
        }
        else if ( has_children() )
        {
            os << ">" << std::endl;
            ++indent;
            for ( const XpItemPtr& e : myChildItems )
            {
                e->stream( os, indent );
            }
            os << tabs.str() << "</";
            os << myTag << ">" << std::endl;
        }
        else
        {
            os << "/>" << std::endl;
        }
        return os;
    }
    
    std::string XpItem::str() const
    {
        std::stringstream ss;
        stream( ss, 0 );
        return ss.str();
    }
    
    void XpItem::setParent( XpItem* parent )
    {
        myParentItem = parent;
    }
    
    int XpItem::getIndex() const
    {
        return m_index;
    }
    void XpItem::setIndex(int index)
    {
        m_index = index;
    }
}

std::ostream& operator<<( std::ostream& os, const xsd::XpItem& rhs )
{
    return rhs.stream( os, 0 );
}

