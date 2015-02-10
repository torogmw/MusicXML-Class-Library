#pragma once

#include <mysql++.h>
#include <iostream>
#include <iomanip>
#include "ConnectionValues.h"
#include <sstream>

using namespace std;

namespace db
{
    inline mysqlpp::StoreQueryResult executeQuery( const ConnectionValues& connVal, const std::string& sql )
    {
        mysqlpp::StoreQueryResult res;
        
        // Connect to the sample database.
        mysqlpp::Connection conn(false);
        if (conn.connect(connVal.getCatelog().c_str(), connVal.getServer().c_str(),
                         connVal.getUser().c_str(), connVal.getPass().c_str()))
        {
            // Retrieve a subset of the sample stock table set up by resetdb
            // and display it.
            mysqlpp::Query query = conn.query( sql );
            if ( (res = query.store()) )
            {
                return res;
            }
            else
            {
                if ( !query )
                {
                    cerr << "Call to MySQL Server Failed: " << query.error() << endl;
                    cerr << "Error number: " << query.errnum() << endl;
                    return res;
                }
                else
                {
                    return res;
                }
    			
            }
            
            return res;
        }
        else
        {
            cerr << "DB connection error: " << conn.error() << endl;
            return res;
        }
    }
    
    inline int getFieldInt( const mysqlpp::Row& row, const std::string& fieldName )
    {
        int ret = -1;
        std::stringstream sstr;
        std::string temp;
        (row[ fieldName.c_str() ]).to_string( temp );
        sstr << temp;
        sstr >> ret;
        return ret;
    }
    
    inline bool getFieldBool( const mysqlpp::Row& row, const std::string& fieldName )
    {
        bool ret = false;
        std::stringstream sstr;
        std::string temp;
        (row[ fieldName.c_str() ]).to_string( temp );
        sstr << temp;
        sstr >> std::boolalpha >>  ret;
        return ret;
    }
    inline double getFieldDouble( const mysqlpp::Row& row, const std::string& fieldName )
    {
        double ret = -1;
        std::stringstream sstr;
        std::string temp;
        (row[ fieldName.c_str() ]).to_string( temp );
        sstr << temp;
        sstr >> ret;
        return ret;
    }
    inline std::string getFieldString( const mysqlpp::Row& row, const std::string& fieldName )
    {
        std::string temp;
        (row[ fieldName.c_str() ]).to_string( temp );
        return temp;
    }
    inline mysqlpp::StoreQueryResult executeQuery( const std::string& sql )
    {
        return executeQuery( ConnectionValues(), sql );
    }
}
