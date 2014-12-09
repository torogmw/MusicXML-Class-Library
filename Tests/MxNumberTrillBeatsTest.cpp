/** *******************************************************
  * Class under test: MxNumberTrillBeats
  * *******************************************************
  * **/
#include <iostream>
#include <string>
#include <sstream>
#include "TestHarness.h"
#include "MxNumberTrillBeats.h"

using namespace std;
using namespace lexicon;

/* Constructor Tests -------------------------------------------------------- */

TEST( ctorDefault, MxNumberTrillBeats )
{
	MxNumberTrillBeats object;
	CHECK( true )
}
TEST( ctorValue0, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0 );
	bool expected = false;
	bool actual = object.getValue() == 0;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d02, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.02 );
	bool expected = false;
	bool actual = object.getValue() == 0.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d039999999999999999999, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.04 );
	bool expected = false;
	bool actual = object.getValue() == 0.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d059999999999999999999, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.06 );
	bool expected = false;
	bool actual = object.getValue() == 0.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d079999999999999999998, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.08 );
	bool expected = false;
	bool actual = object.getValue() == 0.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d099999999999999999995, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.1 );
	bool expected = false;
	bool actual = object.getValue() == 0.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d11999999999999999999, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.12 );
	bool expected = false;
	bool actual = object.getValue() == 0.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d13999999999999999999, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.14 );
	bool expected = false;
	bool actual = object.getValue() == 0.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d15999999999999999998, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.16 );
	bool expected = false;
	bool actual = object.getValue() == 0.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d17999999999999999998, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.18 );
	bool expected = false;
	bool actual = object.getValue() == 0.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d19999999999999999998, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.2 );
	bool expected = false;
	bool actual = object.getValue() == 0.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d21999999999999999997, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.22 );
	bool expected = false;
	bool actual = object.getValue() == 0.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d23999999999999999997, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.24 );
	bool expected = false;
	bool actual = object.getValue() == 0.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d25999999999999999996, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.26 );
	bool expected = false;
	bool actual = object.getValue() == 0.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d27999999999999999997, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.28 );
	bool expected = false;
	bool actual = object.getValue() == 0.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d29999999999999999998, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.3 );
	bool expected = false;
	bool actual = object.getValue() == 0.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d31999999999999999999, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.32 );
	bool expected = false;
	bool actual = object.getValue() == 0.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d34, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.34 );
	bool expected = false;
	bool actual = object.getValue() == 0.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d36000000000000000001, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.36 );
	bool expected = false;
	bool actual = object.getValue() == 0.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d38000000000000000002, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.38 );
	bool expected = false;
	bool actual = object.getValue() == 0.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d40000000000000000003, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.4 );
	bool expected = false;
	bool actual = object.getValue() == 0.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d42000000000000000004, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.42 );
	bool expected = false;
	bool actual = object.getValue() == 0.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d44000000000000000005, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.44 );
	bool expected = false;
	bool actual = object.getValue() == 0.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d46000000000000000006, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.46 );
	bool expected = false;
	bool actual = object.getValue() == 0.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d48000000000000000007, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.48 );
	bool expected = false;
	bool actual = object.getValue() == 0.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d50000000000000000005, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.5 );
	bool expected = false;
	bool actual = object.getValue() == 0.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d52000000000000000004, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.52 );
	bool expected = false;
	bool actual = object.getValue() == 0.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d54000000000000000002, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.54 );
	bool expected = false;
	bool actual = object.getValue() == 0.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d56, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.56 );
	bool expected = false;
	bool actual = object.getValue() == 0.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d57999999999999999998, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.58 );
	bool expected = false;
	bool actual = object.getValue() == 0.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d59999999999999999997, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.6 );
	bool expected = false;
	bool actual = object.getValue() == 0.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d61999999999999999995, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.62 );
	bool expected = false;
	bool actual = object.getValue() == 0.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d63999999999999999993, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.64 );
	bool expected = false;
	bool actual = object.getValue() == 0.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d65999999999999999992, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.66 );
	bool expected = false;
	bool actual = object.getValue() == 0.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d6799999999999999999, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.68 );
	bool expected = false;
	bool actual = object.getValue() == 0.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d69999999999999999988, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.7 );
	bool expected = false;
	bool actual = object.getValue() == 0.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d71999999999999999986, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.72 );
	bool expected = false;
	bool actual = object.getValue() == 0.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d73999999999999999985, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.74 );
	bool expected = false;
	bool actual = object.getValue() == 0.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d75999999999999999983, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.76 );
	bool expected = false;
	bool actual = object.getValue() == 0.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d77999999999999999981, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.78 );
	bool expected = false;
	bool actual = object.getValue() == 0.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d79999999999999999979, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.8 );
	bool expected = false;
	bool actual = object.getValue() == 0.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d81999999999999999978, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.82 );
	bool expected = false;
	bool actual = object.getValue() == 0.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d83999999999999999976, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.84 );
	bool expected = false;
	bool actual = object.getValue() == 0.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d85999999999999999974, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.86 );
	bool expected = false;
	bool actual = object.getValue() == 0.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d87999999999999999972, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.88 );
	bool expected = false;
	bool actual = object.getValue() == 0.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d89999999999999999971, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.9 );
	bool expected = false;
	bool actual = object.getValue() == 0.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d91999999999999999969, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.92 );
	bool expected = false;
	bool actual = object.getValue() == 0.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d93999999999999999967, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.94 );
	bool expected = false;
	bool actual = object.getValue() == 0.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d95999999999999999966, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.96 );
	bool expected = false;
	bool actual = object.getValue() == 0.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d97999999999999999964, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 0.98 );
	bool expected = false;
	bool actual = object.getValue() == 0.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d99999999999999999962, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1 );
	bool expected = false;
	bool actual = object.getValue() == 1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d0199999999999999997, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.02 );
	bool expected = false;
	bool actual = object.getValue() == 1.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d0399999999999999996, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.04 );
	bool expected = false;
	bool actual = object.getValue() == 1.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d0599999999999999996, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.06 );
	bool expected = false;
	bool actual = object.getValue() == 1.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d0799999999999999996, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.08 );
	bool expected = false;
	bool actual = object.getValue() == 1.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d0999999999999999996, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.1 );
	bool expected = false;
	bool actual = object.getValue() == 1.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d1199999999999999996, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.12 );
	bool expected = false;
	bool actual = object.getValue() == 1.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d1399999999999999996, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.14 );
	bool expected = false;
	bool actual = object.getValue() == 1.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d1599999999999999995, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.16 );
	bool expected = false;
	bool actual = object.getValue() == 1.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d1799999999999999995, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.18 );
	bool expected = false;
	bool actual = object.getValue() == 1.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d1999999999999999995, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.2 );
	bool expected = false;
	bool actual = object.getValue() == 1.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d2199999999999999995, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.22 );
	bool expected = false;
	bool actual = object.getValue() == 1.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d2399999999999999995, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.24 );
	bool expected = false;
	bool actual = object.getValue() == 1.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d2599999999999999994, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.26 );
	bool expected = false;
	bool actual = object.getValue() == 1.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d2799999999999999994, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.28 );
	bool expected = false;
	bool actual = object.getValue() == 1.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d2999999999999999994, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.3 );
	bool expected = false;
	bool actual = object.getValue() == 1.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d3199999999999999994, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.32 );
	bool expected = false;
	bool actual = object.getValue() == 1.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d3399999999999999994, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.34 );
	bool expected = false;
	bool actual = object.getValue() == 1.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d3599999999999999994, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.36 );
	bool expected = false;
	bool actual = object.getValue() == 1.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d3799999999999999993, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.38 );
	bool expected = false;
	bool actual = object.getValue() == 1.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d3999999999999999993, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.4 );
	bool expected = false;
	bool actual = object.getValue() == 1.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d4199999999999999993, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.42 );
	bool expected = false;
	bool actual = object.getValue() == 1.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d4399999999999999993, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.44 );
	bool expected = false;
	bool actual = object.getValue() == 1.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d4599999999999999993, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.46 );
	bool expected = false;
	bool actual = object.getValue() == 1.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d4799999999999999993, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.48 );
	bool expected = false;
	bool actual = object.getValue() == 1.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d4999999999999999992, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.5 );
	bool expected = false;
	bool actual = object.getValue() == 1.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d5199999999999999992, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.52 );
	bool expected = false;
	bool actual = object.getValue() == 1.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d5399999999999999992, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.54 );
	bool expected = false;
	bool actual = object.getValue() == 1.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d5599999999999999992, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.56 );
	bool expected = false;
	bool actual = object.getValue() == 1.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d5799999999999999992, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.58 );
	bool expected = false;
	bool actual = object.getValue() == 1.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d5999999999999999992, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.6 );
	bool expected = false;
	bool actual = object.getValue() == 1.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d6199999999999999991, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.62 );
	bool expected = false;
	bool actual = object.getValue() == 1.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d6399999999999999991, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.64 );
	bool expected = false;
	bool actual = object.getValue() == 1.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d6599999999999999991, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.66 );
	bool expected = false;
	bool actual = object.getValue() == 1.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d6799999999999999991, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.68 );
	bool expected = false;
	bool actual = object.getValue() == 1.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d6999999999999999991, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.7 );
	bool expected = false;
	bool actual = object.getValue() == 1.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d7199999999999999991, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.72 );
	bool expected = false;
	bool actual = object.getValue() == 1.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d739999999999999999, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.74 );
	bool expected = false;
	bool actual = object.getValue() == 1.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d759999999999999999, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.76 );
	bool expected = false;
	bool actual = object.getValue() == 1.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d779999999999999999, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.78 );
	bool expected = false;
	bool actual = object.getValue() == 1.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d799999999999999999, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.8 );
	bool expected = false;
	bool actual = object.getValue() == 1.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d819999999999999999, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.82 );
	bool expected = false;
	bool actual = object.getValue() == 1.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d8399999999999999989, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.84 );
	bool expected = false;
	bool actual = object.getValue() == 1.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d8599999999999999989, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.86 );
	bool expected = false;
	bool actual = object.getValue() == 1.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d8799999999999999989, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.88 );
	bool expected = false;
	bool actual = object.getValue() == 1.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d8999999999999999989, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.9 );
	bool expected = false;
	bool actual = object.getValue() == 1.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d9199999999999999989, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.92 );
	bool expected = false;
	bool actual = object.getValue() == 1.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d9399999999999999989, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.94 );
	bool expected = false;
	bool actual = object.getValue() == 1.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d9599999999999999988, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.96 );
	bool expected = false;
	bool actual = object.getValue() == 1.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d9799999999999999988, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1.98 );
	bool expected = false;
	bool actual = object.getValue() == 1.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d9999999999999999988, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2 );
	bool expected = true;
	bool actual = object.getValue() == 2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d0199999999999999989, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.02 );
	bool expected = true;
	bool actual = object.getValue() == 2.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d0399999999999999989, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.04 );
	bool expected = true;
	bool actual = object.getValue() == 2.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d0599999999999999989, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.06 );
	bool expected = true;
	bool actual = object.getValue() == 2.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d0799999999999999988, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.08 );
	bool expected = true;
	bool actual = object.getValue() == 2.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d0999999999999999988, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.1 );
	bool expected = true;
	bool actual = object.getValue() == 2.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d1199999999999999988, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.12 );
	bool expected = true;
	bool actual = object.getValue() == 2.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d1399999999999999988, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.14 );
	bool expected = true;
	bool actual = object.getValue() == 2.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d1599999999999999988, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.16 );
	bool expected = true;
	bool actual = object.getValue() == 2.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d1799999999999999988, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.18 );
	bool expected = true;
	bool actual = object.getValue() == 2.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d1999999999999999987, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.2 );
	bool expected = true;
	bool actual = object.getValue() == 2.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d2199999999999999987, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.22 );
	bool expected = true;
	bool actual = object.getValue() == 2.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d2399999999999999987, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.24 );
	bool expected = true;
	bool actual = object.getValue() == 2.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d2599999999999999987, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.26 );
	bool expected = true;
	bool actual = object.getValue() == 2.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d2799999999999999987, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.28 );
	bool expected = true;
	bool actual = object.getValue() == 2.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d2999999999999999987, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.3 );
	bool expected = true;
	bool actual = object.getValue() == 2.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d3199999999999999986, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.32 );
	bool expected = true;
	bool actual = object.getValue() == 2.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d3399999999999999986, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.34 );
	bool expected = true;
	bool actual = object.getValue() == 2.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d3599999999999999986, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.36 );
	bool expected = true;
	bool actual = object.getValue() == 2.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d3799999999999999986, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.38 );
	bool expected = true;
	bool actual = object.getValue() == 2.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d3999999999999999986, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.4 );
	bool expected = true;
	bool actual = object.getValue() == 2.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d4199999999999999986, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.42 );
	bool expected = true;
	bool actual = object.getValue() == 2.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d4399999999999999985, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.44 );
	bool expected = true;
	bool actual = object.getValue() == 2.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d4599999999999999985, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.46 );
	bool expected = true;
	bool actual = object.getValue() == 2.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d4799999999999999985, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.48 );
	bool expected = true;
	bool actual = object.getValue() == 2.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d4999999999999999985, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.5 );
	bool expected = true;
	bool actual = object.getValue() == 2.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d5199999999999999985, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.52 );
	bool expected = true;
	bool actual = object.getValue() == 2.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d5399999999999999984, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.54 );
	bool expected = true;
	bool actual = object.getValue() == 2.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d5599999999999999984, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.56 );
	bool expected = true;
	bool actual = object.getValue() == 2.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d5799999999999999984, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.58 );
	bool expected = true;
	bool actual = object.getValue() == 2.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d5999999999999999984, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.6 );
	bool expected = true;
	bool actual = object.getValue() == 2.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d6199999999999999984, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.62 );
	bool expected = true;
	bool actual = object.getValue() == 2.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d6399999999999999984, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.64 );
	bool expected = true;
	bool actual = object.getValue() == 2.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d6599999999999999983, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.66 );
	bool expected = true;
	bool actual = object.getValue() == 2.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d6799999999999999983, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.68 );
	bool expected = true;
	bool actual = object.getValue() == 2.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d6999999999999999983, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.7 );
	bool expected = true;
	bool actual = object.getValue() == 2.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d7199999999999999983, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.72 );
	bool expected = true;
	bool actual = object.getValue() == 2.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d7399999999999999983, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.74 );
	bool expected = true;
	bool actual = object.getValue() == 2.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d7599999999999999983, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.76 );
	bool expected = true;
	bool actual = object.getValue() == 2.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d7799999999999999982, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.78 );
	bool expected = true;
	bool actual = object.getValue() == 2.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d7999999999999999982, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.8 );
	bool expected = true;
	bool actual = object.getValue() == 2.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d8199999999999999982, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.82 );
	bool expected = true;
	bool actual = object.getValue() == 2.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d8399999999999999982, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.84 );
	bool expected = true;
	bool actual = object.getValue() == 2.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d8599999999999999982, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.86 );
	bool expected = true;
	bool actual = object.getValue() == 2.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d8799999999999999982, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.88 );
	bool expected = true;
	bool actual = object.getValue() == 2.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d8999999999999999981, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.9 );
	bool expected = true;
	bool actual = object.getValue() == 2.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d9199999999999999981, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.92 );
	bool expected = true;
	bool actual = object.getValue() == 2.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d9399999999999999981, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.94 );
	bool expected = true;
	bool actual = object.getValue() == 2.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d9599999999999999981, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.96 );
	bool expected = true;
	bool actual = object.getValue() == 2.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d9799999999999999981, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2.98 );
	bool expected = true;
	bool actual = object.getValue() == 2.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2d999999999999999998, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3 );
	bool expected = true;
	bool actual = object.getValue() == 3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d019999999999999998, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.02 );
	bool expected = true;
	bool actual = object.getValue() == 3.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d039999999999999998, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.04 );
	bool expected = true;
	bool actual = object.getValue() == 3.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d059999999999999998, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.06 );
	bool expected = true;
	bool actual = object.getValue() == 3.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d079999999999999998, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.08 );
	bool expected = true;
	bool actual = object.getValue() == 3.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d099999999999999998, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.1 );
	bool expected = true;
	bool actual = object.getValue() == 3.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d1199999999999999979, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.12 );
	bool expected = true;
	bool actual = object.getValue() == 3.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d1399999999999999979, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.14 );
	bool expected = true;
	bool actual = object.getValue() == 3.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d1599999999999999979, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.16 );
	bool expected = true;
	bool actual = object.getValue() == 3.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d1799999999999999979, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.18 );
	bool expected = true;
	bool actual = object.getValue() == 3.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d1999999999999999979, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.2 );
	bool expected = true;
	bool actual = object.getValue() == 3.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d2199999999999999979, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.22 );
	bool expected = true;
	bool actual = object.getValue() == 3.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d2399999999999999978, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.24 );
	bool expected = true;
	bool actual = object.getValue() == 3.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d2599999999999999978, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.26 );
	bool expected = true;
	bool actual = object.getValue() == 3.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d2799999999999999978, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.28 );
	bool expected = true;
	bool actual = object.getValue() == 3.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d2999999999999999978, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.3 );
	bool expected = true;
	bool actual = object.getValue() == 3.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d3199999999999999978, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.32 );
	bool expected = true;
	bool actual = object.getValue() == 3.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d3399999999999999978, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.34 );
	bool expected = true;
	bool actual = object.getValue() == 3.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d3599999999999999977, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.36 );
	bool expected = true;
	bool actual = object.getValue() == 3.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d3799999999999999977, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.38 );
	bool expected = true;
	bool actual = object.getValue() == 3.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d3999999999999999977, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.4 );
	bool expected = true;
	bool actual = object.getValue() == 3.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d4199999999999999977, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.42 );
	bool expected = true;
	bool actual = object.getValue() == 3.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d4399999999999999977, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.44 );
	bool expected = true;
	bool actual = object.getValue() == 3.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d4599999999999999976, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.46 );
	bool expected = true;
	bool actual = object.getValue() == 3.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d4799999999999999976, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.48 );
	bool expected = true;
	bool actual = object.getValue() == 3.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d4999999999999999976, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.5 );
	bool expected = true;
	bool actual = object.getValue() == 3.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d5199999999999999976, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.52 );
	bool expected = true;
	bool actual = object.getValue() == 3.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d5399999999999999976, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.54 );
	bool expected = true;
	bool actual = object.getValue() == 3.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d5599999999999999976, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.56 );
	bool expected = true;
	bool actual = object.getValue() == 3.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d5799999999999999975, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.58 );
	bool expected = true;
	bool actual = object.getValue() == 3.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d5999999999999999975, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.6 );
	bool expected = true;
	bool actual = object.getValue() == 3.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d6199999999999999975, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.62 );
	bool expected = true;
	bool actual = object.getValue() == 3.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d6399999999999999975, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.64 );
	bool expected = true;
	bool actual = object.getValue() == 3.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d6599999999999999975, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.66 );
	bool expected = true;
	bool actual = object.getValue() == 3.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d6799999999999999975, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.68 );
	bool expected = true;
	bool actual = object.getValue() == 3.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d6999999999999999974, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.7 );
	bool expected = true;
	bool actual = object.getValue() == 3.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d7199999999999999974, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.72 );
	bool expected = true;
	bool actual = object.getValue() == 3.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d7399999999999999974, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.74 );
	bool expected = true;
	bool actual = object.getValue() == 3.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d7599999999999999974, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.76 );
	bool expected = true;
	bool actual = object.getValue() == 3.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d7799999999999999974, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.78 );
	bool expected = true;
	bool actual = object.getValue() == 3.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d7999999999999999974, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.8 );
	bool expected = true;
	bool actual = object.getValue() == 3.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d8199999999999999973, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.82 );
	bool expected = true;
	bool actual = object.getValue() == 3.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d8399999999999999973, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.84 );
	bool expected = true;
	bool actual = object.getValue() == 3.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d8599999999999999973, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.86 );
	bool expected = true;
	bool actual = object.getValue() == 3.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d8799999999999999973, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.88 );
	bool expected = true;
	bool actual = object.getValue() == 3.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d8999999999999999973, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.9 );
	bool expected = true;
	bool actual = object.getValue() == 3.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d9199999999999999973, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.92 );
	bool expected = true;
	bool actual = object.getValue() == 3.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d9399999999999999972, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.94 );
	bool expected = true;
	bool actual = object.getValue() == 3.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d9599999999999999972, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.96 );
	bool expected = true;
	bool actual = object.getValue() == 3.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d9799999999999999972, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3.98 );
	bool expected = true;
	bool actual = object.getValue() == 3.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3d9999999999999999972, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 4 );
	bool expected = true;
	bool actual = object.getValue() == 4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 998 );
	bool expected = true;
	bool actual = object.getValue() == 998;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d20000000000000001, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 998.2 );
	bool expected = true;
	bool actual = object.getValue() == 998.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d40000000000000002, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 998.4 );
	bool expected = true;
	bool actual = object.getValue() == 998.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d60000000000000003, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 998.6 );
	bool expected = true;
	bool actual = object.getValue() == 998.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d80000000000000004, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 998.8 );
	bool expected = true;
	bool actual = object.getValue() == 998.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d00000000000000006, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 999 );
	bool expected = true;
	bool actual = object.getValue() == 999;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d20000000000000007, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 999.2 );
	bool expected = true;
	bool actual = object.getValue() == 999.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d40000000000000008, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 999.4 );
	bool expected = true;
	bool actual = object.getValue() == 999.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d60000000000000009, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 999.6 );
	bool expected = true;
	bool actual = object.getValue() == 999.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d8000000000000001, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 999.8 );
	bool expected = true;
	bool actual = object.getValue() == 999.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d0000000000000001, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1000 );
	bool expected = true;
	bool actual = object.getValue() == 1000;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d2000000000000001, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1000.2 );
	bool expected = true;
	bool actual = object.getValue() == 1000.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d4000000000000001, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1000.4 );
	bool expected = true;
	bool actual = object.getValue() == 1000.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d6000000000000001, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1000.6 );
	bool expected = true;
	bool actual = object.getValue() == 1000.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d8000000000000002, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1000.8 );
	bool expected = true;
	bool actual = object.getValue() == 1000.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d0000000000000002, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1001 );
	bool expected = true;
	bool actual = object.getValue() == 1001;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d2000000000000002, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1001.2 );
	bool expected = true;
	bool actual = object.getValue() == 1001.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d4000000000000002, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1001.4 );
	bool expected = true;
	bool actual = object.getValue() == 1001.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d6000000000000002, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1001.6 );
	bool expected = true;
	bool actual = object.getValue() == 1001.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d8000000000000002, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1001.8 );
	bool expected = true;
	bool actual = object.getValue() == 1001.8;
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor Tests --------------------------------------------------- */


