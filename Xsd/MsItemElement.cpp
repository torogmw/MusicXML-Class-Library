#include "MsItemElement.h"
#include "isCppKeyword.h"
#include "camelCase.h"

namespace xsd
{
    MsItemElement::MsItemElement( const MsItem item )
    :MsItem( item )
    ,myAttributes()
    ,myCppName( "" )
    ,myMsItemElementKind( MsItemElementKind::unknown )
    {
        if ( item.getMsItemKind() != MsItemKind::element )
        {
            throw std::runtime_error( "error constructing element" );
        }
        parseAttributes();
        parseCppName();
        parseMsElementItemKind();
        parseReferencedType();
    }
    
    MsItemElement::~MsItemElement() {}
    std::string MsItemElement::getXmlName() const
    {
        return MsItem::getDtDef();
    }
    std::string MsItemElement::getCppName() const
    {
        return myCppName;
    }
    void MsItemElement::parseAttributes()
    {
        myAttributes.clear();
        myAttributes = MsItemAttribute::findAllAttributes( this );
    }
    void MsItemElement::parseCppName()
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
    void MsItemElement::parseMsElementItemKind()
    {
        myMsItemElementKind = MsItemElementKind::unknown;
        std::string ref = "";
        for ( auto p : MsItem::getXpItem()->getProperties() )
        {
            if ( p->getLabel() == "type" ||
                p->getLabel() == "base" ||
                p->getLabel() == "ref" )
            {
                ref = p->getValue();
            }
            break;
            if ( ref == "empty" )
            {
                myMsItemElementKind = MsItemElementKind::empty;
                return;
            }
        }
    }
    const MsItemAttributeSet& MsItemElement::getAttributes() const
    {
        return myAttributes;
    }
    void MsItemElement::parseReferencedType()
    {
        std::string ref;
        for ( auto p : MsItem::getXpItem()->getProperties() )
        {
            if ( p->getLabel() == "type" ||
                p->getLabel() == "base" ||
                p->getLabel() == "ref" )
            {
                ref = p->getValue();
                break;
            }
        }
        if ( ref == "" )
        {
            myReferencedItem = nullptr;
            return;
        }
        MsItemPtr top = std::make_shared<MsItem>( *this );
        MsItemPtr current = std::make_shared<MsItem>( *this );
        while ( current->getParent() )
        {
            top = current->getParent();
            current = current->getParent();
        }
        myReferencedItem = MsItemAttribute::findItem( MsItemKind::complexType, ref, top.get() );
    }
}