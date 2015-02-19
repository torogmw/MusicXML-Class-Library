/* matthew james briggs */

#pragma once
#include <iostream>

namespace fs
{
    class Directory
    {

    public:
        Directory();
        Directory( const std::string directory );

        std::string getDirectory() const;
        void setDirectory( const std::string& value );

    private:
        std::string myDirectory;
        bool isDirectoryEndingOk( const std::string& directory ) const;
        std::string fixDirectoryEnding( const std::string& input ) const;
    };
}