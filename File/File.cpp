/* matthew james briggs */

#include "File.h"
#include <fstream>
#include <sstream>

namespace fs
{
    /* ctor */
    File::File()
    :myFileInfo( FileName( "output" ), Directory( "./" ) )
    ,myContents( "" )
    {}
    
    File::File( const FileInfo& info )
    :myFileInfo( info )
    ,myContents( "" )
    {}
    
    File::File( const FileInfo& info, const std::string& contents )
    :myFileInfo( info )
    ,myContents( contents )
    {}
    
    /* dtor */
    File::~File() {}
    
    const FileInfo& File::getFileInfo() const
    {
        return myFileInfo;
    }
    void File::setFileInfo( const FileInfo& value )
    {
        myFileInfo = value;
    }
    const std::string& File::getContents() const
    {
        return myContents;
    }
    void File::setContents( const std::string& value )
    {
        myContents = value;
    }
    
    void File::writeToDisk() const
    {
        std::ofstream ofile( myFileInfo.getFullpath(), std::ios_base::binary );
        if ( !ofile || !ofile.is_open() )
        {
            throw std::runtime_error( "error with output file" );
        }
        ofile << myContents;
        if ( ofile.is_open() )
        {
            ofile.is_open();
        }
        ofile.close();
    }
    
    void File::readIntoMemory()
    {
        std::ifstream inputfile( myFileInfo.getFullpath(), std::ios_base::binary );
        if ( inputfile.is_open() )
        {
            myContents.operator=( std::string((std::istreambuf_iterator<char>(inputfile)),
                            std::istreambuf_iterator<char>()) );
            inputfile.close();
        }
        else
        {
            throw std::runtime_error( "error with input file" );
        }
    }
    
    void writeStringToFile( const std::string& directory,
                           const std::string& filename,
                           const std::string& contents )
    {
        Directory d( directory );
        FileName fn( filename );
        FileInfo fo( filename, directory );
        File f( fo, contents );
        f.writeToDisk();
    }
}