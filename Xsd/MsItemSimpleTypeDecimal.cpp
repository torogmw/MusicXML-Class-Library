/* matthew james briggs */

#include "MsItemSimpleTypeDecimal.h"

namespace xsd
{
    /* ctor */
    MsItemSimpleTypeDecimal::MsItemSimpleTypeDecimal( const MsItemSimpleType& item )
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
        if ( MsItemSimpleType::getMsItemSimpleTypeKind() != MsItemSimpleTypeKind::decimal )
        {
            throw std::runtime_error( "error constructing MsItemSimpleTypeDecimal" );
        }
        parseMinMax();
    }
    
    /* dtor */
    MsItemSimpleTypeDecimal::~MsItemSimpleTypeDecimal() {}
    
    void MsItemSimpleTypeDecimal::parseMinMax()
    {
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
    
    MsItemSimpleTypeDecimalSet MsItemSimpleTypeDecimal::construct( const xsd::MsItemWeb& web )
    {
        MsItemSimpleTypeDecimalSet output;
        for ( const MsItemPtr i : web.getMsItemSet() )
        {
            if ( (i)->getMsItemKind() == MsItemKind::simpleType )
            {
                if ( i->getIsFirstClassConcept() )
                {
                    MsItemSimpleType simple( *i );
                    if ( simple.getMsItemSimpleTypeKind() == MsItemSimpleTypeKind::decimal )
                    {
                        MsItemSimpleTypeDecimal e( simple );
                        output.push_back( std::make_shared<MsItemSimpleTypeDecimal>( e ) );
                    }
                }
            }
        }
        return output;
    }
    
    std::string MsItemSimpleTypeDecimal::csvHeaders() const
    {
        std::string output = MsItemSimpleType::csvHeaders();
        output += "HasMinInclusive,HasMaxInclusive,HasMinExclusive,HasMaxExclusive,";
        output += "MinInclusive,MaxInclusive,MinExclusive,MaxExclusive";
        return output;
    }
    
    std::string MsItemSimpleTypeDecimal::csv() const
    {
        std::stringstream ss;
        ss << MsItemSimpleType::csv();
        ss << std::boolalpha << myHasMinInclusive << ",";
        ss << std::boolalpha << myHasMaxInclusive << ",";
        ss << std::boolalpha << myHasMinExclusive << ",";
        ss << std::boolalpha << myHasMaxExclusive << ",";
        ss << myMinInclusive << ",";
        ss << myMaxInclusive << ",";
        ss << myMinExclusive << ",";
        ss << myMaxExclusive << ",";
        return ss.str();
    }
}