/* matthew james briggs */

#include "MsItemEnumValue.h"
#include "isCppKeyword.h"
#include "numcharToWord.h"
#include "camelCase.h"

namespace xsd
{
    /* ctor */
    MsItemEnumValue::MsItemEnumValue( const MsItem& value )
    :MsItem( value )
    ,myCppName( value.getDtDef() )
    {
        if ( MsItem::getMsItemKind() != MsItemKind::enumeration )
        {
            throw std::runtime_error( "error construction MsItemEnumValue" );
        }
        parseCppName();
    }
    
    void MsItemEnumValue::parseCppName()
    {
        std::string name = camelCase( MsItem::getDtDef(), false );
        if ( isCppKeyword( name ) )
        {
            name = name + "_";
        }
        myCppName = name;
    }
    
    /* dtor */
    MsItemEnumValue::~MsItemEnumValue() {}
}