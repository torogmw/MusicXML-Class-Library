#include <iostream>
#include <string>
#include <sstream>
#include "ElementInterface.h"

namespace MxTestHelpers
{
    inline std::string indent( int times )
    {
        std::stringstream output;
        for ( int i = 0; i < times; ++i )
        {
            output << mx::e::INDENT;
        }
        return output.str();
    }
    
    inline std::ostream& streamLine( std::ostream& os, int indents, const std::string& line, bool newline )
    {
        os << indent( indents );
        os << line;
        if ( newline )
        {
            os << std::endl;
        }
        return os;
    }
    inline std::ostream& streamLine( std::ostream& os, int indents, const std::string& line )
    {
        return streamLine( os, indents, line, true );
    }
}
