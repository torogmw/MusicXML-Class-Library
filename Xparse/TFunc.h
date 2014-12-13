/* matthew james briggs */

#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <sstream>
#include "TestCode.h"
#include "IClassBldr.h"
#include "TestGroup.h"

namespace mjb
{
    class TFunc
    {

    public:
        static void setClassBldr( IClassBldr* bldr );
        static void setTestNumber( int testNumberResetValue );
        static TestCode testStub() ;
        static TestCode testStub( const std::string& testNameStr ) ;
        static TestCode testStub( int numObjects, const std::string& exacDataType, const std::string& testNameStr = "" ) ;
        static std::string testName() ;
        static std::string testName( const std::string& testNameStr ) ;
        static TestGroup getClassInfoTests() ;
        static std::string defaultConstructedInstantiation( const std::string& variableName = "object" ) ;
        
        static void checkEqDeclare( mjb::TestCode& test, const std::string& dataType ) ;
        static void checkEq( mjb::TestCode& test,
                     const std::string& expectedValue,
                     const std::string& actualValue ) ;
        
        static std::string testFileStart() ;
        
        const IClassBldr* getClassBldr() ;
    private:
        static IClassBldr* ourClassBldr;
        static int ourTestNumber;
    };
}