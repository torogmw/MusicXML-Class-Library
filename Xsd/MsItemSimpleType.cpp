/* matthew james briggs */

#include "MsItemSimpleType.h"

namespace xsd
{
    /* ctor */
    MsItemSimpleType::MsItemSimpleType( const XpItemPtr& item )
    :MsItem( item )
    ,myMsItemSimpleTypeKind( MsItemSimpleTypeKind::unknown )
    {
        if ( MsItem::getMsItemKind() != MsItemKind::simpleType )
        {
            throw std::runtime_error("failed to construct MsItemSimpleType" );
        }
        parseMsItemSimpleTypeKind();
    }
    
    /* dtor */
    MsItemSimpleType::~MsItemSimpleType() {}
    MsItemSimpleTypeKind MsItemSimpleType::getMsItemSimpleTypeKind() const
    {
        return myMsItemSimpleTypeKind;
    }
    void MsItemSimpleType::parseMsItemSimpleTypeKind()
    {
        if ( parseIsEnumeration() )
        {
            myMsItemSimpleTypeKind = MsItemSimpleTypeKind::enumeration;
        }
    }
    
    bool MsItemSimpleType::parseIsEnumeration() const
    {
        XpItemPtr restrictionBase;
        for ( auto i : this->getXpItem()->getChildren() )
        {
            if ( i->getTag() == "xs:restriction" )
            {
                restrictionBase = i;
                break;
            }
        }
        if ( restrictionBase )
        {
            if ( restrictionBase->hasProperties() )
            {
                if ( restrictionBase->getProperty( 0 )->getLabel() == "base" )
                {
                    if ( restrictionBase->getProperty( 0 )->getValue() == "xs:token" ||
                        restrictionBase->getProperty( 0 )->getValue() == "xs:string" )
                    {
                        if ( restrictionBase->hasChildren() )
                        {
                            XpItemPtr firstChild = restrictionBase->getChild( 0 );
                            if ( firstChild )
                            {
                                if ( firstChild->getTag() == "xs:enumeration" )
                                {
                                    return true;
                                }
                            }
                        }
                    }
                }
            }
        }
        return false;
    }
    std::string MsItemSimpleType::csvHeaders() const
    {
        std::string output = MsItem::csvHeaders();
        output += "getMsItemSimpleTypeKind";
        output += ",";
        return output;
    }
    std::string MsItemSimpleType::csv() const
    {
        std::string output = MsItem::csv();
        output += toString( getMsItemSimpleTypeKind() );
        output += ",";
        return output;
    }
}