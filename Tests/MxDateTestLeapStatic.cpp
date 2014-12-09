#if 1==1

#include "TestHarness.h"
#include "MxDate.h"

using namespace lexicon;

TEST(static_isLeapYear_20050519, MxDate)
{
    bool expected = false;
    MxDate date; bool actual = date.isLeapYear( 2005 );
    CHECK_EQUAL( expected, actual )
}

TEST(static_isLeapYear_20400216, MxDate)
{
    bool expected = true;
    MxDate date; bool actual = date.isLeapYear( 2040 );
    CHECK_EQUAL( expected, actual )
}

TEST(static_isLeapYear_20220523, MxDate)
{
    bool expected = false;
    MxDate date; bool actual = date.isLeapYear( 2022 );
    CHECK_EQUAL( expected, actual )
}

TEST(static_isLeapYear_19850316, MxDate)
{
    bool expected = false;
    MxDate date; bool actual = date.isLeapYear( 1985 );
    CHECK_EQUAL( expected, actual )
}

TEST(static_isLeapYear_20691008, MxDate)
{
    bool expected = false;
    MxDate date; bool actual = date.isLeapYear( 2069 );
    CHECK_EQUAL( expected, actual )
}

TEST(static_isLeapYear_20591221, MxDate)
{
    bool expected = false;
    MxDate date; bool actual = date.isLeapYear( 2059 );
    CHECK_EQUAL( expected, actual )
}

TEST(static_isLeapYear_20621108, MxDate)
{
    bool expected = false;
    MxDate date; bool actual = date.isLeapYear( 2062 );
    CHECK_EQUAL( expected, actual )
}

TEST(static_isLeapYear_20600108, MxDate)
{
    bool expected = true;
    MxDate date; bool actual = date.isLeapYear( 2060 );
    CHECK_EQUAL( expected, actual )
}

TEST(static_isLeapYear_20540410, MxDate)
{
    bool expected = false;
    MxDate date; bool actual = date.isLeapYear( 2054 );
    CHECK_EQUAL( expected, actual )
}

TEST(static_isLeapYear_20201006, MxDate)
{
    bool expected = true;
    MxDate date; bool actual = date.isLeapYear( 2020 );
    CHECK_EQUAL( expected, actual )
}

TEST(static_isLeapYear_20320410, MxDate)
{
    bool expected = true;
    MxDate date; bool actual = date.isLeapYear( 2032 );
    CHECK_EQUAL( expected, actual )
}

TEST(static_isLeapYear_20260418, MxDate)
{
    bool expected = false;
    MxDate date; bool actual = date.isLeapYear( 2026 );
    CHECK_EQUAL( expected, actual )
}

TEST(static_isLeapYear_20310220, MxDate)
{
    bool expected = false;
    MxDate date; bool actual = date.isLeapYear( 2031 );
    CHECK_EQUAL( expected, actual )
}

TEST(static_isLeapYear_19960509, MxDate)
{
    bool expected = true;
    MxDate date; bool actual = date.isLeapYear( 1996 );
    CHECK_EQUAL( expected, actual )
}

#endif