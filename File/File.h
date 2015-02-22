/* matthew james briggs */

#pragma once
#include <iostream>
#include "FileInfo.h"

namespace fs
{
    class File
    {

    public:
        File();
        File( const FileInfo& info );
        File( const FileInfo& info, const std::string& contents );
        virtual ~File();
        
        const FileInfo& getFileInfo() const;
        void setFileInfo( const FileInfo& value );
        const std::string& getContents() const;
        void setContents( const std::string& value );
        
        void writeToDisk() const;
        void readIntoMemory();
        
    private:
        FileInfo myFileInfo;
        std::string myContents;
    };
    
    void writeStringToFile( const std::string& directory,
                           const std::string& filename,
                           const std::string& contents );
}