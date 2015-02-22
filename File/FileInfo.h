
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Directory.h"
#include "FileName.h"

namespace fs
{
    class FileInfo;
    typedef std::vector<FileInfo> FileSet;
    typedef FileSet::iterator FileSetIter;
    typedef FileSet::const_iterator FileSetIterConst;
    
    class FileInfo
    {
        
    public:
        FileInfo( const FileName& filename, const Directory& directory );
        FileInfo();
        
        const FileName& getFileName() const;
        std::string getFullpath() const;
        const Directory& getDirectory() const;
        
        void setFileName( const FileName& value );
        void setDirectory( const Directory& value );
        
        static FileSet getDir( const std::string& directory );
        static FileSet filterByExtension( const std::string& extension, const FileSet& inputList );
        
    private:
        FileName myFilename;
        Directory myDirectory;
    };
}


