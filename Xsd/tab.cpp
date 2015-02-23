

#include "tab.h"
#include <sstream>

namespace xsd
{
    std::string tab( unsigned int number_of_tabs )
    {
        std::stringstream ss;
        for ( int i = 0; i < number_of_tabs; ++i )
        {
            ss << '\t';
        }
        return ss.str();
    }
}