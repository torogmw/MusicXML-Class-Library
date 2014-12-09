#include "mainConstants.h"
#include "FileInfo.h"
#include <fstream>
#include <string>
#include <sstream>

namespace constants
{
    std::string License::ourLicense;
    void License::init()
    {
        if ( ourLicense.size() == 0 )
        {
            std::stringstream license;
            license << std::endl << std::endl << "/*" << std::endl << std::endl;
            FileInfo licensefileinfo;
            licensefileinfo.setDirectory( constants::getPathInput() );
            licensefileinfo.setFileName( "license.txt" );
            std::ifstream licensefstream( licensefileinfo.getFullpath() );
            std::string licenseline;
            while ( getline ( licensefstream, licenseline ) )
            {
                license << licenseline << '\n';
            }
            license << std::endl << std::endl << "*/" << std::endl << std::endl;
            ourLicense = license.str();
        }
    }
    std::string License::getLicense()
    {
        License::init();
        return ourLicense;
    }
}


