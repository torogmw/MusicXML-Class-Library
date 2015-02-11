/* matthew james briggs */

#include "DbConnectionValues.h"
#include "globals.h"

namespace db
{
    DbConnectionValues::DbConnectionValues( std::string server, DbUserPass upass, std::string catelog )
    :myServer( server )
    ,myDbUserPass( upass )
    ,myCatelog( catelog )
    {
        
    }
    
    DbConnectionValues::DbConnectionValues()
    :myServer( "" )
    ,myDbUserPass()
    ,myCatelog( "" )
    {
        myServer = globals::getDbServer();
        myCatelog = globals::getDbCatelog();
    }
    
    std::string DbConnectionValues::getServer() const
    {
        return myServer;
    }
    std::string DbConnectionValues::getUser() const
    {
        return myDbUserPass.getUser();
    }
    std::string DbConnectionValues::getPass() const
    {
        return myDbUserPass.getPass();
    }
    std::string DbConnectionValues::getCatelog() const
    {
        return myCatelog;
    }
    DbUserPass DbConnectionValues::getDbUserPass() const
    {
        return myDbUserPass;
    }
}