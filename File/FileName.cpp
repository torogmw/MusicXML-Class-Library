/* matthew james briggs */

#include "FileName.h"
#include <vector>

namespace fs
{
    FileName::FileName( const std::string& fileNameWithExtension )
    :myName( "" )
    ,myExtension( "" )
    {
        setNameWithExtension( fileNameWithExtension );
    }
    
    FileName::FileName( const std::string& name, const std::string extension )
    :myName( name )
    ,myExtension( extension )
    {}
    
    FileName::FileName()
    :myName( "" )
    ,myExtension( "" )
    {}
    
    std::string FileName::getNameWithoutExtension() const
    {
        return myName;
    }
    std::string FileName::getNameWithExtension() const
    {
        return myName + "." + myExtension;
    }
    
    void FileName::setNameWithoutExtension( const std::string& value )
    {
        myName = value;
    }
    void FileName::setNameWithExtension( const std::string& value )
    {
        myName = parseName( value );
        myExtension = parseExtension( value );
    }
    
    std::string FileName::getExtension() const
    {
        return myExtension;
    }
    void FileName::setExtension( const std::string& value )
    {
        myExtension = value;
    }
    std::string FileName::parseExtension( const std::string& input ) const
    {
        int dotIndex = getLastDotIndex( input );
        if ( ! isLastDotIndexValid( input, dotIndex ) )
        {
            return "";
        }
        return input.substr( dotIndex + 1 );
    }
    std::string FileName::parseName( const std::string& input ) const
    {
        int lastDot = getLastDotIndex( input );
        if ( ! isLastDotIndexValid( input, lastDot ) )
        {
            return input;
        }
        return input.substr( 0, lastDot );
    }
    int FileName::getLastDotIndex( const std::string& input ) const
    {
        typedef std::string::const_iterator iter;
        int i = 0;
        int dotIndex = -1;
        for ( iter it = input.cbegin(); it != input.cend(); ++it )
        {
            if ( *it == '.' )
            {
                dotIndex = i;
            }
            ++i;
        }
        return dotIndex;
    }
    bool FileName::isLastDotIndexValid( const std::string& input, int lastDotIndex ) const
    {
        return lastDotIndex > 0 && lastDotIndex < input.length() - 1;
    }

}