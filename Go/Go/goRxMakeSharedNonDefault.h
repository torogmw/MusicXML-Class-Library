#include <regex>
#include "File.h"
#include "globals.h"
#include <sstream>
#include "end.h"
#include "tab.h"

namespace go
{
    inline void goRxMakeSharedNonDefault()
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
                            std::stringstream beginClassDecl;
                            beginClassDecl << line << end();
                            stringstream nondefrxss;
                            nondefrxss << R"___(\s+)___";
                            nondefrxss << className;
                            nondefrxss << R"___(\(\s*\w+\s*.*\))___";
                            regex rxNonDef{ nondefrxss.str() };
                            smatch m5;
                            int innerCount = 0;
                            while ( getline( is, line ) && innerCount < 15 )
                            {
                                if ( regex_search( line, m5, rxNonDef ) )
                                {
                                    string nonDefCtor = m5.str();
                                    string strParamRx { R"___((?<=[\(]).*)___" };
                                    regex rxParam{ strParamRx };
                                    smatch m6;
                                    //if ( regex_search( nonDefCtor, m6, rxParam ) )
                                    //{
                                    //    string p = m6.str();
                                    //}
                                }
                                else
                                {
                                    beginClassDecl << line;
                                }
                            }
                            // os << tab(2) << "inline " << className << "Ptr make" << className << "() { return std::make_shared<" << className << ">(); }" << end();
                            // os << line << end();
                            
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