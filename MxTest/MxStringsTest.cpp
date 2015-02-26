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
TEST( XsNMToken01, MxStrings )
{
    XsNMToken x;
    StringType expected = "";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsNMToken02, MxStrings )
{
    XsNMToken x( "Test" );
    StringType expected = "Test";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsNMToken03, MxStrings )
{
    XsNMToken x( "\n\t  Test \r \t \n String  \t" );
    StringType expected = "Test String";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}

TEST( XsID01, MxStrings )
{
    XsID x( "$%#1" );
    StringType expected = "___1";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsID02, MxStrings )
{
    XsID x( "" );
    StringType expected = "ID";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsID03, MxStrings )
{
    XsID x( "123" );
    StringType expected = "ID123";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsID04, MxStrings )
{
    XsID x( "ABC045" );
    StringType expected = "ABC045";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}

TEST( XsID05, MxStrings )
{
    XsID x( "X 21" );
    StringType expected = "X_21";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}

TEST(  XsIDREF01, MxStrings )
{
     XsIDREF x( "$%#1" );
    StringType expected = "___1";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST(  XsIDREF02, MxStrings )
{
     XsIDREF x( "" );
    StringType expected = "ID";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST(  XsIDREF03, MxStrings )
{
     XsIDREF x( "123" );
    StringType expected = "ID123";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST(  XsIDREF04, MxStrings )
{
     XsIDREF x( "ABC045" );
    StringType expected = "ABC045";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}

TEST(  XsIDREF05, MxStrings )
{
     XsIDREF x( "X 21" );
    StringType expected = "X_21";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}