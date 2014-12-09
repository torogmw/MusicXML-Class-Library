#if 1==1

#include "TestHarness.h"
#include "MxDate.h"

using namespace lexicon;

TEST(weekday_20140607, MxDate)
{
    MxDate d( 2014, 6, 7 );
    int expected = 7;
    int actual = d.getWeekday();
    CHECK_EQUAL( expected, actual )
}

TEST(weekday_22530714, MxDate)
{
    MxDate d1( 2253, 7, 14 );
    int expected = 5;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}

TEST(weekday_11740516, MxDate)
{
    MxDate d1( 1174, 5, 16 );
    int expected = 5;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_58290910, MxDate)
{
    MxDate d1( 5829, 9, 10 );
    int expected = 5;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_82361023, MxDate)
{
    MxDate d1( 8236, 10, 23 );
    int expected = 1;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_88730204, MxDate)
{
    MxDate d1( 8873, 2, 4 );
    int expected = 7;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_72140914, MxDate)
{
    MxDate d1( 7214, 9, 14 );
    int expected = 1;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_90790927, MxDate)
{
    MxDate d1( 9079, 9, 27 );
    int expected = 7;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_65730115, MxDate)
{
    MxDate d1( 6573, 1, 15 );
    int expected = 6;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_84520920, MxDate)
{
    MxDate d1( 8452, 9, 20 );
    int expected = 6;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_98990217, MxDate)
{
    MxDate d1( 9899, 2, 17 );
    int expected = 6;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_17720401, MxDate)
{
    MxDate d1( 1772, 4, 1 );
    int expected = 4;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_38400221, MxDate)
{
    MxDate d1( 3840, 2, 21 );
    int expected = 6;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_12550615, MxDate)
{
    MxDate d1( 1255, 6, 15 );
    int expected = 3;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_64750228, MxDate)
{
    MxDate d1( 6475, 2, 28 );
    int expected = 5;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_05771013, MxDate)
{
    MxDate d1( 577, 10, 13 );
    int expected = 2;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_92430918, MxDate)
{
    MxDate d1( 9243, 9, 18 );
    int expected = 6;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_74520911, MxDate)
{
    MxDate d1( 7452, 9, 11 );
    int expected = 7;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_09360207, MxDate)
{
    MxDate d1( 936, 2, 7 );
    int expected = 3;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_98970309, MxDate)
{
    MxDate d1( 9897, 3, 9 );
    int expected = 3;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_71290818, MxDate)
{
    MxDate d1( 7129, 8, 18 );
    int expected = 1;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_95591029, MxDate)
{
    MxDate d1( 9559, 10, 29 );
    int expected = 5;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_07910904, MxDate)
{
    MxDate d1( 791, 9, 4 );
    int expected = 4;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_08780728, MxDate)
{
    MxDate d1( 878, 7, 28 );
    int expected = 5;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_95381002, MxDate)
{
    MxDate d1( 9538, 10, 2 );
    int expected = 1;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_36320721, MxDate)
{
    MxDate d1( 3632, 7, 21 );
    int expected = 4;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_11640419, MxDate)
{
    MxDate d1( 1164, 4, 19 );
    int expected = 1;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_48281128, MxDate)
{
    MxDate d1( 4828, 11, 28 );
    int expected = 3;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_53531212, MxDate)
{
    MxDate d1( 5353, 12, 12 );
    int expected = 4;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_29060210, MxDate)
{
    MxDate d1( 2906, 2, 10 );
    int expected = 4;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_50210927, MxDate)
{
    MxDate d1( 5021, 9, 27 );
    int expected = 5;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_90011225, MxDate)
{
    MxDate d1( 9001, 12, 25 );
    int expected = 6;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_86790220, MxDate)
{
    MxDate d1( 8679, 2, 20 );
    int expected = 5;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_31790909, MxDate)
{
    MxDate d1( 3179, 9, 9 );
    int expected = 1;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_85330923, MxDate)
{
    MxDate d1( 8533, 9, 23 );
    int expected = 4;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_37770109, MxDate)
{
    MxDate d1( 3777, 1, 9 );
    int expected = 5;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_00701202, MxDate)
{
    MxDate d1( 70, 12, 2 );
    int expected = 3;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_92550605, MxDate)
{
    MxDate d1( 9255, 6, 5 );
    int expected = 7;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_78840719, MxDate)
{
    MxDate d1( 7884, 7, 19 );
    int expected = 7;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_48370828, MxDate)
{
    MxDate d1( 4837, 8, 28 );
    int expected = 6;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_62770906, MxDate)
{
    MxDate d1( 6277, 9, 6 );
    int expected = 5;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_80220810, MxDate)
{
    MxDate d1( 8022, 8, 10 );
    int expected = 4;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_60130424, MxDate)
{
    MxDate d1( 6013, 4, 24 );
    int expected = 4;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_54420904, MxDate)
{
    MxDate d1( 5442, 9, 4 );
    int expected = 1;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_54781128, MxDate)
{
    MxDate d1( 5478, 11, 28 );
    int expected = 5;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_24950505, MxDate)
{
    MxDate d1( 2495, 5, 5 );
    int expected = 5;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_60960325, MxDate)
{
    MxDate d1( 6096, 3, 25 );
    int expected = 1;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_69910726, MxDate)
{
    MxDate d1( 6991, 7, 26 );
    int expected = 3;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_28660611, MxDate)
{
    MxDate d1( 2866, 6, 11 );
    int expected = 6;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_02860713, MxDate)
{
    MxDate d1( 286, 7, 13 );
    int expected = 3;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_14480512, MxDate)
{
    MxDate d1( 1448, 5, 12 );
    int expected = 6;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_65670407, MxDate)
{
    MxDate d1( 6567, 4, 7 );
    int expected = 3;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}

