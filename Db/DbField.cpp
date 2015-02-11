/* matthew james briggs */

#include "DbField.h"
#include <sstream>

namespace db
{
    /* ctor */
    DbField::DbField()
    :myName( std::make_shared<std::string>( "" ) )
    ,myValue( "" )
    ,myIsNull( true )
    {
        
    }
    DbField::DbField( const DbStringPtr& name, const std::string& value )
    :myName( name )
    ,myValue( value )
    ,myIsNull( true )
    {
        
    }
    
    /* dtor */
    DbField::~DbField() {}
    
    DbStringPtr DbField::getName() const
    {
        return myName;
    }
    void DbField::setName( const DbStringPtr& value )
    {
        if ( value )
        {
            myName = value;
        }
        else
        {
            myName = std::make_shared<std::string>( "" );
        }
    }
    
    std::string DbField::getValue() const
    {
        return myValue;
    }
    int DbField::getValueInt() const
    {
        int val = -1;
        std::stringstream temp( myValue );
        temp >> val;
        return val;
    }
    bool DbField::getValueBool() const
    {
        bool ret = false;
        std::stringstream temp( myValue );
        temp << myValue;
        temp >> std::boolalpha >>  ret;
        return ret;
    }
    double DbField::getValueDouble() const
    {
        double val = -1;
        std::stringstream temp( myValue );
        temp >> val;
        return val;
    }

    char DbField::getValueChar() const
    {
        char val = 0;
        if ( myValue.length() > 0 )
        {
            val = myValue[0];
        }
        return val;
    }
    
    bool DbField::getIsNull() const
    {
        return myIsNull;
    }
    void DbField::setIsNull( bool value )
    {
        myIsNull = value;
        if ( myIsNull )
        {
            myValue = "";
        }
    }
    void DbField::setValue( const std::string& value )
    {
        myValue = value;
        setIsNull( false );
    }
    void DbField::setValueInt( int value )
    {
        std::stringstream temp;
        temp << value;
        myValue = temp.str();
        setIsNull( false );
    }
    void DbField::setValueBool( bool value )
    {
        std::stringstream temp;
        temp << std::boolalpha << value;
        myValue = temp.str();
        setIsNull( false );
    }
    void DbField::setValueChar( char value )
    {
        std::stringstream temp;
        temp << value;
        myValue = temp.str();
        setIsNull( false );
    }
    void DbField::setValueDouble( double value )
    {
        std::stringstream temp;
        temp << value;
        myValue = temp.str();
        setIsNull( false );
    }
    
    std::string writeDbFieldQuoted( const DbField& field, bool isNumeric, char quotechar )
    {
        std::stringstream temp;
        if ( field.getIsNull() )
        {
            temp << "null";
        }
        else if ( isNumeric )
        {
            temp << field.getValue();
        }
        else
        {
            temp << quotechar << field.getValue() << quotechar;
        }
        return temp.str();
    }
    std::string writeDbFieldSetStatement( const DbField& field, bool isNumeric, char quotechar )
    {
        std::stringstream temp;
        temp << "set " << quotechar << *(field.getName()) << quotechar;
        temp << " = " << writeDbFieldQuoted( field, isNumeric, quotechar );
        return temp.str();
    }
}