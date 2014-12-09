
#include "TestHarness.h"
#include "_hidden_intParse.h"

using namespace std;
using namespace lexicon;
using namespace hidden;

TEST(success01, intParse)
{
    string str = "+123";
    int expected = 123;
    int actual = -1;
    CHECK( intParse( str, actual ) );
    CHECK_EQUAL( expected, actual );
}
TEST(success02, intParse)
{
    string str = "-4532";
    int expected = -4532;
    int actual = -1;
    CHECK( intParse( str, actual ) );
    CHECK_EQUAL( expected, actual );
}
TEST(fail01, intParse)
{
    string str = "+123 ";
    int expected = -999;
    int actual = -999;
    CHECK( ! intParse( str, actual ) );
    CHECK_EQUAL( expected, actual );
}
TEST(fail02, intParse)
{
    string str = "4532.0";
    int expected = 1431;
    int actual = 1431;
    CHECK( ! intParse( str, actual ) );
    CHECK_EQUAL( expected, actual );
}

TEST(fail03, intParse)
{
    string str = "1,000,000";
    int expected = 1;
    int actual = 1;
    CHECK( ! intParse( str, actual ) );
    CHECK_EQUAL( expected, actual );
}
TEST(fail04, intParse)
{
    string str = "64,500";
    int expected = 14431;
    int actual = 14431;
    CHECK( ! intParse( str, actual ) );
    CHECK_EQUAL( expected, actual );
}