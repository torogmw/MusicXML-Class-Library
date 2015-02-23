#include "end.h"
#include <sstream>

namespace xsd
{
    std::string end( unsigned int number_of_newlines )
    {
        std::stringstream ss;
        for ( int i = 0; i < number_of_newlines; ++i )
        {
            ss << std::endl;
        }
        return ss.str();
    }
    std::string end()
    {
        return end( 1 );
    }
}