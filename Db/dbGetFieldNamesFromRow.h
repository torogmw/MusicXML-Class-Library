/* matthew james briggs */

#pragma once
#include <iostream>
#include "mysql++.h"

namespace db
{
    void dbGetFieldNamesFromRow( const mysqlpp::Row& row, std::vector<std::string>& output );
}