/* matthew james briggs */

#pragma once
#include <iostream>
#include "UserPass.h"

namespace db
{
    class ConnectionValues
    {

    public:
        ConnectionValues();
        ConnectionValues( std::string server, UserPass upass, std::string catelog );
        
        std::string getServer() const;
        std::string getUser() const;
        std::string getPass() const;
        std::string getCatelog() const;
        UserPass getUserPass() const;
        
    private:
        std::string myServer;
        UserPass myUserPass;
        std::string myCatelog;
    };
}
/*
connVal.getDatabase().c_str(), connVal.getServer().c_str(),
connVal.getUser().c_str(), connVal.getPassword().c_str())
*/