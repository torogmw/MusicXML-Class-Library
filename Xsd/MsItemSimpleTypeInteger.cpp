/* matthew james briggs */

#include "MsItemSimpleTypeInteger.h"

namespace xsd
{
    /* ctor */
    MsItemSimpleTypeInteger::MsItemSimpleTypeInteger( const MsItemSimpleType& item )
    :MsItemSimpleType( item )
    ,myHasMinInclusive( false )
    ,myHasMaxInclusive( false )
    ,myHasMinExclusive( false )
    ,myHasMaxExclusive( false )
    ,myMinInclusive( 0 )
    ,myMaxInclusive( 0 )
    ,myMinExclusive( 0 )
    ,myMaxExclusive( 0 )
    {
        if ( MsItemSimpleType::getMsItemSimpleTypeKind() != MsItemSimpleTypeKind::integer )
        {
            throw std::runtime_error( "error constructing MsItemSimpleTypeInteger" );
        }
        parseMinMax();
    }
    
    /* dtor */
    MsItemSimpleTypeInteger::~MsItemSimpleTypeInteger() {}
    
    void MsItemSimpleTypeInteger::parseMinMax()
    {
        if ( getDtDef() == "fifths" )
        {
            int breakme = 0;
        }
        for ( auto child : MsItemSimpleType::getXpItem()->getChildren() )
        {
            if ( child->getTag() == "xs:restriction" )
            {
                for ( auto  x : child->getChildren() )
                {
                    if ( x->getTag() == "xs:minInclusive" )
                    {
                        myHasMinInclusive = true;
                        std::stringstream ss;
                        for ( auto p : x->getProperties() )
                        {
                            if ( p->getLabel() == "value" )
                            {
                                std::stringstream ss( p->getValue() );
                                ss >> myMinInclusive;
                            }
                        }
                    }
                    else if ( x->getTag() == "xs:maxInclusive" )
                    {
                        myHasMaxInclusive = true;
                        std::stringstream ss;
                        for ( auto p : x->getProperties() )
                        {
                            if ( p->getLabel() == "value" )
                            {
                                std::stringstream ss( p->getValue() );
                                ss >> myMaxInclusive;
                            }
                        }
                    }
                    else if ( x->getTag() == "xs:minExclusive" )
                    {
                        myHasMinExclusive = true;
                        std::stringstream ss;
                        for ( auto p : x->getProperties() )
                        {
                            if ( p->getLabel() == "value" )
                            {
                                std::stringstream ss( p->getValue() );
                                ss >> myMinExclusive;
                            }
                        }
                    }
                    else if ( x->getTag() == "xs:maxExclusive" )
                    {
                        myHasMaxExclusive = true;
                        std::stringstream ss;
                        for ( auto p : x->getProperties() )
                        {
                            if ( p->getLabel() == "value" )
                            {
                                std::stringstream ss( p->getValue() );
                                ss >> myMaxExclusive;
                            }
                        }
                    }
                }
            }
        }
    }
    
    MsItemSimpleTypeIntegerSet MsItemSimpleTypeInteger::construct( const xsd::MsItemWeb& web )
    {
        MsItemSimpleTypeIntegerSet output;
        for ( const MsItemPtr i : web.getMsItemSet() )
        {
            if ( (i)->getMsItemKind() == MsItemKind::simpleType )
            {
                if ( i->getIsFirstClassConcept() )
                {
                    MsItemSimpleType simple( *i );
                    if ( simple.getMsItemSimpleTypeKind() == MsItemSimpleTypeKind::integer )
                    {
                        MsItemSimpleTypeInteger e( simple );
                        output.push_back( std::make_shared<MsItemSimpleTypeInteger>( e ) );
                    }
                }
            }
        }
        return output;
    }
    
    std::string MsItemSimpleTypeInteger::csvHeaders() const
    {
        std::string output = MsItemSimpleType::csvHeaders();
        output += "HasMinInclusive,HasMaxInclusive,";
        output += "Min,Max,";
        return output;
    }
    
    std::string MsItemSimpleTypeInteger::csv() const
    {
        std::stringstream ss;
        ss << MsItemSimpleType::csv();
        ss << std::boolalpha << myHasMinInclusive << ",";
        ss << std::boolalpha << myHasMaxInclusive << ",";
        ss << myMinInclusive << ",";
        ss << myMaxInclusive << ",";
        return ss.str();
    }
}