/* matthew james briggs */

#include "camelCase.h"
#include <sstream>
#include "numcharToWord.h"

namespace xsd
{
    std::string camelCase( const std::string input, bool firstLetterUpper )
    {
        std::stringstream buffer;
        bool isFirstLetter = true;
        bool nextLetterUpper = false;
        for ( char c : input )
        {
            if ( ( c >= 'A' && c <= 'Z' )
                || ( c >= 'a' && c <= 'z' ) ) // is letter
            {
                if ( nextLetterUpper )
                {
                    buffer << toupper( c );
                }
                else
                {
                    buffer << tolower( c );
                }
                nextLetterUpper = false;
                isFirstLetter = false;
            }
            else if( c >= '0' && c <= '9' ) // number
            {
                if ( !isFirstLetter )
                {
                    buffer << c;
                }
                else
                {
                    buffer << numcharToWord( c );
                    nextLetterUpper = true;
                }
                isFirstLetter = false;
            }
            else // remove the non alphanumeric
            {
                nextLetterUpper = true;
            }
        }
        std::string output = buffer.str();
        if ( output.length() > 0 )
        {
            auto it = output.begin();
            if ( it != output.end() )
            {
                if ( firstLetterUpper )
                {
                    *it = toupper( *it );
                }
                else
                {
                    *it = tolower( *it );
                }
            }
        }
        return output;
    }
}