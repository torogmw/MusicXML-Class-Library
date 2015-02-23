/* matthew james briggs */

#include "MsItemSimpleTypeEnum.h"
#include "MsItemKind.h"

namespace xsd
{
    /* ctor */
    MsItemSimpleTypeEnum::MsItemSimpleTypeEnum( const MsItemSimpleTypePtr& value )
    :MsItemSimpleType( *value )
    {
        if ( value->getMsItemSimpleTypeKind() != MsItemSimpleTypeKind::enumeration )
        {
            throw std::runtime_error( "error constructing MsItemSimpleTypeEnum" );
        }
        parseEnumValues();
    }
    
    const MsItemEnumValueSet& MsItemSimpleTypeEnum::getEnumValues() const
    {
        return myEnumValues;
    }
    
    /* dtor */
    MsItemSimpleTypeEnum::~MsItemSimpleTypeEnum() {}
    
    void MsItemSimpleTypeEnum::parseEnumValues()
    {
        myEnumValues.clear();
        for ( auto a : MsItemSimpleType::getXpItem()->getChildren() )
        {
            if ( a->getTag() == "xs:restriction" )
            {
                for ( auto b : a->getChildren() )
                {
                    if ( b->getTag() == "xs:enumeration" )
                    {
                        MsItemEnumValuePtr newval = std::make_shared<MsItemEnumValue>( std::make_shared<MsItem>( b ) );
                        myEnumValues.push_back( newval );
                    }
                }
            }
        }
    }
    
    MsItemSimpleTypeEnumSet MsItemSimpleTypeEnum::construct( const xsd::MsItemWeb& web )
    {
        MsItemSimpleTypeEnumSet output;
        for ( const MsItemPtr i : web.getMsItemSet() )
        {
            if ( (i)->getMsItemKind() == MsItemKind::simpleType )
            {
                if ( i->getIsFirstClassConcept() )
                {
                    MsItemSimpleTypePtr s = std::make_shared<MsItemSimpleType>( i );
                    if ( s->getMsItemSimpleTypeKind() == MsItemSimpleTypeKind::enumeration )
                    {
                        MsItemSimpleTypeEnumPtr e = std::make_shared<MsItemSimpleTypeEnum>( std::make_shared<MsItemSimpleType>( s ) );
                        output.push_back( e );
                    }
                }
            }
        }
        return output;
    }
}