/** *******************************************************
  * Class under test: MxNumberTenths
  * *******************************************************
  * **/
#include <iostream>
#include <string>
#include <sstream>
#include "TestHarness.h"
#include "MxNumberTenths.h"

using namespace std;
using namespace lexicon;

/* Constructor Tests -------------------------------------------------------- */

TEST( ctorDefault, MxNumberTenths )
{
	MxNumberTenths object;
	CHECK( true )
}
TEST( ctorValueN1002, MxNumberTenths )
{
	MxNumberTenths object( -1002 );
	bool expected = true;
	bool actual = object.getValue() == -1002;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d98, MxNumberTenths )
{
	MxNumberTenths object( -1001.98 );
	bool expected = true;
	bool actual = object.getValue() == -1001.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d96, MxNumberTenths )
{
	MxNumberTenths object( -1001.96 );
	bool expected = true;
	bool actual = object.getValue() == -1001.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d9399999999999999, MxNumberTenths )
{
	MxNumberTenths object( -1001.94 );
	bool expected = true;
	bool actual = object.getValue() == -1001.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d9199999999999999, MxNumberTenths )
{
	MxNumberTenths object( -1001.92 );
	bool expected = true;
	bool actual = object.getValue() == -1001.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d8999999999999999, MxNumberTenths )
{
	MxNumberTenths object( -1001.9 );
	bool expected = true;
	bool actual = object.getValue() == -1001.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d8799999999999999, MxNumberTenths )
{
	MxNumberTenths object( -1001.88 );
	bool expected = true;
	bool actual = object.getValue() == -1001.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d8599999999999999, MxNumberTenths )
{
	MxNumberTenths object( -1001.86 );
	bool expected = true;
	bool actual = object.getValue() == -1001.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d8399999999999999, MxNumberTenths )
{
	MxNumberTenths object( -1001.84 );
	bool expected = true;
	bool actual = object.getValue() == -1001.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d8199999999999998, MxNumberTenths )
{
	MxNumberTenths object( -1001.82 );
	bool expected = true;
	bool actual = object.getValue() == -1001.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d7999999999999998, MxNumberTenths )
{
	MxNumberTenths object( -1001.8 );
	bool expected = true;
	bool actual = object.getValue() == -1001.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d7799999999999998, MxNumberTenths )
{
	MxNumberTenths object( -1001.78 );
	bool expected = true;
	bool actual = object.getValue() == -1001.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d7599999999999998, MxNumberTenths )
{
	MxNumberTenths object( -1001.76 );
	bool expected = true;
	bool actual = object.getValue() == -1001.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d7399999999999998, MxNumberTenths )
{
	MxNumberTenths object( -1001.74 );
	bool expected = true;
	bool actual = object.getValue() == -1001.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d7199999999999998, MxNumberTenths )
{
	MxNumberTenths object( -1001.72 );
	bool expected = true;
	bool actual = object.getValue() == -1001.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d6999999999999997, MxNumberTenths )
{
	MxNumberTenths object( -1001.7 );
	bool expected = true;
	bool actual = object.getValue() == -1001.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d6799999999999997, MxNumberTenths )
{
	MxNumberTenths object( -1001.68 );
	bool expected = true;
	bool actual = object.getValue() == -1001.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d6599999999999997, MxNumberTenths )
{
	MxNumberTenths object( -1001.66 );
	bool expected = true;
	bool actual = object.getValue() == -1001.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d6399999999999997, MxNumberTenths )
{
	MxNumberTenths object( -1001.64 );
	bool expected = true;
	bool actual = object.getValue() == -1001.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d6199999999999997, MxNumberTenths )
{
	MxNumberTenths object( -1001.62 );
	bool expected = true;
	bool actual = object.getValue() == -1001.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d5999999999999996, MxNumberTenths )
{
	MxNumberTenths object( -1001.6 );
	bool expected = true;
	bool actual = object.getValue() == -1001.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d5799999999999996, MxNumberTenths )
{
	MxNumberTenths object( -1001.58 );
	bool expected = true;
	bool actual = object.getValue() == -1001.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d5599999999999996, MxNumberTenths )
{
	MxNumberTenths object( -1001.56 );
	bool expected = true;
	bool actual = object.getValue() == -1001.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d5399999999999996, MxNumberTenths )
{
	MxNumberTenths object( -1001.54 );
	bool expected = true;
	bool actual = object.getValue() == -1001.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d5199999999999996, MxNumberTenths )
{
	MxNumberTenths object( -1001.52 );
	bool expected = true;
	bool actual = object.getValue() == -1001.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d4999999999999996, MxNumberTenths )
{
	MxNumberTenths object( -1001.5 );
	bool expected = true;
	bool actual = object.getValue() == -1001.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d4799999999999995, MxNumberTenths )
{
	MxNumberTenths object( -1001.48 );
	bool expected = true;
	bool actual = object.getValue() == -1001.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d4599999999999995, MxNumberTenths )
{
	MxNumberTenths object( -1001.46 );
	bool expected = true;
	bool actual = object.getValue() == -1001.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d4399999999999995, MxNumberTenths )
{
	MxNumberTenths object( -1001.44 );
	bool expected = true;
	bool actual = object.getValue() == -1001.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d4199999999999995, MxNumberTenths )
{
	MxNumberTenths object( -1001.42 );
	bool expected = true;
	bool actual = object.getValue() == -1001.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d3999999999999995, MxNumberTenths )
{
	MxNumberTenths object( -1001.4 );
	bool expected = true;
	bool actual = object.getValue() == -1001.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d3799999999999994, MxNumberTenths )
{
	MxNumberTenths object( -1001.38 );
	bool expected = true;
	bool actual = object.getValue() == -1001.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d3599999999999994, MxNumberTenths )
{
	MxNumberTenths object( -1001.36 );
	bool expected = true;
	bool actual = object.getValue() == -1001.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d3399999999999994, MxNumberTenths )
{
	MxNumberTenths object( -1001.34 );
	bool expected = true;
	bool actual = object.getValue() == -1001.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d3199999999999994, MxNumberTenths )
{
	MxNumberTenths object( -1001.32 );
	bool expected = true;
	bool actual = object.getValue() == -1001.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d2999999999999994, MxNumberTenths )
{
	MxNumberTenths object( -1001.3 );
	bool expected = true;
	bool actual = object.getValue() == -1001.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d2799999999999994, MxNumberTenths )
{
	MxNumberTenths object( -1001.28 );
	bool expected = true;
	bool actual = object.getValue() == -1001.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d2599999999999993, MxNumberTenths )
{
	MxNumberTenths object( -1001.26 );
	bool expected = true;
	bool actual = object.getValue() == -1001.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d2399999999999993, MxNumberTenths )
{
	MxNumberTenths object( -1001.24 );
	bool expected = true;
	bool actual = object.getValue() == -1001.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d2199999999999993, MxNumberTenths )
{
	MxNumberTenths object( -1001.22 );
	bool expected = true;
	bool actual = object.getValue() == -1001.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d1999999999999993, MxNumberTenths )
{
	MxNumberTenths object( -1001.2 );
	bool expected = true;
	bool actual = object.getValue() == -1001.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d1799999999999993, MxNumberTenths )
{
	MxNumberTenths object( -1001.18 );
	bool expected = true;
	bool actual = object.getValue() == -1001.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d1599999999999993, MxNumberTenths )
{
	MxNumberTenths object( -1001.16 );
	bool expected = true;
	bool actual = object.getValue() == -1001.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d1399999999999992, MxNumberTenths )
{
	MxNumberTenths object( -1001.14 );
	bool expected = true;
	bool actual = object.getValue() == -1001.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d1199999999999992, MxNumberTenths )
{
	MxNumberTenths object( -1001.12 );
	bool expected = true;
	bool actual = object.getValue() == -1001.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d0999999999999992, MxNumberTenths )
{
	MxNumberTenths object( -1001.1 );
	bool expected = true;
	bool actual = object.getValue() == -1001.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d0799999999999992, MxNumberTenths )
{
	MxNumberTenths object( -1001.08 );
	bool expected = true;
	bool actual = object.getValue() == -1001.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d0599999999999992, MxNumberTenths )
{
	MxNumberTenths object( -1001.06 );
	bool expected = true;
	bool actual = object.getValue() == -1001.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d0399999999999991, MxNumberTenths )
{
	MxNumberTenths object( -1001.04 );
	bool expected = true;
	bool actual = object.getValue() == -1001.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1001d0199999999999991, MxNumberTenths )
{
	MxNumberTenths object( -1001.02 );
	bool expected = true;
	bool actual = object.getValue() == -1001.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d9999999999999991, MxNumberTenths )
{
	MxNumberTenths object( -1001 );
	bool expected = true;
	bool actual = object.getValue() == -1001;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d9799999999999991, MxNumberTenths )
{
	MxNumberTenths object( -1000.98 );
	bool expected = true;
	bool actual = object.getValue() == -1000.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d9599999999999991, MxNumberTenths )
{
	MxNumberTenths object( -1000.96 );
	bool expected = true;
	bool actual = object.getValue() == -1000.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d9399999999999991, MxNumberTenths )
{
	MxNumberTenths object( -1000.94 );
	bool expected = true;
	bool actual = object.getValue() == -1000.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d919999999999999, MxNumberTenths )
{
	MxNumberTenths object( -1000.92 );
	bool expected = true;
	bool actual = object.getValue() == -1000.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d899999999999999, MxNumberTenths )
{
	MxNumberTenths object( -1000.9 );
	bool expected = true;
	bool actual = object.getValue() == -1000.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d879999999999999, MxNumberTenths )
{
	MxNumberTenths object( -1000.88 );
	bool expected = true;
	bool actual = object.getValue() == -1000.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d859999999999999, MxNumberTenths )
{
	MxNumberTenths object( -1000.86 );
	bool expected = true;
	bool actual = object.getValue() == -1000.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d839999999999999, MxNumberTenths )
{
	MxNumberTenths object( -1000.84 );
	bool expected = true;
	bool actual = object.getValue() == -1000.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d819999999999999, MxNumberTenths )
{
	MxNumberTenths object( -1000.82 );
	bool expected = true;
	bool actual = object.getValue() == -1000.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d7999999999999989, MxNumberTenths )
{
	MxNumberTenths object( -1000.8 );
	bool expected = true;
	bool actual = object.getValue() == -1000.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d7799999999999989, MxNumberTenths )
{
	MxNumberTenths object( -1000.78 );
	bool expected = true;
	bool actual = object.getValue() == -1000.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d7599999999999989, MxNumberTenths )
{
	MxNumberTenths object( -1000.76 );
	bool expected = true;
	bool actual = object.getValue() == -1000.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d7399999999999989, MxNumberTenths )
{
	MxNumberTenths object( -1000.74 );
	bool expected = true;
	bool actual = object.getValue() == -1000.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d7199999999999989, MxNumberTenths )
{
	MxNumberTenths object( -1000.72 );
	bool expected = true;
	bool actual = object.getValue() == -1000.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d6999999999999988, MxNumberTenths )
{
	MxNumberTenths object( -1000.7 );
	bool expected = true;
	bool actual = object.getValue() == -1000.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d6799999999999988, MxNumberTenths )
{
	MxNumberTenths object( -1000.68 );
	bool expected = true;
	bool actual = object.getValue() == -1000.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d6599999999999988, MxNumberTenths )
{
	MxNumberTenths object( -1000.66 );
	bool expected = true;
	bool actual = object.getValue() == -1000.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d6399999999999988, MxNumberTenths )
{
	MxNumberTenths object( -1000.64 );
	bool expected = true;
	bool actual = object.getValue() == -1000.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d6199999999999988, MxNumberTenths )
{
	MxNumberTenths object( -1000.62 );
	bool expected = true;
	bool actual = object.getValue() == -1000.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d5999999999999988, MxNumberTenths )
{
	MxNumberTenths object( -1000.6 );
	bool expected = true;
	bool actual = object.getValue() == -1000.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d5799999999999987, MxNumberTenths )
{
	MxNumberTenths object( -1000.58 );
	bool expected = true;
	bool actual = object.getValue() == -1000.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d5599999999999987, MxNumberTenths )
{
	MxNumberTenths object( -1000.56 );
	bool expected = true;
	bool actual = object.getValue() == -1000.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d5399999999999987, MxNumberTenths )
{
	MxNumberTenths object( -1000.54 );
	bool expected = true;
	bool actual = object.getValue() == -1000.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d5199999999999987, MxNumberTenths )
{
	MxNumberTenths object( -1000.52 );
	bool expected = true;
	bool actual = object.getValue() == -1000.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d4999999999999987, MxNumberTenths )
{
	MxNumberTenths object( -1000.5 );
	bool expected = true;
	bool actual = object.getValue() == -1000.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d4799999999999986, MxNumberTenths )
{
	MxNumberTenths object( -1000.48 );
	bool expected = true;
	bool actual = object.getValue() == -1000.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d4599999999999986, MxNumberTenths )
{
	MxNumberTenths object( -1000.46 );
	bool expected = true;
	bool actual = object.getValue() == -1000.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d4399999999999986, MxNumberTenths )
{
	MxNumberTenths object( -1000.44 );
	bool expected = true;
	bool actual = object.getValue() == -1000.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d4199999999999986, MxNumberTenths )
{
	MxNumberTenths object( -1000.42 );
	bool expected = true;
	bool actual = object.getValue() == -1000.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d3999999999999986, MxNumberTenths )
{
	MxNumberTenths object( -1000.4 );
	bool expected = true;
	bool actual = object.getValue() == -1000.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d3799999999999986, MxNumberTenths )
{
	MxNumberTenths object( -1000.38 );
	bool expected = true;
	bool actual = object.getValue() == -1000.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d3599999999999985, MxNumberTenths )
{
	MxNumberTenths object( -1000.36 );
	bool expected = true;
	bool actual = object.getValue() == -1000.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d3399999999999985, MxNumberTenths )
{
	MxNumberTenths object( -1000.34 );
	bool expected = true;
	bool actual = object.getValue() == -1000.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d3199999999999985, MxNumberTenths )
{
	MxNumberTenths object( -1000.32 );
	bool expected = true;
	bool actual = object.getValue() == -1000.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d2999999999999985, MxNumberTenths )
{
	MxNumberTenths object( -1000.3 );
	bool expected = true;
	bool actual = object.getValue() == -1000.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d2799999999999985, MxNumberTenths )
{
	MxNumberTenths object( -1000.28 );
	bool expected = true;
	bool actual = object.getValue() == -1000.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d2599999999999985, MxNumberTenths )
{
	MxNumberTenths object( -1000.26 );
	bool expected = true;
	bool actual = object.getValue() == -1000.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d2399999999999984, MxNumberTenths )
{
	MxNumberTenths object( -1000.24 );
	bool expected = true;
	bool actual = object.getValue() == -1000.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d2199999999999984, MxNumberTenths )
{
	MxNumberTenths object( -1000.22 );
	bool expected = true;
	bool actual = object.getValue() == -1000.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d1999999999999984, MxNumberTenths )
{
	MxNumberTenths object( -1000.2 );
	bool expected = true;
	bool actual = object.getValue() == -1000.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d1799999999999984, MxNumberTenths )
{
	MxNumberTenths object( -1000.18 );
	bool expected = true;
	bool actual = object.getValue() == -1000.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d1599999999999984, MxNumberTenths )
{
	MxNumberTenths object( -1000.16 );
	bool expected = true;
	bool actual = object.getValue() == -1000.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d1399999999999983, MxNumberTenths )
{
	MxNumberTenths object( -1000.14 );
	bool expected = true;
	bool actual = object.getValue() == -1000.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d1199999999999983, MxNumberTenths )
{
	MxNumberTenths object( -1000.12 );
	bool expected = true;
	bool actual = object.getValue() == -1000.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d0999999999999983, MxNumberTenths )
{
	MxNumberTenths object( -1000.1 );
	bool expected = true;
	bool actual = object.getValue() == -1000.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d0799999999999983, MxNumberTenths )
{
	MxNumberTenths object( -1000.08 );
	bool expected = true;
	bool actual = object.getValue() == -1000.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d0599999999999983, MxNumberTenths )
{
	MxNumberTenths object( -1000.06 );
	bool expected = true;
	bool actual = object.getValue() == -1000.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d0399999999999983, MxNumberTenths )
{
	MxNumberTenths object( -1000.04 );
	bool expected = true;
	bool actual = object.getValue() == -1000.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1000d0199999999999982, MxNumberTenths )
{
	MxNumberTenths object( -1000.02 );
	bool expected = true;
	bool actual = object.getValue() == -1000.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d99999999999999822, MxNumberTenths )
{
	MxNumberTenths object( -1000 );
	bool expected = true;
	bool actual = object.getValue() == -1000;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d97999999999999821, MxNumberTenths )
{
	MxNumberTenths object( -999.98 );
	bool expected = true;
	bool actual = object.getValue() == -999.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d95999999999999819, MxNumberTenths )
{
	MxNumberTenths object( -999.96 );
	bool expected = true;
	bool actual = object.getValue() == -999.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d93999999999999817, MxNumberTenths )
{
	MxNumberTenths object( -999.94 );
	bool expected = true;
	bool actual = object.getValue() == -999.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d91999999999999815, MxNumberTenths )
{
	MxNumberTenths object( -999.92 );
	bool expected = true;
	bool actual = object.getValue() == -999.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d89999999999999813, MxNumberTenths )
{
	MxNumberTenths object( -999.9 );
	bool expected = true;
	bool actual = object.getValue() == -999.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d87999999999999812, MxNumberTenths )
{
	MxNumberTenths object( -999.88 );
	bool expected = true;
	bool actual = object.getValue() == -999.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d8599999999999981, MxNumberTenths )
{
	MxNumberTenths object( -999.86 );
	bool expected = true;
	bool actual = object.getValue() == -999.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d83999999999999808, MxNumberTenths )
{
	MxNumberTenths object( -999.84 );
	bool expected = true;
	bool actual = object.getValue() == -999.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d81999999999999806, MxNumberTenths )
{
	MxNumberTenths object( -999.82 );
	bool expected = true;
	bool actual = object.getValue() == -999.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d79999999999999805, MxNumberTenths )
{
	MxNumberTenths object( -999.8 );
	bool expected = true;
	bool actual = object.getValue() == -999.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d77999999999999803, MxNumberTenths )
{
	MxNumberTenths object( -999.78 );
	bool expected = true;
	bool actual = object.getValue() == -999.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d75999999999999801, MxNumberTenths )
{
	MxNumberTenths object( -999.76 );
	bool expected = true;
	bool actual = object.getValue() == -999.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d73999999999999799, MxNumberTenths )
{
	MxNumberTenths object( -999.74 );
	bool expected = true;
	bool actual = object.getValue() == -999.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d71999999999999797, MxNumberTenths )
{
	MxNumberTenths object( -999.72 );
	bool expected = true;
	bool actual = object.getValue() == -999.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d69999999999999796, MxNumberTenths )
{
	MxNumberTenths object( -999.7 );
	bool expected = true;
	bool actual = object.getValue() == -999.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d67999999999999794, MxNumberTenths )
{
	MxNumberTenths object( -999.68 );
	bool expected = true;
	bool actual = object.getValue() == -999.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d65999999999999792, MxNumberTenths )
{
	MxNumberTenths object( -999.66 );
	bool expected = true;
	bool actual = object.getValue() == -999.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d6399999999999979, MxNumberTenths )
{
	MxNumberTenths object( -999.64 );
	bool expected = true;
	bool actual = object.getValue() == -999.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d61999999999999789, MxNumberTenths )
{
	MxNumberTenths object( -999.62 );
	bool expected = true;
	bool actual = object.getValue() == -999.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d59999999999999787, MxNumberTenths )
{
	MxNumberTenths object( -999.6 );
	bool expected = true;
	bool actual = object.getValue() == -999.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d57999999999999785, MxNumberTenths )
{
	MxNumberTenths object( -999.58 );
	bool expected = true;
	bool actual = object.getValue() == -999.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d55999999999999783, MxNumberTenths )
{
	MxNumberTenths object( -999.56 );
	bool expected = true;
	bool actual = object.getValue() == -999.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d53999999999999782, MxNumberTenths )
{
	MxNumberTenths object( -999.54 );
	bool expected = true;
	bool actual = object.getValue() == -999.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d5199999999999978, MxNumberTenths )
{
	MxNumberTenths object( -999.52 );
	bool expected = true;
	bool actual = object.getValue() == -999.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d49999999999999778, MxNumberTenths )
{
	MxNumberTenths object( -999.5 );
	bool expected = true;
	bool actual = object.getValue() == -999.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d47999999999999776, MxNumberTenths )
{
	MxNumberTenths object( -999.48 );
	bool expected = true;
	bool actual = object.getValue() == -999.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d45999999999999774, MxNumberTenths )
{
	MxNumberTenths object( -999.46 );
	bool expected = true;
	bool actual = object.getValue() == -999.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d43999999999999773, MxNumberTenths )
{
	MxNumberTenths object( -999.44 );
	bool expected = true;
	bool actual = object.getValue() == -999.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d41999999999999771, MxNumberTenths )
{
	MxNumberTenths object( -999.42 );
	bool expected = true;
	bool actual = object.getValue() == -999.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d39999999999999769, MxNumberTenths )
{
	MxNumberTenths object( -999.4 );
	bool expected = true;
	bool actual = object.getValue() == -999.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d37999999999999767, MxNumberTenths )
{
	MxNumberTenths object( -999.38 );
	bool expected = true;
	bool actual = object.getValue() == -999.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d35999999999999766, MxNumberTenths )
{
	MxNumberTenths object( -999.36 );
	bool expected = true;
	bool actual = object.getValue() == -999.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d33999999999999764, MxNumberTenths )
{
	MxNumberTenths object( -999.34 );
	bool expected = true;
	bool actual = object.getValue() == -999.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d31999999999999762, MxNumberTenths )
{
	MxNumberTenths object( -999.32 );
	bool expected = true;
	bool actual = object.getValue() == -999.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d2999999999999976, MxNumberTenths )
{
	MxNumberTenths object( -999.3 );
	bool expected = true;
	bool actual = object.getValue() == -999.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d27999999999999758, MxNumberTenths )
{
	MxNumberTenths object( -999.28 );
	bool expected = true;
	bool actual = object.getValue() == -999.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d25999999999999757, MxNumberTenths )
{
	MxNumberTenths object( -999.26 );
	bool expected = true;
	bool actual = object.getValue() == -999.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d23999999999999755, MxNumberTenths )
{
	MxNumberTenths object( -999.24 );
	bool expected = true;
	bool actual = object.getValue() == -999.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d21999999999999753, MxNumberTenths )
{
	MxNumberTenths object( -999.22 );
	bool expected = true;
	bool actual = object.getValue() == -999.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d19999999999999751, MxNumberTenths )
{
	MxNumberTenths object( -999.2 );
	bool expected = true;
	bool actual = object.getValue() == -999.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d1799999999999975, MxNumberTenths )
{
	MxNumberTenths object( -999.18 );
	bool expected = true;
	bool actual = object.getValue() == -999.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d15999999999999748, MxNumberTenths )
{
	MxNumberTenths object( -999.16 );
	bool expected = true;
	bool actual = object.getValue() == -999.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d13999999999999746, MxNumberTenths )
{
	MxNumberTenths object( -999.14 );
	bool expected = true;
	bool actual = object.getValue() == -999.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d11999999999999744, MxNumberTenths )
{
	MxNumberTenths object( -999.12 );
	bool expected = true;
	bool actual = object.getValue() == -999.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d09999999999999742, MxNumberTenths )
{
	MxNumberTenths object( -999.1 );
	bool expected = true;
	bool actual = object.getValue() == -999.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d07999999999999741, MxNumberTenths )
{
	MxNumberTenths object( -999.08 );
	bool expected = true;
	bool actual = object.getValue() == -999.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d05999999999999739, MxNumberTenths )
{
	MxNumberTenths object( -999.06 );
	bool expected = true;
	bool actual = object.getValue() == -999.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d03999999999999737, MxNumberTenths )
{
	MxNumberTenths object( -999.04 );
	bool expected = true;
	bool actual = object.getValue() == -999.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN999d01999999999999735, MxNumberTenths )
{
	MxNumberTenths object( -999.02 );
	bool expected = true;
	bool actual = object.getValue() == -999.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d99999999999999734, MxNumberTenths )
{
	MxNumberTenths object( -999 );
	bool expected = true;
	bool actual = object.getValue() == -999;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d97999999999999732, MxNumberTenths )
{
	MxNumberTenths object( -998.98 );
	bool expected = true;
	bool actual = object.getValue() == -998.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d9599999999999973, MxNumberTenths )
{
	MxNumberTenths object( -998.96 );
	bool expected = true;
	bool actual = object.getValue() == -998.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d93999999999999728, MxNumberTenths )
{
	MxNumberTenths object( -998.94 );
	bool expected = true;
	bool actual = object.getValue() == -998.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d91999999999999726, MxNumberTenths )
{
	MxNumberTenths object( -998.92 );
	bool expected = true;
	bool actual = object.getValue() == -998.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d89999999999999725, MxNumberTenths )
{
	MxNumberTenths object( -998.9 );
	bool expected = true;
	bool actual = object.getValue() == -998.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d87999999999999723, MxNumberTenths )
{
	MxNumberTenths object( -998.88 );
	bool expected = true;
	bool actual = object.getValue() == -998.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d85999999999999721, MxNumberTenths )
{
	MxNumberTenths object( -998.86 );
	bool expected = true;
	bool actual = object.getValue() == -998.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d83999999999999719, MxNumberTenths )
{
	MxNumberTenths object( -998.84 );
	bool expected = true;
	bool actual = object.getValue() == -998.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d81999999999999718, MxNumberTenths )
{
	MxNumberTenths object( -998.82 );
	bool expected = true;
	bool actual = object.getValue() == -998.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d79999999999999716, MxNumberTenths )
{
	MxNumberTenths object( -998.8 );
	bool expected = true;
	bool actual = object.getValue() == -998.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d77999999999999714, MxNumberTenths )
{
	MxNumberTenths object( -998.78 );
	bool expected = true;
	bool actual = object.getValue() == -998.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d75999999999999712, MxNumberTenths )
{
	MxNumberTenths object( -998.76 );
	bool expected = true;
	bool actual = object.getValue() == -998.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d7399999999999971, MxNumberTenths )
{
	MxNumberTenths object( -998.74 );
	bool expected = true;
	bool actual = object.getValue() == -998.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d71999999999999709, MxNumberTenths )
{
	MxNumberTenths object( -998.72 );
	bool expected = true;
	bool actual = object.getValue() == -998.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d69999999999999707, MxNumberTenths )
{
	MxNumberTenths object( -998.7 );
	bool expected = true;
	bool actual = object.getValue() == -998.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d67999999999999705, MxNumberTenths )
{
	MxNumberTenths object( -998.68 );
	bool expected = true;
	bool actual = object.getValue() == -998.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d65999999999999703, MxNumberTenths )
{
	MxNumberTenths object( -998.66 );
	bool expected = true;
	bool actual = object.getValue() == -998.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d63999999999999702, MxNumberTenths )
{
	MxNumberTenths object( -998.64 );
	bool expected = true;
	bool actual = object.getValue() == -998.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d619999999999997, MxNumberTenths )
{
	MxNumberTenths object( -998.62 );
	bool expected = true;
	bool actual = object.getValue() == -998.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d59999999999999698, MxNumberTenths )
{
	MxNumberTenths object( -998.6 );
	bool expected = true;
	bool actual = object.getValue() == -998.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d57999999999999696, MxNumberTenths )
{
	MxNumberTenths object( -998.58 );
	bool expected = true;
	bool actual = object.getValue() == -998.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d55999999999999694, MxNumberTenths )
{
	MxNumberTenths object( -998.56 );
	bool expected = true;
	bool actual = object.getValue() == -998.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d53999999999999693, MxNumberTenths )
{
	MxNumberTenths object( -998.54 );
	bool expected = true;
	bool actual = object.getValue() == -998.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d51999999999999691, MxNumberTenths )
{
	MxNumberTenths object( -998.52 );
	bool expected = true;
	bool actual = object.getValue() == -998.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d49999999999999689, MxNumberTenths )
{
	MxNumberTenths object( -998.5 );
	bool expected = true;
	bool actual = object.getValue() == -998.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d47999999999999687, MxNumberTenths )
{
	MxNumberTenths object( -998.48 );
	bool expected = true;
	bool actual = object.getValue() == -998.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d45999999999999686, MxNumberTenths )
{
	MxNumberTenths object( -998.46 );
	bool expected = true;
	bool actual = object.getValue() == -998.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d43999999999999684, MxNumberTenths )
{
	MxNumberTenths object( -998.44 );
	bool expected = true;
	bool actual = object.getValue() == -998.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d41999999999999682, MxNumberTenths )
{
	MxNumberTenths object( -998.42 );
	bool expected = true;
	bool actual = object.getValue() == -998.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d3999999999999968, MxNumberTenths )
{
	MxNumberTenths object( -998.4 );
	bool expected = true;
	bool actual = object.getValue() == -998.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d37999999999999678, MxNumberTenths )
{
	MxNumberTenths object( -998.38 );
	bool expected = true;
	bool actual = object.getValue() == -998.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d35999999999999677, MxNumberTenths )
{
	MxNumberTenths object( -998.36 );
	bool expected = true;
	bool actual = object.getValue() == -998.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d33999999999999675, MxNumberTenths )
{
	MxNumberTenths object( -998.34 );
	bool expected = true;
	bool actual = object.getValue() == -998.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d31999999999999673, MxNumberTenths )
{
	MxNumberTenths object( -998.32 );
	bool expected = true;
	bool actual = object.getValue() == -998.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d29999999999999671, MxNumberTenths )
{
	MxNumberTenths object( -998.3 );
	bool expected = true;
	bool actual = object.getValue() == -998.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d2799999999999967, MxNumberTenths )
{
	MxNumberTenths object( -998.28 );
	bool expected = true;
	bool actual = object.getValue() == -998.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d25999999999999668, MxNumberTenths )
{
	MxNumberTenths object( -998.26 );
	bool expected = true;
	bool actual = object.getValue() == -998.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d23999999999999666, MxNumberTenths )
{
	MxNumberTenths object( -998.24 );
	bool expected = true;
	bool actual = object.getValue() == -998.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d21999999999999664, MxNumberTenths )
{
	MxNumberTenths object( -998.22 );
	bool expected = true;
	bool actual = object.getValue() == -998.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d19999999999999662, MxNumberTenths )
{
	MxNumberTenths object( -998.2 );
	bool expected = true;
	bool actual = object.getValue() == -998.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d17999999999999661, MxNumberTenths )
{
	MxNumberTenths object( -998.18 );
	bool expected = true;
	bool actual = object.getValue() == -998.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d15999999999999659, MxNumberTenths )
{
	MxNumberTenths object( -998.16 );
	bool expected = true;
	bool actual = object.getValue() == -998.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d13999999999999657, MxNumberTenths )
{
	MxNumberTenths object( -998.14 );
	bool expected = true;
	bool actual = object.getValue() == -998.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d11999999999999655, MxNumberTenths )
{
	MxNumberTenths object( -998.12 );
	bool expected = true;
	bool actual = object.getValue() == -998.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d09999999999999654, MxNumberTenths )
{
	MxNumberTenths object( -998.1 );
	bool expected = true;
	bool actual = object.getValue() == -998.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d07999999999999652, MxNumberTenths )
{
	MxNumberTenths object( -998.08 );
	bool expected = true;
	bool actual = object.getValue() == -998.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d0599999999999965, MxNumberTenths )
{
	MxNumberTenths object( -998.06 );
	bool expected = true;
	bool actual = object.getValue() == -998.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d03999999999999648, MxNumberTenths )
{
	MxNumberTenths object( -998.04 );
	bool expected = true;
	bool actual = object.getValue() == -998.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN998d01999999999999647, MxNumberTenths )
{
	MxNumberTenths object( -998.02 );
	bool expected = true;
	bool actual = object.getValue() == -998.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998, MxNumberTenths )
{
	MxNumberTenths object( 998 );
	bool expected = true;
	bool actual = object.getValue() == 998;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d20000000000000001, MxNumberTenths )
{
	MxNumberTenths object( 998.2 );
	bool expected = true;
	bool actual = object.getValue() == 998.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d40000000000000002, MxNumberTenths )
{
	MxNumberTenths object( 998.4 );
	bool expected = true;
	bool actual = object.getValue() == 998.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d60000000000000003, MxNumberTenths )
{
	MxNumberTenths object( 998.6 );
	bool expected = true;
	bool actual = object.getValue() == 998.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d80000000000000004, MxNumberTenths )
{
	MxNumberTenths object( 998.8 );
	bool expected = true;
	bool actual = object.getValue() == 998.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d00000000000000006, MxNumberTenths )
{
	MxNumberTenths object( 999 );
	bool expected = true;
	bool actual = object.getValue() == 999;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d20000000000000007, MxNumberTenths )
{
	MxNumberTenths object( 999.2 );
	bool expected = true;
	bool actual = object.getValue() == 999.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d40000000000000008, MxNumberTenths )
{
	MxNumberTenths object( 999.4 );
	bool expected = true;
	bool actual = object.getValue() == 999.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d60000000000000009, MxNumberTenths )
{
	MxNumberTenths object( 999.6 );
	bool expected = true;
	bool actual = object.getValue() == 999.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d8000000000000001, MxNumberTenths )
{
	MxNumberTenths object( 999.8 );
	bool expected = true;
	bool actual = object.getValue() == 999.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d0000000000000001, MxNumberTenths )
{
	MxNumberTenths object( 1000 );
	bool expected = true;
	bool actual = object.getValue() == 1000;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d2000000000000001, MxNumberTenths )
{
	MxNumberTenths object( 1000.2 );
	bool expected = true;
	bool actual = object.getValue() == 1000.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d4000000000000001, MxNumberTenths )
{
	MxNumberTenths object( 1000.4 );
	bool expected = true;
	bool actual = object.getValue() == 1000.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d6000000000000001, MxNumberTenths )
{
	MxNumberTenths object( 1000.6 );
	bool expected = true;
	bool actual = object.getValue() == 1000.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d8000000000000002, MxNumberTenths )
{
	MxNumberTenths object( 1000.8 );
	bool expected = true;
	bool actual = object.getValue() == 1000.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d0000000000000002, MxNumberTenths )
{
	MxNumberTenths object( 1001 );
	bool expected = true;
	bool actual = object.getValue() == 1001;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d2000000000000002, MxNumberTenths )
{
	MxNumberTenths object( 1001.2 );
	bool expected = true;
	bool actual = object.getValue() == 1001.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d4000000000000002, MxNumberTenths )
{
	MxNumberTenths object( 1001.4 );
	bool expected = true;
	bool actual = object.getValue() == 1001.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d6000000000000002, MxNumberTenths )
{
	MxNumberTenths object( 1001.6 );
	bool expected = true;
	bool actual = object.getValue() == 1001.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d8000000000000002, MxNumberTenths )
{
	MxNumberTenths object( 1001.8 );
	bool expected = true;
	bool actual = object.getValue() == 1001.8;
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor Tests --------------------------------------------------- */


/* Assignment Test ---------------------------------------------------------- */

TEST( assignment, MxNumberTenths )
{
	MxNumberTenths original( -1000 );
	MxNumberTenths other( 1000 );
	other = original;
	int expected = -1000;
	int actual = other.getValue();
	CHECK_EQUAL( expected, actual )
	other.setValue( 1000 );
	expected = -1000;
	actual = original.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: Assignment Test ----------------------------------------------------- */


/* Upper and Lower Bound Tests ---------------------------------------------- */

TEST( isLowerRangeBound, MxNumberTenths )
{
	MxNumberTenths object;
	bool expected = false;
	bool actual = object.isLowerRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeBound, MxNumberTenths )
{
	MxNumberTenths object;
	bool expected = false;
	bool actual = object.isUpperRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isLowerRangeLimitInclusive, MxNumberTenths )
{
	MxNumberTenths object;
	bool expected = true;
	bool actual = object.isLowerRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeLimitInclusive, MxNumberTenths )
{
	MxNumberTenths object;
	bool expected = true;
	bool actual = object.isUpperRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}

/* End: Upper and Lower Bound Tests ----------------------------------------- */


/* Documentation Tests ------------------------------------------------------ */

TEST( getXmlTypeName, MxNumberTenths )
{
	MxNumberTenths object;
	std::string expected = "tenths";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName, MxNumberTenths )
{
	MxNumberTenths object;
	std::string expected = "MxNumberTenths";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxNumberTenths )
{
	MxNumberTenths object;
	std::string expected = "The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line. Distances in a MusicXML file are measured in tenths of staff space. Tenths are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Documentation Tests ------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( getValue_setValue_N1000_1000, MxNumberTenths )
{
	MxNumberTenths object( -1000 );
	int expected = -1000;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 1000 );
	expected = 1000;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_N999_999, MxNumberTenths )
{
	MxNumberTenths object( -999 );
	int expected = -999;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 999 );
	expected = 999;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_N998_998, MxNumberTenths )
{
	MxNumberTenths object( -998 );
	int expected = -998;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 998 );
	expected = 998;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_N997_997, MxNumberTenths )
{
	MxNumberTenths object( -997 );
	int expected = -997;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 997 );
	expected = 997;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* stream Tests ------------------------------------------------------------- */

