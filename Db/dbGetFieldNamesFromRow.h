/* matthew james briggs */

#pragma once
#include <iostream>
#include "mysql++.h"
#include "DbStringPtr.h"
#include <vector>

namespace db
{
    void dbGetFieldNamesFromRow( const mysqlpp::Row& row, std::vector<DbStringPtr>& output );
}