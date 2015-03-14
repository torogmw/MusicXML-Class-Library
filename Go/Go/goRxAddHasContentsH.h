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
        FileName fn{ "Elements", "h" };
        FileInfo fo{ fn, dir };
        File f{ fo };
        f.readIntoMemory();
        istringstream is{ f.getContents() };
        string line;
        stringstream os;
        while ( getline( is, line ) )
        {
            if ( line == "            virtual bool hasAttributes() const;" )
            {
                os << line << endl;
                os << "            virtual bool hasContents() const;" << endl;
            }
            else
            {
                os << line << endl;
            }
        }
        cout << os.str();
    }
}