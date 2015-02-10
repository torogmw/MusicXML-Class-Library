/* matthew james briggs */

#include "Field.h"
#include <sstream>

namespace db
{
    /* ctor */
    Field::Field()
    :myName( std::make_shared<std::string>( "" ) )
    ,myValue( "" )
    ,myIsNull( true )
    {
        
    }
    Field::Field( const StringPtr& name, const std::string& value )
    :myName( name )
    ,myValue( value )
    ,myIsNull( true )
    {
        
    }
    
    /* dtor */
    Field::~Field() {}
    
    StringPtr Field::getName() const
    {
        return myName;
    }
    void Field::setName( const StringPtr& value )
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
    
    std::string Field::getValue() const
    {
        return myValue;
    }
    int Field::getValueInt() const
    {
        int val = -1;
        std::stringstream temp( myValue );
        temp >> val;
        return val;
    }
    bool Field::getValueBool() const
    {
        bool ret = false;
        std::stringstream temp( myValue );
        temp << myValue;
        temp >> std::boolalpha >>  ret;
        return ret;
    }
    double Field::getValueDouble() const
    {
        double val = -1;
        std::stringstream temp( myValue );
        temp >> val;
        return val;
    }

    char Field::getValueChar() const
    {
        char val = 0;
        if ( myValue.length() > 0 )
        {
            val = myValue[0];
        }
        return val;
    }
    
    bool Field::getIsNull() const
    {
        return myIsNull;
    }
    void Field::setIsNull( bool value )
    {
        myIsNull = value;
        if ( myIsNull )
        {
            myValue = "";
        }
    }
    void Field::setValue( const std::string& value )
    {
        myValue = value;
        setIsNull( false );
    }
    void Field::setValueInt( int value )
    {
        std::stringstream temp;
        temp << value;
        myValue = temp.str();
        setIsNull( false );
    }
    void Field::setValueBool( bool value )
    {
        std::stringstream temp;
        temp << std::boolalpha << value;
        myValue = temp.str();
        setIsNull( false );
    }
    void Field::setValueChar( char value )
    {
        std::stringstream temp;
        temp << value;
        myValue = temp.str();
        setIsNull( false );
    }
    void Field::setValueDouble( double value )
    {
        std::stringstream temp;
        temp << value;
        myValue = temp.str();
        setIsNull( false );
    }
    
    std::string writeField( const Field& field, bool isNumeric, char quotechar )
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
    std::string writeFieldSqlSeq( const Field& field, bool isNumeric, char quotechar )
    {
        std::stringstream temp;
        temp << "set " << quotechar << *(field.getName()) << quotechar;
        temp << " = " << writeField( field, isNumeric, quotechar );
        return temp.str();
    }
}