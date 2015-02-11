
#include <iostream>
#include "dbExecuteQuery.h"
#include "mysql++.h"
#include <vector>
#include "dbGetFieldNamesFromRow.h"
#include "DbStringPtr.h"

int main(int argc, const char * argv[])
{
    mysqlpp::StoreQueryResult res =  db::dbExecuteQuery( "SELECT id,XsTag FROM xsd" );
    std::vector<db::DbStringPtr> FieldNames;
    for ( auto it = res.begin(); it != res.end(); ++it )
    {
        db::dbGetFieldNamesFromRow( *it, FieldNames );
        break;
    }
    for ( auto s :  FieldNames )
    {
        std::cout << *s << std::endl;
    }
    return 0;
}

