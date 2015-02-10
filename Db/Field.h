/* matthew james briggs */

#pragma once
#include <iostream>
#include <string>
#include "StringPtr.h"
#include <memory.h>
#include <vector>

namespace db
{
    class Field;
    using FieldPtr = std::shared_ptr<Field>;
    
    using Fields = std::vector<Field>;
    using FieldsIter = Fields::iterator;
    using FieldsIterConst = Fields::const_iterator;
    
    std::string writeField( const Field& field, bool isNumeric, char quotchar = '`' );
    std::string writeFieldSqlSet( const Field& field, bool isNumeric, char quotchar = '`' );
    
    class Field
    {

    public:
        Field();
        Field( const StringPtr& name, const std::string& value );
        virtual ~Field();
        
        StringPtr getName() const;
        void setName( const StringPtr& value );
        
        std::string getValue() const;
        int getValueInt() const;
        bool getValueBool() const;
        double getValueDouble() const;
        char getValueChar() const;
        
        bool getIsNull() const;
        void setIsNull( bool value );
        
        void setValue( const std::string& value );
        void setValueInt( int value );
        void setValueBool( bool value );
        void setValueChar( char value );
        void setValueDouble( double value );
        
        
    private:
        StringPtr myName;
        std::string myValue;
        bool myIsNull;
        
    };
}