/* matthew james briggs */

#include "MsItemSimpleType.h"
#include "camelCase.h"
#include "isCppKeyword.h"

namespace xsd
{
    /* ctor */
    MsItemSimpleType::MsItemSimpleType( const MsItem& item )
    :MsItem( item )
    ,myCppName( "" )
    ,myMsItemSimpleTypeKind( MsItemSimpleTypeKind::unknown )
    {
        if ( MsItem::getMsItemKind() != MsItemKind::simpleType )
        {
            throw std::runtime_error("failed to construct MsItemSimpleType" );
        }
        parseMsItemSimpleTypeKind();
        parseCppName();
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
            return;
        }
        else if ( parseIsInteger() )
        {
            myMsItemSimpleTypeKind = MsItemSimpleTypeKind::integer;
            return;
        }
        else if ( parseIsDecimal() )
        {
            myMsItemSimpleTypeKind = MsItemSimpleTypeKind::decimal;
            return;
        }
        else
        {
            myMsItemSimpleTypeKind = parseSpecialCases();
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
    bool MsItemSimpleType::parseIsInteger() const
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
                    if ( restrictionBase->getProperty( 0 )->getValue() == "xs:positiveInteger" ||
                        restrictionBase->getProperty( 0 )->getValue() == "xs:integer" ||
                        restrictionBase->getProperty( 0 )->getValue() == "xs:nonNegativeInteger" )
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    
    MsItemSimpleTypeKind MsItemSimpleType::parseSpecialCases() const
    {
        const std::string dtDef = getDtDef();
        if ( dtDef == "mode" ||
            dtDef == "line-width-type" ||
            dtDef == "distance-type" )
        {
            return MsItemSimpleTypeKind::enumOrString;
        }
        else if ( dtDef == "color" )
        {
            return MsItemSimpleTypeKind::color;
        }
        else if ( dtDef == "comma-separated-text" )
        {
            return MsItemSimpleTypeKind::commaSeparatedText;
        }
        else if ( dtDef == "font-size" ||
                 dtDef == "yes-no-number" )
        {
            return MsItemSimpleTypeKind::enumOrDecimal;
        }
        else if ( dtDef == "positive-integer-or-empty" )
        {
            return MsItemSimpleTypeKind::positiveIntegerOrEmpty;
        }
        else if ( dtDef == "number-or-normal" )
        {
            return MsItemSimpleTypeKind::numberOrNormal;
        }
        else if ( dtDef == "ending-number" ||
                 dtDef == "time-only" )
        {
            return MsItemSimpleTypeKind::commaSeparatedIntegerList;
        }
        else if ( dtDef == "yyyy-mm-dd" )
        {
            return MsItemSimpleTypeKind::date;
        }
        else if (
                 dtDef == "xlink:href" ||
                 dtDef == "xlink:role" ||
                 dtDef == "xlink:title" ||
                 dtDef == "xml:lang" ||
                 dtDef == "xs:anyURI" ||
                 dtDef == "xs:ID" ||
                 dtDef == "xs:IDREF" ||
                 dtDef == "xs:NMTOKEN" ||
                 dtDef == "xs:string" ||
                 dtDef == "xs:token" )
        {
            return MsItemSimpleTypeKind::string;
        }
        else if( dtDef == "xlink:actuate" ||
                dtDef == "xlink:show" ||
                dtDef == "xlink:type" ||
                dtDef == "xml:space" )
        {
            return MsItemSimpleTypeKind::enumeration;
        }
        else if ( dtDef == "xs:nonNegativeInteger" ||
                 dtDef == "xs:positiveInteger" ||
                 dtDef == "xs:integer" )
        {
            return MsItemSimpleTypeKind::integer;
        }
        
    
    
        return MsItemSimpleTypeKind::unknown;
    }
    bool MsItemSimpleType::parseIsDecimal() const
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
                    if ( restrictionBase->getProperty( 0 )->getValue() == "xs:decimal" ||
                        restrictionBase->getProperty( 0 )->getValue() == "divisions" )
                    {
                        return true;
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
    
    void MsItemSimpleType::parseCppName()
    {
        std::string xmlName = MsItem::getDtDef();
        if ( xmlName.length() == 0 )
        {
            std::stringstream ss;
            ss << "Node" << MsItem::getID();
            xmlName = ss.str();
        }
        std::string name = camelCase( xmlName, true );
        if ( isCppKeyword( name ) )
        {
            name = name + "_";
        }
        myCppName = name;
    }
    std::string MsItemSimpleType::getCppName() const
    {
        return myCppName;
    }
}