TEST(weekday_19810219, MxDate)
{
    MxDate d1( 1981, 2, 19 );
    int expected = 5;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_19931116, MxDate)
{
    MxDate d1( 1993, 11, 16 );
    int expected = 3;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20250620, MxDate)
{
    MxDate d1( 2025, 6, 20 );
    int expected = 6;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20230318, MxDate)
{
    MxDate d1( 2023, 3, 18 );
    int expected = 7;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20471013, MxDate)
{
    MxDate d1( 2047, 10, 13 );
    int expected = 1;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20730103, MxDate)
{
    MxDate d1( 2073, 1, 3 );
    int expected = 3;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20390117, MxDate)
{
    MxDate d1( 2039, 1, 17 );
    int expected = 2;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20440513, MxDate)
{
    MxDate d1( 2044, 5, 13 );
    int expected = 6;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_19841123, MxDate)
{
    MxDate d1( 1984, 11, 23 );
    int expected = 6;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20250912, MxDate)
{
    MxDate d1( 2025, 9, 12 );
    int expected = 6;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20480924, MxDate)
{
    MxDate d1( 2048, 9, 24 );
    int expected = 5;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20280603, MxDate)
{
    MxDate d1( 2028, 6, 3 );
    int expected = 7;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20620514, MxDate)
{
    MxDate d1( 2062, 5, 14 );
    int expected = 1;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20010206, MxDate)
{
    MxDate d1( 2001, 2, 6 );
    int expected = 3;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20770114, MxDate)
{
    MxDate d1( 2077, 1, 14 );
    int expected = 5;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20361004, MxDate)
{
    MxDate d1( 2036, 10, 4 );
    int expected = 7;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20400304, MxDate)
{
    MxDate d1( 2040, 3, 4 );
    int expected = 1;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20530805, MxDate)
{
    MxDate d1( 2053, 8, 5 );
    int expected = 3;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20320530, MxDate)
{
    MxDate d1( 2032, 5, 30 );
    int expected = 1;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20660817, MxDate)
{
    MxDate d1( 2066, 8, 17 );
    int expected = 3;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20220219, MxDate)
{
    MxDate d1( 2022, 2, 19 );
    int expected = 7;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20320410, MxDate)
{
    MxDate d1( 2032, 4, 10 );
    int expected = 7;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20390209, MxDate)
{
    MxDate d1( 2039, 2, 9 );
    int expected = 4;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20320628, MxDate)
{
    MxDate d1( 2032, 6, 28 );
    int expected = 2;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_19770914, MxDate)
{
    MxDate d1( 1977, 9, 14 );
    int expected = 4;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20680228, MxDate)
{
    MxDate d1( 2068, 2, 28 );
    int expected = 3;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_19810428, MxDate)
{
    MxDate d1( 1981, 4, 28 );
    int expected = 3;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20611231, MxDate)
{
    MxDate d1( 2061, 12, 31 );
    int expected = 7;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20230408, MxDate)
{
    MxDate d1( 2023, 4, 8 );
    int expected = 7;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20290505, MxDate)
{
    MxDate d1( 2029, 5, 5 );
    int expected = 7;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20020622, MxDate)
{
    MxDate d1( 2002, 6, 22 );
    int expected = 7;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20610730, MxDate)
{
    MxDate d1( 2061, 7, 30 );
    int expected = 7;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20130624, MxDate)
{
    MxDate d1( 2013, 6, 24 );
    int expected = 2;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20640811, MxDate)
{
    MxDate d1( 2064, 8, 11 );
    int expected = 2;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20691120, MxDate)
{
    MxDate d1( 2069, 11, 20 );
    int expected = 4;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20220506, MxDate)
{
    MxDate d1( 2022, 5, 6 );
    int expected = 6;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20080111, MxDate)
{
    MxDate d1( 2008, 1, 11 );
    int expected = 6;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20371217, MxDate)
{
    MxDate d1( 2037, 12, 17 );
    int expected = 5;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20571005, MxDate)
{
    MxDate d1( 2057, 10, 5 );
    int expected = 6;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20380118, MxDate)
{
    MxDate d1( 2038, 1, 18 );
    int expected = 2;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20640321, MxDate)
{
    MxDate d1( 2064, 3, 21 );
    int expected = 6;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20610404, MxDate)
{
    MxDate d1( 2061, 4, 4 );
    int expected = 2;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_19930713, MxDate)
{
    MxDate d1( 1993, 7, 13 );
    int expected = 3;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20010824, MxDate)
{
    MxDate d1( 2001, 8, 24 );
    int expected = 6;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20040730, MxDate)
{
    MxDate d1( 2004, 7, 30 );
    int expected = 6;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_20030913, MxDate)
{
    MxDate d1( 2003, 9, 13 );
    int expected = 7;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_19880518, MxDate)
{
    MxDate d1( 1988, 5, 18 );
    int expected = 4;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_19980829, MxDate)
{
    MxDate d1( 1998, 8, 29 );
    int expected = 7;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_19770207, MxDate)
{
    MxDate d1( 1977, 2, 7 );
    int expected = 2;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}
TEST(weekday_19831227, MxDate)
{
    MxDate d1( 1983, 12, 27 );
    int expected = 3;
    int actual = d1.getWeekday();
    CHECK_EQUAL( expected, actual )
}

#endif
