/* matthew james briggs */

#include "MsItemAttribute.h"
#include "camelCase.h"
#include "isCppKeyword.h"

namespace xsd
{
    MsItemAttribute::MsItemAttribute( const MsItem& item )
    :MsItem( item )
    ,myMsItemSimpleType( nullptr )
    ,myCppName( "" )
    {
        if ( item.getMsItemKind() != MsItemKind::attribute )
        {
            throw std::runtime_error( "error parsing MsItemAttribute" );
        }
        parseMsItemSimpleType();
    }
    
    MsItemSimpleTypePtr MsItemAttribute::getMsItemSimpleType() const
    {
        return myMsItemSimpleType;
    }
    
    void MsItemAttribute::parseMsItemSimpleType()
    {
        for ( auto p : MsItem::getXpItem()->getProperties() )
        {
            std::string ref = p->getValue();
            MsItemPtr top = std::make_shared<MsItem>( *this );
            MsItemPtr current = std::make_shared<MsItem>( *this );
            if ( p->getLabel() == "ref" ||
                p->getLabel() == "type" ||
                p->getLabel() == "base" )
            {
                while ( current->getParent() )
                {
                    top = current->getParent();
                    current = current->getParent();
                }
                for ( auto child : top->getChildren() )
                {
                    if ( child )
                    {
                        if ( child->getMsItemKind() == MsItemKind::simpleType )
                        {
                            if ( child->getDtDef() == ref )
                            {
                                myMsItemSimpleType = std::make_shared<MsItemSimpleType>( *child );
                                return;
                            }
                        }
                    }
                }
            }
            
        }
    }
    void MsItemAttribute::parseCppName()
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
    
    std::string MsItemAttribute::getXmlName() const
    {
        return getDtDef();
    }
    std::string MsItemAttribute::getCppName() const
    {
        return myCppName;
    }
    std::string MsItemAttribute::csv() const
    {
        std::stringstream ss;
        ss << MsItem::csv();
        ss << myMsItemSimpleType->getDtDef() << ",";
        ss << myMsItemSimpleType->getCppName() << ",";
        ss << toString(myMsItemSimpleType->getMsItemSimpleTypeKind()) << ",";
        ss << myMsItemSimpleType->getID() << ",";
        return ss.str();
    }
    std::string MsItemAttribute::csvHeaders() const
    {
        std::stringstream ss;
        ss << MsItem::csvHeaders();
        ss << "AttributeXmlName,";
        ss << "AttributeCppName,";
        ss << "AttributeValueType,";
        ss << "AttributeValueTypeID,";
        return ss.str();
    }
    
    void findAllAttributesRecursively( const MsItemPtr& item, MsItemAttributeSet& output )
    {
        if ( item )
        {
            if ( item->getXpItem()->getTag() == "xs:attribute" )
            {
                output.push_back( std::make_shared<MsItemAttribute>( *item ) );
            }
            else
            {
                /* check for referenced types */
                for ( auto p : item->getXpItem()->getProperties() )
                {
                    MsItemKind kind = item->getMsItemKind();
                    if ( p->getLabel() == "ref" ||
                        p->getLabel() == "type" ||
                        p->getLabel() == "base" )
                    {
                        std::string ref = p->getValue();
                    }
                }
                /* parse all children */
            }
        }
    }
}