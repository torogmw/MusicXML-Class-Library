/* See MusicXML License at the bottom of this code page. */

#pragma once
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include "sanitizeString.h"
#include "MxEnumInfoValues.h"
#include "tab.h"

using namespace std;
using namespace xparse;

inline ostream& tab( int tabcount, ostream& os )
{
    for (int i=0; i < tabcount; ++i)
    {
        os << '\t';
    }
    return os;
}

//inline string tab( int tabcount )
//{
//    stringstream ss;
//    for (int i=0; i < tabcount; ++i)
//    {
//        ss << '\t';
//    }
//    return ss.str();
//}

inline ostream& streamLine( const string& text, ostream& os, int index_tab_count = 0 )
{
    tab( index_tab_count, os );
    os << text << endl;
    return os;
}

inline ostream& TestClassFileHeaders( const string& classNameUnderTest, ostream& os )
{
    stringstream ss;
    streamLine("#include \"TestHarness.h\"", os, 0 );
    os << "#include \"" << classNameUnderTest << ".h\"" << endl;
    streamLine("#include <string>", os, 0 );
    streamLine("#include <sstream>", os, 0 );
    streamLine("", os, 0 );
    streamLine("using namespace lexicon;", os, 0 );
    streamLine("using namespace std;", os, 0 );
    return os;
}

inline ostream& commentLine( const string& comment_text, ostream& os, int index_tab_count = 0 )
{
    tab( index_tab_count, os );
    os << "/* ";
    os << comment_text;
    os << " */" << endl;
    return os;
}

struct TestInfo
{
    string test_name;
    string class_name;
    vector<string> test_lines;
    TestInfo( const std::string& testName = "default", const string& className = "default", const vector<string>& codeLines = vector<string>() )
    : test_name( testName )
    , class_name( className )
    , test_lines( codeLines )
    {}
    
    TestInfo( const std::ostream& testName, const string& className )
    : test_name( "temp" )
    , class_name( className )
    , test_lines( vector<string>() )
    {
        stringstream temp;
        temp << testName.rdbuf();
        test_name = temp.str();
    }
    
    void addLine( const std::ostream& codeLine, int tab_indent = 0 )
    {
        stringstream temp;
        tab( tab_indent, temp );
        temp << codeLine.rdbuf();
        test_lines.push_back( temp.str() );
    }
    void addLine( const std::string& codeLine, int tab_indent = 0 )
    {
        stringstream temp;
        tab( tab_indent, temp );
        temp << codeLine;
        test_lines.push_back( temp.str() );
    }
};

inline ostream& test( const TestInfo& t, ostream& os )
{
    os << "TEST( " << t.test_name << " , " << t.class_name << " )" << endl;
    streamLine( "{" , os , 0 );
    for ( string line : t.test_lines )
    {
        streamLine( line , os , 1 );
    }
    streamLine( "}" , os , 0 );
    return os;
}

inline ostream& testGroup( const string& myComment, vector<TestInfo>& tests, ostream& os )
{
    streamLine( "", os );
    commentLine( myComment, os );
    for ( TestInfo t : tests )
    {
        test( t, os );
    }
    streamLine( "", os );
    return os;
}
inline ostream& testGroup( const string& myComment, TestInfo& single_test, ostream& os )
{
    streamLine( "", os );
    commentLine( myComment, os );
    test( single_test, os );
    streamLine( "", os );
    return os;
}

struct TestGenerator
{
public:
    TestGenerator( const MxEnumInfoValues& value ) : e( value ) {}
    MxEnumInfoValues e;
    
    ostream& includes( ostream& os )
    {
        return TestClassFileHeaders( e.CLASSNAME, os );
    }
    
    string checkEqual() const
    {
        return "CHECK_EQUAL( expected, actual )";
    }
    
    ostream& testCtorDefault( ostream& os )
    {
        TestInfo defaultCtorTest( "ctorDefault", e.CLASSNAME );
        stringstream ss;
        defaultCtorTest.addLine( ( ss << e.CLASSNAME << " e1;" ) );
        defaultCtorTest.addLine("int expected = 0;");
        defaultCtorTest.addLine("int actual = e1.getValueInt();");
        defaultCtorTest.addLine( checkEqual() );
        testGroup("default constructor test", defaultCtorTest, os );
        return os;
    }
    
    ostream& testCtorEnumValues( ostream& os )
    {
        vector<TestInfo> tests;
        for( int i=0; i < e.COUNT(); ++i )
        {

            stringstream ss;
            TestInfo thisTest( ss << "ctorEnum" << i, e.CLASSNAME );
            ss.str( std::string() );
            thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
            ss.str( std::string() );
            thisTest.addLine( ss << "int expected = " << i <<";");
            thisTest.addLine("int actual = e1.getValueInt();");
            thisTest.addLine( checkEqual() );
            tests.push_back( thisTest );
        }
        testGroup("constructor test for each possible enum value", tests, os );
        return os;
    }
    
