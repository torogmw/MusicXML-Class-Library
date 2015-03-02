#include "MsItemElement.h"

namespace xsd
{
    MsItemElement::MsItemElement( const MsItem item )
    :MsItem( item )
    ,myAttributes()
    {
        parseAttributes();
        parseCppName();
    }
    
    MsItemElement::~MsItemElement() {}
    std::string MsItemElement::getXmlName() const
    {
        throw std::runtime_error( "not implemented" );
    }
    std::string MsItemElement::getCppName() const
    {
        throw std::runtime_error( "not implemented" );
    }
    void MsItemElement::parseAttributes()
    {
        throw std::runtime_error( "not implemented" );
    }
    void MsItemElement::parseCppName()
    {
        throw std::runtime_error( "not implemented" );
    }
    const MsItemAttributeSet& MsItemElement::getAttributes() const
    {
        return myAttributes;
    }
}