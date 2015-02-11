
#include <iostream>
#include "dbExecuteQuery.h"
#include "mysql++.h"

int main(int argc, const char * argv[])
{
    mysqlpp::StoreQueryResult res =  db::dbExecuteQuery( "SELECT id,XsTag FROM xsd" );
    for ( auto it = res.begin(); it != res.end(); ++it )
    {
        int x = db::getFieldInt( *it, "id" );
        
        for ( auto col = it->begin(); col != it->end(); ++col )
        {
            std::string s;
            col->to_string( s );
            std::cout << s << std::endl;
        }
    }
    return 0;
}