/* Assignment Test ---------------------------------------------------------- */

TEST( assignment, MxNumberTrillBeats )
{
	MxNumberTrillBeats original( 2 );
	MxNumberTrillBeats other( 1000 );
	other = original;
	int expected = 2;
	int actual = other.getValue();
	CHECK_EQUAL( expected, actual )
	other.setValue( 1000 );
	expected = 2;
	actual = original.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: Assignment Test ----------------------------------------------------- */


/* Upper and Lower Bound Tests ---------------------------------------------- */

TEST( isLowerRangeBound, MxNumberTrillBeats )
{
	MxNumberTrillBeats object;
	bool expected = true;
	bool actual = object.isLowerRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeBound, MxNumberTrillBeats )
{
	MxNumberTrillBeats object;
	bool expected = false;
	bool actual = object.isUpperRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isLowerRangeLimitInclusive, MxNumberTrillBeats )
{
	MxNumberTrillBeats object;
	bool expected = true;
	bool actual = object.isLowerRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeLimitInclusive, MxNumberTrillBeats )
{
	MxNumberTrillBeats object;
	bool expected = true;
	bool actual = object.isUpperRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( getLowerBound, MxNumberTrillBeats )
{
	MxNumberTrillBeats object;
	int expected = 2;
	int actual = object.getLowerBound();
	CHECK_EQUAL( expected, actual )
}

/* End: Upper and Lower Bound Tests ----------------------------------------- */


/* Documentation Tests ------------------------------------------------------ */

TEST( getXmlTypeName, MxNumberTrillBeats )
{
	MxNumberTrillBeats object;
	std::string expected = "trill-beats";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName, MxNumberTrillBeats )
{
	MxNumberTrillBeats object;
	std::string expected = "MxNumberTrillBeats";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxNumberTrillBeats )
{
	MxNumberTrillBeats object;
	std::string expected = "The trill-beats type specifies the beats used in a trill-sound or bend-sound attribute group. It is a decimal value with a minimum value of 2.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Documentation Tests ------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( getValue_setValue_2_1000, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2 );
	int expected = 2;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 1000 );
	expected = 1000;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_3_999, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3 );
	int expected = 3;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 999 );
	expected = 999;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_4_998, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 4 );
	int expected = 4;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 998 );
	expected = 998;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_5_997, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 5 );
	int expected = 5;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 997 );
	expected = 997;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* stream Tests ------------------------------------------------------------- */

