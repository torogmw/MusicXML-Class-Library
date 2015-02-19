/* matthew james briggs */

#pragma once
#include <iostream>

namespace fs
{
    class FileName
    {

    public:
        FileName( const std::string& fileNameWithExtension );
        FileName( const std::string& name, const std::string extension );
        FileName();
        
        std::string getNameWithoutExtension() const;
        std::string getNameWithExtension() const;
        void setNameWithoutExtension( const std::string& value );
        void setNameWithExtension( const std::string& value );
        std::string getExtension() const;
        void setExtension( const std::string& value );
        
    private:
        std::string myName;
        std::string myExtension;
        std::string parseExtension( const std::string& input ) const;
        std::string parseName( const std::string& input ) const;
        int getLastDotIndex( const std::string& input ) const;
        bool isLastDotIndexValid( const std::string& input, int lastDotIndex ) const;
    };
}