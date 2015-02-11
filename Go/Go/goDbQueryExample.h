#pragma once
#include "DbQuery.h"

namespace go
{
    inline void goDbQueryExample()
    {
        std::string sql = "SELECT id,XsTag FROM xsd";
        db::DbQuery query;
        query.setSql( sql );
        query.execute();
        for( auto rowsetIter = query.rowsBegin(); rowsetIter != query.rowsEnd(); ++rowsetIter )
        {
            for ( auto field = rowsetIter->begin(); field != rowsetIter->end(); ++field )
            {
                std::cout << *( field->getName() ) << "=";
                std::cout << field->getValue() << " ";
            }
            std::cout << std::endl;
        }
    }
}