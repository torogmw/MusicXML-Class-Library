/* matthew james briggs */

#pragma once
#include <iostream>
#include "DbUserPass.h"

namespace db
{
    class DbConnectionValues
    {

    public:
        DbConnectionValues();
        DbConnectionValues( std::string server, DbUserPass upass, std::string catelog );
        
        std::string getServer() const;
        std::string getUser() const;
        std::string getPass() const;
        std::string getCatelog() const;
        DbUserPass getDbUserPass() const;
        
    private:
        std::string myServer;
        DbUserPass myDbUserPass;
        std::string myCatelog;
    };
}
/*
connVal.getDatabase().c_str(), connVal.getServer().c_str(),
connVal.getUser().c_str(), connVal.getPassword().c_str())
*/