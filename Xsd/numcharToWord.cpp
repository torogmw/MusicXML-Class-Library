/* matthew james briggs */

#include "numcharToWord.h"
#include <sstream>

namespace xsd
{
    std::string numcharToWord( char numchar )
    {
        std::stringstream buffer;
        if ( numchar == '0' )
        {
            buffer << "Zero";
        }
        else if ( numchar == '1' )
        {
            buffer << "One";
        }
        else if ( numchar == '2' )
        {
            buffer << "Two";
        }
        else if ( numchar == '3' )
        {
            buffer << "Three";
        }
        else if ( numchar == '4' )
        {
            buffer << "Four";
        }
        else if ( numchar == '5' )
        {
            buffer << "Five";
        }
        else if ( numchar == '6' )
        {
            buffer << "Six";
        }
        else if ( numchar == '7' )
        {
            buffer << "Seven";
        }
        else if ( numchar == '8' )
        {
            buffer << "Eight";
        }
        else if ( numchar == '9' )
        {
            buffer << "Nine";
        }
        else
        {
            buffer << numchar;
        }
        return buffer.str();
    }
}