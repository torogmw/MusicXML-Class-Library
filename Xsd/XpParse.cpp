/* See MusicXML License at the bottom of this code page. */



#include "XpParse.h"
#include <sstream>

namespace xsd
{
    Parse::Parse() {}
    
    void Parse::rtrim( std::string& str, const std::string& tokens )
    {
        if ( str.size() > 0 )
        {
            std::string::iterator it_last;
            for (it_last = str.end()-1; it_last != str.begin(); --it_last)
            {
                if ( tokens.find( *it_last ) == std::string::npos )
                {
                    break;
                }
            }
            if ( it_last < str.end()-1 )
            {
                str.erase( it_last+1, str.end() );
            }
        }

    }
    
    void Parse::ltrim( std::string& str, const std::string& tokens )
    {
        std::string::iterator it_first;
        for (it_first = str.begin(); it_first != str.end(); ++it_first)
        {
            if ( tokens.find( *it_first ) == std::string::npos )
            {
                break;
            }
        }
        
        str.erase( str.begin(), it_first );
    }
    
    void Parse::trim( std::string& str, const std::string& tokens )
    {
        ltrim( str, tokens );
        rtrim( str, tokens );
    }
    
    void Parse::eat( std::istream& ss, const std::string& tokens )
    {
        while ( ss.good() && tokens.find( ss.peek() ) != std::string::npos )
        {
            ss.ignore();
        }
    }
    void Parse::findnext( std::istream& str, const char& c )
    {
        while( str.peek() != c && !str.eof() )
        {
            str.ignore();
        }
    }
}