    ostream& testCopyConstructor( ostream& os )
    {
        vector<TestInfo> tests;
        int j = 0;
        if( e.COUNT() > 1 )
        {
            j = 1;
        }
        for( int i=0; i < e.COUNT(); ++i )
        {
            stringstream ss;
            TestInfo thisTest( ss << "copyCtor" << i, e.CLASSNAME );
            ss.str( std::string() );
            thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
            ss.str( std::string() );
            thisTest.addLine( ( ss << e.CLASSNAME << " e2( e1 );" ) );
            ss.str( std::string() );
            thisTest.addLine( ss << "int expected = " << i <<";");
            thisTest.addLine("int actual = e2.getValueInt();");
            thisTest.addLine( checkEqual() );
            thisTest.addLine( "" );
            ss.str( std::string() );
            thisTest.addLine( ss << "e1.setValueInt( " << j << " );" );
            ss.str( std::string() );
            thisTest.addLine( ss << "expected = " << i << ";" );
            thisTest.addLine( "actual = e2.getValueInt();" );
            thisTest.addLine( checkEqual() );
            thisTest.addLine( "" );
            ss.str( std::string() );
            thisTest.addLine( ss << "expected = " << j << ";" );
            thisTest.addLine( "actual = e1.getValueInt();" );
            thisTest.addLine( checkEqual() );
            tests.push_back( thisTest );
            if( j < e.COUNT()-1 )
            {
                ++j;
            }
            else
            {
                j = 0;
            }
        }
        testGroup("copy constructor", tests, os );
        return os;
    }
    
