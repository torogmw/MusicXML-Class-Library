#include "MsItemElement.h"
#include "isCppKeyword.h"
#include "camelCase.h"
#include <limits>
#include "end.h"

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
        this->getXpItem()->stream( os, 0 );
        if ( this->getInheritedMsItem() )
        {
            this->getInheritedMsItem()->getXpItem()->stream( os, 0 );
            os << end();
        }
        return os;
    }
}