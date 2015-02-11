/* matthew james briggs */

#include "DbQuery.h"
#include "mysql++.h"
#include "DbStringPtr.h"
#include "dbGetFieldNamesFromRow.h"

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
                myRowPrototype.clear();
                myRows.clear();
                if ( res.size() > 0 )
                {
                    auto firstrow = res.begin();
                    std::vector<DbStringPtr> myfieldnames;
                    dbGetFieldNamesFromRow( *firstrow, myfieldnames );
                    for ( auto sptr : myfieldnames )
                    {
                        DbField mycurrentfield( sptr, "" );
                        mycurrentfield.setIsNull( true );
                        myRowPrototype.push_back( mycurrentfield );
                    }
                    for ( auto row = res.begin(); row != res.end(); ++row )
                    {
                        DbRow mynewrow = myRowPrototype;
                        auto readIter = row->begin();
                        auto writeIter = mynewrow.begin();
                        
                        for (; readIter != row->end() && writeIter != mynewrow.end(); ++readIter, ++writeIter )
                        {
                            std::string temp;
                            readIter->to_string( temp );
                            writeIter->setValue( temp );
                        }
                        myRows.push_back( mynewrow );
                    }
                }
                return true;
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
        return false;
    }
    
    DbRowSetIter DbQuery::rowsBegin()
    {
        return myRows.begin();
    }
    DbRowSetIter DbQuery::rowsEnd()
    {
        return myRows.end();
    }
    DbRowSetIterConst DbQuery::rowsBegin() const
    {
        return myRows.cbegin();
    }
    DbRowSetIterConst DbQuery::rowsEnd() const
    {
        return myRows.cend();
    }
    
}