#pragma once

#include <mysql++.h>

#include <iostream>
#include <iomanip>
#include "ConnectionValues.h"

namespace db
{
    inline bool executeNonQuery( const ConnectionValues& connVal, const std::string& sql )
    {
        
        
        // Connect to the sample database.
        mysqlpp::Connection conn(false);
        if (conn.connect(connVal.getCatelog().c_str(), connVal.getServer().c_str(),
                         connVal.getUser().c_str(), connVal.getPass().c_str()))
        {
            // Retrieve a subset of the sample stock table set up by resetdb
            // and display it.
            mysqlpp::Query query = conn.query( sql );
            if ( mysqlpp::StoreQueryResult res = query.store() )
            {
                std::cerr << "warning ExecuteNonQuery received a results set" << std::endl;
                
            }
            else
            {
                if ( !query )
                {
                    std::cerr << "Call to MySQL Server Failed: " << query.error() << std::endl;
                    std::cerr << "Error number: " << query.errnum() << std::endl;
                    return false;
                }
                else
                {
                    return true;
                }
    			
            }
            
            return true;
        }
        else
        {
            std::cerr << "DB connection error: " << conn.error() << std::endl;
            return false;
        }
    }
    
    inline bool executeNonQuery( const std::string& sql )
    {
        return executeNonQuery( ConnectionValues(), sql );
    }
}
