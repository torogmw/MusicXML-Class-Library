/* matthew james briggs */

#include "TFunc.h"
#include <iomanip>

namespace mjb
{
    IClassBldr* TFunc::ourClassBldr = nullptr;
    int TFunc::ourTestNumber = 0;
    
    void TFunc::setClassBldr(mjb::IClassBldr *bldr)
    {
        ourClassBldr = bldr;
    }
    void TFunc::setTestNumber(int testNumberResetValue)
    {
        ourTestNumber = testNumberResetValue;
    }
    TestCode TFunc::testStub()
    {
        TestCode t( testName(), ourClassBldr->getName() );
        return t;
    }
    TestCode TFunc::testStub( const std::string& testNameStr )
    {
        TestCode t( testName( testNameStr ), ourClassBldr->getName() );
        return t;
    }
    
    TestCode TFunc::testStub( int numObjects, const std::string& exacDataType, const std::string& testNameStr )
    {
        TestCode test = testStub( testNameStr );
        if( numObjects > 1 )
        {
            for ( int i = 0; i < numObjects; ++i )
            {
                std::stringstream ss;
                ss << "object" << i;
                test.addCodeLine( 0, defaultConstructedInstantiation( ss.str() ) );
            }
        }
        else
        {
            test.addCodeLine( 0, defaultConstructedInstantiation( "object" ) );
        }
        checkEqDeclare( test, exacDataType );
        return test;
    }
    
    const IClassBldr* TFunc::getClassBldr()
    {
        return ourClassBldr;
    }
    
    std::string TFunc::testName()
    {
        return testName( "" );
    }
    
    std::string TFunc::testName( const std::string& testNameStr )
    {
        std::stringstream ss;
        ss << "Test";
        ss << std::setfill( '0' ) << std::setw( 4 ) << ourTestNumber;
        if ( testNameStr.size() > 0 )
        {
            ss << "_" << testNameStr;
        }
        ++ourTestNumber;
        return ss.str();
    }
    
    
    std::string TFunc::defaultConstructedInstantiation( const std::string& variableName )
    {
        std::stringstream ss;
        ss << ourClassBldr->getName() << " " << variableName << ";";
        return ss.str();
    }
    
    TestGroup TFunc::getClassInfoTests()
    {
        TestGroup grp;
        TestCode t = TFunc::testStub( "DefaultCtor" );
        t.addCodeLine( 0, defaultConstructedInstantiation() );
        t.addCodeLine( 0, TestCode::ck( "true" ) );
        grp.addTest( t );
        
        t = TFunc::testStub( "getXmlTypeName" );
        t.addCodeLine( 0, defaultConstructedInstantiation() );
        checkEqDeclare( t, "std::string" );
        checkEq( t, "\"" + ourClassBldr->getXmlName() + "\"", "object.getXmlTypeName()" );
        grp.addTest( t );
        
        t = TFunc::testStub( "getClassName" );
        t.addCodeLine( 0, defaultConstructedInstantiation() );
        checkEqDeclare( t, "std::string" );
        checkEq( t, "\"" + ourClassBldr->getName() + "\"", "object.getClassName()" );
        grp.addTest( t );
        
        t = TFunc::testStub( "getDocumentation" );
        t.addCodeLine( 0, defaultConstructedInstantiation() );
        checkEqDeclare( t, "std::string" );
        checkEq( t, "\"" + ourClassBldr->getXmlDocumentation() + "\"", "object.getDocumentation()" );
        grp.addTest( t );
        
        return grp;
    }
    
    void TFunc::checkEqDeclare( TestCode& test, const std::string& dataType )
    {
        std::stringstream expectedDeclaration;
        expectedDeclaration << dataType << " expected;";
        std::stringstream actualDeclaration;
        actualDeclaration << dataType << " actual;";
        test.addCodeLine( 0, expectedDeclaration );
        test.addCodeLine( 0, actualDeclaration );
    }
    void TFunc::checkEq( mjb::TestCode& test,
                                      const std::string& expectedValue, const std::string& actualValue )
    {
        test.addCodeLine( 0, "expected = " + expectedValue + ";" );
        test.addCodeLine( 0, "actual = " + actualValue + ";" );
        test.addCodeLine( 0, TestCode::ckEq() );
    }
    
    std::string TFunc::testFileStart()
    {
        std::stringstream ss;
        ss << "#include \"TestHarness.h\"" << end();
        ss << "#include \"" << ourClassBldr->getHFileInfo().getFileName() << "\"" << end();
        ss << "using namespace lexicon;" << end() << end();
        return  ss.str();
    }
}