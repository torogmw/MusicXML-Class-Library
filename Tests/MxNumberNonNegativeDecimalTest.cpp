/** *******************************************************
  * Class under test: MxNumberNonNegativeDecimal
  * *******************************************************
  * **/
#include <iostream>
#include <string>
#include <sstream>
#include "TestHarness.h"
#include "MxNumberNonNegativeDecimal.h"

using namespace std;
using namespace lexicon;

/* Constructor Tests -------------------------------------------------------- */

TEST( ctorDefault, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object;
	CHECK( true )
}
TEST( ctorValueN2, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -2 );
	bool expected = false;
	bool actual = object.getValue() == -2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d98, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.98 );
	bool expected = false;
	bool actual = object.getValue() == -1.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d96, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.96 );
	bool expected = false;
	bool actual = object.getValue() == -1.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d9400000000000000001, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.94 );
	bool expected = false;
	bool actual = object.getValue() == -1.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d9200000000000000001, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.92 );
	bool expected = false;
	bool actual = object.getValue() == -1.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d9000000000000000001, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.9 );
	bool expected = false;
	bool actual = object.getValue() == -1.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d8800000000000000001, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.88 );
	bool expected = false;
	bool actual = object.getValue() == -1.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d8600000000000000001, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.86 );
	bool expected = false;
	bool actual = object.getValue() == -1.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d8400000000000000001, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.84 );
	bool expected = false;
	bool actual = object.getValue() == -1.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d8200000000000000002, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.82 );
	bool expected = false;
	bool actual = object.getValue() == -1.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d8000000000000000002, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.8 );
	bool expected = false;
	bool actual = object.getValue() == -1.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d7800000000000000002, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.78 );
	bool expected = false;
	bool actual = object.getValue() == -1.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d7600000000000000002, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.76 );
	bool expected = false;
	bool actual = object.getValue() == -1.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d7400000000000000002, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.74 );
	bool expected = false;
	bool actual = object.getValue() == -1.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d7200000000000000002, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.72 );
	bool expected = false;
	bool actual = object.getValue() == -1.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d7000000000000000003, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.7 );
	bool expected = false;
	bool actual = object.getValue() == -1.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d6800000000000000003, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.68 );
	bool expected = false;
	bool actual = object.getValue() == -1.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d6600000000000000003, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.66 );
	bool expected = false;
	bool actual = object.getValue() == -1.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d6400000000000000003, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.64 );
	bool expected = false;
	bool actual = object.getValue() == -1.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d6200000000000000003, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.62 );
	bool expected = false;
	bool actual = object.getValue() == -1.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d6000000000000000003, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.6 );
	bool expected = false;
	bool actual = object.getValue() == -1.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d5800000000000000004, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.58 );
	bool expected = false;
	bool actual = object.getValue() == -1.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d5600000000000000004, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.56 );
	bool expected = false;
	bool actual = object.getValue() == -1.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d5400000000000000004, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.54 );
	bool expected = false;
	bool actual = object.getValue() == -1.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d5200000000000000004, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.52 );
	bool expected = false;
	bool actual = object.getValue() == -1.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d5000000000000000004, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.5 );
	bool expected = false;
	bool actual = object.getValue() == -1.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d4800000000000000005, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.48 );
	bool expected = false;
	bool actual = object.getValue() == -1.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d4600000000000000005, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.46 );
	bool expected = false;
	bool actual = object.getValue() == -1.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d4400000000000000005, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.44 );
	bool expected = false;
	bool actual = object.getValue() == -1.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d4200000000000000005, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.42 );
	bool expected = false;
	bool actual = object.getValue() == -1.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d4000000000000000005, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.4 );
	bool expected = false;
	bool actual = object.getValue() == -1.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d3800000000000000005, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.38 );
	bool expected = false;
	bool actual = object.getValue() == -1.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d3600000000000000006, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.36 );
	bool expected = false;
	bool actual = object.getValue() == -1.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d3400000000000000006, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.34 );
	bool expected = false;
	bool actual = object.getValue() == -1.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d3200000000000000006, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.32 );
	bool expected = false;
	bool actual = object.getValue() == -1.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d3000000000000000006, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.3 );
	bool expected = false;
	bool actual = object.getValue() == -1.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d2800000000000000006, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.28 );
	bool expected = false;
	bool actual = object.getValue() == -1.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d2600000000000000006, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.26 );
	bool expected = false;
	bool actual = object.getValue() == -1.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d2400000000000000007, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.24 );
	bool expected = false;
	bool actual = object.getValue() == -1.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d2200000000000000007, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.22 );
	bool expected = false;
	bool actual = object.getValue() == -1.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d2000000000000000007, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.2 );
	bool expected = false;
	bool actual = object.getValue() == -1.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d1800000000000000007, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.18 );
	bool expected = false;
	bool actual = object.getValue() == -1.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d1600000000000000007, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.16 );
	bool expected = false;
	bool actual = object.getValue() == -1.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d1400000000000000007, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.14 );
	bool expected = false;
	bool actual = object.getValue() == -1.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d1200000000000000008, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.12 );
	bool expected = false;
	bool actual = object.getValue() == -1.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d1000000000000000008, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.1 );
	bool expected = false;
	bool actual = object.getValue() == -1.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d0800000000000000008, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.08 );
	bool expected = false;
	bool actual = object.getValue() == -1.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d0600000000000000008, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.06 );
	bool expected = false;
	bool actual = object.getValue() == -1.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d0400000000000000008, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.04 );
	bool expected = false;
	bool actual = object.getValue() == -1.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d0200000000000000009, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.02 );
	bool expected = false;
	bool actual = object.getValue() == -1.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d0000000000000000009, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1 );
	bool expected = false;
	bool actual = object.getValue() == -1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d98000000000000000088, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.98 );
	bool expected = false;
	bool actual = object.getValue() == -0.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d9600000000000000009, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.96 );
	bool expected = false;
	bool actual = object.getValue() == -0.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d94000000000000000092, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.94 );
	bool expected = false;
	bool actual = object.getValue() == -0.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d92000000000000000094, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.92 );
	bool expected = false;
	bool actual = object.getValue() == -0.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d90000000000000000095, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.9 );
	bool expected = false;
	bool actual = object.getValue() == -0.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d88000000000000000097, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.88 );
	bool expected = false;
	bool actual = object.getValue() == -0.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d86000000000000000099, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.86 );
	bool expected = false;
	bool actual = object.getValue() == -0.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d84000000000000000101, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.84 );
	bool expected = false;
	bool actual = object.getValue() == -0.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d82000000000000000102, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.82 );
	bool expected = false;
	bool actual = object.getValue() == -0.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d80000000000000000104, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.8 );
	bool expected = false;
	bool actual = object.getValue() == -0.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d78000000000000000106, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.78 );
	bool expected = false;
	bool actual = object.getValue() == -0.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d76000000000000000108, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.76 );
	bool expected = false;
	bool actual = object.getValue() == -0.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d74000000000000000109, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.74 );
	bool expected = false;
	bool actual = object.getValue() == -0.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d72000000000000000111, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.72 );
	bool expected = false;
	bool actual = object.getValue() == -0.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d70000000000000000113, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.7 );
	bool expected = false;
	bool actual = object.getValue() == -0.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d68000000000000000114, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.68 );
	bool expected = false;
	bool actual = object.getValue() == -0.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d66000000000000000116, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.66 );
	bool expected = false;
	bool actual = object.getValue() == -0.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d64000000000000000118, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.64 );
	bool expected = false;
	bool actual = object.getValue() == -0.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d6200000000000000012, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.62 );
	bool expected = false;
	bool actual = object.getValue() == -0.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d60000000000000000121, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.6 );
	bool expected = false;
	bool actual = object.getValue() == -0.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d58000000000000000123, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.58 );
	bool expected = false;
	bool actual = object.getValue() == -0.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d56000000000000000125, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.56 );
	bool expected = false;
	bool actual = object.getValue() == -0.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d54000000000000000127, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.54 );
	bool expected = false;
	bool actual = object.getValue() == -0.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d52000000000000000128, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.52 );
	bool expected = false;
	bool actual = object.getValue() == -0.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d5000000000000000013, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.5 );
	bool expected = false;
	bool actual = object.getValue() == -0.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d48000000000000000129, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.48 );
	bool expected = false;
	bool actual = object.getValue() == -0.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d46000000000000000128, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.46 );
	bool expected = false;
	bool actual = object.getValue() == -0.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d44000000000000000127, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.44 );
	bool expected = false;
	bool actual = object.getValue() == -0.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d42000000000000000126, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.42 );
	bool expected = false;
	bool actual = object.getValue() == -0.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d40000000000000000125, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.4 );
	bool expected = false;
	bool actual = object.getValue() == -0.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d38000000000000000124, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.38 );
	bool expected = false;
	bool actual = object.getValue() == -0.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d36000000000000000123, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.36 );
	bool expected = false;
	bool actual = object.getValue() == -0.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d34000000000000000122, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.34 );
	bool expected = false;
	bool actual = object.getValue() == -0.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d32000000000000000121, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.32 );
	bool expected = false;
	bool actual = object.getValue() == -0.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d3000000000000000012, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.3 );
	bool expected = false;
	bool actual = object.getValue() == -0.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d28000000000000000119, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.28 );
	bool expected = false;
	bool actual = object.getValue() == -0.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d26000000000000000118, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.26 );
	bool expected = false;
	bool actual = object.getValue() == -0.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d24000000000000000119, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.24 );
	bool expected = false;
	bool actual = object.getValue() == -0.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d22000000000000000119, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.22 );
	bool expected = false;
	bool actual = object.getValue() == -0.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d2000000000000000012, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.2 );
	bool expected = false;
	bool actual = object.getValue() == -0.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d1800000000000000012, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.18 );
	bool expected = false;
	bool actual = object.getValue() == -0.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d1600000000000000012, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.16 );
	bool expected = false;
	bool actual = object.getValue() == -0.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d14000000000000000121, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.14 );
	bool expected = false;
	bool actual = object.getValue() == -0.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d12000000000000000121, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.12 );
	bool expected = false;
	bool actual = object.getValue() == -0.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d10000000000000000121, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.1 );
	bool expected = false;
	bool actual = object.getValue() == -0.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d080000000000000001218, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.08 );
	bool expected = false;
	bool actual = object.getValue() == -0.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d060000000000000001219, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.06 );
	bool expected = false;
	bool actual = object.getValue() == -0.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d040000000000000001219, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.04 );
	bool expected = false;
	bool actual = object.getValue() == -0.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN0d020000000000000001219, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -0.02 );
	bool expected = false;
	bool actual = object.getValue() == -0.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN1d2197274440461924883eN18, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( -1.21973e-18 );
	bool expected = false;
	bool actual = object.getValue() == -1.21973e-18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d01999999999999999878, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.02 );
	bool expected = true;
	bool actual = object.getValue() == 0.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d039999999999999998779, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.04 );
	bool expected = true;
	bool actual = object.getValue() == 0.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d059999999999999998779, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.06 );
	bool expected = true;
	bool actual = object.getValue() == 0.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d079999999999999998779, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.08 );
	bool expected = true;
	bool actual = object.getValue() == 0.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d099999999999999998775, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.1 );
	bool expected = true;
	bool actual = object.getValue() == 0.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d11999999999999999877, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.12 );
	bool expected = true;
	bool actual = object.getValue() == 0.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d13999999999999999877, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.14 );
	bool expected = true;
	bool actual = object.getValue() == 0.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d15999999999999999876, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.16 );
	bool expected = true;
	bool actual = object.getValue() == 0.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d17999999999999999876, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.18 );
	bool expected = true;
	bool actual = object.getValue() == 0.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d19999999999999999876, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.2 );
	bool expected = true;
	bool actual = object.getValue() == 0.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d21999999999999999875, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.22 );
	bool expected = true;
	bool actual = object.getValue() == 0.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d23999999999999999875, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.24 );
	bool expected = true;
	bool actual = object.getValue() == 0.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d25999999999999999874, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.26 );
	bool expected = true;
	bool actual = object.getValue() == 0.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d27999999999999999875, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.28 );
	bool expected = true;
	bool actual = object.getValue() == 0.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d29999999999999999876, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.3 );
	bool expected = true;
	bool actual = object.getValue() == 0.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d31999999999999999877, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.32 );
	bool expected = true;
	bool actual = object.getValue() == 0.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d33999999999999999878, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.34 );
	bool expected = true;
	bool actual = object.getValue() == 0.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d35999999999999999879, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.36 );
	bool expected = true;
	bool actual = object.getValue() == 0.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d3799999999999999988, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.38 );
	bool expected = true;
	bool actual = object.getValue() == 0.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d39999999999999999881, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.4 );
	bool expected = true;
	bool actual = object.getValue() == 0.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d41999999999999999882, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.42 );
	bool expected = true;
	bool actual = object.getValue() == 0.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d43999999999999999883, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.44 );
	bool expected = true;
	bool actual = object.getValue() == 0.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d45999999999999999884, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.46 );
	bool expected = true;
	bool actual = object.getValue() == 0.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d47999999999999999885, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.48 );
	bool expected = true;
	bool actual = object.getValue() == 0.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d49999999999999999886, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.5 );
	bool expected = true;
	bool actual = object.getValue() == 0.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d51999999999999999884, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.52 );
	bool expected = true;
	bool actual = object.getValue() == 0.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d53999999999999999883, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.54 );
	bool expected = true;
	bool actual = object.getValue() == 0.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d55999999999999999881, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.56 );
	bool expected = true;
	bool actual = object.getValue() == 0.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d57999999999999999879, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.58 );
	bool expected = true;
	bool actual = object.getValue() == 0.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d59999999999999999877, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.6 );
	bool expected = true;
	bool actual = object.getValue() == 0.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d61999999999999999876, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.62 );
	bool expected = true;
	bool actual = object.getValue() == 0.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d63999999999999999874, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.64 );
	bool expected = true;
	bool actual = object.getValue() == 0.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d65999999999999999872, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.66 );
	bool expected = true;
	bool actual = object.getValue() == 0.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d67999999999999999871, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.68 );
	bool expected = true;
	bool actual = object.getValue() == 0.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d69999999999999999869, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.7 );
	bool expected = true;
	bool actual = object.getValue() == 0.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d71999999999999999867, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.72 );
	bool expected = true;
	bool actual = object.getValue() == 0.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d73999999999999999865, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.74 );
	bool expected = true;
	bool actual = object.getValue() == 0.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d75999999999999999864, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.76 );
	bool expected = true;
	bool actual = object.getValue() == 0.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d77999999999999999862, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.78 );
	bool expected = true;
	bool actual = object.getValue() == 0.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d7999999999999999986, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.8 );
	bool expected = true;
	bool actual = object.getValue() == 0.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d81999999999999999858, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.82 );
	bool expected = true;
	bool actual = object.getValue() == 0.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d83999999999999999857, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.84 );
	bool expected = true;
	bool actual = object.getValue() == 0.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d85999999999999999855, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.86 );
	bool expected = true;
	bool actual = object.getValue() == 0.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d87999999999999999853, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.88 );
	bool expected = true;
	bool actual = object.getValue() == 0.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d89999999999999999851, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.9 );
	bool expected = true;
	bool actual = object.getValue() == 0.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d9199999999999999985, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.92 );
	bool expected = true;
	bool actual = object.getValue() == 0.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d93999999999999999848, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.94 );
	bool expected = true;
	bool actual = object.getValue() == 0.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d95999999999999999846, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.96 );
	bool expected = true;
	bool actual = object.getValue() == 0.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d97999999999999999845, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0.98 );
	bool expected = true;
	bool actual = object.getValue() == 0.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0d99999999999999999843, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1 );
	bool expected = true;
	bool actual = object.getValue() == 1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d0199999999999999985, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.02 );
	bool expected = true;
	bool actual = object.getValue() == 1.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d0399999999999999984, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.04 );
	bool expected = true;
	bool actual = object.getValue() == 1.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d0599999999999999984, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.06 );
	bool expected = true;
	bool actual = object.getValue() == 1.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d0799999999999999984, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.08 );
	bool expected = true;
	bool actual = object.getValue() == 1.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d0999999999999999984, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.1 );
	bool expected = true;
	bool actual = object.getValue() == 1.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d1199999999999999984, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.12 );
	bool expected = true;
	bool actual = object.getValue() == 1.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d1399999999999999984, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.14 );
	bool expected = true;
	bool actual = object.getValue() == 1.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d1599999999999999983, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.16 );
	bool expected = true;
	bool actual = object.getValue() == 1.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d1799999999999999983, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.18 );
	bool expected = true;
	bool actual = object.getValue() == 1.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d1999999999999999983, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.2 );
	bool expected = true;
	bool actual = object.getValue() == 1.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d2199999999999999983, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.22 );
	bool expected = true;
	bool actual = object.getValue() == 1.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d2399999999999999983, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.24 );
	bool expected = true;
	bool actual = object.getValue() == 1.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d2599999999999999983, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.26 );
	bool expected = true;
	bool actual = object.getValue() == 1.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d2799999999999999982, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.28 );
	bool expected = true;
	bool actual = object.getValue() == 1.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d2999999999999999982, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.3 );
	bool expected = true;
	bool actual = object.getValue() == 1.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d3199999999999999982, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.32 );
	bool expected = true;
	bool actual = object.getValue() == 1.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d3399999999999999982, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.34 );
	bool expected = true;
	bool actual = object.getValue() == 1.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d3599999999999999982, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.36 );
	bool expected = true;
	bool actual = object.getValue() == 1.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d3799999999999999982, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.38 );
	bool expected = true;
	bool actual = object.getValue() == 1.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d3999999999999999981, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.4 );
	bool expected = true;
	bool actual = object.getValue() == 1.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d4199999999999999981, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.42 );
	bool expected = true;
	bool actual = object.getValue() == 1.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d4399999999999999981, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.44 );
	bool expected = true;
	bool actual = object.getValue() == 1.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d4599999999999999981, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.46 );
	bool expected = true;
	bool actual = object.getValue() == 1.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d4799999999999999981, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.48 );
	bool expected = true;
	bool actual = object.getValue() == 1.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d499999999999999998, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.5 );
	bool expected = true;
	bool actual = object.getValue() == 1.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d519999999999999998, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.52 );
	bool expected = true;
	bool actual = object.getValue() == 1.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d539999999999999998, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.54 );
	bool expected = true;
	bool actual = object.getValue() == 1.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d559999999999999998, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.56 );
	bool expected = true;
	bool actual = object.getValue() == 1.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d579999999999999998, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.58 );
	bool expected = true;
	bool actual = object.getValue() == 1.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d599999999999999998, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.6 );
	bool expected = true;
	bool actual = object.getValue() == 1.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d6199999999999999979, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.62 );
	bool expected = true;
	bool actual = object.getValue() == 1.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d6399999999999999979, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.64 );
	bool expected = true;
	bool actual = object.getValue() == 1.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d6599999999999999979, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.66 );
	bool expected = true;
	bool actual = object.getValue() == 1.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d6799999999999999979, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.68 );
	bool expected = true;
	bool actual = object.getValue() == 1.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d6999999999999999979, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.7 );
	bool expected = true;
	bool actual = object.getValue() == 1.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d7199999999999999979, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.72 );
	bool expected = true;
	bool actual = object.getValue() == 1.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d7399999999999999978, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.74 );
	bool expected = true;
	bool actual = object.getValue() == 1.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d7599999999999999978, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.76 );
	bool expected = true;
	bool actual = object.getValue() == 1.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d7799999999999999978, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.78 );
	bool expected = true;
	bool actual = object.getValue() == 1.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d7999999999999999978, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.8 );
	bool expected = true;
	bool actual = object.getValue() == 1.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d8199999999999999978, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.82 );
	bool expected = true;
	bool actual = object.getValue() == 1.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d8399999999999999978, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.84 );
	bool expected = true;
	bool actual = object.getValue() == 1.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d8599999999999999977, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.86 );
	bool expected = true;
	bool actual = object.getValue() == 1.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d8799999999999999977, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.88 );
	bool expected = true;
	bool actual = object.getValue() == 1.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d8999999999999999977, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.9 );
	bool expected = true;
	bool actual = object.getValue() == 1.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d9199999999999999977, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.92 );
	bool expected = true;
	bool actual = object.getValue() == 1.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d9399999999999999977, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.94 );
	bool expected = true;
	bool actual = object.getValue() == 1.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d9599999999999999976, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.96 );
	bool expected = true;
	bool actual = object.getValue() == 1.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d9799999999999999976, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1.98 );
	bool expected = true;
	bool actual = object.getValue() == 1.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1d9999999999999999976, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 2 );
	bool expected = true;
	bool actual = object.getValue() == 2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 998 );
	bool expected = true;
	bool actual = object.getValue() == 998;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d20000000000000001, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 998.2 );
	bool expected = true;
	bool actual = object.getValue() == 998.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d40000000000000002, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 998.4 );
	bool expected = true;
	bool actual = object.getValue() == 998.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d60000000000000003, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 998.6 );
	bool expected = true;
	bool actual = object.getValue() == 998.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d80000000000000004, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 998.8 );
	bool expected = true;
	bool actual = object.getValue() == 998.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d00000000000000006, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 999 );
	bool expected = true;
	bool actual = object.getValue() == 999;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d20000000000000007, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 999.2 );
	bool expected = true;
	bool actual = object.getValue() == 999.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d40000000000000008, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 999.4 );
	bool expected = true;
	bool actual = object.getValue() == 999.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d60000000000000009, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 999.6 );
	bool expected = true;
	bool actual = object.getValue() == 999.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d8000000000000001, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 999.8 );
	bool expected = true;
	bool actual = object.getValue() == 999.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d0000000000000001, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1000 );
	bool expected = true;
	bool actual = object.getValue() == 1000;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d2000000000000001, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1000.2 );
	bool expected = true;
	bool actual = object.getValue() == 1000.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d4000000000000001, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1000.4 );
	bool expected = true;
	bool actual = object.getValue() == 1000.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d6000000000000001, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1000.6 );
	bool expected = true;
	bool actual = object.getValue() == 1000.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d8000000000000002, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1000.8 );
	bool expected = true;
	bool actual = object.getValue() == 1000.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d0000000000000002, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1001 );
	bool expected = true;
	bool actual = object.getValue() == 1001;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d2000000000000002, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1001.2 );
	bool expected = true;
	bool actual = object.getValue() == 1001.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d4000000000000002, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1001.4 );
	bool expected = true;
	bool actual = object.getValue() == 1001.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d6000000000000002, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1001.6 );
	bool expected = true;
	bool actual = object.getValue() == 1001.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d8000000000000002, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1001.8 );
	bool expected = true;
	bool actual = object.getValue() == 1001.8;
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor Tests --------------------------------------------------- */


