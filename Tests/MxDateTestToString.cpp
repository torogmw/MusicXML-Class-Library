#include "TestHarness.h"
#include "MxDate.h"
#include <string>

using namespace lexicon;

TEST( toString01, MxDate )
{
    MxDate d;
    CHECK_EQUAL( d.getYear(), 1900 );
    CHECK_EQUAL( d.getMonth(), 1 );
    CHECK_EQUAL( d.getDay(), 1 );
    std::string expected = "1900-01-01";
    std::string actual = d.toString();
    CHECK_EQUAL( expected, actual )
}

TEST( toString02, MxDate )
{
    int year = 300;
    int month = 8;
    int day = 1;
    MxDate d ( year, month, day );
    CHECK_EQUAL( d.getYear(), year );
    CHECK_EQUAL( d.getMonth(), month );
    CHECK_EQUAL( d.getDay(), day );
    std::string expected = "0300-08-01";
    std::string actual = d.toString();
    CHECK_EQUAL( expected, actual )
}

TEST( toString03, MxDate )
{
    int year = 1500;
    int month = 12;
    int day = 10;
    MxDate d ( year, month, day );
    CHECK_EQUAL( d.getYear(), year );
    CHECK_EQUAL( d.getMonth(), month );
    CHECK_EQUAL( d.getDay(), day );
    std::string expected = "1500-12-10";
    std::string actual = d.toString();
    CHECK_EQUAL( expected, actual )
}
