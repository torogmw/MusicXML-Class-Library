/* See MusicXML License at the bottom of this code page. */

#pragma once
#include <iostream>
#include <sstream>

namespace xsd
{
    struct Parse
    {
    private:
        Parse(); // it's a "static" class
        
    public:
        
        /* trailing characters found in tokens will be removed
         e.g. rtrim("HelloXYZ","XYZ") becomes "Hello" */
        static void ltrim( std::string& str, const std::string& tokens = "" );
        
        /* leading characters found in tokens will be removed
         e.g. rtrim("XYZHello","XYZ") becomes "Hello" */
        static void rtrim( std::string& str, const std::string& tokens = "" );
        
        /* leading and trailing characters found in tokens will be removed
         e.g. rtrim("XYZHelloXYZ","XYZ") becomes "Hello" */
        static void trim( std::string& str, const std::string& tokens = "" );
        
        /* Ignores characters found in tokens, advances
         stringstream to the next character not found in tokens */
        static void eat( std::istream& str, const std::string& tokens = "" );
        
        static void findnext( std::istream& str, const char& c );
    
    };
}