/* Assignment Test ---------------------------------------------------------- */

TEST( assignment, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal original( 0 );
	MxNumberNonNegativeDecimal other( 1000 );
	other = original;
	int expected = 0;
	int actual = other.getValue();
	CHECK_EQUAL( expected, actual )
	other.setValue( 1000 );
	expected = 0;
	actual = original.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: Assignment Test ----------------------------------------------------- */


/* Upper and Lower Bound Tests ---------------------------------------------- */

TEST( isLowerRangeBound, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object;
	bool expected = true;
	bool actual = object.isLowerRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeBound, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object;
	bool expected = false;
	bool actual = object.isUpperRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isLowerRangeLimitInclusive, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object;
	bool expected = true;
	bool actual = object.isLowerRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeLimitInclusive, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object;
	bool expected = true;
	bool actual = object.isUpperRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( getLowerBound, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object;
	int expected = 0;
	int actual = object.getLowerBound();
	CHECK_EQUAL( expected, actual )
}

/* End: Upper and Lower Bound Tests ----------------------------------------- */


/* Documentation Tests ------------------------------------------------------ */

TEST( getXmlTypeName, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object;
	std::string expected = "non-negative-decimal";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object;
	std::string expected = "MxNumberNonNegativeDecimal";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object;
	std::string expected = "The non-negative-decimal type specifies a non-negative decimal value.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Documentation Tests ------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( getValue_setValue_0_1000, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0 );
	int expected = 0;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 1000 );
	expected = 1000;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_1_999, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1 );
	int expected = 1;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 999 );
	expected = 999;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_2_998, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 2 );
	int expected = 2;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 998 );
	expected = 998;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_3_997, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 3 );
	int expected = 3;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 997 );
	expected = 997;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* stream Tests ------------------------------------------------------------- */

