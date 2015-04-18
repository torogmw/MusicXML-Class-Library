#pragma once
#include "MsItem.h"
#include "MsItemWeb.h"
#include "MsItemElement.h"
#include "File.h"
#include "end.h"
#include "globals.h"
#include <cstdio>
#include <ctime>

namespace go
{
    inline void goListNonImplementedElements( bool onlyIncludeThoseWithImplementedSubElements )
    {
        using namespace xsd;
        using namespace fs;
        using namespace std;
        
        MsItemWebPtr web = std::make_shared<MsItemWeb>();
        std::cout << "starting MsItemElementSet unimplemented = findUnimplementedElements( web );" << std::endl;
        MsItemElementSet unimplemented = findUnimplementedElements( web );
        std::cout << "finished MsItemElementSet unimplemented = findUnimplementedElements( web );" << std::endl;
        std::stringstream ss;
        std::cout << "starting total element count;" << std::endl;
        auto filteredMsItemSet = web->getFilteredMsItemSet( MsItemKind::element );
        ss << "<!-- Total Element Count: " << filteredMsItemSet.size() << " -->" << end();
        std::cout << "finished total element count;" << std::endl;
        ss << "<!-- Unimplemented Element Count:  " << unimplemented.size() << " -->" << end();
        
        std::cout << "starting getSubElementsImplemented" << std::endl;
        int readyCount = 0;
        for ( auto e : unimplemented )
        {
            if ( e->getSubElementsImplemented() )
            {
                ++readyCount;
            }
        }
        ss << "<!-- Elements with all submembers implemented: " << readyCount << " -->" << end();
        ss << "<!-- ******************************************************************* -->" << end(2);
        for ( auto e : unimplemented )
        {
            if ( !onlyIncludeThoseWithImplementedSubElements || e->getSubElementsImplemented() )
            {
                if ( e->getChoiceCount() <= 2 )
                {
                    e->toStream( ss );
                }
            }
        }
        std::cout << "finihed getSubElementsImplemented" << std::endl;
        Directory d{ globals::getOutputDirectory() };
        FileName fn{ "UnimplementedElements", "xml" };
        FileInfo fo{ fn, d };
        File f{ fo };
        f.setContents( ss.str() );
        f.writeToDisk();
        
        Directory rd{ globals::getParentDirectory() };
        FileName rfn{ "README", "md" };
        FileInfo rfo{ rfn, rd };
        File readme{ rfo };
        readme.readIntoMemory();
        istringstream readmess{ readme.getContents() };
        stringstream readmeos;
        std::string line;
        while ( getline( readmess, line) )
        {
            if ( line.find( "Current Status as of " ) != string::npos )
            {
                readmeos << "Current Status as of ";
                
                /* DATE */
                std::time_t rawtime;
                std::tm* timeinfo;
                char buffer [80];
                std::time(&rawtime);
                timeinfo = std::localtime(&rawtime);
                std::strftime(buffer,80,"%Y-%m-%d-%H-%M-%S",timeinfo);
                std::puts(buffer);
                std::string timestring{ buffer };
                readmeos << timestring.substr( 0, 10 );
                
                readmeos << ", " << ( filteredMsItemSet.size()-unimplemented.size() );
                readmeos << " Elements Implemented, ";
                readmeos << unimplemented.size() << " Elements to go." << end();
            }
            else
            {
                readmeos << line << end();
            }
        }
        readme.setContents( readmeos.str() );
        readme.writeToDisk();
    }
    
    inline void goListNonImplementedElements()
    {
        goListNonImplementedElements( true );
    }
}