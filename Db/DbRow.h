#pragma once
#include "DbField.h"
#include <vector>

namespace db
{
    using DbRow = std::vector<DbField>;
    using DbRowIter = DbRow::iterator;
    using DbRowIterConst = DbRow::const_iterator;
    
    using DbRowSet = std::vector<DbRow>;
    using DbRowSetIter = DbRowSet::iterator;
    using DbRowSetIterConst = DbRowSet::const_iterator;
}