TEST( stream_0_1000, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0 );
	std::stringstream ss1;
	ss1.setf( std::ios::fixed );
	object.stream( ss1 );
	std::string expected = "0";
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
TEST( stream_1_999, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1 );
	std::stringstream ss1;
	ss1.setf( std::ios::fixed );
	object.stream( ss1 );
	std::string expected = "1";
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
TEST( stream_2_998, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 2 );
	std::stringstream ss1;
	ss1.setf( std::ios::fixed );
	object.stream( ss1 );
	std::string expected = "2";
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
TEST( stream_3_997, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 3 );
	std::stringstream ss1;
	ss1.setf( std::ios::fixed );
	object.stream( ss1 );
	std::string expected = "3";
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

TEST( toString_1000, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1000 );
	std::string expected = "1000";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_1, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 1 );
	std::string expected = "1";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_998, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 998 );
	std::string expected = "998";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_3, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 3 );
	std::string expected = "3";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}

/* End: toString() Tests ---------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( fromString_0_1000, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 0 );
	std::stringstream ss1;
	std::string value1 = "1000";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 1000;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 0 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 1000;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_999_1, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 999 );
	std::stringstream ss1;
	std::string value1 = "1";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 1;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 999 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 1;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_2_998, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 2 );
	std::stringstream ss1;
	std::string value1 = "998";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 998;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 2 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 998;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_997_3, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object( 997 );
	std::stringstream ss1;
	std::string value1 = "3";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 3;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 997 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 3;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* Comparison Operators ----------------------------------------------------- */

