/* matthew james briggs */

#include "MsItemSimpleTypeEnum.h"
#include "MsItemKind.h"

namespace xsd
{
    /* ctor */
    MsItemSimpleTypeEnum::MsItemSimpleTypeEnum( const MsItemSimpleType& value )
    :MsItemSimpleType( value )
    {
        if ( value.getMsItemSimpleTypeKind() != MsItemSimpleTypeKind::enumeration )
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
        for ( auto child : MsItemSimpleType::getChildren() )
        {
            if ( child->getMsItemKind() == MsItemKind::restriction )
            {
                for ( auto it : child->getChildren() )
                {
                    if ( it->getMsItemKind() == MsItemKind::enumeration )
                    {
                        MsItemEnumValue val( *it );
                        myEnumValues.push_back( std::make_shared<MsItemEnumValue>( val ) );
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
                    MsItemSimpleType simple( *i );
                    if ( simple.getMsItemSimpleTypeKind() == MsItemSimpleTypeKind::enumeration )
                    {
                        MsItemSimpleTypeEnum e( simple );
                        output.push_back( std::make_shared<MsItemSimpleTypeEnum>( e ) );
                    }
                }
            }
        }
        return output;
    }
}