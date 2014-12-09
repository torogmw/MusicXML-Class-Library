#if 1==1

#include "TestHarness.h"
#include "MxDate.h"

using namespace lexicon;

TEST(add_day_ceiling, MxDate)
{
    MxDate d1( 9999, 5, 7 );
    MxDate d2 = d1.addDays( 365 );
    MxDate expected( 9999, 12, 31 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
}

TEST(add_day_floor, MxDate)
{
    MxDate d1( 1, 5, 7 );
    MxDate d2 = d1.addDays( -365 );
    MxDate expected( 1, 1, 1 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
}

TEST(add_day_20140606_P00001, MxDate)
{
    MxDate d1( 2014, 6, 6 );
    MxDate d2 = d1.addDays( 1 );
    MxDate expected( 2014, 6, 7 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
}

TEST(add_day_20140606_P00002, MxDate)
{
    MxDate d1( 2014, 6, 6 );
    MxDate d2 = d1.addDays( 2 );
    MxDate expected( 2014, 6, 8 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
}

TEST(add_day_20081224_neg1, MxDate)
{
    MxDate d1( 2008, 12, 24 );
    MxDate d2 = d1.addDays( -1 );
    MxDate expected( 2008, 12, 23 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}

TEST(add_day_55580621_1, MxDate)
{
    MxDate d1( 5558, 6, 21 );
    MxDate d2 = d1.addDays( 1 );
    MxDate expected( 5558, 6, 22 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_55140420_neg1, MxDate)
{
    MxDate d1( 5514, 4, 20 );
    MxDate d2 = d1.addDays( -1 );
    MxDate expected( 5514, 4, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_94270310_3, MxDate)
{
    MxDate d1( 9427, 3, 10 );
    MxDate d2 = d1.addDays( 3 );
    MxDate expected( 9427, 3, 13 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_92890828_neg3, MxDate)
{
    MxDate d1( 9289, 8, 28 );
    MxDate d2 = d1.addDays( -3 );
    MxDate expected( 9289, 8, 25 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_60990319_5, MxDate)
{
    MxDate d1( 6099, 3, 19 );
    MxDate d2 = d1.addDays( 5 );
    MxDate expected( 6099, 3, 24 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_90520117_neg5, MxDate)
{
    MxDate d1( 9052, 1, 17 );
    MxDate d2 = d1.addDays( -5 );
    MxDate expected( 9052, 1, 12 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_66060714_7, MxDate)
{
    MxDate d1( 6606, 7, 14 );
    MxDate d2 = d1.addDays( 7 );
    MxDate expected( 6606, 7, 21 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_82020217_neg7, MxDate)
{
    MxDate d1( 8202, 2, 17 );
    MxDate d2 = d1.addDays( -7 );
    MxDate expected( 8202, 2, 10 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_76400318_9, MxDate)
{
    MxDate d1( 7640, 3, 18 );
    MxDate d2 = d1.addDays( 9 );
    MxDate expected( 7640, 3, 27 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_40800218_neg9, MxDate)
{
    MxDate d1( 4080, 2, 18 );
    MxDate d2 = d1.addDays( -9 );
    MxDate expected( 4080, 2, 9 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_74740617_11, MxDate)
{
    MxDate d1( 7474, 6, 17 );
    MxDate d2 = d1.addDays( 11 );
    MxDate expected( 7474, 6, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_66200708_neg11, MxDate)
{
    MxDate d1( 6620, 7, 8 );
    MxDate d2 = d1.addDays( -11 );
    MxDate expected( 6620, 6, 27 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_36351105_13, MxDate)
{
    MxDate d1( 3635, 11, 5 );
    MxDate d2 = d1.addDays( 13 );
    MxDate expected( 3635, 11, 18 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_50110226_neg13, MxDate)
{
    MxDate d1( 5011, 2, 26 );
    MxDate d2 = d1.addDays( -13 );
    MxDate expected( 5011, 2, 13 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_95090903_15, MxDate)
{
    MxDate d1( 9509, 9, 3 );
    MxDate d2 = d1.addDays( 15 );
    MxDate expected( 9509, 9, 18 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_23290914_neg15, MxDate)
{
    MxDate d1( 2329, 9, 14 );
    MxDate d2 = d1.addDays( -15 );
    MxDate expected( 2329, 8, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_92540711_17, MxDate)
{
    MxDate d1( 9254, 7, 11 );
    MxDate d2 = d1.addDays( 17 );
    MxDate expected( 9254, 7, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_93140130_neg17, MxDate)
{
    MxDate d1( 9314, 1, 30 );
    MxDate d2 = d1.addDays( -17 );
    MxDate expected( 9314, 1, 13 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_26920707_19, MxDate)
{
    MxDate d1( 2692, 7, 7 );
    MxDate d2 = d1.addDays( 19 );
    MxDate expected( 2692, 7, 26 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_57940121_neg19, MxDate)
{
    MxDate d1( 5794, 1, 21 );
    MxDate d2 = d1.addDays( -19 );
    MxDate expected( 5794, 1, 2 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_28591105_21, MxDate)
{
    MxDate d1( 2859, 11, 5 );
    MxDate d2 = d1.addDays( 21 );
    MxDate expected( 2859, 11, 26 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_60970922_neg21, MxDate)
{
    MxDate d1( 6097, 9, 22 );
    MxDate d2 = d1.addDays( -21 );
    MxDate expected( 6097, 9, 1 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_36571219_23, MxDate)
{
    MxDate d1( 3657, 12, 19 );
    MxDate d2 = d1.addDays( 23 );
    MxDate expected( 3658, 1, 11 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_58850716_neg23, MxDate)
{
    MxDate d1( 5885, 7, 16 );
    MxDate d2 = d1.addDays( -23 );
    MxDate expected( 5885, 6, 23 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_56980416_25, MxDate)
{
    MxDate d1( 5698, 4, 16 );
    MxDate d2 = d1.addDays( 25 );
    MxDate expected( 5698, 5, 11 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_32060324_neg25, MxDate)
{
    MxDate d1( 3206, 3, 24 );
    MxDate d2 = d1.addDays( -25 );
    MxDate expected( 3206, 2, 27 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_29241102_27, MxDate)
{
    MxDate d1( 2924, 11, 2 );
    MxDate d2 = d1.addDays( 27 );
    MxDate expected( 2924, 11, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_45010406_neg27, MxDate)
{
    MxDate d1( 4501, 4, 6 );
    MxDate d2 = d1.addDays( -27 );
    MxDate expected( 4501, 3, 10 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_21670806_29, MxDate)
{
    MxDate d1( 2167, 8, 6 );
    MxDate d2 = d1.addDays( 29 );
    MxDate expected( 2167, 9, 4 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_66090214_neg29, MxDate)
{
    MxDate d1( 6609, 2, 14 );
    MxDate d2 = d1.addDays( -29 );
    MxDate expected( 6609, 1, 16 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_82870823_31, MxDate)
{
    MxDate d1( 8287, 8, 23 );
    MxDate d2 = d1.addDays( 31 );
    MxDate expected( 8287, 9, 23 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_75000820_neg31, MxDate)
{
    MxDate d1( 7500, 8, 20 );
    MxDate d2 = d1.addDays( -31 );
    MxDate expected( 7500, 7, 20 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_33000613_33, MxDate)
{
    MxDate d1( 3300, 6, 13 );
    MxDate d2 = d1.addDays( 33 );
    MxDate expected( 3300, 7, 16 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_67540618_neg33, MxDate)
{
    MxDate d1( 6754, 6, 18 );
    MxDate d2 = d1.addDays( -33 );
    MxDate expected( 6754, 5, 16 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_36970915_35, MxDate)
{
    MxDate d1( 3697, 9, 15 );
    MxDate d2 = d1.addDays( 35 );
    MxDate expected( 3697, 10, 20 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_65561202_neg35, MxDate)
{
    MxDate d1( 6556, 12, 2 );
    MxDate d2 = d1.addDays( -35 );
    MxDate expected( 6556, 10, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_46960722_37, MxDate)
{
    MxDate d1( 4696, 7, 22 );
    MxDate d2 = d1.addDays( 37 );
    MxDate expected( 4696, 8, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_74420105_neg37, MxDate)
{
    MxDate d1( 7442, 1, 5 );
    MxDate d2 = d1.addDays( -37 );
    MxDate expected( 7441, 11, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_93480531_39, MxDate)
{
    MxDate d1( 9348, 5, 31 );
    MxDate d2 = d1.addDays( 39 );
    MxDate expected( 9348, 7, 9 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_93091121_neg39, MxDate)
{
    MxDate d1( 9309, 11, 21 );
    MxDate d2 = d1.addDays( -39 );
    MxDate expected( 9309, 10, 13 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_70120413_41, MxDate)
{
    MxDate d1( 7012, 4, 13 );
    MxDate d2 = d1.addDays( 41 );
    MxDate expected( 7012, 5, 24 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_34261122_neg41, MxDate)
{
    MxDate d1( 3426, 11, 22 );
    MxDate d2 = d1.addDays( -41 );
    MxDate expected( 3426, 10, 12 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_74310123_43, MxDate)
{
    MxDate d1( 7431, 1, 23 );
    MxDate d2 = d1.addDays( 43 );
    MxDate expected( 7431, 3, 7 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_53500209_neg43, MxDate)
{
    MxDate d1( 5350, 2, 9 );
    MxDate d2 = d1.addDays( -43 );
    MxDate expected( 5349, 12, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_56960629_45, MxDate)
{
    MxDate d1( 5696, 6, 29 );
    MxDate d2 = d1.addDays( 45 );
    MxDate expected( 5696, 8, 13 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_53330103_neg45, MxDate)
{
    MxDate d1( 5333, 1, 3 );
    MxDate d2 = d1.addDays( -45 );
    MxDate expected( 5332, 11, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_22930103_47, MxDate)
{
    MxDate d1( 2293, 1, 3 );
    MxDate d2 = d1.addDays( 47 );
    MxDate expected( 2293, 2, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_74341130_neg47, MxDate)
{
    MxDate d1( 7434, 11, 30 );
    MxDate d2 = d1.addDays( -47 );
    MxDate expected( 7434, 10, 14 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_78651207_49, MxDate)
{
    MxDate d1( 7865, 12, 7 );
    MxDate d2 = d1.addDays( 49 );
    MxDate expected( 7866, 1, 25 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_46121030_neg49, MxDate)
{
    MxDate d1( 4612, 10, 30 );
    MxDate d2 = d1.addDays( -49 );
    MxDate expected( 4612, 9, 11 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_39750922_51, MxDate)
{
    MxDate d1( 3975, 9, 22 );
    MxDate d2 = d1.addDays( 51 );
    MxDate expected( 3975, 11, 12 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_45910531_neg51, MxDate)
{
    MxDate d1( 4591, 5, 31 );
    MxDate d2 = d1.addDays( -51 );
    MxDate expected( 4591, 4, 10 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_87860402_53, MxDate)
{
    MxDate d1( 8786, 4, 2 );
    MxDate d2 = d1.addDays( 53 );
    MxDate expected( 8786, 5, 25 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_52941230_neg53, MxDate)
{
    MxDate d1( 5294, 12, 30 );
    MxDate d2 = d1.addDays( -53 );
    MxDate expected( 5294, 11, 7 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_50420615_55, MxDate)
{
    MxDate d1( 5042, 6, 15 );
    MxDate d2 = d1.addDays( 55 );
    MxDate expected( 5042, 8, 9 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_96190629_neg55, MxDate)
{
    MxDate d1( 9619, 6, 29 );
    MxDate d2 = d1.addDays( -55 );
    MxDate expected( 9619, 5, 5 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_30290514_57, MxDate)
{
    MxDate d1( 3029, 5, 14 );
    MxDate d2 = d1.addDays( 57 );
    MxDate expected( 3029, 7, 10 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_42270712_neg57, MxDate)
{
    MxDate d1( 4227, 7, 12 );
    MxDate d2 = d1.addDays( -57 );
    MxDate expected( 4227, 5, 16 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_34710317_59, MxDate)
{
    MxDate d1( 3471, 3, 17 );
    MxDate d2 = d1.addDays( 59 );
    MxDate expected( 3471, 5, 15 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_53920807_neg59, MxDate)
{
    MxDate d1( 5392, 8, 7 );
    MxDate d2 = d1.addDays( -59 );
    MxDate expected( 5392, 6, 9 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_71241012_61, MxDate)
{
    MxDate d1( 7124, 10, 12 );
    MxDate d2 = d1.addDays( 61 );
    MxDate expected( 7124, 12, 12 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_58020623_neg61, MxDate)
{
    MxDate d1( 5802, 6, 23 );
    MxDate d2 = d1.addDays( -61 );
    MxDate expected( 5802, 4, 23 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_20240311_63, MxDate)
{
    MxDate d1( 2024, 3, 11 );
    MxDate d2 = d1.addDays( 63 );
    MxDate expected( 2024, 5, 13 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_27730606_neg63, MxDate)
{
    MxDate d1( 2773, 6, 6 );
    MxDate d2 = d1.addDays( -63 );
    MxDate expected( 2773, 4, 4 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_51040218_65, MxDate)
{
    MxDate d1( 5104, 2, 18 );
    MxDate d2 = d1.addDays( 65 );
    MxDate expected( 5104, 4, 23 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_98841208_neg65, MxDate)
{
    MxDate d1( 9884, 12, 8 );
    MxDate d2 = d1.addDays( -65 );
    MxDate expected( 9884, 10, 4 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_67970921_67, MxDate)
{
    MxDate d1( 6797, 9, 21 );
    MxDate d2 = d1.addDays( 67 );
    MxDate expected( 6797, 11, 27 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_94760401_neg67, MxDate)
{
    MxDate d1( 9476, 4, 1 );
    MxDate d2 = d1.addDays( -67 );
    MxDate expected( 9476, 1, 25 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_51050612_69, MxDate)
{
    MxDate d1( 5105, 6, 12 );
    MxDate d2 = d1.addDays( 69 );
    MxDate expected( 5105, 8, 20 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_89070117_neg69, MxDate)
{
    MxDate d1( 8907, 1, 17 );
    MxDate d2 = d1.addDays( -69 );
    MxDate expected( 8906, 11, 9 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_44300304_71, MxDate)
{
    MxDate d1( 4430, 3, 4 );
    MxDate d2 = d1.addDays( 71 );
    MxDate expected( 4430, 5, 14 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_36520131_neg71, MxDate)
{
    MxDate d1( 3652, 1, 31 );
    MxDate d2 = d1.addDays( -71 );
    MxDate expected( 3651, 11, 21 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_27450317_73, MxDate)
{
    MxDate d1( 2745, 3, 17 );
    MxDate d2 = d1.addDays( 73 );
    MxDate expected( 2745, 5, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_47760831_neg73, MxDate)
{
    MxDate d1( 4776, 8, 31 );
    MxDate d2 = d1.addDays( -73 );
    MxDate expected( 4776, 6, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_50100729_75, MxDate)
{
    MxDate d1( 5010, 7, 29 );
    MxDate d2 = d1.addDays( 75 );
    MxDate expected( 5010, 10, 12 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_72980316_neg75, MxDate)
{
    MxDate d1( 7298, 3, 16 );
    MxDate d2 = d1.addDays( -75 );
    MxDate expected( 7297, 12, 31 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_91520423_77, MxDate)
{
    MxDate d1( 9152, 4, 23 );
    MxDate d2 = d1.addDays( 77 );
    MxDate expected( 9152, 7, 9 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_35280515_neg77, MxDate)
{
    MxDate d1( 3528, 5, 15 );
    MxDate d2 = d1.addDays( -77 );
    MxDate expected( 3528, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_86390619_79, MxDate)
{
    MxDate d1( 8639, 6, 19 );
    MxDate d2 = d1.addDays( 79 );
    MxDate expected( 8639, 9, 6 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_60660524_neg79, MxDate)
{
    MxDate d1( 6066, 5, 24 );
    MxDate d2 = d1.addDays( -79 );
    MxDate expected( 6066, 3, 6 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_76850911_81, MxDate)
{
    MxDate d1( 7685, 9, 11 );
    MxDate d2 = d1.addDays( 81 );
    MxDate expected( 7685, 12, 1 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_86111106_neg81, MxDate)
{
    MxDate d1( 8611, 11, 6 );
    MxDate d2 = d1.addDays( -81 );
    MxDate expected( 8611, 8, 17 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_62480927_83, MxDate)
{
    MxDate d1( 6248, 9, 27 );
    MxDate d2 = d1.addDays( 83 );
    MxDate expected( 6248, 12, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_40940308_neg83, MxDate)
{
    MxDate d1( 4094, 3, 8 );
    MxDate d2 = d1.addDays( -83 );
    MxDate expected( 4093, 12, 15 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_36780827_85, MxDate)
{
    MxDate d1( 3678, 8, 27 );
    MxDate d2 = d1.addDays( 85 );
    MxDate expected( 3678, 11, 20 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_32031003_neg85, MxDate)
{
    MxDate d1( 3203, 10, 3 );
    MxDate d2 = d1.addDays( -85 );
    MxDate expected( 3203, 7, 10 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_92760410_87, MxDate)
{
    MxDate d1( 9276, 4, 10 );
    MxDate d2 = d1.addDays( 87 );
    MxDate expected( 9276, 7, 6 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_57050315_neg87, MxDate)
{
    MxDate d1( 5705, 3, 15 );
    MxDate d2 = d1.addDays( -87 );
    MxDate expected( 5704, 12, 18 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_59210930_89, MxDate)
{
    MxDate d1( 5921, 9, 30 );
    MxDate d2 = d1.addDays( 89 );
    MxDate expected( 5921, 12, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_60050307_neg89, MxDate)
{
    MxDate d1( 6005, 3, 7 );
    MxDate d2 = d1.addDays( -89 );
    MxDate expected( 6004, 12, 8 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_71390612_91, MxDate)
{
    MxDate d1( 7139, 6, 12 );
    MxDate d2 = d1.addDays( 91 );
    MxDate expected( 7139, 9, 11 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_97300219_neg91, MxDate)
{
    MxDate d1( 9730, 2, 19 );
    MxDate d2 = d1.addDays( -91 );
    MxDate expected( 9729, 11, 20 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_84410625_93, MxDate)
{
    MxDate d1( 8441, 6, 25 );
    MxDate d2 = d1.addDays( 93 );
    MxDate expected( 8441, 9, 26 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_70460304_neg93, MxDate)
{
    MxDate d1( 7046, 3, 4 );
    MxDate d2 = d1.addDays( -93 );
    MxDate expected( 7045, 12, 1 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_81980504_95, MxDate)
{
    MxDate d1( 8198, 5, 4 );
    MxDate d2 = d1.addDays( 95 );
    MxDate expected( 8198, 8, 7 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_32351024_neg95, MxDate)
{
    MxDate d1( 3235, 10, 24 );
    MxDate d2 = d1.addDays( -95 );
    MxDate expected( 3235, 7, 21 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_25110804_97, MxDate)
{
    MxDate d1( 2511, 8, 4 );
    MxDate d2 = d1.addDays( 97 );
    MxDate expected( 2511, 11, 9 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_75620218_neg97, MxDate)
{
    MxDate d1( 7562, 2, 18 );
    MxDate d2 = d1.addDays( -97 );
    MxDate expected( 7561, 11, 13 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_47180108_99, MxDate)
{
    MxDate d1( 4718, 1, 8 );
    MxDate d2 = d1.addDays( 99 );
    MxDate expected( 4718, 4, 17 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_77881021_neg99, MxDate)
{
    MxDate d1( 7788, 10, 21 );
    MxDate d2 = d1.addDays( -99 );
    MxDate expected( 7788, 7, 14 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_57491222_101, MxDate)
{
    MxDate d1( 5749, 12, 22 );
    MxDate d2 = d1.addDays( 101 );
    MxDate expected( 5750, 4, 2 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_61330324_neg101, MxDate)
{
    MxDate d1( 6133, 3, 24 );
    MxDate d2 = d1.addDays( -101 );
    MxDate expected( 6132, 12, 13 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}

TEST(add_day_29800912_202, MxDate)
{
    MxDate d1( 2980, 9, 12 );
    MxDate d2 = d1.addDays( 202 );
    MxDate expected( 2981, 4, 2 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_27870929_neg202, MxDate)
{
    MxDate d1( 2787, 9, 29 );
    MxDate d2 = d1.addDays( -202 );
    MxDate expected( 2787, 3, 11 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_40630303_403, MxDate)
{
    MxDate d1( 4063, 3, 3 );
    MxDate d2 = d1.addDays( 403 );
    MxDate expected( 4064, 4, 9 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_40770814_neg403, MxDate)
{
    MxDate d1( 4077, 8, 14 );
    MxDate d2 = d1.addDays( -403 );
    MxDate expected( 4076, 7, 7 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_66430123_604, MxDate)
{
    MxDate d1( 6643, 1, 23 );
    MxDate d2 = d1.addDays( 604 );
    MxDate expected( 6644, 9, 18 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_82990222_neg604, MxDate)
{
    MxDate d1( 8299, 2, 22 );
    MxDate d2 = d1.addDays( -604 );
    MxDate expected( 8297, 6, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_85861110_805, MxDate)
{
    MxDate d1( 8586, 11, 10 );
    MxDate d2 = d1.addDays( 805 );
    MxDate expected( 8589, 1, 23 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_38450606_neg805, MxDate)
{
    MxDate d1( 3845, 6, 6 );
    MxDate d2 = d1.addDays( -805 );
    MxDate expected( 3843, 3, 24 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_76550522_1006, MxDate)
{
    MxDate d1( 7655, 5, 22 );
    MxDate d2 = d1.addDays( 1006 );
    MxDate expected( 7658, 2, 21 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_39470114_neg1006, MxDate)
{
    MxDate d1( 3947, 1, 14 );
    MxDate d2 = d1.addDays( -1006 );
    MxDate expected( 3944, 4, 13 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_87690906_1207, MxDate)
{
    MxDate d1( 8769, 9, 6 );
    MxDate d2 = d1.addDays( 1207 );
    MxDate expected( 8772, 12, 26 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_90280120_neg1207, MxDate)
{
    MxDate d1( 9028, 1, 20 );
    MxDate d2 = d1.addDays( -1207 );
    MxDate expected( 9024, 9, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_44070430_1408, MxDate)
{
    MxDate d1( 4407, 4, 30 );
    MxDate d2 = d1.addDays( 1408 );
    MxDate expected( 4411, 3, 8 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_55840916_neg1408, MxDate)
{
    MxDate d1( 5584, 9, 16 );
    MxDate d2 = d1.addDays( -1408 );
    MxDate expected( 5580, 11, 8 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_78400616_1609, MxDate)
{
    MxDate d1( 7840, 6, 16 );
    MxDate d2 = d1.addDays( 1609 );
    MxDate expected( 7844, 11, 11 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_97471114_neg1609, MxDate)
{
    MxDate d1( 9747, 11, 14 );
    MxDate d2 = d1.addDays( -1609 );
    MxDate expected( 9743, 6, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_58791109_1810, MxDate)
{
    MxDate d1( 5879, 11, 9 );
    MxDate d2 = d1.addDays( 1810 );
    MxDate expected( 5884, 10, 23 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_96660815_neg1810, MxDate)
{
    MxDate d1( 9666, 8, 15 );
    MxDate d2 = d1.addDays( -1810 );
    MxDate expected( 9661, 8, 31 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_54981103_2011, MxDate)
{
    MxDate d1( 5498, 11, 3 );
    MxDate d2 = d1.addDays( 2011 );
    MxDate expected( 5504, 5, 7 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_29170625_neg2011, MxDate)
{
    MxDate d1( 2917, 6, 25 );
    MxDate d2 = d1.addDays( -2011 );
    MxDate expected( 2911, 12, 23 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_73820825_2212, MxDate)
{
    MxDate d1( 7382, 8, 25 );
    MxDate d2 = d1.addDays( 2212 );
    MxDate expected( 7388, 9, 14 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_96821106_neg2212, MxDate)
{
    MxDate d1( 9682, 11, 6 );
    MxDate d2 = d1.addDays( -2212 );
    MxDate expected( 9676, 10, 16 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_38260301_2413, MxDate)
{
    MxDate d1( 3826, 3, 1 );
    MxDate d2 = d1.addDays( 2413 );
    MxDate expected( 3832, 10, 8 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_72960713_neg2413, MxDate)
{
    MxDate d1( 7296, 7, 13 );
    MxDate d2 = d1.addDays( -2413 );
    MxDate expected( 7289, 12, 4 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_66791206_2614, MxDate)
{
    MxDate d1( 6679, 12, 6 );
    MxDate d2 = d1.addDays( 2614 );
    MxDate expected( 6687, 2, 1 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_98440223_neg2614, MxDate)
{
    MxDate d1( 9844, 2, 23 );
    MxDate d2 = d1.addDays( -2614 );
    MxDate expected( 9836, 12, 27 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_50050227_2815, MxDate)
{
    MxDate d1( 5005, 2, 27 );
    MxDate d2 = d1.addDays( 2815 );
    MxDate expected( 5012, 11, 12 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_68031206_neg2815, MxDate)
{
    MxDate d1( 6803, 12, 6 );
    MxDate d2 = d1.addDays( -2815 );
    MxDate expected( 6796, 3, 22 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_40770421_3016, MxDate)
{
    MxDate d1( 4077, 4, 21 );
    MxDate d2 = d1.addDays( 3016 );
    MxDate expected( 4085, 7, 24 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_52701106_neg3016, MxDate)
{
    MxDate d1( 5270, 11, 6 );
    MxDate d2 = d1.addDays( -3016 );
    MxDate expected( 5262, 8, 4 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_22910106_3217, MxDate)
{
    MxDate d1( 2291, 1, 6 );
    MxDate d2 = d1.addDays( 3217 );
    MxDate expected( 2299, 10, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_88910816_neg3217, MxDate)
{
    MxDate d1( 8891, 8, 16 );
    MxDate d2 = d1.addDays( -3217 );
    MxDate expected( 8882, 10, 25 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_47760617_3418, MxDate)
{
    MxDate d1( 4776, 6, 17 );
    MxDate d2 = d1.addDays( 3418 );
    MxDate expected( 4785, 10, 26 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_73261022_neg3418, MxDate)
{
    MxDate d1( 7326, 10, 22 );
    MxDate d2 = d1.addDays( -3418 );
    MxDate expected( 7317, 6, 13 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_91800428_3619, MxDate)
{
    MxDate d1( 9180, 4, 28 );
    MxDate d2 = d1.addDays( 3619 );
    MxDate expected( 9190, 3, 26 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_74940813_neg3619, MxDate)
{
    MxDate d1( 7494, 8, 13 );
    MxDate d2 = d1.addDays( -3619 );
    MxDate expected( 7484, 9, 15 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_63010718_3820, MxDate)
{
    MxDate d1( 6301, 7, 18 );
    MxDate d2 = d1.addDays( 3820 );
    MxDate expected( 6312, 1, 2 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_53241124_neg3820, MxDate)
{
    MxDate d1( 5324, 11, 24 );
    MxDate d2 = d1.addDays( -3820 );
    MxDate expected( 5314, 6, 10 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_43060827_4021, MxDate)
{
    MxDate d1( 4306, 8, 27 );
    MxDate d2 = d1.addDays( 4021 );
    MxDate expected( 4317, 8, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_26380413_neg4021, MxDate)
{
    MxDate d1( 2638, 4, 13 );
    MxDate d2 = d1.addDays( -4021 );
    MxDate expected( 2627, 4, 10 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_52700731_4222, MxDate)
{
    MxDate d1( 5270, 7, 31 );
    MxDate d2 = d1.addDays( 4222 );
    MxDate expected( 5282, 2, 20 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_26570303_neg4222, MxDate)
{
    MxDate d1( 2657, 3, 3 );
    MxDate d2 = d1.addDays( -4222 );
    MxDate expected( 2645, 8, 11 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_79560304_4423, MxDate)
{
    MxDate d1( 7956, 3, 4 );
    MxDate d2 = d1.addDays( 4423 );
    MxDate expected( 7968, 4, 13 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_33001207_neg4423, MxDate)
{
    MxDate d1( 3300, 12, 7 );
    MxDate d2 = d1.addDays( -4423 );
    MxDate expected( 3288, 10, 27 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_92370107_4624, MxDate)
{
    MxDate d1( 9237, 1, 7 );
    MxDate d2 = d1.addDays( 4624 );
    MxDate expected( 9249, 9, 5 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_63621220_neg4624, MxDate)
{
    MxDate d1( 6362, 12, 20 );
    MxDate d2 = d1.addDays( -4624 );
    MxDate expected( 6350, 4, 23 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_88061021_4825, MxDate)
{
    MxDate d1( 8806, 10, 21 );
    MxDate d2 = d1.addDays( 4825 );
    MxDate expected( 8820, 1, 6 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_25540829_neg4825, MxDate)
{
    MxDate d1( 2554, 8, 29 );
    MxDate d2 = d1.addDays( -4825 );
    MxDate expected( 2541, 6, 13 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_82171223_5026, MxDate)
{
    MxDate d1( 8217, 12, 23 );
    MxDate d2 = d1.addDays( 5026 );
    MxDate expected( 8231, 9, 27 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_78110702_neg5026, MxDate)
{
    MxDate d1( 7811, 7, 2 );
    MxDate d2 = d1.addDays( -5026 );
    MxDate expected( 7797, 9, 26 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_83940516_5227, MxDate)
{
    MxDate d1( 8394, 5, 16 );
    MxDate d2 = d1.addDays( 5227 );
    MxDate expected( 8408, 9, 6 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_90491114_neg5227, MxDate)
{
    MxDate d1( 9049, 11, 14 );
    MxDate d2 = d1.addDays( -5227 );
    MxDate expected( 9035, 7, 24 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_71710506_5428, MxDate)
{
    MxDate d1( 7171, 5, 6 );
    MxDate d2 = d1.addDays( 5428 );
    MxDate expected( 7186, 3, 16 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_50640624_neg5428, MxDate)
{
    MxDate d1( 5064, 6, 24 );
    MxDate d2 = d1.addDays( -5428 );
    MxDate expected( 5049, 8, 14 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_95540206_5629, MxDate)
{
    MxDate d1( 9554, 2, 6 );
    MxDate d2 = d1.addDays( 5629 );
    MxDate expected( 9569, 7, 6 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_49350910_neg5629, MxDate)
{
    MxDate d1( 4935, 9, 10 );
    MxDate d2 = d1.addDays( -5629 );
    MxDate expected( 4920, 4, 12 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_27280215_5830, MxDate)
{
    MxDate d1( 2728, 2, 15 );
    MxDate d2 = d1.addDays( 5830 );
    MxDate expected( 2744, 2, 1 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_52470915_neg5830, MxDate)
{
    MxDate d1( 5247, 9, 15 );
    MxDate d2 = d1.addDays( -5830 );
    MxDate expected( 5231, 9, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_31160607_6031, MxDate)
{
    MxDate d1( 3116, 6, 7 );
    MxDate d2 = d1.addDays( 6031 );
    MxDate expected( 3132, 12, 11 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_78021007_neg6031, MxDate)
{
    MxDate d1( 7802, 10, 7 );
    MxDate d2 = d1.addDays( -6031 );
    MxDate expected( 7786, 4, 2 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_91320816_6232, MxDate)
{
    MxDate d1( 9132, 8, 16 );
    MxDate d2 = d1.addDays( 6232 );
    MxDate expected( 9149, 9, 8 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_67240610_neg6232, MxDate)
{
    MxDate d1( 6724, 6, 10 );
    MxDate d2 = d1.addDays( -6232 );
    MxDate expected( 6707, 5, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_92511204_6433, MxDate)
{
    MxDate d1( 9251, 12, 4 );
    MxDate d2 = d1.addDays( 6433 );
    MxDate expected( 9269, 7, 15 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_22480312_neg6433, MxDate)
{
    MxDate d1( 2248, 3, 12 );
    MxDate d2 = d1.addDays( -6433 );
    MxDate expected( 2230, 8, 1 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_88251003_6634, MxDate)
{
    MxDate d1( 8825, 10, 3 );
    MxDate d2 = d1.addDays( 6634 );
    MxDate expected( 8843, 12, 2 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_97690525_neg6634, MxDate)
{
    MxDate d1( 9769, 5, 25 );
    MxDate d2 = d1.addDays( -6634 );
    MxDate expected( 9751, 3, 27 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_57810712_6835, MxDate)
{
    MxDate d1( 5781, 7, 12 );
    MxDate d2 = d1.addDays( 6835 );
    MxDate expected( 5800, 3, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_64660306_neg6835, MxDate)
{
    MxDate d1( 6466, 3, 6 );
    MxDate d2 = d1.addDays( -6835 );
    MxDate expected( 6447, 6, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_35030711_7036, MxDate)
{
    MxDate d1( 3503, 7, 11 );
    MxDate d2 = d1.addDays( 7036 );
    MxDate expected( 3522, 10, 15 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_85800519_neg7036, MxDate)
{
    MxDate d1( 8580, 5, 19 );
    MxDate d2 = d1.addDays( -7036 );
    MxDate expected( 8561, 2, 12 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_67840417_7237, MxDate)
{
    MxDate d1( 6784, 4, 17 );
    MxDate d2 = d1.addDays( 7237 );
    MxDate expected( 6804, 2, 9 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_35580825_neg7237, MxDate)
{
    MxDate d1( 3558, 8, 25 );
    MxDate d2 = d1.addDays( -7237 );
    MxDate expected( 3538, 11, 1 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_73170216_7438, MxDate)
{
    MxDate d1( 7317, 2, 16 );
    MxDate d2 = d1.addDays( 7438 );
    MxDate expected( 7337, 6, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_49171212_neg7438, MxDate)
{
    MxDate d1( 4917, 12, 12 );
    MxDate d2 = d1.addDays( -7438 );
    MxDate expected( 4897, 7, 31 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_28820604_7639, MxDate)
{
    MxDate d1( 2882, 6, 4 );
    MxDate d2 = d1.addDays( 7639 );
    MxDate expected( 2903, 5, 5 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_82230404_neg7639, MxDate)
{
    MxDate d1( 8223, 4, 4 );
    MxDate d2 = d1.addDays( -7639 );
    MxDate expected( 8202, 5, 5 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_22380421_7840, MxDate)
{
    MxDate d1( 2238, 4, 21 );
    MxDate d2 = d1.addDays( 7840 );
    MxDate expected( 2259, 10, 8 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_24001029_neg7840, MxDate)
{
    MxDate d1( 2400, 10, 29 );
    MxDate d2 = d1.addDays( -7840 );
    MxDate expected( 2379, 5, 13 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_88450530_8041, MxDate)
{
    MxDate d1( 8845, 5, 30 );
    MxDate d2 = d1.addDays( 8041 );
    MxDate expected( 8867, 6, 5 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_26980212_neg8041, MxDate)
{
    MxDate d1( 2698, 2, 12 );
    MxDate d2 = d1.addDays( -8041 );
    MxDate expected( 2676, 2, 7 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_88350419_8242, MxDate)
{
    MxDate d1( 8835, 4, 19 );
    MxDate d2 = d1.addDays( 8242 );
    MxDate expected( 8857, 11, 11 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_57940927_neg8242, MxDate)
{
    MxDate d1( 5794, 9, 27 );
    MxDate d2 = d1.addDays( -8242 );
    MxDate expected( 5772, 3, 4 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_72510307_8443, MxDate)
{
    MxDate d1( 7251, 3, 7 );
    MxDate d2 = d1.addDays( 8443 );
    MxDate expected( 7274, 4, 18 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_70040908_neg8443, MxDate)
{
    MxDate d1( 7004, 9, 8 );
    MxDate d2 = d1.addDays( -8443 );
    MxDate expected( 6981, 7, 27 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_32921124_8644, MxDate)
{
    MxDate d1( 3292, 11, 24 );
    MxDate d2 = d1.addDays( 8644 );
    MxDate expected( 3316, 7, 26 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_96450729_neg8644, MxDate)
{
    MxDate d1( 9645, 7, 29 );
    MxDate d2 = d1.addDays( -8644 );
    MxDate expected( 9621, 11, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_35820127_8845, MxDate)
{
    MxDate d1( 3582, 1, 27 );
    MxDate d2 = d1.addDays( 8845 );
    MxDate expected( 3606, 4, 16 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_49810408_neg8845, MxDate)
{
    MxDate d1( 4981, 4, 8 );
    MxDate d2 = d1.addDays( -8845 );
    MxDate expected( 4957, 1, 19 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_29310523_9046, MxDate)
{
    MxDate d1( 2931, 5, 23 );
    MxDate d2 = d1.addDays( 9046 );
    MxDate expected( 2956, 2, 27 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_52750613_neg9046, MxDate)
{
    MxDate d1( 5275, 6, 13 );
    MxDate d2 = d1.addDays( -9046 );
    MxDate expected( 5250, 9, 6 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_23641104_9247, MxDate)
{
    MxDate d1( 2364, 11, 4 );
    MxDate d2 = d1.addDays( 9247 );
    MxDate expected( 2390, 2, 28 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_73290524_neg9247, MxDate)
{
    MxDate d1( 7329, 5, 24 );
    MxDate d2 = d1.addDays( -9247 );
    MxDate expected( 7304, 1, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_46100618_9448, MxDate)
{
    MxDate d1( 4610, 6, 18 );
    MxDate d2 = d1.addDays( 9448 );
    MxDate expected( 4636, 4, 30 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_27500102_neg9448, MxDate)
{
    MxDate d1( 2750, 1, 2 );
    MxDate d2 = d1.addDays( -9448 );
    MxDate expected( 2724, 2, 20 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_71510822_9649, MxDate)
{
    MxDate d1( 7151, 8, 22 );
    MxDate d2 = d1.addDays( 9649 );
    MxDate expected( 7178, 1, 21 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_72910322_neg9649, MxDate)
{
    MxDate d1( 7291, 3, 22 );
    MxDate d2 = d1.addDays( -9649 );
    MxDate expected( 7264, 10, 20 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_21310323_9850, MxDate)
{
    MxDate d1( 2131, 3, 23 );
    MxDate d2 = d1.addDays( 9850 );
    MxDate expected( 2158, 3, 11 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}
TEST(add_day_66160518_neg9850, MxDate)
{
    MxDate d1( 6616, 5, 18 );
    MxDate d2 = d1.addDays( -9850 );
    MxDate expected( 6589, 5, 29 );
    MxDate actual = d1;
    CHECK_EQUAL( expected, actual )
	actual = d2;
	CHECK_EQUAL( expected, actual )
}

#endif

