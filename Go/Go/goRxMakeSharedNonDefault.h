#include <regex>
#include "File.h"
#include "globals.h"
#include <sstream>
#include "end.h"
#include "tab.h"
#include <set>

namespace go
{
    inline std::set<std::string> createTheMakers();
    inline void goRxMakeSharedNonDefault()
    {
        using namespace fs;
        using namespace std;
        using namespace xsd;
        set<string> makers = createTheMakers();
        Directory dir = globals::getMxSourceDirectory();
        FileName fn{ "Elements", "h" };
        FileInfo fo{ fn, dir };
        File f{ fo };
        f.readIntoMemory();
        string line;
        istringstream is{ f.getContents() };
        stringstream os;
        while ( getline( is, line ) )
        {
            os << line << end();
            regex rx{ "inline\\s\\w+Ptr\\smake\\w+\\(\\s*\\)" };
            smatch m;
            if( regex_search( line, m, rx ) )
            {
                string partial = m.str();
                rx = regex{ "\\w+(?=Ptr)" };
                m = smatch{};
                if( regex_search( partial, m, rx ) )
                {
                    string className = m.str();
                    string makeName = "make"+className+"(";
                    for ( auto s : makers )
                    {
                        if ( s.find( makeName ) != string::npos )
                        {
                            os << s; //<< end();
                        }
                    }
                }
            }
        } // while ( getline( is, line ) )
        std::cout << os.str() << end();
        std::cout << "// ";
    }
    inline std::set<std::string> createTheMakers()
    {
        using namespace fs;
        using namespace std;
        using namespace xsd;
        set<string> makers;
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
            if( line.find( "Timpani" ) != std::string::npos )
            {
                int breakhere = 0;
                ++breakhere;
            }
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
                            // beginClassDecl << line << end();
                            stringstream nondefrxss;
                            nondefrxss << R"___(\s+)___";
                            nondefrxss << className;
                            nondefrxss << R"___(\(\s*\w+\s*.*\))___";
                            regex rxNonDef{ nondefrxss.str() };
                            smatch m5;
                            int innerCount = 0;
                            while ( getline( is, line ) && innerCount < 7 )
                            {
                                if ( regex_search( line, m5, rxNonDef ) )
                                {
                                    // beginClassDecl << line << end();
                                    string nonDefCtor = m5.str();
                                    string strParamRx { "\\((.*)" };
                                    regex rxParam{ strParamRx };
                                    smatch m6;
                                    if ( regex_search( nonDefCtor, m6, rxParam ) )
                                    {
                                        auto matchIter = m6.begin();
                                        ++matchIter;
                                        if ( matchIter != m6.end() )
                                        {
                                            string almostThere = *matchIter;
                                            regex rxFinally{ ".*(?=\\))" };
                                            smatch m7;
                                            if ( regex_search( almostThere, m7, rxFinally ) )
                                            {
                                                string p = m7[0];
                                                istringstream pss{ p };
                                                vector<string> tokens;
                                                copy(istream_iterator<string>(pss),
                                                     istream_iterator<string>(),
                                                     back_inserter(tokens));
                                                string variableName = "";
                                                string typeName = "";
                                                if ( tokens.size() > 1 )
                                                {
                                                    
                                                    auto iter = tokens.cbegin();
                                                    if ( iter != tokens.cend() )
                                                    {
                                                        if ( *iter == "const" )
                                                        {
                                                            ++iter;
                                                        }
                                                        if ( iter != tokens.cend() )
                                                        {
                                                            typeName = *iter;
                                                            ++iter;
                                                            if ( iter != tokens.cend() )
                                                            {
                                                                variableName = *iter;
                                                                size_t n = std::count( typeName.begin(), typeName.end(), '&' ) ;
                                                                if ( n == 2 )
                                                                {
                                                                    ; // no problem
                                                                }
                                                                else if ( n == 1 )
                                                                {
                                                                    typeName = typeName+"&";
                                                                }
                                                                else if ( n == 0 )
                                                                {
                                                                    typeName = typeName+"&&";
                                                                }
                                                                if ( variableName.length() > 0 )
                                                                {
                                                                    std::stringstream make1;
                                                                    std::stringstream make2;
                                                                    make1 << tab(2) << "inline " << className << "Ptr make" << className << "( " << typeName << " " << variableName << " ) { return std::make_shared<" << className << ">( std::move( " << variableName << " ) ); }" << end();
                                                                    make2 << tab(2) << "inline " << className << "Ptr make" << className << "(" << p << ") { return std::make_shared<" << className << ">( " << variableName << " ); }" << end();
                                                                    makers.insert( make1.str() );
                                                                    makers.insert( make2.str() );
                                                                    
                                                                } // else { beginClassDecl << line << end(); }
                                                            } // else { beginClassDecl << line << end(); }
                                                        } // else { beginClassDecl << line << end(); }
                                                    } // else { beginClassDecl << line << end(); }
                                                } // if ( tokens.size() > 1 )
                                                // else { beginClassDecl << line << end(); }
                                            } // if ( regex_search( almostThere, m7, rxFinally ) )
                                            // else { beginClassDecl << line << end(); }
                                        } // if ( matchIter != m6.end() )
                                        // else { beginClassDecl << line << end(); }
                                    } // if ( regex_search( nonDefCtor, m6, rxParam ) )
                                    // else { beginClassDecl << line << end(); }
                                } // if ( regex_search( line, m5, rxNonDef ) )
                                // else { beginClassDecl << line << end(); }
                                ++innerCount;
                            } // while ( getline( is, line ) && innerCount < 15 )
                            os << beginClassDecl.str();
                        } // if ( regex_search( s3, m4, rxName ) )
                        else
                        {
                            /* os << line << end(); */
                        }
                    } // if ( regex_search( s2, m3, rxSpaceAndName ) )
                    else
                    {
                        /* os << line << end(); */
                    }
                } // if ( regex_search( s1, m2, rxClassAndName ) )
                else
                {
                    /* os << line << end(); */
                }
            } // if ( regex_search( line, m1, rxLine ) )
            else
            {
                /* os << line << end(); */
            }
        } // while ( getline( is, line ) )
        return makers;
    }
}


