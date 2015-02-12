
#pragma once
#include <iostream>
#include <sstream>
#include <vector>
//#include "XpItem.h" // NO circular problem

namespace xsd
{
    class XpItem;
    
    class XpProperty;
    // also a shared pointer for XpPropertySet
    typedef std::shared_ptr<XpProperty> XpPropertyPtr;
    typedef std::vector<XpPropertyPtr> XpPropertySet;
    typedef XpPropertySet::iterator XpPropertySetIter;
    typedef XpPropertySet::const_iterator XpPropertySetIterConst;
    
    class XpProperty
    {

    public:
        XpProperty( std::string label = "", std::string value = "", int ID = 0 );
        virtual ~XpProperty();
        
        std::string getLabel() const;
        void setLabel( const std::string& label );
        
        std::string getValue() const;
        void setValue( const std::string& new_value );
        
        std::ostream& stream( std::ostream& os ) const;
        std::string str() const;
        
        int getID() const;
        void setID( int ID );
        
        XpItem* getParentXpItem() const;
        void setParentXpItem( XpItem* i );
        
    private:
        std::string myLabel;
        std::string myValue;
        int myID;
        XpItem* myParent;
    };
}

std::ostream& operator<<( std::ostream& os, xsd::XpProperty rhs );