TEST( operatorEqEq_0_1_false, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 0 );
	MxNumberNonNegativeDecimal object2( 1 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_1_1_true, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 1 );
	MxNumberNonNegativeDecimal object2( 1 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_2_1_false, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 2 );
	MxNumberNonNegativeDecimal object2( 1 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_999_1000_false, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 999 );
	MxNumberNonNegativeDecimal object2( 1000 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_999_999_true, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 999 );
	MxNumberNonNegativeDecimal object2( 999 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_999_998_false, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 999 );
	MxNumberNonNegativeDecimal object2( 998 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_0_1_true, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 0 );
	MxNumberNonNegativeDecimal object2( 1 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_1_1_false, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 1 );
	MxNumberNonNegativeDecimal object2( 1 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_2_1_true, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 2 );
	MxNumberNonNegativeDecimal object2( 1 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_999_1000_true, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 999 );
	MxNumberNonNegativeDecimal object2( 1000 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_999_999_false, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 999 );
	MxNumberNonNegativeDecimal object2( 999 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_999_998_true, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 999 );
	MxNumberNonNegativeDecimal object2( 998 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_0_1_false, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 0 );
	MxNumberNonNegativeDecimal object2( 1 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_1_1_false, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 1 );
	MxNumberNonNegativeDecimal object2( 1 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_2_1_true, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 2 );
	MxNumberNonNegativeDecimal object2( 1 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_999_1000_false, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 999 );
	MxNumberNonNegativeDecimal object2( 1000 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_999_999_false, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 999 );
	MxNumberNonNegativeDecimal object2( 999 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_999_998_true, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 999 );
	MxNumberNonNegativeDecimal object2( 998 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_0_1_false, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 0 );
	MxNumberNonNegativeDecimal object2( 1 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_1_1_true, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 1 );
	MxNumberNonNegativeDecimal object2( 1 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_2_1_true, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 2 );
	MxNumberNonNegativeDecimal object2( 1 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_999_1000_false, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 999 );
	MxNumberNonNegativeDecimal object2( 1000 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_999_999_true, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 999 );
	MxNumberNonNegativeDecimal object2( 999 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_999_998_true, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 999 );
	MxNumberNonNegativeDecimal object2( 998 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_0_1_true, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 0 );
	MxNumberNonNegativeDecimal object2( 1 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_1_1_false, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 1 );
	MxNumberNonNegativeDecimal object2( 1 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_2_1_false, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 2 );
	MxNumberNonNegativeDecimal object2( 1 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_999_1000_true, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 999 );
	MxNumberNonNegativeDecimal object2( 1000 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_999_999_false, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 999 );
	MxNumberNonNegativeDecimal object2( 999 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_999_998_false, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 999 );
	MxNumberNonNegativeDecimal object2( 998 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_0_1_true, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 0 );
	MxNumberNonNegativeDecimal object2( 1 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_1_1_true, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 1 );
	MxNumberNonNegativeDecimal object2( 1 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_2_1_false, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 2 );
	MxNumberNonNegativeDecimal object2( 1 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_999_1000_true, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 999 );
	MxNumberNonNegativeDecimal object2( 1000 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_999_999_true, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 999 );
	MxNumberNonNegativeDecimal object2( 999 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_999_998_false, MxNumberNonNegativeDecimal )
{
	MxNumberNonNegativeDecimal object1( 999 );
	MxNumberNonNegativeDecimal object2( 998 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}

/* End: Comparison Operators ------------------------------------------------ */


