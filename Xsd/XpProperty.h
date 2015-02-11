/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

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
        XpProperty( std::string name = "", std::string value = "", int nodeID = 0 );
        virtual ~XpProperty();
        
        std::string name() const;
        void name( const std::string& new_name );
        
        std::string value() const;
        void value( const std::string& new_value );
        
        std::ostream& stream( std::ostream& os ) const;
        std::string str() const;
        
        int getID() const;
        void setID( int ID );
        
        XpItem* getParentXpItem() const;
        void setParentXpItem( XpItem* e );
        
    private:
        std::string m_n;
        std::string m_v;
        int m_id;
        XpItem* m_parentXpItem;
    };
}

std::ostream& operator<<( std::ostream& os, xsd::XpProperty rhs );
