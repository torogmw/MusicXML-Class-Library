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
    ,myXmlName( "" )
    {
        if ( MsItem::getMsItemKind() != MsItemKind::enumeration )
        {
            throw std::runtime_error( "error construction MsItemEnumValue" );
        }
        parseCppName();
    }
    
    void MsItemEnumValue::parseCppName()
    {
        std::string xmlName;
        for ( auto prop : MsItem::getXpItem()->getProperties() )
        {

            if ( prop->getLabel() == "value" )
            {
                xmlName = prop->getValue();
            }
        }
        myXmlName = xmlName;
        if ( xmlName.length() == 0 )
        {
            xmlName = "emptyString";
        }
        std::string name = camelCase( xmlName, false );
        if ( isCppKeyword( name ) )
        {
            name = name + "_";
        }
        myCppName = name;
    }
    
    std::string MsItemEnumValue::getCppName() const
    {
        return myCppName;
    }
    std::string MsItemEnumValue::getXmlName() const
    {
        return myXmlName;
    }
    /* dtor */
    MsItemEnumValue::~MsItemEnumValue() {}
}