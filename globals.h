#pragma once

#include <iostream>
#include <string>

namespace globals
{
    inline std::string getInputDirectory()
    {
        return "/Volumes/MusikPlatz/input/";
    }
    inline std::string getOutputDirectory()
    {
        return "/Volumes/MusikPlatz/output/";
    }
    inline std::string getMusicXmlXpPath()
    {
        return getInputDirectory() + "musicxml.xsd";
    }
    inline std::string getDbUser()
    {
        return "root";
    }
    inline std::string getDbPass()
    {
        return "password";
    }
    inline std::string getDbServer()
    {
        return "localhost";
    }
    inline std::string getDbCatelog()
    {
        return "mx";
    }
}