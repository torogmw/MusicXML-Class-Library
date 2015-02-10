/* matthew james briggs */

#pragma once
#include <iostream>
#include <string>
#include "StringPtr.h"
#include <memory.h>
#include <vector>

namespace db
{
    class DbField;
    using DbFieldPtr = std::shared_ptr<DbField>;
    
    using DbFields = std::vector<DbField>;
    using DbFieldsIter = DbFields::iterator;
    using DbFieldsIterConst = DbFields::const_iterator;
    
    std::string writeDbField( const DbField& field, bool isNumeric, char quotchar = '`' );
    std::string writeDbFieldSqlSet( const DbField& field, bool isNumeric, char quotchar = '`' );
    
    class DbField
    {

    public:
        DbField();
        DbField( const StringPtr& name, const std::string& value );
        virtual ~DbField();
        
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