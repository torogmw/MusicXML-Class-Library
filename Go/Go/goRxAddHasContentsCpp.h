#include <regex>
#include "File.h"
#include "globals.h"
#include <sstream>

namespace go
{
    inline void goRxAddHasContentsCpp()
    {
        using namespace fs;
        using namespace std;
        Directory dir = globals::getMxSourceDirectory();
        FileName fn{ "Elements", "cpp" };
        FileInfo fo{ fn, dir };
        File f{ fo };
        f.readIntoMemory();
        istringstream is{ f.getContents() };
        string line;
        stringstream os;
        regex rx{ R"(bool.*::hasAttributes\(\)\sconst)" };
        smatch m;
        string returnStatement;
        while ( getline( is, line ) )
        {
            if ( regex_search( line, m, regex{ R"(const\s.*&)" } ) )
            {
                string x1 = m.str();
                string x2 = x1.substr( 13 );
                string x3 = x2.substr( 0, x2.length()-1 );
                if ( x3 == "XsString" ||
                    x3 == "XsToken" ||
                    x3 == "XsIDREF" ||
                    x3 == "PositiveIntegerOrEmpty" ||
                    x3 == "__" ||
                    x3 == "__" ||
                    x3 == "__" )
                {
                    returnStatement = "            return true;";
                }
                else if (
                         x3 == "_____" ||
                         x3 == "_____" ||
                         x3 == "_____" )
                {
                    returnStatement = "            return !myValue.getIsEmpty();";
                }
                else
                {
                    returnStatement = "            return true;";
                }
            }
            if ( regex_search( line, m, rx ) )
            {
                
                regex_search( line, m, regex{ R"(l\s.*::hasAttributes)" } );
                std::string step1 = m.str();
                std::string step2 = step1.substr( 2 );
                std::string className = step2.substr( 0, step2.find_first_of( ":" ) );
                os << line << endl;
                getline( is, line );
                os << line << endl;
                getline( is, line );
                os << line << endl;
                getline( is, line );
                os << line << endl;
                os << "        bool " << className << "::hasContents() const" << endl;
                os << "        {" << endl;
                os << returnStatement << endl;
                os << "        }" << endl;
            }
            else
            {
                os << line << endl;
            }
        }
        cout << os.str();
    }
}