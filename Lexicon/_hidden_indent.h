#pragma once
#include <string>

namespace lexicon
{
    namespace hidden
    {
        inline std::ostream& indent( std::ostream& os_out, int indentcount_in, const char* indentchars_in )
        {
            for ( int i = 0; i < indentcount_in; ++i )
            {
                os_out << indentchars_in;
            }
            return os_out;
        }
    }
}