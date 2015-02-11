/* matthew james briggs */

#pragma once
#include <iostream>

namespace db
{
    class DbUserPass
    {

    public:
        DbUserPass( const std::string& user, const std::string& password );
        DbUserPass();
        
        std::string getUser() const;
        std::string getPass() const;
        
    private:
        std::string myUser;
        std::string myPass;
    };
}