TEST( stream_2_1000, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2 );
	std::stringstream ss1;
	ss1.setf( std::ios::fixed );
	object.stream( ss1 );
	std::string expected = "2";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 1000 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "10001000";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "1000";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_3_999, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3 );
	std::stringstream ss1;
	ss1.setf( std::ios::fixed );
	object.stream( ss1 );
	std::string expected = "3";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 999 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "999999";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "999";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_4_998, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 4 );
	std::stringstream ss1;
	ss1.setf( std::ios::fixed );
	object.stream( ss1 );
	std::string expected = "4";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 998 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "998998";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "998";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_5_997, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 5 );
	std::stringstream ss1;
	ss1.setf( std::ios::fixed );
	object.stream( ss1 );
	std::string expected = "5";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 997 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "997997";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "997";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}

/* End: stream Tests -------------------------------------------------------- */


/* toString() Tests --------------------------------------------------------- */

TEST( toString_1000, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 1000 );
	std::string expected = "1000";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_3, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 3 );
	std::string expected = "3";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_998, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 998 );
	std::string expected = "998";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_5, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 5 );
	std::string expected = "5";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}

/* End: toString() Tests ---------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( fromString_2_1000, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 2 );
	std::stringstream ss1;
	std::string value1 = "1000";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 1000;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 2 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 1000;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_999_3, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 999 );
	std::stringstream ss1;
	std::string value1 = "3";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 3;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 999 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 3;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_4_998, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 4 );
	std::stringstream ss1;
	std::string value1 = "998";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 998;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 4 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 998;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_997_5, MxNumberTrillBeats )
{
	MxNumberTrillBeats object( 997 );
	std::stringstream ss1;
	std::string value1 = "5";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 5;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 997 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 5;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* Comparison Operators ----------------------------------------------------- */

