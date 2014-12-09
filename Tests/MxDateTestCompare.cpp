#if 1==1

#include "TestHarness.h"
#include "MxDate.h"

using namespace lexicon;

TEST(dateCompare_equals01, MxDate)
{
    MxDate d1( 2014, 6, 7 );
    MxDate d2( 2014, 6, 7 );
    bool expected = true;
    bool actual = d1 == d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_equals02, MxDate)
{
    MxDate d1( 1023, 12, 31 );
    MxDate d2( 1003, 12, 31 );
    bool expected = false;
    bool actual = d1 == d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_equals03, MxDate)
{
    MxDate d1( 3001, 4, 17 );
    MxDate d2( 3001, 10, 17 );
    bool expected = false;
    bool actual = d1 == d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_equals04, MxDate)
{
    MxDate d1( 1893, 12, 30 );
    MxDate d2( 1893, 12, 31 );
    bool expected = false;
    bool actual = d1 == d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_equals05, MxDate)
{
    MxDate d1( 9875, 3, 5 );
    MxDate d2( 9875, 3, 5 );
    bool expected = true;
    bool actual = d1 == d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_notequals01, MxDate)
{
    MxDate d1( 2014, 6, 7 );
    MxDate d2( 2014, 6, 7 );
    bool expected = false;
    bool actual = d1 != d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_notequals02, MxDate)
{
    MxDate d1( 1023, 12, 31 );
    MxDate d2( 1003, 12, 31 );
    bool expected = true;
    bool actual = d1 != d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_notequals03, MxDate)
{
    MxDate d1( 3001, 4, 17 );
    MxDate d2( 3001, 10, 17 );
    bool expected = true;
    bool actual = d1 != d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_notequals04, MxDate)
{
    MxDate d1( 1893, 12, 30 );
    MxDate d2( 1893, 12, 31 );
    bool expected = true;
    bool actual = d1 != d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_notequals05, MxDate)
{
    MxDate d1( 9875, 3, 5 );
    MxDate d2( 9875, 3, 5 );
    bool expected = false;
    bool actual = d1 != d2;
    CHECK_EQUAL( expected, actual )
}

TEST(dateCompare_greater_true_day, MxDate)
{
    MxDate d1( 1111, 1, 2 );
    MxDate d2( 1111, 1, 1 );
    bool expected = true;
    bool actual = d1 > d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_greater_true_month, MxDate)
{
    MxDate d1( 2222, 4, 10 );
    MxDate d2( 2222, 3, 10 );
    bool expected = true;
    bool actual = d1 > d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_greater_true_year, MxDate)
{
    MxDate d1( 1753, 12, 31 );
    MxDate d2( 1752, 12, 31 );
    bool expected = true;
    bool actual = d1 > d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_greater_false_day, MxDate)
{
    MxDate d1( 7382, 2, 1 );
    MxDate d2( 7382, 2, 31 );
    bool expected = false;
    bool actual = d1 > d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_greater_false_month, MxDate)
{
    MxDate d1( 2014, 1, 13 );
    MxDate d2( 2014, 12, 13 );
    bool expected = false;
    bool actual = d1 > d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_greater_false_year, MxDate)
{
    MxDate d1( 1492, 12, 31 );
    MxDate d2( 1493, 1, 1 );
    bool expected = false;
    bool actual = d1 > d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_greater_falseEq_day, MxDate)
{
    MxDate d1( 1320, 2, 29 );
    MxDate d2( 1320, 2, 29 );
    bool expected = false;
    bool actual = d1 > d2;
    CHECK_EQUAL( expected, actual )
}


