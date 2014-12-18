
#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

inline void streamLinesTestHelper( const std::string& whitespace_in,
                        const std::vector<std::string>& lines_in,
                        std::ostream& stream_to_this_out )
{
    bool isFirst = true;
    for ( std::string s : lines_in )
    {
        if ( ! isFirst )
        {
            stream_to_this_out << std::endl;
        }
        stream_to_this_out << whitespace_in;
        stream_to_this_out << s;
        isFirst = false;
    }
}