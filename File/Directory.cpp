/* matthew james briggs */

#include "Directory.h"
#include <sstream>

namespace fs
{
    /* ctor */
    Directory::Directory()
    :myDirectory( "" )
    {}
    
    Directory::Directory( const std::string directory )
    :myDirectory( directory )
    {}

    
    bool Directory::isDirectoryEndingOk( const std::string& directory ) const
    {
        return directory[ ( directory.length() ) - 1 ] == '/';
    }
    std::string Directory::fixDirectoryEnding( const std::string& directory ) const
    {
        std::stringstream sstr;
        sstr << directory << '/';
        return sstr.str();
    }
    void Directory::setDirectory( const std::string& value )
    {
        if ( isDirectoryEndingOk( value ) )
        {
            myDirectory = value;
        }
        else
        {
            myDirectory = fixDirectoryEnding( value );
        }
    }
    
    std::string Directory::getDirectory() const
    {
        return myDirectory;
    }
}