TEST(dateCompare_less_true_day, MxDate)
{
    MxDate d1( 1111, 1, 2 );
    MxDate d2( 1111, 1, 1 );
    bool expected = false;
    bool actual = d1 < d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_less_true_month, MxDate)
{
    MxDate d1( 2222, 4, 10 );
    MxDate d2( 2222, 3, 10 );
    bool expected = false;
    bool actual = d1 < d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_less_true_year, MxDate)
{
    MxDate d1( 1753, 12, 31 );
    MxDate d2( 1752, 12, 31 );
    bool expected = false;
    bool actual = d1 < d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_less_false_day, MxDate)
{
    MxDate d1( 7382, 2, 1 );
    MxDate d2( 7382, 2, 31 );
    bool expected = true;
    bool actual = d1 < d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_less_false_month, MxDate)
{
    MxDate d1( 2014, 1, 13 );
    MxDate d2( 2014, 12, 13 );
    bool expected = true;
    bool actual = d1 < d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_less_false_year, MxDate)
{
    MxDate d1( 1492, 12, 31 );
    MxDate d2( 1493, 1, 1 );
    bool expected = true;
    bool actual = d1 < d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateCompare_less_falseEq_day, MxDate)
{
    MxDate d1( 1320, 2, 29 );
    MxDate d2( 1320, 2, 29 );
    bool expected = false;
    bool actual = d1 < d2;
    CHECK_EQUAL( expected, actual )
}


TEST(dateComare_EqOr_greater_true_day, MxDate)
{
    MxDate d1( 1111, 1, 2 );
    MxDate d2( 1111, 1, 1 );
    bool expected = true;
    bool actual = d1 >= d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateComare_EqOr_greater_true_month, MxDate)
{
    MxDate d1( 2222, 4, 10 );
    MxDate d2( 2222, 3, 10 );
    bool expected = true;
    bool actual = d1 >= d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateComare_EqOr_greater_true_year, MxDate)
{
    MxDate d1( 1753, 12, 31 );
    MxDate d2( 1752, 12, 31 );
    bool expected = true;
    bool actual = d1 >= d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateComare_EqOr_greater_false_day, MxDate)
{
    MxDate d1( 7382, 2, 1 );
    MxDate d2( 7382, 2, 31 );
    bool expected = false;
    bool actual = d1 >= d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateComare_EqOr_greater_false_month, MxDate)
{
    MxDate d1( 2014, 1, 13 );
    MxDate d2( 2014, 12, 13 );
    bool expected = false;
    bool actual = d1 >= d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateComare_EqOr_greater_false_year, MxDate)
{
    MxDate d1( 1492, 12, 31 );
    MxDate d2( 1493, 1, 1 );
    bool expected = false;
    bool actual = d1 >= d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateComare_EqOr_greater_trueEq_day, MxDate)
{
    MxDate d1( 1320, 2, 29 );
    MxDate d2( 1320, 2, 29 );
    bool expected = true;
    bool actual = d1 >= d2;
    CHECK_EQUAL( expected, actual )
}


TEST(dateComare_EqOr_less_true_day, MxDate)
{
    MxDate d1( 1111, 1, 2 );
    MxDate d2( 1111, 1, 1 );
    bool expected = false;
    bool actual = d1 <= d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateComare_EqOr_less_true_month, MxDate)
{
    MxDate d1( 2222, 4, 10 );
    MxDate d2( 2222, 3, 10 );
    bool expected = false;
    bool actual = d1 <= d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateComare_EqOr_less_true_year, MxDate)
{
    MxDate d1( 1753, 12, 31 );
    MxDate d2( 1752, 12, 31 );
    bool expected = false;
    bool actual = d1 <= d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateComare_EqOr_less_false_day, MxDate)
{
    MxDate d1( 7382, 2, 1 );
    MxDate d2( 7382, 2, 31 );
    bool expected = true;
    bool actual = d1 <= d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateComare_EqOr_less_false_month, MxDate)
{
    MxDate d1( 2014, 1, 13 );
    MxDate d2( 2014, 12, 13 );
    bool expected = true;
    bool actual = d1 <= d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateComare_EqOr_less_false_year, MxDate)
{
    MxDate d1( 1492, 12, 31 );
    MxDate d2( 1493, 1, 1 );
    bool expected = true;
    bool actual = d1 <= d2;
    CHECK_EQUAL( expected, actual )
}
TEST(dateComare_EqOr_less_trueEq_day, MxDate)
{
    MxDate d1( 1320, 2, 29 );
    MxDate d2( 1320, 2, 29 );
    bool expected = true;
    bool actual = d1 <= d2;
    CHECK_EQUAL( expected, actual )
}

#endif
