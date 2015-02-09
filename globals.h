#pragma once

#include <iostream>
#include <string>

namespace globals
{
    inline std::string getInputDirectory()
    {
        return "/Volumes/MusikPlatz/input/";
    }
    inline std::string getInputDirectory()
    {
        return "/Volumes/MusikPlatz/output/";
    }
    inline std::string getMusicXmlXsdPath()
    {
        return getInputDirectory() + "musicxml.xsd";
    }
}