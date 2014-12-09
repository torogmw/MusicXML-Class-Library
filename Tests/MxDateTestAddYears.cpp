#if 1==1

#include "TestHarness.h"
#include "MxDate.h"

using namespace lexicon;

TEST(addYears01_outofleap, MxDate)
{
    MxDate d1( 2060, 2, 29 );
    MxDate d2 = d1.addYears( 1 );
    MxDate expected( 2061, 3, 1 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
}

TEST(addYears02_outofleap, MxDate)
{
    MxDate d1( 2040, 2, 29 );
    MxDate d2 = d1.addYears( -3 );
    MxDate expected( 2037, 3, 1 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
}

TEST(addYears03_outofrange, MxDate)
{
    MxDate d1( 9999, 5, 31 );
    MxDate d2 = d1.addYears( 1 );
    MxDate expected( 9999, 5, 31 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
}

TEST(addYears04_outofrange, MxDate)
{
    MxDate d1( 1, 2, 12 );
    MxDate d2 = d1.addYears( -1 );
    MxDate expected( 1, 2, 12 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
}

TEST(addYears05, MxDate)
{
    MxDate d1( 2014, 8, 12 );
    MxDate d2 = d1.addYears( 31 );
    MxDate expected( 2045, 8, 12 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
}

TEST(addYears06, MxDate)
{
    MxDate d1( 1996, 9, 30 );
    MxDate d2 = d1.addYears( -11 );
    MxDate expected( 1985, 9, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
}

#endif