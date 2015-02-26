#include "TestHarness.h"
#include "MxStrings.h"
#include <sstream>

using namespace mx::types;

TEST( XsString01, MxStrings )
{
    XsString x;
    StringType expected = "";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsString02, MxStrings )
{
    XsString x( "Test" );
    StringType expected = "Test";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsString03, MxStrings )
{
    XsString x( "Test" );
    x.setValue( "Different" );
    StringType expected = "Different";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsString04, MxStrings )
{
    XsString x( "Test" );
    x.setValue( "Think" );
    std::stringstream ss;
    toStream( ss, x );
    StringType expected = "Think";
    StringType actual = ss.str();
    CHECK_EQUAL( expected, actual )
}
TEST( XsString05, MxStrings )
{
    XsString x( "Test" );
    x.setValue( "Hello" );
    std::stringstream ss;
    ss << x;
    StringType expected = "Hello";
    StringType actual = ss.str();
    CHECK_EQUAL( expected, actual )
}
TEST( XsString06, MxStrings )
{
    XsString x( "Test" );
    x.setValue( "Hello" );
    std::stringstream ss;
    ss << x;
    StringType expected = "Hello";
    StringType actual = toString( x );
    CHECK_EQUAL( expected, actual )
}
TEST( XsToken01, MxStrings )
{
    XsToken x;
    StringType expected = "";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsToken02, MxStrings )
{
    XsToken x( "Test" );
    StringType expected = "Test";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsToken03, MxStrings )
{
    XsToken x( "\n\t  Test \r \t \n String  \t" );
    StringType expected = "Test String";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}