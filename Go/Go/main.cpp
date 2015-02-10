
#include <iostream>
#include "executeQuery.h"
#include "mysql++.h"

int main(int argc, const char * argv[])
{
    mysqlpp::StoreQueryResult res =  db::executeQuery( "SELECT id FROM xsd" );
    for ( auto it = res.begin(); it != res.end(); ++it )
    {
        int x = db::getFieldInt( *it, "id" );
        std::cout << x << std::endl;
    }
    return 0;
}

