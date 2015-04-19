#include "MsItemElement.h"
#include "isCppKeyword.h"
#include "camelCase.h"
#include <limits>
#include "end.h"
#include "MsItem.h"
#include "MsitemWeb.h"

namespace xsd
{
    MsItemElement::MsItemElement( const MsItem item )
    :MsItem( item )
    ,myAttributes()
    // ,myCppName( "" )
    ,myMsItemElementKind( MsItemElementKind::unknown )
    ,mySubElements()
    ,myMinOccurs( 1 )
    ,myMaxOccurs( 1 )
    ,myCardinality( MsItemElementCardinality::Unidentified )
    {
        if ( item.getMsItemKind() != MsItemKind::element )
        {
            throw std::runtime_error( "error constructing element" );
        }
        parseAttributes();
        // parseCppName();
        parseReferencedType();
        parseSubElements();
        parseMsElementItemKind();
        parseMinMaxOccurs();
    }
    
    MsItemElement::~MsItemElement() {}
    std::string MsItemElement::getXmlName() const
    {
        return MsItem::getDtDef();
    }
//    std::string MsItemElement::getCppName() const
//    {
//        return myCppName;
//    }
    void MsItemElement::parseAttributes()
    {
        myAttributes.clear();
        myAttributes = MsItemAttribute::findAllAttributes( this );
    }
//    void MsItemElement::parseCppName()
//    {
//        std::string xmlName = MsItem::getDtDef();
//        if ( xmlName.length() == 0 )
//        {
//            std::stringstream ss;
//            ss << "Node" << MsItem::getID();
//            xmlName = ss.str();
//        }
//        std::string name = camelCase( xmlName, true );
//        if ( isCppKeyword( name ) )
//        {
//            name = name + "_";
//        }
//        myCppName = name;
//    }
    void MsItemElement::parseMsElementItemKind()
    {
        myMsItemElementKind = MsItemElementKind::simple;
        if ( mySubElements.size() > 0 )
        {
            myMsItemElementKind = MsItemElementKind::composite;
            return;
        }
//        std::string ref = "";
//        for ( auto p : MsItem::getXpItem()->getProperties() )
//        {
//            
//            if ( p->getLabel() == "type" ||
//                p->getLabel() == "base" ||
//                p->getLabel() == "ref" )
//            {
//                ref = p->getValue();
//                break;
//            }
//            if ( ref.length() > 0 )
//            {
//                MsItemPtr copyOfThis = std::make_shared<MsItem>( *this );
//                MsItemElementSet  tempSet = findSubElements( copyOfThis );
//                if ( tempSet.size() > 0 )
//                {
//                    
//                }
//            }
//        }
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
    
    MsItemElementSet findEquivalentElements( const MsItemElementPtr& pattern )
    {
        MsItemElementSet output;
        auto r = pattern->getRoot();
        findEquivalentElementsRecursively( pattern, r, output );
        return output;
    }
    void findEquivalentElementsRecursively( const MsItemElementPtr& pattern, const MsItemPtr& searchHere, MsItemElementSet& output )
    {
        if ( searchHere->getMsItemKind() == MsItemKind::element )
        {
            if ( searchHere->getDtDef() == pattern->getDtDef() )
            {
                output.push_back( std::make_shared<MsItemElement>( * searchHere ) );
            }
        }
        for ( auto c : searchHere->getChildren() )
        {
            findEquivalentElementsRecursively( pattern, c, output );
        }
    }
    void MsItemElement::parseSubElements()
    {
        MsItemElementPtr input = std::make_shared<MsItemElement>( *this );
        MsItemSet temp = findSubElementsXXX( input );
        mySubElements.clear();
        for ( auto t : temp )
        {
            mySubElements.push_back( std::make_shared<MsItemElement>( *t ) );
        }
    }
    bool doesElementHaveTheLowestIDAmongPeers( const MsItemElementPtr& elementToCheck, const MsItemElementSet& peerElements )
    {
        auto min = findElementWithLowestID( peerElements );
        return elementToCheck->getID() <= (*min)->getID();
    }
    MsItemElementSetIterConst findElementWithLowestID( const MsItemElementSet& elements )
    {
        
        auto eqb = elements.cbegin();
        auto eqe = elements.cend();
        auto eqi = eqb;
        auto min = eqb;
        if ( eqb != eqe )
        {
            for (; eqi != eqe; ++eqi )
            {
                if ( (*eqi)->getID() < (*min)->getID() )
                {
                    min = eqi;
                }
            }
        }
        return min;
    }
    unsigned int MsItemElement::getMinOccurs() const
    {
        return myMinOccurs;
    }
    unsigned int MsItemElement::getMaxOccurs() const
    {
        return myMaxOccurs;
    }
    void MsItemElement::parseMinMaxOccurs()
    {
        for ( auto p : getXpItem()->getProperties() )
        {
            if ( p->getLabel() == "minOccurs" )
            {
                if ( p->getValue() == "unbounded" )
                {
                    myMinOccurs = UINT_MAX;
                }
                else
                {
                    std::stringstream minss( p->getValue() );
                    minss >> myMinOccurs;
                }
            }
            else if ( p->getLabel() == "maxOccurs" )
            {
                if ( p->getValue() == "unbounded" )
                {
                    myMaxOccurs = UINT_MAX;
                }
                else
                {
                    std::stringstream maxss( p->getValue() );
                    maxss >> myMaxOccurs;
                }
            }
        }
        if ( myMinOccurs == 0 )
        {
            if ( myMaxOccurs == 1 )
            {
                myCardinality = MsItemElementCardinality::OptionalSingleOccurrence;
            }
            else if ( myMaxOccurs > 1 && myMaxOccurs < UINT_MAX )
            {
                myCardinality = MsItemElementCardinality::RangeBound;
            }
            else if ( myMaxOccurs == UINT_MAX )
            {
                myCardinality = MsItemElementCardinality::ZeroOrMany;
            }
        }
        if ( myMinOccurs == 1)
        {
            if ( myMaxOccurs == 1 )
            {
                myCardinality = MsItemElementCardinality::RequiredSingleOccurrence;
            }
            else if ( myMaxOccurs > 1 && myMaxOccurs < UINT_MAX )
            {
                myCardinality = MsItemElementCardinality::RangeBound;
            }
            else if ( myMaxOccurs == UINT_MAX )
            {
                myCardinality = MsItemElementCardinality::OneOrMMany;
            }
        }
    }
    MsItemElementCardinality MsItemElement::getCardinality() const
    {
        return myCardinality;
    }
    std::string toString( const MsItemElementCardinality v )
    {
        switch ( v )
        {
            case MsItemElementCardinality::RequiredSingleOccurrence:
                return "RequiredSingleOccurence";
                break;
            case MsItemElementCardinality::OptionalSingleOccurrence:
                return "OptionalSingleOccurrence";
                break;
            case MsItemElementCardinality::OneOrMMany:
                return "OneOrMMany";
                break;
            case MsItemElementCardinality::ZeroOrMany:
                return "ZeroOrMany";
                break;
            case MsItemElementCardinality::RangeBound:
                return "RangeBound";
                break;
            default:
                return "Unidentified";
                break;
        }
    }
    const MsItemElementSet& MsItemElement::getSubElements() const
    {
        return mySubElements;
    }
    MsItemElementSet MsItemElement::getFirstGenerationSubElements() const
    {
        const MsItem* parent = this;
        if ( this->getInheritedMsItem() )
        {
            parent = ( this->getInheritedMsItem() ).get();
        }
        MsItemElementSet output;
        for ( auto e : mySubElements )
        {
            bool isFirstGen = false;
            isFirstGenerationSubElement( e, isFirstGen, parent );
            if ( isFirstGen )
            {
                output.push_back( e );
            }
        }
        return output;
    }
    MsItemElementKind MsItemElement::getMsItemElementKind() const
    {
        return myMsItemElementKind;
    }
    bool MsItemElement::getSubElementsImplemented() const
    {
        for ( auto e : this->getSubElements() )
        {
            if ( ! e->getIsImplemented() )
            {
                return false;
            }
        }
        return true;
    }
    std::string MsItemElement::toString() const
    {
        std::stringstream ss;
        this->toStream( ss );
        return ss.str();
    }
    std::ostream& followAllGroupsAndStream( const MsItemPtr& current, std::ostream& os )
    {
        if ( current->getMsItemKind() == MsItemKind::group )
        {
            // this is a group definition
            if ( current->getChildren().size() > 0 && isGroupDefinition( current ) )
            {
                current->getXpItem()->stream( os, 0 );
            }
            else
            // this is a group reference
            {
                std::string ref = "";
                for ( auto prop : current->getXpItem()->getProperties() )
                {
                    if ( prop->getLabel() == "ref"
                        || prop->getLabel() == "base"
                        || prop->getLabel() == "type" )
                    {
                        ref = prop->getValue();
                    }
                }
                if ( ref.length() > 0 )
                {
                    auto group = findItemByNameAndKind( ref, MsItemKind::group, current );
                    if ( group && group->getMsItemKind() == MsItemKind::group )
                    {
                        if ( isGroupDefinition( group ) )
                        {
                            group->getXpItem()->stream( os, 0 );
                        }
                    }
                }
                
            }
        }
        for ( auto x : current->getChildren() )
        {
            followAllGroupsAndStream( x, os );
        }
        return os;
    }
    std::ostream& MsItemElement::toStream( std::ostream& os ) const
    {
        MsItemElementSet equivs = findEquivalentElements( std::make_shared<MsItemElement>( *this ) );
        os << end(2) << "<!-- ";
        os << " ID = " << this->getID() << " [";
        for ( auto eq = equivs.cbegin(); eq != equivs.cend(); ++eq )
        {
            if ( eq != equivs.cbegin() )
            {
                os << ", ";
            }
            os << (*eq)->getID();
        }
        os << "] ------------------------->" << end();
        os << "<!-- min=" << this->getMinOccurs() << " max=" << this->getMaxOccurs() << " " << ::xsd::toString(this->getCardinality())<< " " << " -->" << end();
        os << "<!-- MsItemElementKind::" << ::xsd::toString( this->getMsItemElementKind() ) << " -->" << end();
        os << "<!-- RecursiveSubElementCount = " << this->getSubElements().size() << " -->" << end();
        os << "<!-- All Sub Elements Are Implemented: " << std::boolalpha << this->getSubElementsImplemented() << " -->" << end();
        auto This = std::make_shared<MsItem>( *this );
        this->getXpItem()->stream( os, 0 );
        followAllGroupsAndStream( This, os );
        if ( this->getInheritedMsItem() )
        {
            auto ThisInheritedMsItem = this->getInheritedMsItem();
            ThisInheritedMsItem->getXpItem()->stream( os, 0 );
            followAllGroupsAndStream( ThisInheritedMsItem, os );
            os << end();
        }
        return os;
    }
    void countChoicesThereinRecursively( const MsItem* item, int& count )
    {
        if ( item->getMsItemKind() == MsItemKind::choice )
        {
            ++count;
        }
        std::string refstr;
        for ( auto p : item->getXpItem()->getProperties() )
        {
            if ( p->getLabel() == "ref" || p->getLabel() == "type" || p->getLabel() == "base" )
            {
                refstr = p->getValue();
            }
        }
        if ( refstr.length() > 0 )
        {
            MsItemPtr ref;
            if ( item->getMsItemKind() == MsItemKind::group )
            {
                ref = findItemByNameAndKind( refstr, MsItemKind::group, item );
            }
            if ( !ref )
            {
                if ( item->getMsItemKind() == MsItemKind::complexType || item->getMsItemKind() == MsItemKind::element )
                {
                    ref = findItemByNameAndKind( refstr, MsItemKind::complexType, item );
                }
            }
            if ( ref )
            {
                countChoicesThereinRecursively( ref.get(), count );
            }
        }
        for ( auto child : item->getChildren() )
        {
            countChoicesThereinRecursively( child.get(), count );
        }
    }
    int MsItemElement::getChoiceCount() const
    {
        int count = 0;
        countChoicesThereinRecursively( this, count );
        return count;
    }
    
    void isFirstGenerationSubElement( const MsItemPtr& item, bool& isFirstGeneration, const MsItem* parent )
    {
        if ( item->getParent()->getID() == parent->getID() )
        {
            isFirstGeneration = true;
            return;
        }
        else
        {
            if ( item->getParent()->getMsItemKind() == MsItemKind::sequence ||
                item->getParent()->getMsItemKind() == MsItemKind::choice ||
                item->getMsItemKind() == MsItemKind::sequence ||
                item->getMsItemKind() == MsItemKind::choice )
            {
                isFirstGenerationSubElement( item->getParent(), isFirstGeneration, parent );
            }
        }
    }
}