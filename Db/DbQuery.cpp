/* matthew james briggs */

#include "DbQuery.h"
#include "mysql++.h"

namespace db
{
    /* ctor */
    DbQuery::DbQuery()
    :myRowPrototype()
    ,myRows()
    ,myConnectionValues()
    ,mySql()
    {
    
    }
    DbQuery::DbQuery( const DbConnectionValues& conval )
    :myRowPrototype()
    ,myRows()
    ,myConnectionValues( conval )
    ,mySql()
    {
    
    }
    DbQuery::DbQuery( const DbConnectionValues& conval, const std::string& sql )
    :myRowPrototype()
    ,myRows()
    ,myConnectionValues( conval )
    ,mySql( sql )
    {
    
    }
    
    /* dtor */
    DbQuery::~DbQuery() {}
    
    std::string DbQuery::getSql() const
    {
        return mySql;
    }
    
    void DbQuery::setSql( const std::string& sql )
    {
        mySql = sql;
    }
    
    void DbQuery::appendSql( const std::string& addThisToEndOfSql )
    {
        mySql = mySql + addThisToEndOfSql;
    }
    
    bool DbQuery::execute()
    {
        mysqlpp::StoreQueryResult res;
        
        // Connect to the sample database.
        mysqlpp::Connection conn(false);
        if (conn.connect(myConnectionValues.getCatelog().c_str(),
                         myConnectionValues.getServer().c_str(),
                         myConnectionValues.getUser().c_str(),
                         myConnectionValues.getPass().c_str()))
        {
            // Retrieve a subset of the sample stock table set up by resetdb
            // and display it.
            mysqlpp::Query query = conn.query( getSql() );
            if ( (res = query.store()) )
            {
                return res;
            }
            else
            {
                if ( !query )
                {
                    std::cerr << "Call to MySQL Server Failed: " << query.error() << std::endl;
                    std::cerr << "Error number: " << query.errnum() << std::endl;
                    return false;
                }
    			
            }
        }
        else
        {
            std::cerr << "DB connection error: " << conn.error() << std::endl;
            return false;
        }
        
        myRowPrototype.clear();
        myRows.clear();
        
        for ( auto row = res.begin(); row != res.end(); ++row )
        {
//            DbRow newRow;
//            for ( auto readfield = row->begin(); readfield != row->end(); ++readfield )
//            {
//                DbField writefield;
//                writefield.setName( std::make_shared<std::string>( readfield-> ) );
//            }
//            myRows.push_back( newRow );
        }
        
        return true;
    }
}