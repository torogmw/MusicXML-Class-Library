#include <regex>
#include "File.h"
#include "globals.h"
#include <sstream>
#include "end.h"
#include "tab.h"

namespace go
{
    inline void goRxVectorAliasesForElements()
    {
        using namespace fs;
        using namespace std;
        using namespace xsd;
        
        Directory dir = globals::getMxSourceDirectory();
        FileName fn{ "Elements", "h" };
        FileInfo fo{ fn, dir };
        File f{ fo };
        f.readIntoMemory();
        istringstream is{ f.getContents() };
        string line;
        stringstream os;
        regex rxLine{ R"(class\s\w+\s+:\s+public\s+ElementInterface)" };
        regex rxClassAndName{ R"(class\s+\w+)" };
        regex rxSpaceAndName{ R"(\s\w+)" };
        regex rxName{ R"(\S+)" };
        smatch m1, m2, m3, m4;
        string returnStatement;
        while ( getline( is, line ) )
        {
            if ( regex_search( line, m1, rxLine ) )
            {
                string s1 = m1.str();
                if ( regex_search( s1, m2, rxClassAndName ) )
                {
                    string s2 = m2.str();
                    if ( regex_search( s2, m3, rxSpaceAndName ) )
                    {
                        string s3 = m3.str();
                        if ( regex_search( s3, m4, rxName ) )
                        {
                            string className = m4.str();
                            //os << line << end();
                            os << tab(2) << "using " << className << "Set = std::vector<";
                            os << className << "Ptr>;" << end();
                            os << tab(2) << "using " << className << "SetIter = " << className << "Set::iterator;" << end();
                            os << tab(2) << "using " << className << "SetIterConst = " << className << "Set::const_iterator;" << end();
                            //getline( is, line );
                            os << line << end();
                            
                        }
                    }
                }
            }
            else
            {
                os << line << endl;
            }
        }
        cout << os.str();
    }
}