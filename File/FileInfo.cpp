
#include "FileInfo.h"
#include <sstream>
#include <stdio.h>
#include <dirent.h>

namespace fs
{
    /* ctor */
    FileInfo::FileInfo()
    :myFilename( FileName( "" ) )
    ,myDirectory( Directory() )
    {}
    
    FileInfo::FileInfo( const FileName& filename, const Directory& directory )
    :myFilename( filename )
    ,myDirectory( directory )
    { }
    
    
    void FileInfo::setDirectory( const Directory& value )
    {
        myDirectory = value;
    }
    
    const Directory& FileInfo::getDirectory() const
    {
        return myDirectory;
    }
    const FileName& FileInfo::getFileName() const
    {
        return myFilename;
    }
    std::string FileInfo::getFullpath() const
    {
        std::stringstream sstr;
        sstr << getDirectory().getDirectory() << getFileName().getNameWithExtension();
        return sstr.str();
    }
    
    FileSet FileInfo::filterByExtension( const std::string& extension, const FileSet& inputList )
    {
        
        FileSet outputList;
//        for ( FileInfo f : inputList )
//        {
//            auto lenFname = f.getFileName().length();
//            auto lenExt = extension.length();
//            auto index = lenFname - lenExt;
//            if( index < lenFname )
//            {
//                if ( f.getFileName().substr( index ) == extension )
//                {
//                    outputList.push_back( f );
//                }
//            }
//        }
        return outputList;
    }
    
    void FileInfo::setFileName( const FileName& value )
    {
        myFilename = value;
    }
}


