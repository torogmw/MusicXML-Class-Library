#pragma once

#include <iostream>
#include <string>

namespace globals
{
    inline std::string getParentDirectory()
    {
        return "/Volumes/MusikPlatz/";
    }
    inline std::string getInputDirectory()
    {
        return getParentDirectory()+"input/";
    }
    inline std::string getOutputDirectory()
    {
        return getParentDirectory()+"output/";
    }
    inline std::string getMxSourceDirectory()
    {
        return getParentDirectory()+"Mx/";
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
    inline std::string getMusicXmlXsdFilePath()
    {
        return getInputDirectory() + "musicxml.xsd";
    }
}