#include "TestHarness.h"
#include "MxStrings.h"

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

