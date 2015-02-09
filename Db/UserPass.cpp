/* matthew james briggs */

#include "UserPass.h"
#include "globals.h"

namespace db
{
    /* ctor */
    UserPass::UserPass()
    :myUser( "" )
    ,myPass( "" )
    {
        myUser = globals::getDbUser();
        myPass = globals::getDbPass();
    }
    
    /* ctor */
    UserPass::UserPass( const std::string& user, const std::string& password )
    :myUser( user )
    ,myPass( password )
    { }
    
    
    std::string UserPass::getUser() const
    {
        return myUser;
    }
    std::string UserPass::getPass() const
    {
        return myPass;
    }
    
}