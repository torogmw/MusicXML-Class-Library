/* matthew james briggs */

#pragma once
#include <iostream>
#include <string>
#include <memory>

#include "DbConnectionValues.h"
#include "Field.h"
#include "DbRow.h"

namespace db
{
    
    class DbQuery
    {

    public:
        DbQuery();
        DbQuery( const DbConnectionValues& conval );
        DbQuery( const DbConnectionValues& conval, const std::string& sql );
        virtual ~DbQuery();
        
        std::string getSql() const;
        void setSql( const std::string& sql );
        void appendSql( const std::string& addThisToEndOfSql );
        
        bool execute();
        
        DbRowSetIter rowsBegin();
        DbRowSetIter rowsEnd();
        
        DbRowSetIterConst rowsBegin() const;
        DbRowSetIterConst rowsEnd() const;
        
    private:
        DbRow myRowPrototype;
        DbRowSet myRows;
        DbConnectionValues myConnectionValues;
        std::string mySql;
    };
}