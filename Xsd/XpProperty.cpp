#include "XpProperty.h"

namespace xsd
{
    
    XpProperty::XpProperty( std::string label, std::string value, int ID )
    :myLabel( label )
    ,myValue( value )
    ,myID( ID )
    {}
    
    /* dtor */
    XpProperty::~XpProperty() {}
    
    std::string XpProperty::getLabel() const
    {
        return myLabel;
    }
    
    void XpProperty::setLabel( const std::string& new_label )
    {
        myLabel = new_label;
    }
    
    std::string XpProperty::getValue() const
    {
        return myValue;
    }

    void XpProperty::setValue( const std::string& new_value )
    {
        myValue = new_value;
    }
    
    std::ostream& XpProperty::stream( std::ostream& os ) const
    {
        os << myLabel;
        os << "=\"" << myValue << "\"";
        return os;
    }
    
    std::string XpProperty::str() const
    {
        std::stringstream ss;
        stream( ss );
        return ss.str();
    }
    
    int XpProperty::getID() const
    {
        return myID;
    }
    void XpProperty::setID( int ID )
    {
        myID = ID;
    }
    
    XpItem* XpProperty::getParentXpItem() const
    {
        return myParent;
    }
    void XpProperty::setParentXpItem( XpItem* i )
    {
        myParent = i;
    }
}

std::ostream& operator<<( std::ostream& os, xsd::XpProperty rhs )
{
    return rhs.stream( os );
}
