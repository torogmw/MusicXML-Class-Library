#if 1==1

#include "TestHarness.h"
#include "MxDate.h"

using namespace lexicon;

TEST(add_month_20140606_P00002, MxDate)
{
    MxDate d1( 2014, 6, 6 );
    MxDate d2 = d1.addMonths( 2 );
    MxDate expected( 2014, 8, 6 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
}
/* landing on the leap day */
TEST(add_day_93160130_1, MxDate)
{
    MxDate d1( 9316, 1, 30 );
    MxDate d2 = d1.addMonths( 1 );
    MxDate expected( 9316, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_48960330_neg1, MxDate)
{
    MxDate d1( 4896, 3, 30 );
    MxDate d2 = d1.addMonths( -1 );
    MxDate expected( 4896, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_28191231_2, MxDate)
{
    MxDate d1( 2819, 12, 31 );
    MxDate d2 = d1.addMonths( 2 );
    MxDate expected( 2820, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_84160429_neg2, MxDate)
{
    MxDate d1( 8416, 4, 29 );
    MxDate d2 = d1.addMonths( -2 );
    MxDate expected( 8416, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_55031129_3, MxDate)
{
    
    MxDate d1( 5503, 11, 29 );
    MxDate d2 = d1.addMonths( 3 );
    MxDate expected( 5504, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_68040530_neg3, MxDate)
{
    MxDate d1( 6804, 5, 30 );
    MxDate d2 = d1.addMonths( -3 );
    MxDate expected( 6804, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_50351031_4, MxDate)
{
    MxDate d1( 5035, 10, 31 );
    MxDate d2 = d1.addMonths( 4 );
    MxDate expected( 5036, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_95160630_neg4, MxDate)
{
    MxDate d1( 9516, 6, 30 );
    MxDate d2 = d1.addMonths( -4 );
    MxDate expected( 9516, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_95590930_5, MxDate)
{
    MxDate d1( 9559, 9, 30 );
    MxDate d2 = d1.addMonths( 5 );
    MxDate expected( 9560, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_73280731_neg5, MxDate)
{
    MxDate d1( 7328, 7, 31 );
    MxDate d2 = d1.addMonths( -5 );
    MxDate expected( 7328, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_56030830_6, MxDate)
{
    MxDate d1( 5603, 8, 30 );
    MxDate d2 = d1.addMonths( 6 );
    MxDate expected( 5604, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_49920830_neg6, MxDate)
{
    MxDate d1( 4992, 8, 30 );
    MxDate d2 = d1.addMonths( -6 );
    MxDate expected( 4992, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_76390730_7, MxDate)
{
    MxDate d1( 7639, 7, 30 );
    MxDate d2 = d1.addMonths( 7 );
    MxDate expected( 7640, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_95440930_neg7, MxDate)
{
    MxDate d1( 9544, 9, 30 );
    MxDate d2 = d1.addMonths( -7 );
    MxDate expected( 9544, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_61630630_8, MxDate)
{
    MxDate d1( 6163, 6, 30 );
    MxDate d2 = d1.addMonths( 8 );
    MxDate expected( 6164, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_97321029_neg8, MxDate)
{
    MxDate d1( 9732, 10, 29 );
    MxDate d2 = d1.addMonths( -8 );
    MxDate expected( 9732, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_42430530_9, MxDate)
{
    MxDate d1( 4243, 5, 30 );
    MxDate d2 = d1.addMonths( 9 );
    MxDate expected( 4244, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_50361129_neg9, MxDate)
{
    MxDate d1( 5036, 11, 29 );
    MxDate d2 = d1.addMonths( -9 );
    MxDate expected( 5036, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_32590430_10, MxDate)
{
    MxDate d1( 3259, 4, 30 );
    MxDate d2 = d1.addMonths( 10 );
    MxDate expected( 3260, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_40841231_neg10, MxDate)
{
    MxDate d1( 4084, 12, 31 );
    MxDate d2 = d1.addMonths( -10 );
    MxDate expected( 4084, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_32630331_11, MxDate)
{
    MxDate d1( 3263, 3, 31 );
    MxDate d2 = d1.addMonths( 11 );
    MxDate expected( 3264, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_63530129_neg11, MxDate)
{
    MxDate d1( 6353, 1, 29 );
    MxDate d2 = d1.addMonths( -11 );
    MxDate expected( 6352, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_24470131_13, MxDate)
{
    MxDate d1( 2447, 1, 31 );
    MxDate d2 = d1.addMonths( 13 );
    MxDate expected( 2448, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_37610330_neg13, MxDate)
{
    MxDate d1( 3761, 3, 30 );
    MxDate d2 = d1.addMonths( -13 );
    MxDate expected( 3760, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
/* landing on Feb 28 NOT in a leap year */
TEST(add_day_47490129_1, MxDate)
{
    MxDate d1( 4749, 1, 29 );
    MxDate d2 = d1.addMonths( 1 );
    MxDate expected( 4749, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_79210331_neg1, MxDate)
{
    MxDate d1( 7921, 3, 31 );
    MxDate d2 = d1.addMonths( -1 );
    MxDate expected( 7921, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_99531230_2, MxDate)
{
    MxDate d1( 9953, 12, 30 );
    MxDate d2 = d1.addMonths( 2 );
    MxDate expected( 9954, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_27980430_neg2, MxDate)
{
    MxDate d1( 2798, 4, 30 );
    MxDate d2 = d1.addMonths( -2 );
    MxDate expected( 2798, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_50981130_3, MxDate)
{
    MxDate d1( 5098, 11, 30 );
    MxDate d2 = d1.addMonths( 3 );
    MxDate expected( 5099, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_51620529_neg3, MxDate)
{
    MxDate d1( 5162, 5, 29 );
    MxDate d2 = d1.addMonths( -3 );
    MxDate expected( 5162, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_61331030_4, MxDate)
{
    MxDate d1( 6133, 10, 30 );
    MxDate d2 = d1.addMonths( 4 );
    MxDate expected( 6134, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_81370630_neg4, MxDate)
{
    MxDate d1( 8137, 6, 30 );
    MxDate d2 = d1.addMonths( -4 );
    MxDate expected( 8137, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_69100930_5, MxDate)
{
    MxDate d1( 6910, 9, 30 );
    MxDate d2 = d1.addMonths( 5 );
    MxDate expected( 6911, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_87230731_neg5, MxDate)
{
    MxDate d1( 8723, 7, 31 );
    MxDate d2 = d1.addMonths( -5 );
    MxDate expected( 8723, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_80060830_6, MxDate)
{
    MxDate d1( 8006, 8, 30 );
    MxDate d2 = d1.addMonths( 6 );
    MxDate expected( 8007, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_56890829_neg6, MxDate)
{
    MxDate d1( 5689, 8, 29 );
    MxDate d2 = d1.addMonths( -6 );
    MxDate expected( 5689, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_61440731_7, MxDate)
{
    MxDate d1( 6144, 7, 31 );
    MxDate d2 = d1.addMonths( 7 );
    MxDate expected( 6145, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_48270929_neg7, MxDate)
{
    MxDate d1( 4827, 9, 29 );
    MxDate d2 = d1.addMonths( -7 );
    MxDate expected( 4827, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_56960630_8, MxDate)
{
    MxDate d1( 5696, 6, 30 );
    MxDate d2 = d1.addMonths( 8 );
    MxDate expected( 5697, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_51971031_neg8, MxDate)
{
    MxDate d1( 5197, 10, 31 );
    MxDate d2 = d1.addMonths( -8 );
    MxDate expected( 5197, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_31780531_9, MxDate)
{
    MxDate d1( 3178, 5, 31 );
    MxDate d2 = d1.addMonths( 9 );
    MxDate expected( 3179, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_30511129_neg9, MxDate)
{
    MxDate d1( 3051, 11, 29 );
    MxDate d2 = d1.addMonths( -9 );
    MxDate expected( 3051, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_35890429_10, MxDate)
{
    MxDate d1( 3589, 4, 29 );
    MxDate d2 = d1.addMonths( 10 );
    MxDate expected( 3590, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_29781230_neg10, MxDate)
{
    MxDate d1( 2978, 12, 30 );
    MxDate d2 = d1.addMonths( -10 );
    MxDate expected( 2978, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_49560330_11, MxDate)
{
    MxDate d1( 4956, 3, 30 );
    MxDate d2 = d1.addMonths( 11 );
    MxDate expected( 4957, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_74540130_neg11, MxDate)
{
    MxDate d1( 7454, 1, 30 );
    MxDate d2 = d1.addMonths( -11 );
    MxDate expected( 7453, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_81640229_12, MxDate)
{
    MxDate d1( 8164, 2, 29 );
    MxDate d2 = d1.addMonths( 12 );
    MxDate expected( 8165, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_85200229_neg12, MxDate)
{
    MxDate d1( 8520, 2, 29 );
    MxDate d2 = d1.addMonths( -12 );
    MxDate expected( 8519, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_67840129_13, MxDate)
{
    MxDate d1( 6784, 1, 29 );
    MxDate d2 = d1.addMonths( 13 );
    MxDate expected( 6785, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_66960331_neg13, MxDate)
{
    MxDate d1( 6696, 3, 31 );
    MxDate d2 = d1.addMonths( -13 );
    MxDate expected( 6695, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}

/* from the 31st into a month with < 31 days */
TEST(add_day_20360831_1, MxDate)
{
    MxDate d1( 2036, 8, 31 );
    MxDate d2 = d1.addMonths( 1 );
    MxDate expected( 2036, 9, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_21080531_neg1, MxDate)
{
    MxDate d1( 2108, 5, 31 );
    MxDate d2 = d1.addMonths( -1 );
    MxDate expected( 2108, 4, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_20830731_2, MxDate)
{
    MxDate d1( 2083, 7, 31 );
    MxDate d2 = d1.addMonths( 2 );
    MxDate expected( 2083, 9, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_21620831_neg2, MxDate)
{
    MxDate d1( 2162, 8, 31 );
    MxDate d2 = d1.addMonths( -2 );
    MxDate expected( 2162, 6, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_20130831_3, MxDate)
{
    MxDate d1( 2013, 8, 31 );
    MxDate d2 = d1.addMonths( 3 );
    MxDate expected( 2013, 11, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_20401231_neg3, MxDate)
{
    MxDate d1( 2040, 12, 31 );
    MxDate d2 = d1.addMonths( -3 );
    MxDate expected( 2040, 9, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_21510731_4, MxDate)
{
    MxDate d1( 2151, 7, 31 );
    MxDate d2 = d1.addMonths( 4 );
    MxDate expected( 2151, 11, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_20300831_neg4, MxDate)
{
    MxDate d1( 2030, 8, 31 );
    MxDate d2 = d1.addMonths( -4 );
    MxDate expected( 2030, 4, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_21140131_5, MxDate)
{
    MxDate d1( 2114, 1, 31 );
    MxDate d2 = d1.addMonths( 5 );
    MxDate expected( 2114, 6, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_21960731_neg5, MxDate)
{
    MxDate d1( 2196, 7, 31 );
    MxDate d2 = d1.addMonths( -5 );
    MxDate expected( 2196, 2, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_21920831_6, MxDate)
{
    MxDate d1( 2192, 8, 31 );
    MxDate d2 = d1.addMonths( 6 );
    MxDate expected( 2193, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_20070331_neg6, MxDate)
{
    MxDate d1( 2007, 3, 31 );
    MxDate d2 = d1.addMonths( -6 );
    MxDate expected( 2006, 9, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_21600731_7, MxDate)
{
    MxDate d1( 2160, 7, 31 );
    MxDate d2 = d1.addMonths( 7 );
    MxDate expected( 2161, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_21900131_neg7, MxDate)
{
    MxDate d1( 2190, 1, 31 );
    MxDate d2 = d1.addMonths( -7 );
    MxDate expected( 2189, 6, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_21981031_8, MxDate)
{
    MxDate d1( 2198, 10, 31 );
    MxDate d2 = d1.addMonths( 8 );
    MxDate expected( 2199, 6, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_20501231_neg8, MxDate)
{
    MxDate d1( 2050, 12, 31 );
    MxDate d2 = d1.addMonths( -8 );
    MxDate expected( 2050, 4, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_21741231_9, MxDate)
{
    MxDate d1( 2174, 12, 31 );
    MxDate d2 = d1.addMonths( 9 );
    MxDate expected( 2175, 9, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_20050831_neg9, MxDate)
{
    MxDate d1( 2005, 8, 31 );
    MxDate d2 = d1.addMonths( -9 );
    MxDate expected( 2004, 11, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_20640831_10, MxDate)
{
    MxDate d1( 2064, 8, 31 );
    MxDate d2 = d1.addMonths( 10 );
    MxDate expected( 2065, 6, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_20620731_neg10, MxDate)
{
    MxDate d1( 2062, 7, 31 );
    MxDate d2 = d1.addMonths( -10 );
    MxDate expected( 2061, 9, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_20070531_11, MxDate)
{
    MxDate d1( 2007, 5, 31 );
    MxDate d2 = d1.addMonths( 11 );
    MxDate expected( 2008, 4, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_20150831_neg11, MxDate)
{
    MxDate d1( 2015, 8, 31 );
    MxDate d2 = d1.addMonths( -11 );
    MxDate expected( 2014, 9, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_20140831_13, MxDate)
{
    MxDate d1( 2014, 8, 31 );
    MxDate d2 = d1.addMonths( 13 );
    MxDate expected( 2015, 9, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_20950331_neg13, MxDate)
{
    MxDate d1( 2095, 3, 31 );
    MxDate d2 = d1.addMonths( -13 );
    MxDate expected( 2094, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}

/* random between 1700 and 2200 */
TEST(add_day_31400721_1, MxDate)
{
    MxDate d1( 3140, 7, 21 );
    MxDate d2 = d1.addMonths( 1 );
    MxDate expected( 3140, 8, 21 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_41951212_neg1, MxDate)
{
    MxDate d1( 4195, 12, 12 );
    MxDate d2 = d1.addMonths( -1 );
    MxDate expected( 4195, 11, 12 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_61480628_2, MxDate)
{
    MxDate d1( 6148, 6, 28 );
    MxDate d2 = d1.addMonths( 2 );
    MxDate expected( 6148, 8, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_26000923_neg2, MxDate)
{
    MxDate d1( 2600, 9, 23 );
    MxDate d2 = d1.addMonths( -2 );
    MxDate expected( 2600, 7, 23 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_53271203_3, MxDate)
{
    MxDate d1( 5327, 12, 3 );
    MxDate d2 = d1.addMonths( 3 );
    MxDate expected( 5328, 3, 3 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_23550908_neg3, MxDate)
{
    MxDate d1( 2355, 9, 8 );
    MxDate d2 = d1.addMonths( -3 );
    MxDate expected( 2355, 6, 8 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_35850508_4, MxDate)
{
    MxDate d1( 3585, 5, 8 );
    MxDate d2 = d1.addMonths( 4 );
    MxDate expected( 3585, 9, 8 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_20391113_neg4, MxDate)
{
    MxDate d1( 2039, 11, 13 );
    MxDate d2 = d1.addMonths( -4 );
    MxDate expected( 2039, 7, 13 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_93571112_5, MxDate)
{
    MxDate d1( 9357, 11, 12 );
    MxDate d2 = d1.addMonths( 5 );
    MxDate expected( 9358, 4, 12 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_87980806_neg5, MxDate)
{
    MxDate d1( 8798, 8, 6 );
    MxDate d2 = d1.addMonths( -5 );
    MxDate expected( 8798, 3, 6 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_69980423_6, MxDate)
{
    MxDate d1( 6998, 4, 23 );
    MxDate d2 = d1.addMonths( 6 );
    MxDate expected( 6998, 10, 23 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_87650109_neg6, MxDate)
{
    MxDate d1( 8765, 1, 9 );
    MxDate d2 = d1.addMonths( -6 );
    MxDate expected( 8764, 7, 9 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_70660627_7, MxDate)
{
    MxDate d1( 7066, 6, 27 );
    MxDate d2 = d1.addMonths( 7 );
    MxDate expected( 7067, 1, 27 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_20870820_neg7, MxDate)
{
    MxDate d1( 2087, 8, 20 );
    MxDate d2 = d1.addMonths( -7 );
    MxDate expected( 2087, 1, 20 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_58070312_8, MxDate)
{
    MxDate d1( 5807, 3, 12 );
    MxDate d2 = d1.addMonths( 8 );
    MxDate expected( 5807, 11, 12 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_62590317_neg8, MxDate)
{
    MxDate d1( 6259, 3, 17 );
    MxDate d2 = d1.addMonths( -8 );
    MxDate expected( 6258, 7, 17 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_78021120_9, MxDate)
{
    MxDate d1( 7802, 11, 20 );
    MxDate d2 = d1.addMonths( 9 );
    MxDate expected( 7803, 8, 20 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_39540213_neg9, MxDate)
{
    MxDate d1( 3954, 2, 13 );
    MxDate d2 = d1.addMonths( -9 );
    MxDate expected( 3953, 5, 13 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_66511106_10, MxDate)
{
    MxDate d1( 6651, 11, 6 );
    MxDate d2 = d1.addMonths( 10 );
    MxDate expected( 6652, 9, 6 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_45321208_neg10, MxDate)
{
    MxDate d1( 4532, 12, 8 );
    MxDate d2 = d1.addMonths( -10 );
    MxDate expected( 4532, 2, 8 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_57930702_11, MxDate)
{
    MxDate d1( 5793, 7, 2 );
    MxDate d2 = d1.addMonths( 11 );
    MxDate expected( 5794, 6, 2 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_28231228_neg11, MxDate)
{
    MxDate d1( 2823, 12, 28 );
    MxDate d2 = d1.addMonths( -11 );
    MxDate expected( 2823, 1, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_73420117_12, MxDate)
{
    MxDate d1( 7342, 1, 17 );
    MxDate d2 = d1.addMonths( 12 );
    MxDate expected( 7343, 1, 17 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_75330606_neg12, MxDate)
{
    MxDate d1( 7533, 6, 6 );
    MxDate d2 = d1.addMonths( -12 );
    MxDate expected( 7532, 6, 6 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_80900223_13, MxDate)
{
    MxDate d1( 8090, 2, 23 );
    MxDate d2 = d1.addMonths( 13 );
    MxDate expected( 8091, 3, 23 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_31370717_neg13, MxDate)
{
    MxDate d1( 3137, 7, 17 );
    MxDate d2 = d1.addMonths( -13 );
    MxDate expected( 3136, 6, 17 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_27430816_14, MxDate)
{
    MxDate d1( 2743, 8, 16 );
    MxDate d2 = d1.addMonths( 14 );
    MxDate expected( 2744, 10, 16 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_60691011_neg14, MxDate)
{
    MxDate d1( 6069, 10, 11 );
    MxDate d2 = d1.addMonths( -14 );
    MxDate expected( 6068, 8, 11 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_66310424_15, MxDate)
{
    MxDate d1( 6631, 4, 24 );
    MxDate d2 = d1.addMonths( 15 );
    MxDate expected( 6632, 7, 24 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_45730222_neg15, MxDate)
{
    MxDate d1( 4573, 2, 22 );
    MxDate d2 = d1.addMonths( -15 );
    MxDate expected( 4571, 11, 22 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_95850203_16, MxDate)
{
    MxDate d1( 9585, 2, 3 );
    MxDate d2 = d1.addMonths( 16 );
    MxDate expected( 9586, 6, 3 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_37610508_neg16, MxDate)
{
    MxDate d1( 3761, 5, 8 );
    MxDate d2 = d1.addMonths( -16 );
    MxDate expected( 3760, 1, 8 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_22670711_17, MxDate)
{
    MxDate d1( 2267, 7, 11 );
    MxDate d2 = d1.addMonths( 17 );
    MxDate expected( 2268, 12, 11 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_84690410_neg17, MxDate)
{
    MxDate d1( 8469, 4, 10 );
    MxDate d2 = d1.addMonths( -17 );
    MxDate expected( 8467, 11, 10 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_78771219_18, MxDate)
{
    MxDate d1( 7877, 12, 19 );
    MxDate d2 = d1.addMonths( 18 );
    MxDate expected( 7879, 6, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_25100218_neg18, MxDate)
{
    MxDate d1( 2510, 2, 18 );
    MxDate d2 = d1.addMonths( -18 );
    MxDate expected( 2508, 8, 18 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_96190618_19, MxDate)
{
    MxDate d1( 9619, 6, 18 );
    MxDate d2 = d1.addMonths( 19 );
    MxDate expected( 9621, 1, 18 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_46531218_neg19, MxDate)
{
    MxDate d1( 4653, 12, 18 );
    MxDate d2 = d1.addMonths( -19 );
    MxDate expected( 4652, 5, 18 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_92510226_20, MxDate)
{
    MxDate d1( 9251, 2, 26 );
    MxDate d2 = d1.addMonths( 20 );
    MxDate expected( 9252, 10, 26 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_89910905_neg20, MxDate)
{
    MxDate d1( 8991, 9, 5 );
    MxDate d2 = d1.addMonths( -20 );
    MxDate expected( 8990, 1, 5 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_24911125_21, MxDate)
{
    MxDate d1( 2491, 11, 25 );
    MxDate d2 = d1.addMonths( 21 );
    MxDate expected( 2493, 8, 25 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_23620611_neg21, MxDate)
{
    MxDate d1( 2362, 6, 11 );
    MxDate d2 = d1.addMonths( -21 );
    MxDate expected( 2360, 9, 11 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_30240623_22, MxDate)
{
    MxDate d1( 3024, 6, 23 );
    MxDate d2 = d1.addMonths( 22 );
    MxDate expected( 3026, 4, 23 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_45790803_neg22, MxDate)
{
    MxDate d1( 4579, 8, 3 );
    MxDate d2 = d1.addMonths( -22 );
    MxDate expected( 4577, 10, 3 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_52190320_23, MxDate)
{
    MxDate d1( 5219, 3, 20 );
    MxDate d2 = d1.addMonths( 23 );
    MxDate expected( 5221, 2, 20 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_31630423_neg23, MxDate)
{
    MxDate d1( 3163, 4, 23 );
    MxDate d2 = d1.addMonths( -23 );
    MxDate expected( 3161, 5, 23 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_71270103_24, MxDate)
{
    MxDate d1( 7127, 1, 3 );
    MxDate d2 = d1.addMonths( 24 );
    MxDate expected( 7129, 1, 3 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_75270313_neg24, MxDate)
{
    MxDate d1( 7527, 3, 13 );
    MxDate d2 = d1.addMonths( -24 );
    MxDate expected( 7525, 3, 13 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_27320802_25, MxDate)
{
    MxDate d1( 2732, 8, 2 );
    MxDate d2 = d1.addMonths( 25 );
    MxDate expected( 2734, 9, 2 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_54991018_neg25, MxDate)
{
    MxDate d1( 5499, 10, 18 );
    MxDate d2 = d1.addMonths( -25 );
    MxDate expected( 5497, 9, 18 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_33151209_26, MxDate)
{
    MxDate d1( 3315, 12, 9 );
    MxDate d2 = d1.addMonths( 26 );
    MxDate expected( 3318, 2, 9 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_60220129_neg26, MxDate)
{
    MxDate d1( 6022, 1, 29 );
    MxDate d2 = d1.addMonths( -26 );
    MxDate expected( 6019, 11, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_59300103_27, MxDate)
{
    MxDate d1( 5930, 1, 3 );
    MxDate d2 = d1.addMonths( 27 );
    MxDate expected( 5932, 4, 3 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_60491119_neg27, MxDate)
{
    MxDate d1( 6049, 11, 19 );
    MxDate d2 = d1.addMonths( -27 );
    MxDate expected( 6047, 8, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_94570421_28, MxDate)
{
    MxDate d1( 9457, 4, 21 );
    MxDate d2 = d1.addMonths( 28 );
    MxDate expected( 9459, 8, 21 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_23490717_neg28, MxDate)
{
    MxDate d1( 2349, 7, 17 );
    MxDate d2 = d1.addMonths( -28 );
    MxDate expected( 2347, 3, 17 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_96280307_29, MxDate)
{
    MxDate d1( 9628, 3, 7 );
    MxDate d2 = d1.addMonths( 29 );
    MxDate expected( 9630, 8, 7 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_64550722_neg29, MxDate)
{
    MxDate d1( 6455, 7, 22 );
    MxDate d2 = d1.addMonths( -29 );
    MxDate expected( 6453, 2, 22 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_39930304_30, MxDate)
{
    MxDate d1( 3993, 3, 4 );
    MxDate d2 = d1.addMonths( 30 );
    MxDate expected( 3995, 9, 4 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_89190724_neg30, MxDate)
{
    MxDate d1( 8919, 7, 24 );
    MxDate d2 = d1.addMonths( -30 );
    MxDate expected( 8917, 1, 24 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_25650223_31, MxDate)
{
    MxDate d1( 2565, 2, 23 );
    MxDate d2 = d1.addMonths( 31 );
    MxDate expected( 2567, 9, 23 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_22310120_neg31, MxDate)
{
    MxDate d1( 2231, 1, 20 );
    MxDate d2 = d1.addMonths( -31 );
    MxDate expected( 2228, 6, 20 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_49961014_32, MxDate)
{
    MxDate d1( 4996, 10, 14 );
    MxDate d2 = d1.addMonths( 32 );
    MxDate expected( 4999, 6, 14 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_83590419_neg32, MxDate)
{
    MxDate d1( 8359, 4, 19 );
    MxDate d2 = d1.addMonths( -32 );
    MxDate expected( 8356, 8, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_32650512_33, MxDate)
{
    MxDate d1( 3265, 5, 12 );
    MxDate d2 = d1.addMonths( 33 );
    MxDate expected( 3268, 2, 12 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_95410626_neg33, MxDate)
{
    MxDate d1( 9541, 6, 26 );
    MxDate d2 = d1.addMonths( -33 );
    MxDate expected( 9538, 9, 26 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_75261219_34, MxDate)
{
    MxDate d1( 7526, 12, 19 );
    MxDate d2 = d1.addMonths( 34 );
    MxDate expected( 7529, 10, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_48671114_neg34, MxDate)
{
    MxDate d1( 4867, 11, 14 );
    MxDate d2 = d1.addMonths( -34 );
    MxDate expected( 4865, 1, 14 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_96440207_35, MxDate)
{
    MxDate d1( 9644, 2, 7 );
    MxDate d2 = d1.addMonths( 35 );
    MxDate expected( 9647, 1, 7 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_64691202_neg35, MxDate)
{
    MxDate d1( 6469, 12, 2 );
    MxDate d2 = d1.addMonths( -35 );
    MxDate expected( 6467, 1, 2 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_23630814_36, MxDate)
{
    MxDate d1( 2363, 8, 14 );
    MxDate d2 = d1.addMonths( 36 );
    MxDate expected( 2366, 8, 14 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_44380502_neg36, MxDate)
{
    MxDate d1( 4438, 5, 2 );
    MxDate d2 = d1.addMonths( -36 );
    MxDate expected( 4435, 5, 2 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_79850710_37, MxDate)
{
    MxDate d1( 7985, 7, 10 );
    MxDate d2 = d1.addMonths( 37 );
    MxDate expected( 7988, 8, 10 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_82700405_neg37, MxDate)
{
    MxDate d1( 8270, 4, 5 );
    MxDate d2 = d1.addMonths( -37 );
    MxDate expected( 8267, 3, 5 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_32590204_38, MxDate)
{
    MxDate d1( 3259, 2, 4 );
    MxDate d2 = d1.addMonths( 38 );
    MxDate expected( 3262, 4, 4 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_76780614_neg38, MxDate)
{
    MxDate d1( 7678, 6, 14 );
    MxDate d2 = d1.addMonths( -38 );
    MxDate expected( 7675, 4, 14 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_71871021_39, MxDate)
{
    MxDate d1( 7187, 10, 21 );
    MxDate d2 = d1.addMonths( 39 );
    MxDate expected( 7191, 1, 21 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_70450331_neg39, MxDate)
{
    MxDate d1( 7045, 3, 31 );
    MxDate d2 = d1.addMonths( -39 );
    MxDate expected( 7041, 12, 31 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_79380425_40, MxDate)
{
    MxDate d1( 7938, 4, 25 );
    MxDate d2 = d1.addMonths( 40 );
    MxDate expected( 7941, 8, 25 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_69170919_neg40, MxDate)
{
    MxDate d1( 6917, 9, 19 );
    MxDate d2 = d1.addMonths( -40 );
    MxDate expected( 6914, 5, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_56290214_41, MxDate)
{
    MxDate d1( 5629, 2, 14 );
    MxDate d2 = d1.addMonths( 41 );
    MxDate expected( 5632, 7, 14 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_34090314_neg41, MxDate)
{
    MxDate d1( 3409, 3, 14 );
    MxDate d2 = d1.addMonths( -41 );
    MxDate expected( 3405, 10, 14 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_74251126_42, MxDate)
{
    MxDate d1( 7425, 11, 26 );
    MxDate d2 = d1.addMonths( 42 );
    MxDate expected( 7429, 5, 26 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_89360810_neg42, MxDate)
{
    MxDate d1( 8936, 8, 10 );
    MxDate d2 = d1.addMonths( -42 );
    MxDate expected( 8933, 2, 10 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_78730403_43, MxDate)
{
    MxDate d1( 7873, 4, 3 );
    MxDate d2 = d1.addMonths( 43 );
    MxDate expected( 7876, 11, 3 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_51520205_neg43, MxDate)
{
    MxDate d1( 5152, 2, 5 );
    MxDate d2 = d1.addMonths( -43 );
    MxDate expected( 5148, 7, 5 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_37990830_44, MxDate)
{
    MxDate d1( 3799, 8, 30 );
    MxDate d2 = d1.addMonths( 44 );
    MxDate expected( 3803, 4, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_76241018_neg44, MxDate)
{
    MxDate d1( 7624, 10, 18 );
    MxDate d2 = d1.addMonths( -44 );
    MxDate expected( 7621, 2, 18 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_61560124_45, MxDate)
{
    MxDate d1( 6156, 1, 24 );
    MxDate d2 = d1.addMonths( 45 );
    MxDate expected( 6159, 10, 24 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_36870918_neg45, MxDate)
{
    MxDate d1( 3687, 9, 18 );
    MxDate d2 = d1.addMonths( -45 );
    MxDate expected( 3683, 12, 18 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_40160124_46, MxDate)
{
    MxDate d1( 4016, 1, 24 );
    MxDate d2 = d1.addMonths( 46 );
    MxDate expected( 4019, 11, 24 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_21920507_neg46, MxDate)
{
    MxDate d1( 2192, 5, 7 );
    MxDate d2 = d1.addMonths( -46 );
    MxDate expected( 2188, 7, 7 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_43650121_47, MxDate)
{
    MxDate d1( 4365, 1, 21 );
    MxDate d2 = d1.addMonths( 47 );
    MxDate expected( 4368, 12, 21 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_83390331_neg47, MxDate)
{
    MxDate d1( 8339, 3, 31 );
    MxDate d2 = d1.addMonths( -47 );
    MxDate expected( 8335, 4, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_59911226_48, MxDate)
{
    MxDate d1( 5991, 12, 26 );
    MxDate d2 = d1.addMonths( 48 );
    MxDate expected( 5995, 12, 26 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_72850219_neg48, MxDate)
{
    MxDate d1( 7285, 2, 19 );
    MxDate d2 = d1.addMonths( -48 );
    MxDate expected( 7281, 2, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_31290422_49, MxDate)
{
    MxDate d1( 3129, 4, 22 );
    MxDate d2 = d1.addMonths( 49 );
    MxDate expected( 3133, 5, 22 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_45330802_neg49, MxDate)
{
    MxDate d1( 4533, 8, 2 );
    MxDate d2 = d1.addMonths( -49 );
    MxDate expected( 4529, 7, 2 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_23570119_50, MxDate)
{
    MxDate d1( 2357, 1, 19 );
    MxDate d2 = d1.addMonths( 50 );
    MxDate expected( 2361, 3, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_53090111_neg50, MxDate)
{
    MxDate d1( 5309, 1, 11 );
    MxDate d2 = d1.addMonths( -50 );
    MxDate expected( 5304, 11, 11 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_75210929_51, MxDate)
{
    MxDate d1( 7521, 9, 29 );
    MxDate d2 = d1.addMonths( 51 );
    MxDate expected( 7525, 12, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_98670208_neg51, MxDate)
{
    MxDate d1( 9867, 2, 8 );
    MxDate d2 = d1.addMonths( -51 );
    MxDate expected( 9862, 11, 8 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_51100402_52, MxDate)
{
    MxDate d1( 5110, 4, 2 );
    MxDate d2 = d1.addMonths( 52 );
    MxDate expected( 5114, 8, 2 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_43620617_neg52, MxDate)
{
    MxDate d1( 4362, 6, 17 );
    MxDate d2 = d1.addMonths( -52 );
    MxDate expected( 4358, 2, 17 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_82550821_53, MxDate)
{
    MxDate d1( 8255, 8, 21 );
    MxDate d2 = d1.addMonths( 53 );
    MxDate expected( 8260, 1, 21 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_66150514_neg53, MxDate)
{
    MxDate d1( 6615, 5, 14 );
    MxDate d2 = d1.addMonths( -53 );
    MxDate expected( 6610, 12, 14 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_29910917_54, MxDate)
{
    MxDate d1( 2991, 9, 17 );
    MxDate d2 = d1.addMonths( 54 );
    MxDate expected( 2996, 3, 17 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_96021031_neg54, MxDate)
{
    MxDate d1( 9602, 10, 31 );
    MxDate d2 = d1.addMonths( -54 );
    MxDate expected( 9598, 4, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_55710820_55, MxDate)
{
    MxDate d1( 5571, 8, 20 );
    MxDate d2 = d1.addMonths( 55 );
    MxDate expected( 5576, 3, 20 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_99220604_neg55, MxDate)
{
    MxDate d1( 9922, 6, 4 );
    MxDate d2 = d1.addMonths( -55 );
    MxDate expected( 9917, 11, 4 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_84080204_56, MxDate)
{
    MxDate d1( 8408, 2, 4 );
    MxDate d2 = d1.addMonths( 56 );
    MxDate expected( 8412, 10, 4 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_26790414_neg56, MxDate)
{
    MxDate d1( 2679, 4, 14 );
    MxDate d2 = d1.addMonths( -56 );
    MxDate expected( 2674, 8, 14 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_91950821_57, MxDate)
{
    MxDate d1( 9195, 8, 21 );
    MxDate d2 = d1.addMonths( 57 );
    MxDate expected( 9200, 5, 21 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_22681212_neg57, MxDate)
{
    MxDate d1( 2268, 12, 12 );
    MxDate d2 = d1.addMonths( -57 );
    MxDate expected( 2264, 3, 12 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_49151229_58, MxDate)
{
    MxDate d1( 4915, 12, 29 );
    MxDate d2 = d1.addMonths( 58 );
    MxDate expected( 4920, 10, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_30750611_neg58, MxDate)
{
    MxDate d1( 3075, 6, 11 );
    MxDate d2 = d1.addMonths( -58 );
    MxDate expected( 3070, 8, 11 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_81591221_59, MxDate)
{
    MxDate d1( 8159, 12, 21 );
    MxDate d2 = d1.addMonths( 59 );
    MxDate expected( 8164, 11, 21 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_99500222_neg59, MxDate)
{
    MxDate d1( 9950, 2, 22 );
    MxDate d2 = d1.addMonths( -59 );
    MxDate expected( 9945, 3, 22 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_26191020_60, MxDate)
{
    MxDate d1( 2619, 10, 20 );
    MxDate d2 = d1.addMonths( 60 );
    MxDate expected( 2624, 10, 20 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_24950909_neg60, MxDate)
{
    MxDate d1( 2495, 9, 9 );
    MxDate d2 = d1.addMonths( -60 );
    MxDate expected( 2490, 9, 9 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_87910327_61, MxDate)
{
    MxDate d1( 8791, 3, 27 );
    MxDate d2 = d1.addMonths( 61 );
    MxDate expected( 8796, 4, 27 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_40191120_neg61, MxDate)
{
    MxDate d1( 4019, 11, 20 );
    MxDate d2 = d1.addMonths( -61 );
    MxDate expected( 4014, 10, 20 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_95420503_62, MxDate)
{
    MxDate d1( 9542, 5, 3 );
    MxDate d2 = d1.addMonths( 62 );
    MxDate expected( 9547, 7, 3 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_48901205_neg62, MxDate)
{
    MxDate d1( 4890, 12, 5 );
    MxDate d2 = d1.addMonths( -62 );
    MxDate expected( 4885, 10, 5 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_82490624_63, MxDate)
{
    MxDate d1( 8249, 6, 24 );
    MxDate d2 = d1.addMonths( 63 );
    MxDate expected( 8254, 9, 24 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_46911118_neg63, MxDate)
{
    MxDate d1( 4691, 11, 18 );
    MxDate d2 = d1.addMonths( -63 );
    MxDate expected( 4686, 8, 18 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_28440928_64, MxDate)
{
    MxDate d1( 2844, 9, 28 );
    MxDate d2 = d1.addMonths( 64 );
    MxDate expected( 2850, 1, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_21120924_neg64, MxDate)
{
    MxDate d1( 2112, 9, 24 );
    MxDate d2 = d1.addMonths( -64 );
    MxDate expected( 2107, 5, 24 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_94960406_65, MxDate)
{
    MxDate d1( 9496, 4, 6 );
    MxDate d2 = d1.addMonths( 65 );
    MxDate expected( 9501, 9, 6 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_88460202_neg65, MxDate)
{
    MxDate d1( 8846, 2, 2 );
    MxDate d2 = d1.addMonths( -65 );
    MxDate expected( 8840, 9, 2 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_97060210_66, MxDate)
{
    MxDate d1( 9706, 2, 10 );
    MxDate d2 = d1.addMonths( 66 );
    MxDate expected( 9711, 8, 10 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_91001222_neg66, MxDate)
{
    MxDate d1( 9100, 12, 22 );
    MxDate d2 = d1.addMonths( -66 );
    MxDate expected( 9095, 6, 22 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_62070119_67, MxDate)
{
    MxDate d1( 6207, 1, 19 );
    MxDate d2 = d1.addMonths( 67 );
    MxDate expected( 6212, 8, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_85330503_neg67, MxDate)
{
    MxDate d1( 8533, 5, 3 );
    MxDate d2 = d1.addMonths( -67 );
    MxDate expected( 8527, 10, 3 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_53220811_68, MxDate)
{
    MxDate d1( 5322, 8, 11 );
    MxDate d2 = d1.addMonths( 68 );
    MxDate expected( 5328, 4, 11 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_24910406_neg68, MxDate)
{
    MxDate d1( 2491, 4, 6 );
    MxDate d2 = d1.addMonths( -68 );
    MxDate expected( 2485, 8, 6 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_96111014_69, MxDate)
{
    MxDate d1( 9611, 10, 14 );
    MxDate d2 = d1.addMonths( 69 );
    MxDate expected( 9617, 7, 14 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_90750119_neg69, MxDate)
{
    MxDate d1( 9075, 1, 19 );
    MxDate d2 = d1.addMonths( -69 );
    MxDate expected( 9069, 4, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_91520227_70, MxDate)
{
    MxDate d1( 9152, 2, 27 );
    MxDate d2 = d1.addMonths( 70 );
    MxDate expected( 9157, 12, 27 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_45360406_neg70, MxDate)
{
    MxDate d1( 4536, 4, 6 );
    MxDate d2 = d1.addMonths( -70 );
    MxDate expected( 4530, 6, 6 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_52700831_71, MxDate)
{
    MxDate d1( 5270, 8, 31 );
    MxDate d2 = d1.addMonths( 71 );
    MxDate expected( 5276, 7, 31 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_60900724_neg71, MxDate)
{
    MxDate d1( 6090, 7, 24 );
    MxDate d2 = d1.addMonths( -71 );
    MxDate expected( 6084, 8, 24 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_44570616_72, MxDate)
{
    MxDate d1( 4457, 6, 16 );
    MxDate d2 = d1.addMonths( 72 );
    MxDate expected( 4463, 6, 16 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_27500827_neg72, MxDate)
{
    MxDate d1( 2750, 8, 27 );
    MxDate d2 = d1.addMonths( -72 );
    MxDate expected( 2744, 8, 27 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_99191123_73, MxDate)
{
    MxDate d1( 9919, 11, 23 );
    MxDate d2 = d1.addMonths( 73 );
    MxDate expected( 9925, 12, 23 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_34280322_neg73, MxDate)
{
    MxDate d1( 3428, 3, 22 );
    MxDate d2 = d1.addMonths( -73 );
    MxDate expected( 3422, 2, 22 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_60210116_74, MxDate)
{
    MxDate d1( 6021, 1, 16 );
    MxDate d2 = d1.addMonths( 74 );
    MxDate expected( 6027, 3, 16 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_48000428_neg74, MxDate)
{
    MxDate d1( 4800, 4, 28 );
    MxDate d2 = d1.addMonths( -74 );
    MxDate expected( 4794, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_27051116_75, MxDate)
{
    MxDate d1( 2705, 11, 16 );
    MxDate d2 = d1.addMonths( 75 );
    MxDate expected( 2712, 2, 16 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_47610510_neg75, MxDate)
{
    MxDate d1( 4761, 5, 10 );
    MxDate d2 = d1.addMonths( -75 );
    MxDate expected( 4755, 2, 10 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_32841113_76, MxDate)
{
    MxDate d1( 3284, 11, 13 );
    MxDate d2 = d1.addMonths( 76 );
    MxDate expected( 3291, 3, 13 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_51271227_neg76, MxDate)
{
    MxDate d1( 5127, 12, 27 );
    MxDate d2 = d1.addMonths( -76 );
    MxDate expected( 5121, 8, 27 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_24360701_77, MxDate)
{
    MxDate d1( 2436, 7, 1 );
    MxDate d2 = d1.addMonths( 77 );
    MxDate expected( 2442, 12, 1 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_39491017_neg77, MxDate)
{
    MxDate d1( 3949, 10, 17 );
    MxDate d2 = d1.addMonths( -77 );
    MxDate expected( 3943, 5, 17 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_38450916_78, MxDate)
{
    MxDate d1( 3845, 9, 16 );
    MxDate d2 = d1.addMonths( 78 );
    MxDate expected( 3852, 3, 16 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_83790326_neg78, MxDate)
{
    MxDate d1( 8379, 3, 26 );
    MxDate d2 = d1.addMonths( -78 );
    MxDate expected( 8372, 9, 26 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_79480908_79, MxDate)
{
    MxDate d1( 7948, 9, 8 );
    MxDate d2 = d1.addMonths( 79 );
    MxDate expected( 7955, 4, 8 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_59301013_neg79, MxDate)
{
    MxDate d1( 5930, 10, 13 );
    MxDate d2 = d1.addMonths( -79 );
    MxDate expected( 5924, 3, 13 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_90440302_80, MxDate)
{
    MxDate d1( 9044, 3, 2 );
    MxDate d2 = d1.addMonths( 80 );
    MxDate expected( 9050, 11, 2 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_24091024_neg80, MxDate)
{
    MxDate d1( 2409, 10, 24 );
    MxDate d2 = d1.addMonths( -80 );
    MxDate expected( 2403, 2, 24 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_25391222_81, MxDate)
{
    MxDate d1( 2539, 12, 22 );
    MxDate d2 = d1.addMonths( 81 );
    MxDate expected( 2546, 9, 22 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_52320205_neg81, MxDate)
{
    MxDate d1( 5232, 2, 5 );
    MxDate d2 = d1.addMonths( -81 );
    MxDate expected( 5225, 5, 5 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_80300928_82, MxDate)
{
    MxDate d1( 8030, 9, 28 );
    MxDate d2 = d1.addMonths( 82 );
    MxDate expected( 8037, 7, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_80730820_neg82, MxDate)
{
    MxDate d1( 8073, 8, 20 );
    MxDate d2 = d1.addMonths( -82 );
    MxDate expected( 8066, 10, 20 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_28220702_83, MxDate)
{
    MxDate d1( 2822, 7, 2 );
    MxDate d2 = d1.addMonths( 83 );
    MxDate expected( 2829, 6, 2 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_97910829_neg83, MxDate)
{
    MxDate d1( 9791, 8, 29 );
    MxDate d2 = d1.addMonths( -83 );
    MxDate expected( 9784, 9, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_58460801_84, MxDate)
{
    MxDate d1( 5846, 8, 1 );
    MxDate d2 = d1.addMonths( 84 );
    MxDate expected( 5853, 8, 1 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_40120217_neg84, MxDate)
{
    MxDate d1( 4012, 2, 17 );
    MxDate d2 = d1.addMonths( -84 );
    MxDate expected( 4005, 2, 17 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_73630204_85, MxDate)
{
    MxDate d1( 7363, 2, 4 );
    MxDate d2 = d1.addMonths( 85 );
    MxDate expected( 7370, 3, 4 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_37400507_neg85, MxDate)
{
    MxDate d1( 3740, 5, 7 );
    MxDate d2 = d1.addMonths( -85 );
    MxDate expected( 3733, 4, 7 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_43830112_86, MxDate)
{
    MxDate d1( 4383, 1, 12 );
    MxDate d2 = d1.addMonths( 86 );
    MxDate expected( 4390, 3, 12 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_44791203_neg86, MxDate)
{
    MxDate d1( 4479, 12, 3 );
    MxDate d2 = d1.addMonths( -86 );
    MxDate expected( 4472, 10, 3 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_66190721_87, MxDate)
{
    MxDate d1( 6619, 7, 21 );
    MxDate d2 = d1.addMonths( 87 );
    MxDate expected( 6626, 10, 21 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_22000708_neg87, MxDate)
{
    MxDate d1( 2200, 7, 8 );
    MxDate d2 = d1.addMonths( -87 );
    MxDate expected( 2193, 4, 8 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_47870518_88, MxDate)
{
    MxDate d1( 4787, 5, 18 );
    MxDate d2 = d1.addMonths( 88 );
    MxDate expected( 4794, 9, 18 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_41171127_neg88, MxDate)
{
    MxDate d1( 4117, 11, 27 );
    MxDate d2 = d1.addMonths( -88 );
    MxDate expected( 4110, 7, 27 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_81740324_89, MxDate)
{
    MxDate d1( 8174, 3, 24 );
    MxDate d2 = d1.addMonths( 89 );
    MxDate expected( 8181, 8, 24 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_97991027_neg89, MxDate)
{
    MxDate d1( 9799, 10, 27 );
    MxDate d2 = d1.addMonths( -89 );
    MxDate expected( 9792, 5, 27 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_38911029_90, MxDate)
{
    MxDate d1( 3891, 10, 29 );
    MxDate d2 = d1.addMonths( 90 );
    MxDate expected( 3899, 4, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_29160228_neg90, MxDate)
{
    MxDate d1( 2916, 2, 28 );
    MxDate d2 = d1.addMonths( -90 );
    MxDate expected( 2908, 8, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_82960116_91, MxDate)
{
    MxDate d1( 8296, 1, 16 );
    MxDate d2 = d1.addMonths( 91 );
    MxDate expected( 8303, 8, 16 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_90101206_neg91, MxDate)
{
    MxDate d1( 9010, 12, 6 );
    MxDate d2 = d1.addMonths( -91 );
    MxDate expected( 9003, 5, 6 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_83510125_92, MxDate)
{
    MxDate d1( 8351, 1, 25 );
    MxDate d2 = d1.addMonths( 92 );
    MxDate expected( 8358, 9, 25 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_43440227_neg92, MxDate)
{
    MxDate d1( 4344, 2, 27 );
    MxDate d2 = d1.addMonths( -92 );
    MxDate expected( 4336, 6, 27 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_98640712_93, MxDate)
{
    MxDate d1( 9864, 7, 12 );
    MxDate d2 = d1.addMonths( 93 );
    MxDate expected( 9872, 4, 12 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_97370620_neg93, MxDate)
{
    MxDate d1( 9737, 6, 20 );
    MxDate d2 = d1.addMonths( -93 );
    MxDate expected( 9729, 9, 20 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_38330615_94, MxDate)
{
    MxDate d1( 3833, 6, 15 );
    MxDate d2 = d1.addMonths( 94 );
    MxDate expected( 3841, 4, 15 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_42911125_neg94, MxDate)
{
    MxDate d1( 4291, 11, 25 );
    MxDate d2 = d1.addMonths( -94 );
    MxDate expected( 4284, 1, 25 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_76000607_95, MxDate)
{
    MxDate d1( 7600, 6, 7 );
    MxDate d2 = d1.addMonths( 95 );
    MxDate expected( 7608, 5, 7 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_84020221_neg95, MxDate)
{
    MxDate d1( 8402, 2, 21 );
    MxDate d2 = d1.addMonths( -95 );
    MxDate expected( 8394, 3, 21 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_54361206_96, MxDate)
{
    MxDate d1( 5436, 12, 6 );
    MxDate d2 = d1.addMonths( 96 );
    MxDate expected( 5444, 12, 6 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_68420925_neg96, MxDate)
{
    MxDate d1( 6842, 9, 25 );
    MxDate d2 = d1.addMonths( -96 );
    MxDate expected( 6834, 9, 25 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_55420519_97, MxDate)
{
    MxDate d1( 5542, 5, 19 );
    MxDate d2 = d1.addMonths( 97 );
    MxDate expected( 5550, 6, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_81640421_neg97, MxDate)
{
    MxDate d1( 8164, 4, 21 );
    MxDate d2 = d1.addMonths( -97 );
    MxDate expected( 8156, 3, 21 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_32740225_98, MxDate)
{
    MxDate d1( 3274, 2, 25 );
    MxDate d2 = d1.addMonths( 98 );
    MxDate expected( 3282, 4, 25 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_42520401_neg98, MxDate)
{
    MxDate d1( 4252, 4, 1 );
    MxDate d2 = d1.addMonths( -98 );
    MxDate expected( 4244, 2, 1 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_73750410_99, MxDate)
{
    MxDate d1( 7375, 4, 10 );
    MxDate d2 = d1.addMonths( 99 );
    MxDate expected( 7383, 7, 10 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_97931230_neg99, MxDate)
{
    MxDate d1( 9793, 12, 30 );
    MxDate d2 = d1.addMonths( -99 );
    MxDate expected( 9785, 9, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_65711024_100, MxDate)
{
    MxDate d1( 6571, 10, 24 );
    MxDate d2 = d1.addMonths( 100 );
    MxDate expected( 6580, 2, 24 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_65251219_neg100, MxDate)
{
    MxDate d1( 6525, 12, 19 );
    MxDate d2 = d1.addMonths( -100 );
    MxDate expected( 6517, 8, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}

#endif


