#if 1==1

#include "TestHarness.h"
#include "MxDate.h"

using namespace lexicon;

TEST(Ctor_out_of_Range001, MxDate)
{
    MxDate d( -1, 2, 3 );
    int expected = 1;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 3;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor_out_of_Range002, MxDate)
{
    MxDate d( 2014, 0, 13 );
    int expected = 2014;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 1;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 13;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor_out_of_Range003, MxDate)
{
    MxDate d( 2018, 6, -15 );
    int expected = 2018;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 6;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 1;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor_out_of_Range004, MxDate)
{
    MxDate d( 10000, 12, 15 );
    int expected = 9999;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 12;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 15;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor_out_of_Range005, MxDate)
{
    MxDate d( 1988, 32, 31 );
    int expected = 1988;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 12;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 31;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor_out_of_Range006, MxDate)
{
    MxDate d( 1812, 2, 64 );
    int expected = 1812;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29; // leap year
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor_out_of_Range007, MxDate)
{
    MxDate d( 1905, 2, 29 );
    int expected = 1905;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 28; // non leap year
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor_in_Range001, MxDate)
{
    MxDate d( 1, 1, 1 );
    int expected = 1;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 1;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 1;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}


TEST(Ctor00680229, MxDate)
{
    MxDate d( 68, 2, 29 );
    int expected = 68;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor00720229, MxDate)
{
    MxDate d( 72, 2, 29 );
    int expected = 72;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor00760229, MxDate)
{
    MxDate d( 76, 2, 29 );
    int expected = 76;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor00800229, MxDate)
{
    MxDate d( 80, 2, 29 );
    int expected = 80;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor00840229, MxDate)
{
    MxDate d( 84, 2, 29 );
    int expected = 84;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor00880229, MxDate)
{
    MxDate d( 88, 2, 29 );
    int expected = 88;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor00920229, MxDate)
{
    MxDate d( 92, 2, 29 );
    int expected = 92;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor00960229, MxDate)
{
    MxDate d( 96, 2, 29 );
    int expected = 96;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}


