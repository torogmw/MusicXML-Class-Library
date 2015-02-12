/* matthew james briggs */

#include "MsItem.h"

namespace xsd
{
    /* ctor */
    MsItem::MsItem( const XpItemPtr& xpItemPtr )
    :myXpItemPtr( xpItemPtr )
    ,myDtDef( "" )
    ,myMsItemKind( MsItemKind::unknown )
    ,myIsImplemented( false )
    {
        parseDtDef();
        parseMsItemKind();
    }
    
    /* dtor */
    MsItem::~MsItem() {}
    
    std::string MsItem::getMsItemKindString() const
    {
        if ( myXpItemPtr )
        {
            return myXpItemPtr->getTag();
        }
        return "";
    }
    int MsItem::getID() const
    {
        if ( myXpItemPtr )
        {
            return myXpItemPtr->getID();
        }
        return -1;
    }
    void MsItem::parseDtDef()
    {
        if ( myDtDef.length() > 0 )
        {
            myDtDef = "";
        }
        if ( myXpItemPtr->hasProperties() )
        {
            for ( auto prop : myXpItemPtr->getProperties() )
            {
                if ( prop->getLabel() == "name" )
                {
                    myDtDef = prop->getValue();
                    return;
                }
            }
        }
    }
    void MsItem::parseMsItemKind()
    {
        std::string tag = myXpItemPtr->getTag();
        if ( tag == "xs:annotation" )
        {
            myMsItemKind = MsItemKind::annotation;
        }
        else if ( tag == "xs:documentation" )
        {
            myMsItemKind = MsItemKind::documentation;
        }
        else if ( tag == "xs:enumeration" )
        {
            myMsItemKind = MsItemKind::enumeration;
        }
        else if ( tag == "xs:element" )
        {
            myMsItemKind = MsItemKind::element;
        }
        else if ( tag == "xs:attribute" )
        {
            myMsItemKind = MsItemKind::attribute;
        }
        else if ( tag == "xs:attributeGroup" )
        {
            myMsItemKind = MsItemKind::attributeGroup;
        }
        else if ( tag == "xs:complexType" )
        {
            myMsItemKind = MsItemKind::complexType;
        }
        else if ( tag == "xs:simpleType" )
        {
            myMsItemKind = MsItemKind::simpleType;
        }
        else if ( tag == "xs:restriction" )
        {
            myMsItemKind = MsItemKind::restriction;
        }
        else if ( tag == "xs:sequence" )
        {
            myMsItemKind = MsItemKind::sequence;
        }
        else if ( tag == "xs:group" )
        {
            myMsItemKind = MsItemKind::group;
        }
        else if ( tag == "xs:extension" )
        {
            myMsItemKind = MsItemKind::extension;
        }
        else if ( tag == "xs:simpleContent" )
        {
            myMsItemKind = MsItemKind::simpleContent;
        }
        else if ( tag == "xs:choice" )
        {
            myMsItemKind = MsItemKind::choice;
        }
        else if ( tag == "xs:minInclusive" )
        {
            myMsItemKind = MsItemKind::minInclusive;
        }
        else if ( tag == "xs:maxInclusive" )
        {
            myMsItemKind = MsItemKind::maxInclusive;
        }
        else if ( tag == "xs:pattern" )
        {
            myMsItemKind = MsItemKind::pattern;
        }
        else if ( tag == "xs:complexContent" )
        {
            myMsItemKind = MsItemKind::complexContent;
        }
        else if ( tag == "xs:union" )
        {
            myMsItemKind = MsItemKind::union_;
        }
        else if ( tag == "xs:import" )
        {
            myMsItemKind = MsItemKind::import;
        }
        else if ( tag == "xs:minExclusive" )
        {
            myMsItemKind = MsItemKind::minExclusive;
        }
        else if ( tag == "xs:schema" )
        {
            myMsItemKind = MsItemKind::schema;
        }
    }
    
    void MsItem::setIsImplemented( bool isImplemented )
    {
        myIsImplemented = isImplemented;
    }
    bool MsItem::getIsImplemented() const
    {
        return myIsImplemented;
    }
    
    
    bool operator<( const MsItem& lhs, const MsItem& rhs )
    {
        return lhs.getID() < rhs.getID();
    }
    bool operator>( const MsItem& lhs, const MsItem& rhs )
    {
        return ( operator<( rhs, lhs ) );
    }
    bool operator<=( const MsItem& lhs, const MsItem& rhs )
    {
        return operator<( lhs, rhs) || operator==( lhs, rhs );
    }
    bool operator>=( const MsItem& lhs, const MsItem& rhs )
    {
        return operator<( rhs, lhs) || operator==( lhs, rhs );
    }
    bool operator==( const MsItem& lhs, const MsItem& rhs )
    {
        return lhs.getID() == rhs.getID();
    }
    bool operator!=( const MsItem& lhs, const MsItem& rhs )
    {
        return ! operator==( lhs, rhs );
    }
    
    bool operator<( const MsItemPtr& lhs, const MsItemPtr& rhs )
    {
        if ( ! lhs )
        {
            return true;
        }
        else if ( ! rhs )
        {
            return false;
        }
        return lhs->getID() < rhs->getID();
    }
    bool operator>( const MsItemPtr& lhs, const MsItemPtr& rhs )
    {
        return ( operator<( rhs, lhs ) );
    }
    bool operator<=( const MsItemPtr& lhs, const MsItemPtr& rhs )
    {
        return operator<( lhs, rhs) || operator==( lhs, rhs );
    }
    bool operator>=( const MsItemPtr& lhs, const MsItemPtr& rhs )
    {
        return operator<( rhs, lhs) || operator==( lhs, rhs );
    }
    bool operator==( const MsItemPtr& lhs, const MsItemPtr& rhs )
    {
        if ( ! lhs )
        {
            return false;
        }
        else if ( ! rhs )
        {
            return false;
        }
        return lhs->getID() == rhs->getID();
    }
    bool operator!=( const MsItemPtr& lhs, const MsItemPtr& rhs )
    {
        return ! operator==( lhs, rhs );
    }
}