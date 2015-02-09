/* matthew james briggs */

#pragma once
#include <iostream>

namespace db
{
    class UserPass
    {

    public:
        UserPass( const std::string& user, const std::string& password );
        UserPass();
        
        std::string getUser() const;
        std::string getPass() const;
        
    private:
        std::string myUser;
        std::string myPass;
    };
}