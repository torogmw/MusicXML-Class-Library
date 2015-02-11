/* matthew james briggs */

#include "dbGetFieldNamesFromRow.h"

namespace db
{
    void dbGetFieldNamesFromRow( const mysqlpp::Row& row, std::vector<DbStringPtr>& output )
    {
        if ( output.size() > 0 )
        {
            output.clear();
        }
        auto fields = row.field_list();
        auto thislist = fields.list;
        for ( auto li = thislist->begin(); li != thislist->end(); ++li )
        {
            output.push_back( std::make_shared<std::string>( *li ) );
        }
    }
}