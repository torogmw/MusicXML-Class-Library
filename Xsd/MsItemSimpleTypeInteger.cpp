/* matthew james briggs */

#include "MsItemSimpleTypeInteger.h"

namespace xsd
{
    /* ctor */
    MsItemSimpleTypeInteger::MsItemSimpleTypeInteger( const MsItemSimpleType& item )
    :MsItemSimpleType( item )
    {
        if ( MsItemSimpleType::getMsItemSimpleTypeKind() != MsItemSimpleTypeKind::integer )
        {
            throw std::runtime_error( "error constructing MsItemSimpleTypeInteger" );
        }
    }
    
    /* dtor */
    MsItemSimpleTypeInteger::~MsItemSimpleTypeInteger() {}
    
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
}