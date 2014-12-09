#include "mainConstants.h"

namespace constants
{
    std::string License::ourLicense;
    void License::init()
    {
        if ( ourLicense.size() == 0 )
        {
            throw "get the license here.";
        }
    }
}