TEST( operatorEqEq_2_3_false, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 2 );
	MxNumberTrillBeats object2( 3 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_3_3_true, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 3 );
	MxNumberTrillBeats object2( 3 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_4_3_false, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 4 );
	MxNumberTrillBeats object2( 3 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_999_1000_false, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 999 );
	MxNumberTrillBeats object2( 1000 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_999_999_true, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 999 );
	MxNumberTrillBeats object2( 999 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_999_998_false, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 999 );
	MxNumberTrillBeats object2( 998 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_2_3_true, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 2 );
	MxNumberTrillBeats object2( 3 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_3_3_false, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 3 );
	MxNumberTrillBeats object2( 3 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_4_3_true, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 4 );
	MxNumberTrillBeats object2( 3 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_999_1000_true, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 999 );
	MxNumberTrillBeats object2( 1000 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_999_999_false, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 999 );
	MxNumberTrillBeats object2( 999 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_999_998_true, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 999 );
	MxNumberTrillBeats object2( 998 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_2_3_false, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 2 );
	MxNumberTrillBeats object2( 3 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_3_3_false, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 3 );
	MxNumberTrillBeats object2( 3 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_4_3_true, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 4 );
	MxNumberTrillBeats object2( 3 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_999_1000_false, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 999 );
	MxNumberTrillBeats object2( 1000 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_999_999_false, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 999 );
	MxNumberTrillBeats object2( 999 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_999_998_true, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 999 );
	MxNumberTrillBeats object2( 998 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_2_3_false, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 2 );
	MxNumberTrillBeats object2( 3 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_3_3_true, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 3 );
	MxNumberTrillBeats object2( 3 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_4_3_true, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 4 );
	MxNumberTrillBeats object2( 3 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_999_1000_false, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 999 );
	MxNumberTrillBeats object2( 1000 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_999_999_true, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 999 );
	MxNumberTrillBeats object2( 999 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_999_998_true, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 999 );
	MxNumberTrillBeats object2( 998 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_2_3_true, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 2 );
	MxNumberTrillBeats object2( 3 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_3_3_false, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 3 );
	MxNumberTrillBeats object2( 3 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_4_3_false, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 4 );
	MxNumberTrillBeats object2( 3 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_999_1000_true, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 999 );
	MxNumberTrillBeats object2( 1000 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_999_999_false, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 999 );
	MxNumberTrillBeats object2( 999 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_999_998_false, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 999 );
	MxNumberTrillBeats object2( 998 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_2_3_true, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 2 );
	MxNumberTrillBeats object2( 3 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_3_3_true, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 3 );
	MxNumberTrillBeats object2( 3 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_4_3_false, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 4 );
	MxNumberTrillBeats object2( 3 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_999_1000_true, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 999 );
	MxNumberTrillBeats object2( 1000 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_999_999_true, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 999 );
	MxNumberTrillBeats object2( 999 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_999_998_false, MxNumberTrillBeats )
{
	MxNumberTrillBeats object1( 999 );
	MxNumberTrillBeats object2( 998 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}

/* End: Comparison Operators ------------------------------------------------ */


