#if 1==1

#include "TestHarness.h"
#include "MxDate.h"

using namespace lexicon;

TEST(isLeapYear_44600910, MxDate)
{
    MxDate d( 4460, 9, 10 );
    bool expected = true;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_48541109, MxDate)
{
    MxDate d( 4854, 11, 9 );
    bool expected = false;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_34570111, MxDate)
{
    MxDate d( 3457, 1, 11 );
    bool expected = false;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_54630605, MxDate)
{
    MxDate d( 5463, 6, 5 );
    bool expected = false;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_03370916, MxDate)
{
    MxDate d( 337, 9, 16 );
    bool expected = false;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_98841102, MxDate)
{
    MxDate d( 9884, 11, 2 );
    bool expected = true;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_68450517, MxDate)
{
    MxDate d( 6845, 5, 17 );
    bool expected = false;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_06030729, MxDate)
{
    MxDate d( 603, 7, 29 );
    bool expected = false;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_07770419, MxDate)
{
    MxDate d( 777, 4, 19 );
    bool expected = false;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_82591205, MxDate)
{
    MxDate d( 8259, 12, 5 );
    bool expected = false;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_72681020, MxDate)
{
    MxDate d( 7268, 10, 20 );
    bool expected = true;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_68970616, MxDate)
{
    MxDate d( 6897, 6, 16 );
    bool expected = false;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_83641008, MxDate)
{
    MxDate d( 8364, 10, 8 );
    bool expected = true;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}


TEST(isLeapYear_17560920, MxDate)
{
    MxDate d( 1756, 9, 20 );
    bool expected = true;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_18130224, MxDate)
{
    MxDate d( 1813, 2, 24 );
    bool expected = false;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_18640413, MxDate)
{
    MxDate d( 1864, 4, 13 );
    bool expected = true;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_17750217, MxDate)
{
    MxDate d( 1775, 2, 17 );
    bool expected = false;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_18980519, MxDate)
{
    MxDate d( 1898, 5, 19 );
    bool expected = false;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_17911120, MxDate)
{
    MxDate d( 1791, 11, 20 );
    bool expected = false;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_18850622, MxDate)
{
    MxDate d( 1885, 6, 22 );
    bool expected = false;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_18921221, MxDate)
{
    MxDate d( 1892, 12, 21 );
    bool expected = true;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}


TEST(isLeapYear_19800705, MxDate)
{
    MxDate d( 1980, 7, 5 );
    bool expected = true;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_20760716, MxDate)
{
    MxDate d( 2076, 7, 16 );
    bool expected = true;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_20730415, MxDate)
{
    MxDate d( 2073, 4, 15 );
    bool expected = false;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_20070223, MxDate)
{
    MxDate d( 2007, 2, 23 );
    bool expected = false;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_20740407, MxDate)
{
    MxDate d( 2074, 4, 7 );
    bool expected = false;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_20160823, MxDate)
{
    MxDate d( 2016, 8, 23 );
    bool expected = true;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

TEST(isLeapYear_20180901, MxDate)
{
    MxDate d( 2018, 9, 1 );
    bool expected = false;
    bool actual = d.isLeapYear();
    CHECK_EQUAL( expected, actual )
}

#endif

