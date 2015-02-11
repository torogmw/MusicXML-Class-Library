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
        
    private:
        DbRow myDbRowPrototype;
        
    };
}