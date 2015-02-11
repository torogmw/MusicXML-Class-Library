/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "XsdItem.h"
#include <sstream>

namespace xparse
{
    /* ctor */
    
    XsdItem::XsdItem( const std::string& name, const std::string& text, XsdItem* ParentXsdItem, int index )
    :m_name( name )
    ,m_text( text )
    ,m_elem()
    ,m_attr()
    ,m_parent( ParentXsdItem )
    ,m_index( index )
    {}

    /* dtor */
    XsdItem::~XsdItem() {}
    
    std::string XsdItem::getTag() const
    {
        return m_name;
    }
    
    void XsdItem::setTag( const std::string& value )
    {
        m_name = value;
    }
    
    std::string XsdItem::text() const
    {
        return m_text;
    }
   
    void XsdItem::text( const std::string& new_text )
    {
        if( has_children() )
        {
            throw std::runtime_error( "An element cannot contain both text and child elements." );
        }
        m_text = new_text;
    }
    
    bool XsdItem::has_children() const
    {
        return !m_elem.empty();
    }
    
    bool XsdItem::has_text() const
    {
        return m_text.length() > 0;
    }
    
    bool XsdItem::has_attributes() const
    {
        return !m_attr.empty();
    }
  
    void XsdItem::add_child( const xparse::XsdItemPtr& e )
    {
        if ( has_text() )
        {
            throw std::runtime_error( "An element cannot contain both text and child elements." );
        }
        e->setParent( this );
        m_elem.push_back( e );
    }
    
    void XsdItem::remove_child( int index )
    {
        auto it = m_elem.begin() + index;
        m_elem.erase( it );
    }
    
    XsdItemPtr XsdItem::get_child( int index )
    {
        auto it = m_elem.begin() + index;
        return *it;
    }
    int XsdItem::count_children() const
    {
        return (int)m_elem.size();
    }
    
    void XsdItem::add_attribute( const XsdPropertyPtr& a )
    {
        a->setParentXsdItem( this );
        m_attr.push_back( a );
    }
    
    void XsdItem::remove_attribute( int index )
    {
        auto it = m_attr.begin() + index;
        m_attr.erase( it );
    }
    
    XsdPropertyPtr XsdItem::get_attribute( int index )
    {
        auto it = m_attr.begin() + index;
        return *it;
    }
    
    int XsdItem::count_attributes() const
    {
        return (int)m_attr.size();
    }
    
    XsdItem* XsdItem::getParent() const
    {
        return m_parent;
    }
    
    std::ostream& XsdItem::stream( std::ostream& os, int indent ) const
    {
        std::stringstream tabs;
        for (int i = 0; i < indent; ++i)
        {
            tabs << '\t';
        }
        
        os << tabs.str() << "<" << m_name;
        for( const XsdPropertyPtr& a : m_attr )
        {
            os << " " << *a;
        }
        if ( has_text() )
        {
            os << ">" << m_text;
            os << "</" << m_name << ">";
            os << std::endl;
        }
        else if ( has_children() )
        {
            os << ">" << std::endl;
            ++indent;
            for ( const XsdItemPtr& e : m_elem )
            {
                e->stream( os, indent );
            }
            os << tabs.str() << "</";
            os << m_name << ">" << std::endl;
        }
        else
        {
            os << "/>" << std::endl;
        }
        return os;
    }
    
    std::string XsdItem::str() const
    {
        std::stringstream ss;
        stream( ss, 0 );
        return ss.str();
    }
    
    void XsdItem::setParent( xparse::XsdItem* parent )
    {
        m_parent = parent;
    }
    
    int XsdItem::getIndex() const
    {
        return m_index;
    }
    void XsdItem::setIndex(int index)
    {
        m_index = index;
    }
}

std::ostream& operator<<( std::ostream& os, const xparse::XsdItem& rhs )
{
    return rhs.stream( os, 0 );
}