    ostream& testAssignmentOperator( ostream& os )
    {
        vector<TestInfo> tests;
        int j = 0;
        if( e.COUNT() > 1 )
        {
            j = 1;
        }
        for( int i=0; i < e.COUNT(); ++i )
        {
            stringstream ss;
            TestInfo thisTest( ss << "assignmentOp" << i, e.CLASSNAME );
            ss.str( std::string() );
            thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[j] << " );" ) );
            ss.str( std::string() );
            thisTest.addLine( ( ss << e.CLASSNAME << " e2( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
            thisTest.addLine( "e1 = e2;" );
            ss.str( std::string() );
            thisTest.addLine( ss << "string expected = \"" << e.ENUMXMLVALUES[i] << "\";" );
            thisTest.addLine( "string actual = e1.toString();" );
            thisTest.addLine( checkEqual() );
            thisTest.addLine( "" );
            ss.str( std::string() );
            thisTest.addLine( ( ss << e.CLASSNAME << " e3( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[j] << " );" ) );
            ss.str( std::string() );
            thisTest.addLine( ss << "e2 = e3;" );
            ss.str( std::string() );
            thisTest.addLine( ss << "expected = \"" << e.ENUMXMLVALUES[j] << "\";" );
            thisTest.addLine( "actual = e2.toString();" );
            thisTest.addLine( checkEqual() );
            thisTest.addLine( "" );
            ss.str( std::string() );
            thisTest.addLine( ss << "expected = \"" << e.ENUMXMLVALUES[i] << "\";" );
            thisTest.addLine( "actual = e1.toString();" );
            thisTest.addLine( checkEqual() );
            thisTest.addLine( "" );
            ss.str( std::string() );
            thisTest.addLine( ss << "expected = \"" << e.ENUMXMLVALUES[i] << "\";" );
            thisTest.addLine( "actual = ( e2 = e1 ).toString();" );
            thisTest.addLine( checkEqual() );
            
            if( j < e.COUNT()-1 )
            {
                ++j;
            }
            else
            {
                j = 0;
            }
            tests.push_back( thisTest );
        }
        testGroup("assignment operator", tests, os );
        return os;
    }
    
    ostream& testGetValue( ostream& os )
    {
        vector<TestInfo> tests;
        for( int i=0; i < e.COUNT(); ++i )
        {
            if( i <= 2 || i > e.COUNT() - 3 )
            {
                stringstream ss;
                TestInfo thisTest( ss << "getValue" << i, e.CLASSNAME );
                ss.str( std::string() );
                thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                thisTest.addLine( ss << "CHECK( e1.getValue() == enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " )" );
                tests.push_back( thisTest );
            }
        }
        testGroup("getValue returns the internal enum value", tests, os );
        return os;
    }
    
    ostream& testGetValueInt( ostream& os )
    {
        vector<TestInfo> tests;
        for( int i=0; i < e.COUNT(); ++i )
        {
            stringstream ss;
            TestInfo thisTest( ss << "getValueInt" << i, e.CLASSNAME );
            ss.str( std::string() );
            thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
            ss.str( std::string() );
            thisTest.addLine( ss << "int expected = " << i << ";" );
            ss.str( std::string() );
            thisTest.addLine( ss << "int actual = e1.getValueInt();" );
            thisTest.addLine( checkEqual() );
            tests.push_back( thisTest );
        }
        testGroup("getValueInt returns the index of the enum value", tests, os );
        return os;
    }
    
    ostream& testGetCppEnumSymbolAsString( ostream& os )
    {
        vector<TestInfo> tests;
        for( int i=0; i < e.COUNT(); ++i )
        {
            stringstream ss;
            TestInfo thisTest( ss << "getCppEnumSymbolAsString" << i, e.CLASSNAME );
            ss.str( std::string() );
            thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
            ss.str( std::string() );
            thisTest.addLine( ss << "string expected = \"" << e.ENUMCPPVALUES[i] << "\";" );
            ss.str( std::string() );
            thisTest.addLine( ss << "string actual = e1.getCppEnumSymbolAsString();" );
            thisTest.addLine( checkEqual() );
            tests.push_back( thisTest );
        }
        testGroup("getCppEnumSymbolAsString returns the enum's C++ string symbol", tests, os );
        return os;
    }
    
    ostream& testToString( ostream& os )
    {
        vector<TestInfo> tests;
        for( int i=0; i < e.COUNT(); ++i )
        {
            stringstream ss;
            TestInfo thisTest( ss << "toString" << i, e.CLASSNAME );
            ss.str( std::string() );
            thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
            ss.str( std::string() );
            thisTest.addLine( ss << "string expected = \"" << e.ENUMXMLVALUES[i] << "\";" );
            ss.str( std::string() );
            thisTest.addLine( ss << "string actual = e1.toString();" );
            thisTest.addLine( checkEqual() );
            tests.push_back( thisTest );
        }
        testGroup("toString returns the enum's MusicXml string symbol", tests, os );
        return os;
    }
    
    ostream& testSetValue( ostream& os )
    {
        vector<TestInfo> tests;
        int j = 0;
        if( e.COUNT() > 1 )
        {
            j = 1;
        }
        for( int i=0; i < e.COUNT(); ++i )
        {
            if( i <= 2 || i > e.COUNT() - 3 )
            {
                stringstream ss;
                TestInfo thisTest( ss << "setValue" << i, e.CLASSNAME );
                ss.str( std::string() );
                thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[j] << " );" ) );
                thisTest.addLine( ( ss << "e1.setValue( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                thisTest.addLine( ss << "CHECK( e1.getValue() == enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " )" );
                tests.push_back( thisTest );
            }
            if( j < e.COUNT()-1 )
            {
                ++j;
            }
            else
            {
                j = 0;
            }
        }
        testGroup("setValue(enum) changes the internal value", tests, os );
        return os;
    }
    
    ostream& testsetValueInt( ostream& os )
    {
        vector<TestInfo> tests;
        int j = 0;
        if( e.COUNT() > 1 )
        {
            j = 1;
        }
        int i = 0;
        for( int crazyInt = -1; crazyInt < e.COUNT() + 1; ++crazyInt )
        {
            stringstream testName;
            testName << "setValueInt";
            if( crazyInt >= 0 )
            {
                testName << crazyInt;
            }
            else
            {
                testName << "NEG" << ( -1 * crazyInt );
            }
            stringstream ss;
            TestInfo thisTest( testName, e.CLASSNAME );
            ss.str( std::string() );
            thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[j] << " );" ) );
            stringstream testString;
            int expectedIndex = -1;
            if( crazyInt >= 0 && crazyInt < e.COUNT() )
            {
                thisTest.addLine( ( ss << "CHECK( e1.setValueInt( " << i << " ) )" ) );
                expectedIndex = i;
            }
            else
            {
                thisTest.addLine( ( ss << "CHECK( ! e1.setValueInt( " << crazyInt << " ) )" ) );
                expectedIndex = j;
            }
            
            thisTest.addLine( ss << "CHECK( e1.getValue() == enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[expectedIndex] << " )" );
            if( crazyInt <= 2 || crazyInt > e.COUNT() - 3 )
            {
                tests.push_back( thisTest );
            }
            if( j < e.COUNT()-1 )
            {
                ++j;
            }
            else
            {
                j = 0;
            }
            if( i < e.COUNT()-1 )
            {
                ++i;
            }
            else
            {
                i = 0;
            }
        }
        testGroup("setValueInt(int) takes the index, sets internal value \n   returns true/false to indicate success/failure", tests, os );
        return os;
    }
    
    ostream& testFromString( ostream& os )
    {
        vector<TestInfo> tests;
        int j = 0;
        if( e.COUNT() > 1 )
        {
            j = 1;
        }
        int i = 0;
        for( int crazyInt = -1; crazyInt < e.COUNT() + 1; ++crazyInt )
        {
            stringstream testName;
            testName << "fromString";
            if( crazyInt >= 0 )
            {
                testName << crazyInt;
            }
            else
            {
                testName << "NEG" << ( -1 * crazyInt );
            }
            stringstream ss;
            TestInfo thisTest( testName, e.CLASSNAME );
            ss.str( std::string() );
            thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[j] << " );" ) );
            stringstream testString;
            int expectedIndex = -1;
            if( crazyInt >= 0 && crazyInt < e.COUNT() )
            {
                testString << e.ENUMXMLVALUES[i];
                thisTest.addLine( ( ss << "CHECK( e1.fromString( \"" << testString.str() << "\" ) )" ) );
                expectedIndex = i;
            }
            else
            {
                testString << "crazyErrantValue" << crazyInt;
                thisTest.addLine( ( ss << "CHECK( ! e1.fromString( \"" << testString.str() << "\" ) )" ) );
                expectedIndex = j;
            }
            
            thisTest.addLine( ss << "CHECK( e1.getValue() == enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[expectedIndex] << " )" );
            tests.push_back( thisTest );
            if( j < e.COUNT()-1 )
            {
                ++j;
            }
            else
            {
                j = 0;
            }
            if( i < e.COUNT()-1 )
            {
                ++i;
            }
            else
            {
                i = 0;
            }
        }
        testGroup("fromString takes the MusicXML symbol, sets value\n   returns true/false to indicate success/failure", tests, os );
        return os;
    }
    
    ostream& testGetSize( ostream& os )
    {
        vector<TestInfo> tests;
        for( int i=0; i < e.COUNT(); ++i )
        {
            if ( i < 2 || i > e.COUNT() - 2 )
            {
                stringstream ss;
                TestInfo thisTest( ss << "getSize" << i, e.CLASSNAME );
                ss.str( std::string() );
                thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                ss.str( std::string() );
                thisTest.addLine( ss << "int expected = " << e.COUNT() << ";" );
                ss.str( std::string() );
                thisTest.addLine( ss << "int actual = e1.getSize();" );
                thisTest.addLine( checkEqual() );
                tests.push_back( thisTest );
            }
        }
        testGroup("getSize returns the count of possible enum values", tests, os );
        return os;
    }
    
    ostream& testGetXmlTypeName( ostream& os )
    {
        vector<TestInfo> tests;
        for( int i=0; i < e.COUNT(); ++i )
        {
            if ( i < 2 || i > e.COUNT() - 2 )
            {
                stringstream ss;
                TestInfo thisTest( ss << "getXmlTypeName" << i, e.CLASSNAME );
                ss.str( std::string() );
                thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                ss.str( std::string() );
                thisTest.addLine( ss << "string expected = \"" << e.MUSICXMLTYPENAME << "\";" );
                ss.str( std::string() );
                thisTest.addLine( ss << "string actual = e1.getXmlTypeName();" );
                thisTest.addLine( checkEqual() );
                tests.push_back( thisTest );
            }
        }
        testGroup("getXmlTypeName returns the typename from musicxml.xsd", tests, os );
        return os;
    }
    
    ostream& testGetClassName( ostream& os )
    {
        vector<TestInfo> tests;
        for( int i=0; i < e.COUNT(); ++i )
        {
            if ( i < 2 || i > e.COUNT() - 2 )
            {
                stringstream ss;
                TestInfo thisTest( ss << "getClassName" << i, e.CLASSNAME );
                ss.str( std::string() );
                thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                ss.str( std::string() );
                thisTest.addLine( ss << "string expected = \"" << e.CLASSNAME << "\";" );
                ss.str( std::string() );
                thisTest.addLine( ss << "string actual = e1.getClassName();" );
                thisTest.addLine( checkEqual() );
                tests.push_back( thisTest );
            }
        }
        testGroup("getClassName returns the name of the C++ class", tests, os );
        return os;
    }
    
    
    ostream& testGetDocumentation( ostream& os )
    {
        vector<TestInfo> tests;
        for( int i=0; i < e.COUNT(); ++i )
        {
            if ( i < 2 || i > e.COUNT() - 2 )
            {
                stringstream ss;
                TestInfo thisTest( ss << "getDocumentation" << i, e.CLASSNAME );
                ss.str( std::string() );
                thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                ss.str( std::string() );
                thisTest.addLine( ss << "string expected = \"" << sanitizeString( e.DOCUMENTATION ) << "\";" );
                ss.str( std::string() );
                thisTest.addLine( ss << "string actual = e1.getDocumentation();" );
                thisTest.addLine( checkEqual() );
                tests.push_back( thisTest );
            }
        }
        testGroup("getDocumentation returns the name of the C++ class", tests, os );
        return os;
    }
    
    ostream& testStream( ostream& os )
    {
        vector<TestInfo> tests;
        for( int i=0; i < e.COUNT(); ++i )
        {
            if ( i < 2 || i > e.COUNT() - 2 )
            {
                stringstream ss;
                TestInfo thisTest( ss << "stream" << i, e.CLASSNAME );
                ss.str( std::string() );
                thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                ss.str( std::string() );
                thisTest.addLine( ss << "stringstream ss;" );
                ss.str( std::string() );
                thisTest.addLine( ss << "e1.stream( ss );" );
                ss.str( std::string() );
                thisTest.addLine( ss << "string expected = \"" << e.ENUMXMLVALUES[i] << "\";" );
                ss.str( std::string() );
                thisTest.addLine( ss << "string actual = ss.str();" );
                thisTest.addLine( checkEqual() );
                ss.str( std::string() );
                thisTest.addLine( ss << "stringstream ss2;" );
                ss.str( std::string() );
                thisTest.addLine( ss << "stringstream ss3;" );
                ss.str( std::string() );
                thisTest.addLine( ss << "ss3 << ( e1.stream( ss2 ) ).rdbuf();" );
                ss.str( std::string() );
                thisTest.addLine( ss << "expected = \"" << e.ENUMXMLVALUES[i] << "\";" );
                ss.str( std::string() );
                thisTest.addLine( ss << "actual = ss3.str();" );
                thisTest.addLine( checkEqual() );
                tests.push_back( thisTest );
            }
        }
        testGroup("stream stream the enum's MusicXml string symbol", tests, os );
        return os;
    }
    
    
    ostream& testStreamingOperator( ostream& os )
    {
        vector<TestInfo> tests;
        for( int i=0; i < e.COUNT(); ++i )
        {
            if ( i < 2 || i > e.COUNT() - 2 )
            {
                stringstream ss;
                TestInfo thisTest( ss << "streamingOperator" << i, e.CLASSNAME );
                ss.str( std::string() );
                thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                ss.str( std::string() );
                thisTest.addLine( ss << "stringstream ss;" );
                ss.str( std::string() );
                thisTest.addLine( ss << "ss << e1;" );
                ss.str( std::string() );
                thisTest.addLine( ss << "string expected = \"" << e.ENUMXMLVALUES[i] << "\";" );
                ss.str( std::string() );
                thisTest.addLine( ss << "string actual = ss.str();" );
                thisTest.addLine( checkEqual() );
                ss.str( std::string() );
                thisTest.addLine( ss << "stringstream ss2;" );
                ss.str( std::string() );
                thisTest.addLine( ss << "stringstream ss3;" );
                ss.str( std::string() );
                thisTest.addLine( ss << "ss3 << ( ss2 << e1 ).rdbuf();" );
                ss.str( std::string() );
                thisTest.addLine( ss << "expected = \"" << e.ENUMXMLVALUES[i] << "\";" );
                ss.str( std::string() );
                thisTest.addLine( ss << "actual = ss3.str();" );
                thisTest.addLine( checkEqual() );
                tests.push_back( thisTest );
            }
        }
        testGroup("streaming operator streams the enum's MusicXml string symbol", tests, os );
        return os;
    }
    
    ostream& testEqualityOperators( ostream& os )
    {
        vector<TestInfo> tests;
        for( int j=0; j < e.COUNT(); ++j )
        {
            for( int i=0; i < e.COUNT(); ++i )
            {
                if ( j < 2 || j > e.COUNT() - 2 )
                {
                    if ( i < 2 || i > e.COUNT() - 2 )
                    {
                        stringstream ss;
                        TestInfo thisTest( ss << "equalsEquals_" << boolalpha << ( i == j ) << "_" << j << "equals" << i, e.CLASSNAME );
                        ss.str( string() );
                        thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                        ss.str( string() );
                        thisTest.addLine( ( ss << e.CLASSNAME << " e2( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[j] << " );" ) );
                        ss.str( string() );
                        ss << "bool expected = " << boolalpha << ( i == j ) << ";";
                        thisTest.addLine( ss );
                        ss.str( string() );
                        ss << "bool actual = ( e1 == e2 ); ";
                        thisTest.addLine( ss );
                        thisTest.addLine( checkEqual() );
                        tests.push_back( thisTest );
                    }
                }
            }
        }
        for( int j=0; j < e.COUNT(); ++j )
        {
            for( int i=0; i < e.COUNT(); ++i )
            {
                if ( j < 2 || j > e.COUNT() - 2 )
                {
                    if ( i < 2 || i > e.COUNT() - 2 )
                    {
                        stringstream ss;
                        TestInfo thisTest( ss << "notEquals_" << boolalpha << ( i != j ) << "_" << j << "equals" << i, e.CLASSNAME );
                        ss.str( string() );
                        thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                        ss.str( string() );
                        thisTest.addLine( ( ss << e.CLASSNAME << " e2( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[j] << " );" ) );
                        ss.str( string() );
                        ss << "bool expected = " << boolalpha << ( i != j ) << ";";
                        thisTest.addLine( ss );
                        ss.str( string() );
                        ss << "bool actual = ( e1 != e2 ); ";
                        thisTest.addLine( ss );
                        thisTest.addLine( checkEqual() );
                        tests.push_back( thisTest );
                    }
                }
            }
        }
        testGroup("equality operators", tests, os );
        return os;
    }
    
    ostream& testComparisonOperators( ostream& os )
    {
        vector<TestInfo> tests;
        for( int j=0; j < e.COUNT(); ++j )
        {
            for( int i=0; i < e.COUNT(); ++i )
            {
                if ( j < 2 || j > e.COUNT() - 2 )
                {
                    if ( i < 2 || i > e.COUNT() - 2 )
                    {
                        stringstream ss;
                        TestInfo thisTest( ss << "lessThanOrEqual_" << boolalpha << ( i <= j ) << "_" << i << "islessthanoreq" << j, e.CLASSNAME );
                        ss.str( string() );
                        thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                        ss.str( string() );
                        thisTest.addLine( ( ss << e.CLASSNAME << " e2( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[j] << " );" ) );
                        ss.str( string() );
                        ss << "bool expected = " << boolalpha << ( i <= j ) << ";";
                        thisTest.addLine( ss );
                        ss.str( string() );
                        ss << "bool actual = ( e1 <= e2 ); ";
                        thisTest.addLine( ss );
                        thisTest.addLine( checkEqual() );
                        tests.push_back( thisTest );
                    }
                }
            }
        }
        for( int j=0; j < e.COUNT(); ++j )
        {
            for( int i=0; i < e.COUNT(); ++i )
            {
                if ( j < 2 || j > e.COUNT() - 2 )
                {
                    if ( i < 2 || i > e.COUNT() - 2 )
                    {
                        stringstream ss;
                        TestInfo thisTest( ss << "greaterThan_" << boolalpha << ( i >= j ) << "_" << i << "isgreaterthanoreq" << j, e.CLASSNAME );
                        ss.str( string() );
                        thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                        ss.str( string() );
                        thisTest.addLine( ( ss << e.CLASSNAME << " e2( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[j] << " );" ) );
                        ss.str( string() );
                        ss << "bool expected = " << boolalpha << ( i >= j ) << ";";
                        thisTest.addLine( ss );
                        ss.str( string() );
                        ss << "bool actual = ( e1 >= e2 ); ";
                        thisTest.addLine( ss );
                        thisTest.addLine( checkEqual() );
                        tests.push_back( thisTest );
                    }
                }
            }
        }
        for( int j=0; j < e.COUNT(); ++j )
        {
            for( int i=0; i < e.COUNT(); ++i )
            {
                if ( j < 2 || j > e.COUNT() - 2 )
                {
                    if ( i < 2 || i > e.COUNT() - 2 )
                    {
                        stringstream ss;
                        TestInfo thisTest( ss << "lessThan_" << boolalpha << ( i < j ) << "_" << i << "islessthan" << j, e.CLASSNAME );
                        ss.str( string() );
                        thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                        ss.str( string() );
                        thisTest.addLine( ( ss << e.CLASSNAME << " e2( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[j] << " );" ) );
                        ss.str( string() );
                        ss << "bool expected = " << boolalpha << ( i < j ) << ";";
                        thisTest.addLine( ss );
                        ss.str( string() );
                        ss << "bool actual = ( e1 < e2 ); ";
                        thisTest.addLine( ss );
                        thisTest.addLine( checkEqual() );
                        tests.push_back( thisTest );
                    }
                }
            }
        }
        for( int j=0; j < e.COUNT(); ++j )
        {
            for( int i=0; i < e.COUNT(); ++i )
            {
                if ( j < 2 || j > e.COUNT() - 2 )
                {
                    if ( i < 2 || i > e.COUNT() - 2 )
                    {
                        stringstream ss;
                        TestInfo thisTest( ss << "greaterThan_" << boolalpha << ( i > j ) << "_" << i << "isgreaterthan" << j, e.CLASSNAME );
                        ss.str( string() );
                        thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                        ss.str( string() );
                        thisTest.addLine( ( ss << e.CLASSNAME << " e2( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[j] << " );" ) );
                        ss.str( string() );
                        ss << "bool expected = " << boolalpha << ( i > j ) << ";";
                        thisTest.addLine( ss );
                        ss.str( string() );
                        ss << "bool actual = ( e1 > e2 ); ";
                        thisTest.addLine( ss );
                        thisTest.addLine( checkEqual() );
                        tests.push_back( thisTest );
                    }
                }
            }
        }
        testGroup("comparison operators compare the result of getValueInt", tests, os );
        return os;
    }
    
    ostream& testIncrementDecrement( ostream& os )
    {
        int start = e.COUNT() - 1;
        if ( start < 0 )
        {
            start = 0;
        }
        vector<TestInfo> tests;
        for( int j = start; j < e.COUNT() + 1; ++j )
        {
            for( int i=0; i < e.COUNT(); ++i )
            {
                stringstream ss;
                TestInfo thisTest( ss << "incrementPre_start" << i << "_" << j <<"times", e.CLASSNAME );
                ss.str( string() );
                thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                ss.str( string() );
                thisTest.addLine( ( ss << e.CLASSNAME << " e2( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                ss.str( string() );
                thisTest.addLine( ss << "for( int i = 0; i < " << j << "; ++i )" );
                thisTest.addLine( "{" );
                thisTest.addLine( ss << "e2 = ++e1;", 1 );
                thisTest.addLine( "}" );
                int expected = i;
                for( int k = 0; k < j; ++k )
                {
                    if( expected == e.COUNT() - 1 )
                    {
                        expected = 0;
                    }
                    else
                    {
                        ++expected;
                    }
                }
                ss.str( string() );
                thisTest.addLine( ss << "string expected = \"" << e.ENUMCPPVALUES[expected] << "\";" );
                ss.str( string() );
                thisTest.addLine( ss << "string actual = e1.getCppEnumSymbolAsString();" );
                ss.str( string() );
                thisTest.addLine( checkEqual() );
                thisTest.addLine( ss << "expected = \"" << e.ENUMCPPVALUES[expected] << "\";" );
                ss.str( string() );
                thisTest.addLine( ss << "actual = e2.getCppEnumSymbolAsString();" );
                thisTest.addLine( checkEqual() );
                if ( i < 2 || i > e.COUNT() - 2 )
                {
                    tests.push_back( thisTest );
                }
            }
        }
        for( int j = start; j < e.COUNT() + 1; ++j )
        {
            for( int i=0; i < e.COUNT(); ++i )
            {
                stringstream ss;
                TestInfo thisTest( ss << "decrementPre_start" << i << "_" << j <<"times", e.CLASSNAME );
                ss.str( string() );
                thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                ss.str( string() );
                thisTest.addLine( ( ss << e.CLASSNAME << " e2( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                ss.str( string() );
                thisTest.addLine( ss << "for( int i = 0; i < " << j << "; ++i )" );
                thisTest.addLine( "{" );
                thisTest.addLine( ss << "e2 = --e1;", 1 );
                thisTest.addLine( "}" );
                int expected = i;
                for( int k = 0; k < j; ++k )
                {
                    if( expected == 0 )
                    {
                        expected = e.COUNT() - 1;
                    }
                    else
                    {
                        --expected;
                    }
                }
                ss.str( string() );
                thisTest.addLine( ss << "string expected = \"" << e.ENUMCPPVALUES[expected] << "\";" );
                ss.str( string() );
                thisTest.addLine( ss << "string actual = e1.getCppEnumSymbolAsString();" );
                ss.str( string() );
                thisTest.addLine( checkEqual() );
                thisTest.addLine( ss << "expected = \"" << e.ENUMCPPVALUES[expected] << "\";" );
                ss.str( string() );
                thisTest.addLine( ss << "actual = e2.getCppEnumSymbolAsString();" );
                thisTest.addLine( checkEqual() );
                if ( i < 2 || i > e.COUNT() - 2 )
                {
                    tests.push_back( thisTest );
                }
            }
        }
        for( int j = start; j < e.COUNT() + 1; ++j )
        {
            for( int i=0; i < e.COUNT(); ++i )
            {
                stringstream ss;
                TestInfo thisTest( ss << "incrementPost_start" << i << "_" << j <<"times", e.CLASSNAME );
                ss.str( string() );
                thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                ss.str( string() );
                thisTest.addLine( ( ss << e.CLASSNAME << " e2( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                ss.str( string() );
                thisTest.addLine( ss << "for( int i = 0; i < " << j << "; ++i )" );
                thisTest.addLine( "{" );
                thisTest.addLine( ss << "e2 = e1++;", 1 );
                thisTest.addLine( "}" );
                int expected = i;
                for( int k = 0; k < j; ++k )
                {
                    if( expected == e.COUNT() - 1 )
                    {
                        expected = 0;
                    }
                    else
                    {
                        ++expected;
                    }
                }
                ss.str( string() );
                thisTest.addLine( ss << "string expected = \"" << e.ENUMCPPVALUES[expected] << "\";" );
                ss.str( string() );
                thisTest.addLine( ss << "string actual = e1.getCppEnumSymbolAsString();" );
                ss.str( string() );
                thisTest.addLine( checkEqual() );
                if( expected == 0 )
                {
                    expected = e.COUNT() - 1;
                }
                else
                {
                    --expected;
                }
                thisTest.addLine( ss << "expected = \"" << e.ENUMCPPVALUES[expected] << "\";" );
                ss.str( string() );
                thisTest.addLine( ss << "actual = e2.getCppEnumSymbolAsString();" );
                thisTest.addLine( checkEqual() );
                if ( i < 2 || i > e.COUNT() - 2 )
                {
                    tests.push_back( thisTest );
                }
            }
        }
        for( int j = start; j < e.COUNT() + 1; ++j )
        {
            for( int i=0; i < e.COUNT(); ++i )
            {
                stringstream ss;
                TestInfo thisTest( ss << "decrementPost_start" << i << "_" << j <<"times", e.CLASSNAME );
                ss.str( string() );
                thisTest.addLine( ( ss << e.CLASSNAME << " e1( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                ss.str( string() );
                thisTest.addLine( ( ss << e.CLASSNAME << " e2( enums::" << e.CPPENUMNAME << "::" << e.ENUMCPPVALUES[i] << " );" ) );
                ss.str( string() );
                thisTest.addLine( ss << "for( int i = 0; i < " << j << "; ++i )" );
                thisTest.addLine( "{" );
                thisTest.addLine( ss << "e2 = e1--;", 1 );
                thisTest.addLine( "}" );
                int expected = i;
                for( int k = 0; k < j; ++k )
                {
                    if( expected == 0 )
                    {
                        expected = e.COUNT() - 1;
                    }
                    else
                    {
                        --expected;
                    }
                }
                ss.str( string() );
                thisTest.addLine( ss << "string expected = \"" << e.ENUMCPPVALUES[expected] << "\";" );
                ss.str( string() );
                thisTest.addLine( ss << "string actual = e1.getCppEnumSymbolAsString();" );
                thisTest.addLine( checkEqual() );
                if( expected == e.COUNT() - 1 )
                {
                    expected = 0;
                }
                else
                {
                    ++expected;
                }
                ss.str( string() );
                thisTest.addLine( ss << "expected = \"" << e.ENUMCPPVALUES[expected] << "\";" );
                ss.str( string() );
                thisTest.addLine( ss << "actual = e2.getCppEnumSymbolAsString();" );
                thisTest.addLine( checkEqual() );
                if ( i < 2 || i > e.COUNT() - 2 )
                {
                    tests.push_back( thisTest );
                }
            }
        }
        testGroup("increment and decrement operators cycle through values\n    wrapping around to begining/end", tests, os );
        return os;
    }
    
    ostream& generateTests( ostream& os )
    {
        testCtorDefault( os );
        testCtorEnumValues( os );
        testCopyConstructor( os );
        testAssignmentOperator( os );
        testGetValue( os );
        testGetValueInt( os );
        testGetCppEnumSymbolAsString( os );
        testToString( os );
        testSetValue( os );
        testsetValueInt( os );
        testFromString( os );
        testGetSize( os );
        testGetXmlTypeName( os );
        testGetClassName( os );
        testGetDocumentation( os );
        testStream( os );
        testStreamingOperator( os );
        testEqualityOperators( os );
        testComparisonOperators( os );
        testIncrementDecrement( os );
        return os;
    }
};


/*

MusicXML™ Public License Version 3.0

This MusicXML™ work (including software, documents, or other related items) is being provided by the Copyright Holder under the following license. By obtaining, using and/or copying this work, each Contributor and Recipient (hereinafter, collectively known as "Licensee") agree that he/she has read, understood, and will comply with the following terms and conditions:

A. DEFINITIONS

"Copyright Holder" means MakeMusic, Inc.

"Contribution" means:

in the case of MakeMusic, Inc., the Original Program, and
in the case of each Contributor,
changes to the Program, and
additions to the Program;
where such changes and/or additions to the Program originate from and are distributed by that particular Contributor. A Contribution 'originates' from a Contributor if it was added to the Program by such Contributor itself or anyone acting on such Contributor's behalf. Contributions do not include additions to the Program which: (i) are separate modules of software distributed in conjunction with the Program under their own license agreement, and (ii) are not derivative works of the Program.
"Contributor" means MakeMusic, Inc. and any other entity that distributes the Program.

"MusicXML™ Mark" means the MusicXML™ trademark owned by MakeMusic, Inc.

"Original Program" means the original version of the software accompanying this Agreement as released by MakeMusic, Inc., including source code, object code and documentation, if any.

"Program" means the Original Program and Contributions.

"Recipient" means anyone who receives the Program under this Agreement, including all Contributors.

B. GRANT OF RIGHTS

Permission to use, copy, modify, and distribute the Program, with or without modification, for any purpose and without fee or royalty is hereby granted, provided that each Recipient include the following on ALL copies of the Program or portions thereof, including modifications, that he/she make:

The full text of this License in a location viewable to users of the redistributed or derivative work.

Any pre-existing intellectual property disclaimers, notices, or terms and conditions. If none exist, a short notice of the following form (hypertext is preferred, text is permitted) should be used within the body of any redistributed or derivative code: "© MakeMusic, Inc. All rights reserved. http://www.makemusic.com"

Notice of any changes or modifications to the MusicXML™ files, including the date changes were made. (We recommend you provide URLs to the location from which the code is derived.)

In addition, creators of derivative works must include the full text of this License in a location viewable to users of the derivative work.

Title to copyright in the Program will at all times remain with Copyright Holder.

C. NO WARRANTY

EXCEPT AS EXPRESSLY SET FORTH IN THIS AGREEMENT, THE PROGRAM IS PROVIDED ON AN "AS IS" BASIS, AND COPYRIGHT HOLDER MAKES NO WARRANTIES OR CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED INCLUDING, WITHOUT LIMITATION, ANY WARRANTIES OR CONDITIONS OF TITLE, NON-INFRINGEMENT, MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Each Recipient is solely responsible for determining the appropriateness of using and distributing the Program and assumes all risks associated with its exercise of rights under this Agreement, including but not limited to the risks and costs of program errors, compliance with applicable laws, damage to or loss of data, programs or equipment, and unavailability or interruption of operations.

D. DISCLAIMER OF LIABILITY

EXCEPT AS EXPRESSLY SET FORTH IN THIS AGREEMENT, NEITHER COPYRIGHT HOLDER NOR ANY CONTRIBUTORS SHALL HAVE ANY LIABILITY FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING WITHOUT LIMITATION LOST PROFITS), HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OR DISTRIBUTION OF THE PROGRAM OR THE EXERCISE OF ANY RIGHTS GRANTED HEREUNDER, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.

E. TRADEMARK

1. The MusicXML™ Mark (or a derivative Mark, such as MusicXML™ Plus) may not be used to identify any product or service not originating from or licensed by Copyright Holder without specific, written prior permission. However, it is acceptable for a Contributor product or service to be described as being MusicXML™-compatible, assuming that the claim is true in Copyright Holder’s reasonable judgment.

2. This License does not grant any rights to use any other trademarks owned by Copyright Holder, including without limitation "Recordare®", "Dolet®", and "In the Beginning Was the Note®", even if such marks are included in the Program. For purposes of clarification and the avoidance of doubt, the trademarks "Recordare®", "Dolet®", and "In the Beginning Was the Note®" must not be used to endorse or promote Contributor versions of the Program without the prior written permission of Copyright Holder.

3. All rights not expressly granted herein by Copyright Holder with respect to the MusicXML™ Mark or any other trademarks owned by Copyright Holder are reserved by and to Copyright Holder.

F. GENERAL

If any provision of this Agreement is invalid or unenforceable under applicable law, it shall not affect the validity or enforceability of the remainder of the terms of this Agreement, and without further action by the parties hereto, such provision shall be reformed to the minimum extent necessary to make such provision valid and enforceable.

All Recipient's rights under this Agreement shall terminate if it fails to comply with any of the material terms or conditions of this Agreement and does not cure such failure in a reasonable period of time after becoming aware of such noncompliance. If all Recipient's rights under this Agreement terminate, Recipient agrees to cease use and distribution of the Program as soon as reasonably practicable. However, Recipient's obligations under this Agreement and any licenses granted by Recipient relating to the Program shall continue and survive.

MakeMusic, Inc. may publish new versions (including revisions) of this Agreement from time to time. Each new version of the Agreement will be given a distinguishing version number. The Program (including Contributions) may always be distributed subject to the version of the Agreement under which it was received. In addition, after a new version of the Agreement is published, Contributor may elect to distribute the Program (including its Contributions) under the new version. No one other than MakeMusic, Inc. has the right to modify this Agreement. Except as expressly stated in Sections B and E above, Recipient receives no rights or licenses to the intellectual property of any Contributor under this Agreement, whether expressly, by implication, estoppel or otherwise. All rights in the Program not expressly granted under this Agreement are reserved.

This Agreement is governed by the laws of the State of California and the intellectual property laws of the United States of America.


*/