TEST(Ctor54440229, MxDate)
{
    MxDate d( 5444, 2, 29 );
    int expected = 5444;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor87960229, MxDate)
{
    MxDate d( 8796, 2, 29 );
    int expected = 8796;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor39760229, MxDate)
{
    MxDate d( 3976, 2, 29 );
    int expected = 3976;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor51280229, MxDate)
{
    MxDate d( 5128, 2, 29 );
    int expected = 5128;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor35320229, MxDate)
{
    MxDate d( 3532, 2, 29 );
    int expected = 3532;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor68440229, MxDate)
{
    MxDate d( 6844, 2, 29 );
    int expected = 6844;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor93080229, MxDate)
{
    MxDate d( 9308, 2, 29 );
    int expected = 9308;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor35360229, MxDate)
{
    MxDate d( 3536, 2, 29 );
    int expected = 3536;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor91720229, MxDate)
{
    MxDate d( 9172, 2, 29 );
    int expected = 9172;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor28200229, MxDate)
{
    MxDate d( 2820, 2, 29 );
    int expected = 2820;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor99560229, MxDate)
{
    MxDate d( 9956, 2, 29 );
    int expected = 9956;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor61920229, MxDate)
{
    MxDate d( 6192, 2, 29 );
    int expected = 6192;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor82840229, MxDate)
{
    MxDate d( 8284, 2, 29 );
    int expected = 8284;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor31080229, MxDate)
{
    MxDate d( 3108, 2, 29 );
    int expected = 3108;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor87840229, MxDate)
{
    MxDate d( 8784, 2, 29 );
    int expected = 8784;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor88560229, MxDate)
{
    MxDate d( 8856, 2, 29 );
    int expected = 8856;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor94680229, MxDate)
{
    MxDate d( 9468, 2, 29 );
    int expected = 9468;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor73080229, MxDate)
{
    MxDate d( 7308, 2, 29 );
    int expected = 7308;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor21400229, MxDate)
{
    MxDate d( 2140, 2, 29 );
    int expected = 2140;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor26560229, MxDate)
{
    MxDate d( 2656, 2, 29 );
    int expected = 2656;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor56800229, MxDate)
{
    MxDate d( 5680, 2, 29 );
    int expected = 5680;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor37160229, MxDate)
{
    MxDate d( 3716, 2, 29 );
    int expected = 3716;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor99680229, MxDate)
{
    MxDate d( 9968, 2, 29 );
    int expected = 9968;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor61120229, MxDate)
{
    MxDate d( 6112, 2, 29 );
    int expected = 6112;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor53480229, MxDate)
{
    MxDate d( 5348, 2, 29 );
    int expected = 5348;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor40680229, MxDate)
{
    MxDate d( 4068, 2, 29 );
    int expected = 4068;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor31920229, MxDate)
{
    MxDate d( 3192, 2, 29 );
    int expected = 3192;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor88760229, MxDate)
{
    MxDate d( 8876, 2, 29 );
    int expected = 8876;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor64880229, MxDate)
{
    MxDate d( 6488, 2, 29 );
    int expected = 6488;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor08480229, MxDate)
{
    MxDate d( 848, 2, 29 );
    int expected = 848;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor66760229, MxDate)
{
    MxDate d( 6676, 2, 29 );
    int expected = 6676;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor76760229, MxDate)
{
    MxDate d( 7676, 2, 29 );
    int expected = 7676;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor54920229, MxDate)
{
    MxDate d( 5492, 2, 29 );
    int expected = 5492;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor67920229, MxDate)
{
    MxDate d( 6792, 2, 29 );
    int expected = 6792;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor40160229, MxDate)
{
    MxDate d( 4016, 2, 29 );
    int expected = 4016;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor03160229, MxDate)
{
    MxDate d( 316, 2, 29 );
    int expected = 316;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor58600229, MxDate)
{
    MxDate d( 5860, 2, 29 );
    int expected = 5860;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor83640229, MxDate)
{
    MxDate d( 8364, 2, 29 );
    int expected = 8364;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor32400229, MxDate)
{
    MxDate d( 3240, 2, 29 );
    int expected = 3240;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor11400229, MxDate)
{
    MxDate d( 1140, 2, 29 );
    int expected = 1140;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor16640229, MxDate)
{
    MxDate d( 1664, 2, 29 );
    int expected = 1664;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor64080229, MxDate)
{
    MxDate d( 6408, 2, 29 );
    int expected = 6408;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor13320229, MxDate)
{
    MxDate d( 1332, 2, 29 );
    int expected = 1332;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor32280229, MxDate)
{
    MxDate d( 3228, 2, 29 );
    int expected = 3228;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor50440229, MxDate)
{
    MxDate d( 5044, 2, 29 );
    int expected = 5044;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor59600229, MxDate)
{
    MxDate d( 5960, 2, 29 );
    int expected = 5960;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor39200229, MxDate)
{
    MxDate d( 3920, 2, 29 );
    int expected = 3920;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor90800229, MxDate)
{
    MxDate d( 9080, 2, 29 );
    int expected = 9080;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor88400229, MxDate)
{
    MxDate d( 8840, 2, 29 );
    int expected = 8840;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor52040229, MxDate)
{
    MxDate d( 5204, 2, 29 );
    int expected = 5204;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor85520229, MxDate)
{
    MxDate d( 8552, 2, 29 );
    int expected = 8552;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor82440229, MxDate)
{
    MxDate d( 8244, 2, 29 );
    int expected = 8244;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor11600229, MxDate)
{
    MxDate d( 1160, 2, 29 );
    int expected = 1160;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor19920229, MxDate)
{
    MxDate d( 1992, 2, 29 );
    int expected = 1992;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor56840229, MxDate)
{
    MxDate d( 5684, 2, 29 );
    int expected = 5684;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor57520229, MxDate)
{
    MxDate d( 5752, 2, 29 );
    int expected = 5752;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor83120229, MxDate)
{
    MxDate d( 8312, 2, 29 );
    int expected = 8312;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor28960229, MxDate)
{
    MxDate d( 2896, 2, 29 );
    int expected = 2896;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor45480229, MxDate)
{
    MxDate d( 4548, 2, 29 );
    int expected = 4548;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor75080229, MxDate)
{
    MxDate d( 7508, 2, 29 );
    int expected = 7508;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}


TEST(Ctor15300129, MxDate)
{
    MxDate d( 1530, 1, 29 );
    int expected = 1530;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 1;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 29;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor44990928, MxDate)
{
    MxDate d( 4499, 9, 28 );
    int expected = 4499;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 9;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 28;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor22151103, MxDate)
{
    MxDate d( 2215, 11, 3 );
    int expected = 2215;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 11;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 3;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor32530427, MxDate)
{
    MxDate d( 3253, 4, 27 );
    int expected = 3253;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 4;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 27;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor30580119, MxDate)
{
    MxDate d( 3058, 1, 19 );
    int expected = 3058;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 1;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 19;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

TEST(Ctor96770614, MxDate)
{
    MxDate d( 9677, 6, 14 );
    int expected = 9677;
    int actual = d.getYear();
    CHECK_EQUAL( expected, actual )
    expected = 6;
    actual = d.getMonth();
    CHECK_EQUAL( expected, actual )
    expected = 14;
    actual = d.getDay();
    CHECK_EQUAL( expected, actual )
}

#endif

