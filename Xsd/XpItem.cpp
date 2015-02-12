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
    ,myID( index )
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
    
    std::string XpItem::getText() const
    {
        return myText;
    }
   
    void XpItem::setText( const std::string& new_text )
    {
        if( hasChildren() )
        {
            throw std::runtime_error( "An item cannot contain both text and child items." );
        }
        myText = new_text;
    }
    
    bool XpItem::hasChildren() const
    {
        return !myChildItems.empty();
    }
    
    bool XpItem::hasText() const
    {
        return myText.length() > 0;
    }
    
    bool XpItem::hasProperties() const
    {
        return !myProperties.empty();
    }
  
    void XpItem::addChild( const XpItemPtr& i )
    {
        if ( hasText() )
        {
            throw std::runtime_error( "An item cannot contain both text and child items." );
        }
        i->setParent( this );
        myChildItems.push_back( i );
    }
    
    void XpItem::removeChild( int index )
    {
        auto it = myChildItems.begin() + index;
        myChildItems.erase( it );
    }
    
    XpItemPtr XpItem::getChild( int index )
    {
        auto it = myChildItems.begin() + index;
        return *it;
    }
    int XpItem::countChildren() const
    {
        return (int)myChildItems.size();
    }
    
    void XpItem::addProperty( const XpPropertyPtr& a )
    {
        a->setParentXpItem( this );
        myProperties.push_back( a );
    }
    
    void XpItem::removeProperty( int index )
    {
        auto it = myProperties.begin() + index;
        myProperties.erase( it );
    }
    
    XpPropertyPtr XpItem::getProperty( int index )
    {
        auto it = myProperties.begin() + index;
        return *it;
    }
    
    int XpItem::countProperties() const
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
        if ( hasText() )
        {
            os << ">" << myText;
            os << "</" << myTag << ">";
            os << std::endl;
        }
        else if ( hasChildren() )
        {
            os << ">" << std::endl;
            ++indent;
            for ( const XpItemPtr& i : myChildItems )
            {
                i->stream( os, indent );
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
    
    int XpItem::getID() const
    {
        return myID;
    }
    void XpItem::setID(int index)
    {
        myID = index;
    }
    const XpPropertySet& XpItem::getProperties() const
    {
        return myProperties;
    }
    const XpItemSet& XpItem::getChildren() const
    {
        return myChildItems;
    }
}

std::ostream& operator<<( std::ostream& os, const xsd::XpItem& rhs )
{
    return rhs.stream( os, 0 );
}