TEST( stream_N1000_1000, MxNumberTenths )
{
	MxNumberTenths object( -1000 );
	std::stringstream ss1;
	ss1.setf( std::ios::fixed );
	object.stream( ss1 );
	std::string expected = "-1000";
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
TEST( stream_N999_999, MxNumberTenths )
{
	MxNumberTenths object( -999 );
	std::stringstream ss1;
	ss1.setf( std::ios::fixed );
	object.stream( ss1 );
	std::string expected = "-999";
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
TEST( stream_N998_998, MxNumberTenths )
{
	MxNumberTenths object( -998 );
	std::stringstream ss1;
	ss1.setf( std::ios::fixed );
	object.stream( ss1 );
	std::string expected = "-998";
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
TEST( stream_N997_997, MxNumberTenths )
{
	MxNumberTenths object( -997 );
	std::stringstream ss1;
	ss1.setf( std::ios::fixed );
	object.stream( ss1 );
	std::string expected = "-997";
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

TEST( toString_1000, MxNumberTenths )
{
	MxNumberTenths object( 1000 );
	std::string expected = "1000";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_N999, MxNumberTenths )
{
	MxNumberTenths object( -999 );
	std::string expected = "-999";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_998, MxNumberTenths )
{
	MxNumberTenths object( 998 );
	std::string expected = "998";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_N997, MxNumberTenths )
{
	MxNumberTenths object( -997 );
	std::string expected = "-997";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}

/* End: toString() Tests ---------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( fromString_N1000_1000, MxNumberTenths )
{
	MxNumberTenths object( -1000 );
	std::stringstream ss1;
	std::string value1 = "1000";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 1000;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz -1000 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 1000;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_999_N999, MxNumberTenths )
{
	MxNumberTenths object( 999 );
	std::stringstream ss1;
	std::string value1 = "-999";
	bool parseSucceeded = object.fromString( value1 );
	int expected = -999;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 999 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = -999;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_N998_998, MxNumberTenths )
{
	MxNumberTenths object( -998 );
	std::stringstream ss1;
	std::string value1 = "998";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 998;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz -998 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 998;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_997_N997, MxNumberTenths )
{
	MxNumberTenths object( 997 );
	std::stringstream ss1;
	std::string value1 = "-997";
	bool parseSucceeded = object.fromString( value1 );
	int expected = -997;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 997 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = -997;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* Comparison Operators ----------------------------------------------------- */

TEST( operatorEqEq_N1000_N999_false, MxNumberTenths )
{
	MxNumberTenths object1( -1000 );
	MxNumberTenths object2( -999 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_N999_N999_true, MxNumberTenths )
{
	MxNumberTenths object1( -999 );
	MxNumberTenths object2( -999 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_N998_N999_false, MxNumberTenths )
{
	MxNumberTenths object1( -998 );
	MxNumberTenths object2( -999 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_999_1000_false, MxNumberTenths )
{
	MxNumberTenths object1( 999 );
	MxNumberTenths object2( 1000 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_999_999_true, MxNumberTenths )
{
	MxNumberTenths object1( 999 );
	MxNumberTenths object2( 999 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_999_998_false, MxNumberTenths )
{
	MxNumberTenths object1( 999 );
	MxNumberTenths object2( 998 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_N1000_N999_true, MxNumberTenths )
{
	MxNumberTenths object1( -1000 );
	MxNumberTenths object2( -999 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_N999_N999_false, MxNumberTenths )
{
	MxNumberTenths object1( -999 );
	MxNumberTenths object2( -999 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_N998_N999_true, MxNumberTenths )
{
	MxNumberTenths object1( -998 );
	MxNumberTenths object2( -999 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_999_1000_true, MxNumberTenths )
{
	MxNumberTenths object1( 999 );
	MxNumberTenths object2( 1000 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_999_999_false, MxNumberTenths )
{
	MxNumberTenths object1( 999 );
	MxNumberTenths object2( 999 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_999_998_true, MxNumberTenths )
{
	MxNumberTenths object1( 999 );
	MxNumberTenths object2( 998 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_N1000_N999_false, MxNumberTenths )
{
	MxNumberTenths object1( -1000 );
	MxNumberTenths object2( -999 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_N999_N999_false, MxNumberTenths )
{
	MxNumberTenths object1( -999 );
	MxNumberTenths object2( -999 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_N998_N999_true, MxNumberTenths )
{
	MxNumberTenths object1( -998 );
	MxNumberTenths object2( -999 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_999_1000_false, MxNumberTenths )
{
	MxNumberTenths object1( 999 );
	MxNumberTenths object2( 1000 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_999_999_false, MxNumberTenths )
{
	MxNumberTenths object1( 999 );
	MxNumberTenths object2( 999 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_999_998_true, MxNumberTenths )
{
	MxNumberTenths object1( 999 );
	MxNumberTenths object2( 998 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_N1000_N999_false, MxNumberTenths )
{
	MxNumberTenths object1( -1000 );
	MxNumberTenths object2( -999 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_N999_N999_true, MxNumberTenths )
{
	MxNumberTenths object1( -999 );
	MxNumberTenths object2( -999 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_N998_N999_true, MxNumberTenths )
{
	MxNumberTenths object1( -998 );
	MxNumberTenths object2( -999 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_999_1000_false, MxNumberTenths )
{
	MxNumberTenths object1( 999 );
	MxNumberTenths object2( 1000 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_999_999_true, MxNumberTenths )
{
	MxNumberTenths object1( 999 );
	MxNumberTenths object2( 999 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_999_998_true, MxNumberTenths )
{
	MxNumberTenths object1( 999 );
	MxNumberTenths object2( 998 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_N1000_N999_true, MxNumberTenths )
{
	MxNumberTenths object1( -1000 );
	MxNumberTenths object2( -999 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_N999_N999_false, MxNumberTenths )
{
	MxNumberTenths object1( -999 );
	MxNumberTenths object2( -999 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_N998_N999_false, MxNumberTenths )
{
	MxNumberTenths object1( -998 );
	MxNumberTenths object2( -999 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_999_1000_true, MxNumberTenths )
{
	MxNumberTenths object1( 999 );
	MxNumberTenths object2( 1000 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_999_999_false, MxNumberTenths )
{
	MxNumberTenths object1( 999 );
	MxNumberTenths object2( 999 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_999_998_false, MxNumberTenths )
{
	MxNumberTenths object1( 999 );
	MxNumberTenths object2( 998 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_N1000_N999_true, MxNumberTenths )
{
	MxNumberTenths object1( -1000 );
	MxNumberTenths object2( -999 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_N999_N999_true, MxNumberTenths )
{
	MxNumberTenths object1( -999 );
	MxNumberTenths object2( -999 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_N998_N999_false, MxNumberTenths )
{
	MxNumberTenths object1( -998 );
	MxNumberTenths object2( -999 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_999_1000_true, MxNumberTenths )
{
	MxNumberTenths object1( 999 );
	MxNumberTenths object2( 1000 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_999_999_true, MxNumberTenths )
{
	MxNumberTenths object1( 999 );
	MxNumberTenths object2( 999 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_999_998_false, MxNumberTenths )
{
	MxNumberTenths object1( 999 );
	MxNumberTenths object2( 998 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}

/* End: Comparison Operators ------------------------------------------------ */


