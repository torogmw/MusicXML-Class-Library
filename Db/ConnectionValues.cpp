/* matthew james briggs */

#include "ConnectionValues.h"
#include "globals.h"

namespace db
{
    ConnectionValues::ConnectionValues( std::string server, UserPass upass, std::string catelog )
    :myServer( server )
    ,myUserPass( upass )
    ,myCatelog( catelog )
    {
        
    }
    
    ConnectionValues::ConnectionValues()
    :myServer( "" )
    ,myUserPass()
    ,myCatelog( "" )
    {
        myServer = globals::getDbServer();
        myCatelog = globals::getDbCatelog();
    }
    
    std::string ConnectionValues::getServer() const
    {
        return myServer;
    }
    std::string ConnectionValues::getUser() const
    {
        return myUserPass.getUser();
    }
    std::string ConnectionValues::getPass() const
    {
        return myUserPass.getPass();
    }
    std::string ConnectionValues::getCatelog() const
    {
        return myCatelog;
    }
    UserPass ConnectionValues::getUserPass() const
    {
        return myUserPass;
    }
}