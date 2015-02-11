/* matthew james briggs */

#include "dbGetFieldNamesFromRow.h"

namespace db
{
    void dbGetFieldNamesFromRow( const mysqlpp::Row& row, std::vector<std::string>& output )
    {
        auto fields = row.field_list();
        auto thislist = fields.list;
        for ( auto li = thislist->begin(); li != thislist->end(); ++li )
        {
            output.push_back( *li );
        }
    }
}