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
        parseCppName();
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
    void MsItemAttribute::findItemRecursively( const std::string& ref,
                                              MsItemPtr& output,
                                              const MsItem* cur,
                                              bool& found )
    {
        if ( ! found )
        {
            if ( cur->getDtDef() == ref &&
                ( cur->getMsItemKind() == MsItemKind::attribute ||
                 cur->getMsItemKind() == MsItemKind::attributeGroup ||
                 cur->getMsItemKind() == MsItemKind::choice ||
                 cur->getMsItemKind() == MsItemKind::complexContent ||
                 cur->getMsItemKind() == MsItemKind::complexType ||
                 //cur->getMsItemKind() == MsItemKind::element ||
                 cur->getMsItemKind() == MsItemKind::extension ||
                 cur->getMsItemKind() == MsItemKind::group ||
                 cur->getMsItemKind() == MsItemKind::import ||
                 cur->getMsItemKind() == MsItemKind::pattern ||
                 cur->getMsItemKind() == MsItemKind::restriction ||
                 cur->getMsItemKind() == MsItemKind::sequence ||
                 cur->getMsItemKind() == MsItemKind::simpleContent ||
                 cur->getMsItemKind() == MsItemKind::simpleType ||
                 cur->getMsItemKind() == MsItemKind::union_ ))
            {
                output = std::make_shared<MsItem>( *cur );
                found = true;
                return;
            }
            else
            {
                for ( auto i : cur->getChildren() )
                {
//                    if ( i->getDtDef() == "formatted-text" && ref == "formatted-text" )
//                    {
//                        int beaj = 0;
//                    }
                    findItemRecursively( ref, output, i.get(), found );
                    if ( found )
                    {
                        return;
                    }
                }
            }
        }

    }
    MsItemPtr MsItemAttribute::findItem( const MsItemKind kind, const std::string& ref, const MsItem* top )
    {
        MsItemPtr output;
        bool found = false;
        findItemRecursively( ref, output, top, found);
        return output;
    }
    
    void MsItemAttribute::findAllAttributesRecursively( const MsItem* item, MsItemAttributeSet& output )
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
                MsItemKind kind = item->getMsItemKind();
                std::string ref;
                bool isRef = false;
                for ( auto p : item->getXpItem()->getProperties() )
                {
                    if ( p->getLabel() == "ref" ||
                         p->getLabel() == "type" ||
                         p->getLabel() == "base" )
                    {
                        ref = p->getValue();
                        isRef = true;
                        break;
                    }
                }
                if ( isRef )
                {
                    MsItemPtr top = std::make_shared<MsItem>( *item );
                    MsItemPtr current = std::make_shared<MsItem>( *item );
                    while ( current->getParent() )
                    {
                        top = current->getParent();
                        current = current->getParent();
                    }
                    MsItemPtr refptr = findItem( kind, ref, top.get() );
                    findAllAttributesRecursively( refptr.get(), output );
                }
                
                
                /* parse all children */
                for ( auto x : item->getChildren() )
                {
                    findAllAttributesRecursively( x.get(), output );
                }
            }
        }
    }
    
    MsItemAttributeSet MsItemAttribute::findAllAttributes( const MsItem* item )
    {
        MsItemAttributeSet output;
        findAllAttributesRecursively( item, output );
        return output;
    }
}