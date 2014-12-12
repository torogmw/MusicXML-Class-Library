#pragma once
#include <string>
#include <sstream>
#include <vector>
#include <regex>
#include <memory>
#include <fstream>

#include "FileInfo.h"
#include "mainConstants.h"

inline void mainDoRegex()
{
    std::string indir = constants::getPathLexiconSourceCode();
    std::string outdir = constants::getPathLexiconTempTestCode();
    FileList files;
    FileList rawfilelist = FileInfo::getDir( indir );
    for ( FileInfo f : rawfilelist )
    {
        if ( f.getExtension() == "h" )
        {
            if ( f.getFileName().substr( 0, 4 ) == "MxEe" )
            {
                files.push_back( f );
            }
        }
    }
    
    for ( FileInfo file : files )
    {
        std::string className = file.getNameWithoutExtension();
        std::string handleName = "H" + className;
        std::string vectorName = className + "s";
        std::string classDecl = "\tclass " + className + " : public MxObject";
        std::ifstream infile( file.getFullpath() );
        std::string line;
        if ( infile.is_open() )
        {
            std::ofstream outfile;
            FileInfo outfileinfo;
            outfileinfo.setFileName( file.getFileName() );
            outfileinfo.setDirectory( outdir );
            outfile.open ( outfileinfo.getFullpath() );
            if ( outfile.is_open() )
            {
                while ( getline ( infile, line ) )
                {
                    if ( line == classDecl )
                    {
                        outfile << '\t' << "class " << className << ";" << std::endl;
                        outfile << '\t' << "typedef std::shared_ptr<" << className << "> " << handleName << ";" << std::endl;
                        outfile << '\t' << "typedef std::vector<" << className << "> " << vectorName << ";" << std::endl;
                        outfile << '\t' << "typedef " << vectorName << "::iterator " << vectorName << "Iter" << ";" << std::endl;
                        outfile << '\t' << "typedef " << vectorName << "::const_iterator " << vectorName << "IterConst" << ";" << std::endl;
                        outfile << std::endl;
                        outfile << line << '\n';
                    }
                    else if ( line == "#include <memory>" )
                    {
                        outfile << "#include <vector>\n#include <memory>\n";
                    }
                    else
                    {
                        outfile << line << '\n';
                    }
                    
                }
                outfile.close();
            }
            infile.close();
        }
        else
        {
            std::cout << "Unable to open file" << file.getFullpath();
        }
    }
    
    int stop = 0;
}

