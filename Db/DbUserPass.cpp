/* matthew james briggs */

#include "DbUserPass.h"
#include "globals.h"

namespace db
{
    /* ctor */
    DbUserPass::DbUserPass()
    :myUser( "" )
    ,myPass( "" )
    {
        myUser = globals::getDbUser();
        myPass = globals::getDbPass();
    }
    
    /* ctor */
    DbUserPass::DbUserPass( const std::string& user, const std::string& password )
    :myUser( user )
    ,myPass( password )
    { }
    
    
    std::string DbUserPass::getUser() const
    {
        return myUser;
    }
    std::string DbUserPass::getPass() const
    {
        return myPass;
    }
    
}