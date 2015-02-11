/* matthew james briggs */

#pragma once
#include <iostream>
#include <string>
#include "DbStringPtr.h"
#include <memory.h>
#include <vector>

namespace db
{
    class DbField;
    using DbFieldPtr = std::shared_ptr<DbField>;
    
    
    
    std::string writeDbFieldQuoted( const DbField& field, bool isNumeric, char quotchar = '`' );
    std::string writeDbFieldSetStatement( const DbField& field, bool isNumeric, char quotchar = '`' );
    
    class DbField
    {

    public:
        DbField();
        DbField( const DbStringPtr& name, const std::string& value );
        virtual ~DbField();
        
        DbStringPtr getName() const;
        void setName( const DbStringPtr& value );
        
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
        DbStringPtr myName;
        std::string myValue;
        bool myIsNull;
        
    };
}