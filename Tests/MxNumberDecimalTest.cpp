/** *******************************************************
  * Class under test: MxNumberDecimal
  * *******************************************************
  * **/
#include <iostream>
#include <string>
#include <sstream>
#include "TestHarness.h"
#include "MxNumberDecimal.h"

using namespace std;
using namespace lexicon;

/* Constructor Tests -------------------------------------------------------- */

TEST( ctorDefault, MxNumberDecimal )
{
	MxNumberDecimal object;
	CHECK( true )
}
TEST( ctorValue998, MxNumberDecimal )
{
	MxNumberDecimal object( 998 );
	bool expected = true;
	bool actual = object.getValue() == 998;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d02000000000000002, MxNumberDecimal )
{
	MxNumberDecimal object( 998.02 );
	bool expected = true;
	bool actual = object.getValue() == 998.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d04000000000000004, MxNumberDecimal )
{
	MxNumberDecimal object( 998.04 );
	bool expected = true;
	bool actual = object.getValue() == 998.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d06000000000000005, MxNumberDecimal )
{
	MxNumberDecimal object( 998.06 );
	bool expected = true;
	bool actual = object.getValue() == 998.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d08000000000000007, MxNumberDecimal )
{
	MxNumberDecimal object( 998.08 );
	bool expected = true;
	bool actual = object.getValue() == 998.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d10000000000000009, MxNumberDecimal )
{
	MxNumberDecimal object( 998.1 );
	bool expected = true;
	bool actual = object.getValue() == 998.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d12000000000000011, MxNumberDecimal )
{
	MxNumberDecimal object( 998.12 );
	bool expected = true;
	bool actual = object.getValue() == 998.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d14000000000000012, MxNumberDecimal )
{
	MxNumberDecimal object( 998.14 );
	bool expected = true;
	bool actual = object.getValue() == 998.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d16000000000000014, MxNumberDecimal )
{
	MxNumberDecimal object( 998.16 );
	bool expected = true;
	bool actual = object.getValue() == 998.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d18000000000000016, MxNumberDecimal )
{
	MxNumberDecimal object( 998.18 );
	bool expected = true;
	bool actual = object.getValue() == 998.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d20000000000000018, MxNumberDecimal )
{
	MxNumberDecimal object( 998.2 );
	bool expected = true;
	bool actual = object.getValue() == 998.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d2200000000000002, MxNumberDecimal )
{
	MxNumberDecimal object( 998.22 );
	bool expected = true;
	bool actual = object.getValue() == 998.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d24000000000000021, MxNumberDecimal )
{
	MxNumberDecimal object( 998.24 );
	bool expected = true;
	bool actual = object.getValue() == 998.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d26000000000000023, MxNumberDecimal )
{
	MxNumberDecimal object( 998.26 );
	bool expected = true;
	bool actual = object.getValue() == 998.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d28000000000000025, MxNumberDecimal )
{
	MxNumberDecimal object( 998.28 );
	bool expected = true;
	bool actual = object.getValue() == 998.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d30000000000000027, MxNumberDecimal )
{
	MxNumberDecimal object( 998.3 );
	bool expected = true;
	bool actual = object.getValue() == 998.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d32000000000000028, MxNumberDecimal )
{
	MxNumberDecimal object( 998.32 );
	bool expected = true;
	bool actual = object.getValue() == 998.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d3400000000000003, MxNumberDecimal )
{
	MxNumberDecimal object( 998.34 );
	bool expected = true;
	bool actual = object.getValue() == 998.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d36000000000000032, MxNumberDecimal )
{
	MxNumberDecimal object( 998.36 );
	bool expected = true;
	bool actual = object.getValue() == 998.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d38000000000000034, MxNumberDecimal )
{
	MxNumberDecimal object( 998.38 );
	bool expected = true;
	bool actual = object.getValue() == 998.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d40000000000000036, MxNumberDecimal )
{
	MxNumberDecimal object( 998.4 );
	bool expected = true;
	bool actual = object.getValue() == 998.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d42000000000000037, MxNumberDecimal )
{
	MxNumberDecimal object( 998.42 );
	bool expected = true;
	bool actual = object.getValue() == 998.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d44000000000000039, MxNumberDecimal )
{
	MxNumberDecimal object( 998.44 );
	bool expected = true;
	bool actual = object.getValue() == 998.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d46000000000000041, MxNumberDecimal )
{
	MxNumberDecimal object( 998.46 );
	bool expected = true;
	bool actual = object.getValue() == 998.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d48000000000000043, MxNumberDecimal )
{
	MxNumberDecimal object( 998.48 );
	bool expected = true;
	bool actual = object.getValue() == 998.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d50000000000000044, MxNumberDecimal )
{
	MxNumberDecimal object( 998.5 );
	bool expected = true;
	bool actual = object.getValue() == 998.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d52000000000000046, MxNumberDecimal )
{
	MxNumberDecimal object( 998.52 );
	bool expected = true;
	bool actual = object.getValue() == 998.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d54000000000000048, MxNumberDecimal )
{
	MxNumberDecimal object( 998.54 );
	bool expected = true;
	bool actual = object.getValue() == 998.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d5600000000000005, MxNumberDecimal )
{
	MxNumberDecimal object( 998.56 );
	bool expected = true;
	bool actual = object.getValue() == 998.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d58000000000000052, MxNumberDecimal )
{
	MxNumberDecimal object( 998.58 );
	bool expected = true;
	bool actual = object.getValue() == 998.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d60000000000000053, MxNumberDecimal )
{
	MxNumberDecimal object( 998.6 );
	bool expected = true;
	bool actual = object.getValue() == 998.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d62000000000000055, MxNumberDecimal )
{
	MxNumberDecimal object( 998.62 );
	bool expected = true;
	bool actual = object.getValue() == 998.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d64000000000000057, MxNumberDecimal )
{
	MxNumberDecimal object( 998.64 );
	bool expected = true;
	bool actual = object.getValue() == 998.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d66000000000000059, MxNumberDecimal )
{
	MxNumberDecimal object( 998.66 );
	bool expected = true;
	bool actual = object.getValue() == 998.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d6800000000000006, MxNumberDecimal )
{
	MxNumberDecimal object( 998.68 );
	bool expected = true;
	bool actual = object.getValue() == 998.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d70000000000000062, MxNumberDecimal )
{
	MxNumberDecimal object( 998.7 );
	bool expected = true;
	bool actual = object.getValue() == 998.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d72000000000000064, MxNumberDecimal )
{
	MxNumberDecimal object( 998.72 );
	bool expected = true;
	bool actual = object.getValue() == 998.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d74000000000000066, MxNumberDecimal )
{
	MxNumberDecimal object( 998.74 );
	bool expected = true;
	bool actual = object.getValue() == 998.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d76000000000000068, MxNumberDecimal )
{
	MxNumberDecimal object( 998.76 );
	bool expected = true;
	bool actual = object.getValue() == 998.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d78000000000000069, MxNumberDecimal )
{
	MxNumberDecimal object( 998.78 );
	bool expected = true;
	bool actual = object.getValue() == 998.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d80000000000000071, MxNumberDecimal )
{
	MxNumberDecimal object( 998.8 );
	bool expected = true;
	bool actual = object.getValue() == 998.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d82000000000000073, MxNumberDecimal )
{
	MxNumberDecimal object( 998.82 );
	bool expected = true;
	bool actual = object.getValue() == 998.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d84000000000000075, MxNumberDecimal )
{
	MxNumberDecimal object( 998.84 );
	bool expected = true;
	bool actual = object.getValue() == 998.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d86000000000000076, MxNumberDecimal )
{
	MxNumberDecimal object( 998.86 );
	bool expected = true;
	bool actual = object.getValue() == 998.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d88000000000000078, MxNumberDecimal )
{
	MxNumberDecimal object( 998.88 );
	bool expected = true;
	bool actual = object.getValue() == 998.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d9000000000000008, MxNumberDecimal )
{
	MxNumberDecimal object( 998.9 );
	bool expected = true;
	bool actual = object.getValue() == 998.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d92000000000000082, MxNumberDecimal )
{
	MxNumberDecimal object( 998.92 );
	bool expected = true;
	bool actual = object.getValue() == 998.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d94000000000000083, MxNumberDecimal )
{
	MxNumberDecimal object( 998.94 );
	bool expected = true;
	bool actual = object.getValue() == 998.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d96000000000000085, MxNumberDecimal )
{
	MxNumberDecimal object( 998.96 );
	bool expected = true;
	bool actual = object.getValue() == 998.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d98000000000000087, MxNumberDecimal )
{
	MxNumberDecimal object( 998.98 );
	bool expected = true;
	bool actual = object.getValue() == 998.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d00000000000000089, MxNumberDecimal )
{
	MxNumberDecimal object( 999 );
	bool expected = true;
	bool actual = object.getValue() == 999;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d02000000000000091, MxNumberDecimal )
{
	MxNumberDecimal object( 999.02 );
	bool expected = true;
	bool actual = object.getValue() == 999.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d04000000000000092, MxNumberDecimal )
{
	MxNumberDecimal object( 999.04 );
	bool expected = true;
	bool actual = object.getValue() == 999.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d06000000000000094, MxNumberDecimal )
{
	MxNumberDecimal object( 999.06 );
	bool expected = true;
	bool actual = object.getValue() == 999.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d08000000000000096, MxNumberDecimal )
{
	MxNumberDecimal object( 999.08 );
	bool expected = true;
	bool actual = object.getValue() == 999.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d10000000000000098, MxNumberDecimal )
{
	MxNumberDecimal object( 999.1 );
	bool expected = true;
	bool actual = object.getValue() == 999.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d12000000000000099, MxNumberDecimal )
{
	MxNumberDecimal object( 999.12 );
	bool expected = true;
	bool actual = object.getValue() == 999.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d14000000000000101, MxNumberDecimal )
{
	MxNumberDecimal object( 999.14 );
	bool expected = true;
	bool actual = object.getValue() == 999.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d16000000000000103, MxNumberDecimal )
{
	MxNumberDecimal object( 999.16 );
	bool expected = true;
	bool actual = object.getValue() == 999.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d18000000000000105, MxNumberDecimal )
{
	MxNumberDecimal object( 999.18 );
	bool expected = true;
	bool actual = object.getValue() == 999.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d20000000000000107, MxNumberDecimal )
{
	MxNumberDecimal object( 999.2 );
	bool expected = true;
	bool actual = object.getValue() == 999.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d22000000000000108, MxNumberDecimal )
{
	MxNumberDecimal object( 999.22 );
	bool expected = true;
	bool actual = object.getValue() == 999.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d2400000000000011, MxNumberDecimal )
{
	MxNumberDecimal object( 999.24 );
	bool expected = true;
	bool actual = object.getValue() == 999.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d26000000000000112, MxNumberDecimal )
{
	MxNumberDecimal object( 999.26 );
	bool expected = true;
	bool actual = object.getValue() == 999.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d28000000000000114, MxNumberDecimal )
{
	MxNumberDecimal object( 999.28 );
	bool expected = true;
	bool actual = object.getValue() == 999.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d30000000000000115, MxNumberDecimal )
{
	MxNumberDecimal object( 999.3 );
	bool expected = true;
	bool actual = object.getValue() == 999.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d32000000000000117, MxNumberDecimal )
{
	MxNumberDecimal object( 999.32 );
	bool expected = true;
	bool actual = object.getValue() == 999.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d34000000000000119, MxNumberDecimal )
{
	MxNumberDecimal object( 999.34 );
	bool expected = true;
	bool actual = object.getValue() == 999.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d36000000000000121, MxNumberDecimal )
{
	MxNumberDecimal object( 999.36 );
	bool expected = true;
	bool actual = object.getValue() == 999.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d38000000000000123, MxNumberDecimal )
{
	MxNumberDecimal object( 999.38 );
	bool expected = true;
	bool actual = object.getValue() == 999.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d40000000000000124, MxNumberDecimal )
{
	MxNumberDecimal object( 999.4 );
	bool expected = true;
	bool actual = object.getValue() == 999.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d42000000000000126, MxNumberDecimal )
{
	MxNumberDecimal object( 999.42 );
	bool expected = true;
	bool actual = object.getValue() == 999.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d44000000000000128, MxNumberDecimal )
{
	MxNumberDecimal object( 999.44 );
	bool expected = true;
	bool actual = object.getValue() == 999.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d4600000000000013, MxNumberDecimal )
{
	MxNumberDecimal object( 999.46 );
	bool expected = true;
	bool actual = object.getValue() == 999.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d48000000000000131, MxNumberDecimal )
{
	MxNumberDecimal object( 999.48 );
	bool expected = true;
	bool actual = object.getValue() == 999.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d50000000000000133, MxNumberDecimal )
{
	MxNumberDecimal object( 999.5 );
	bool expected = true;
	bool actual = object.getValue() == 999.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d52000000000000135, MxNumberDecimal )
{
	MxNumberDecimal object( 999.52 );
	bool expected = true;
	bool actual = object.getValue() == 999.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d54000000000000137, MxNumberDecimal )
{
	MxNumberDecimal object( 999.54 );
	bool expected = true;
	bool actual = object.getValue() == 999.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d56000000000000139, MxNumberDecimal )
{
	MxNumberDecimal object( 999.56 );
	bool expected = true;
	bool actual = object.getValue() == 999.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d5800000000000014, MxNumberDecimal )
{
	MxNumberDecimal object( 999.58 );
	bool expected = true;
	bool actual = object.getValue() == 999.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d60000000000000142, MxNumberDecimal )
{
	MxNumberDecimal object( 999.6 );
	bool expected = true;
	bool actual = object.getValue() == 999.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d62000000000000144, MxNumberDecimal )
{
	MxNumberDecimal object( 999.62 );
	bool expected = true;
	bool actual = object.getValue() == 999.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d64000000000000146, MxNumberDecimal )
{
	MxNumberDecimal object( 999.64 );
	bool expected = true;
	bool actual = object.getValue() == 999.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d66000000000000147, MxNumberDecimal )
{
	MxNumberDecimal object( 999.66 );
	bool expected = true;
	bool actual = object.getValue() == 999.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d68000000000000149, MxNumberDecimal )
{
	MxNumberDecimal object( 999.68 );
	bool expected = true;
	bool actual = object.getValue() == 999.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d70000000000000151, MxNumberDecimal )
{
	MxNumberDecimal object( 999.7 );
	bool expected = true;
	bool actual = object.getValue() == 999.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d72000000000000153, MxNumberDecimal )
{
	MxNumberDecimal object( 999.72 );
	bool expected = true;
	bool actual = object.getValue() == 999.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d74000000000000155, MxNumberDecimal )
{
	MxNumberDecimal object( 999.74 );
	bool expected = true;
	bool actual = object.getValue() == 999.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d76000000000000156, MxNumberDecimal )
{
	MxNumberDecimal object( 999.76 );
	bool expected = true;
	bool actual = object.getValue() == 999.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d78000000000000158, MxNumberDecimal )
{
	MxNumberDecimal object( 999.78 );
	bool expected = true;
	bool actual = object.getValue() == 999.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d8000000000000016, MxNumberDecimal )
{
	MxNumberDecimal object( 999.8 );
	bool expected = true;
	bool actual = object.getValue() == 999.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d82000000000000162, MxNumberDecimal )
{
	MxNumberDecimal object( 999.82 );
	bool expected = true;
	bool actual = object.getValue() == 999.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d84000000000000163, MxNumberDecimal )
{
	MxNumberDecimal object( 999.84 );
	bool expected = true;
	bool actual = object.getValue() == 999.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d86000000000000165, MxNumberDecimal )
{
	MxNumberDecimal object( 999.86 );
	bool expected = true;
	bool actual = object.getValue() == 999.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d88000000000000167, MxNumberDecimal )
{
	MxNumberDecimal object( 999.88 );
	bool expected = true;
	bool actual = object.getValue() == 999.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d90000000000000169, MxNumberDecimal )
{
	MxNumberDecimal object( 999.9 );
	bool expected = true;
	bool actual = object.getValue() == 999.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d92000000000000171, MxNumberDecimal )
{
	MxNumberDecimal object( 999.92 );
	bool expected = true;
	bool actual = object.getValue() == 999.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d94000000000000172, MxNumberDecimal )
{
	MxNumberDecimal object( 999.94 );
	bool expected = true;
	bool actual = object.getValue() == 999.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d96000000000000174, MxNumberDecimal )
{
	MxNumberDecimal object( 999.96 );
	bool expected = true;
	bool actual = object.getValue() == 999.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d98000000000000176, MxNumberDecimal )
{
	MxNumberDecimal object( 999.98 );
	bool expected = true;
	bool actual = object.getValue() == 999.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d0000000000000018, MxNumberDecimal )
{
	MxNumberDecimal object( 1000 );
	bool expected = true;
	bool actual = object.getValue() == 1000;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d0200000000000018, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.02 );
	bool expected = true;
	bool actual = object.getValue() == 1000.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d0400000000000018, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.04 );
	bool expected = true;
	bool actual = object.getValue() == 1000.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d0600000000000018, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.06 );
	bool expected = true;
	bool actual = object.getValue() == 1000.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d0800000000000018, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.08 );
	bool expected = true;
	bool actual = object.getValue() == 1000.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d1000000000000019, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.1 );
	bool expected = true;
	bool actual = object.getValue() == 1000.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d1200000000000019, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.12 );
	bool expected = true;
	bool actual = object.getValue() == 1000.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d1400000000000019, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.14 );
	bool expected = true;
	bool actual = object.getValue() == 1000.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d1600000000000019, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.16 );
	bool expected = true;
	bool actual = object.getValue() == 1000.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d1800000000000019, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.18 );
	bool expected = true;
	bool actual = object.getValue() == 1000.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d200000000000002, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.2 );
	bool expected = true;
	bool actual = object.getValue() == 1000.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d220000000000002, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.22 );
	bool expected = true;
	bool actual = object.getValue() == 1000.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d240000000000002, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.24 );
	bool expected = true;
	bool actual = object.getValue() == 1000.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d260000000000002, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.26 );
	bool expected = true;
	bool actual = object.getValue() == 1000.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d280000000000002, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.28 );
	bool expected = true;
	bool actual = object.getValue() == 1000.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d300000000000002, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.3 );
	bool expected = true;
	bool actual = object.getValue() == 1000.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d3200000000000021, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.32 );
	bool expected = true;
	bool actual = object.getValue() == 1000.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d3400000000000021, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.34 );
	bool expected = true;
	bool actual = object.getValue() == 1000.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d3600000000000021, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.36 );
	bool expected = true;
	bool actual = object.getValue() == 1000.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d3800000000000021, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.38 );
	bool expected = true;
	bool actual = object.getValue() == 1000.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d4000000000000021, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.4 );
	bool expected = true;
	bool actual = object.getValue() == 1000.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d4200000000000021, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.42 );
	bool expected = true;
	bool actual = object.getValue() == 1000.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d4400000000000022, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.44 );
	bool expected = true;
	bool actual = object.getValue() == 1000.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d4600000000000022, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.46 );
	bool expected = true;
	bool actual = object.getValue() == 1000.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d4800000000000022, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.48 );
	bool expected = true;
	bool actual = object.getValue() == 1000.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d5000000000000022, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.5 );
	bool expected = true;
	bool actual = object.getValue() == 1000.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d5200000000000022, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.52 );
	bool expected = true;
	bool actual = object.getValue() == 1000.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d5400000000000023, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.54 );
	bool expected = true;
	bool actual = object.getValue() == 1000.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d5600000000000023, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.56 );
	bool expected = true;
	bool actual = object.getValue() == 1000.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d5800000000000023, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.58 );
	bool expected = true;
	bool actual = object.getValue() == 1000.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d6000000000000023, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.6 );
	bool expected = true;
	bool actual = object.getValue() == 1000.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d6200000000000023, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.62 );
	bool expected = true;
	bool actual = object.getValue() == 1000.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d6400000000000023, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.64 );
	bool expected = true;
	bool actual = object.getValue() == 1000.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d6600000000000024, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.66 );
	bool expected = true;
	bool actual = object.getValue() == 1000.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d6800000000000024, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.68 );
	bool expected = true;
	bool actual = object.getValue() == 1000.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d7000000000000024, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.7 );
	bool expected = true;
	bool actual = object.getValue() == 1000.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d7200000000000024, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.72 );
	bool expected = true;
	bool actual = object.getValue() == 1000.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d7400000000000024, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.74 );
	bool expected = true;
	bool actual = object.getValue() == 1000.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d7600000000000025, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.76 );
	bool expected = true;
	bool actual = object.getValue() == 1000.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d7800000000000025, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.78 );
	bool expected = true;
	bool actual = object.getValue() == 1000.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d8000000000000025, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.8 );
	bool expected = true;
	bool actual = object.getValue() == 1000.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d8200000000000025, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.82 );
	bool expected = true;
	bool actual = object.getValue() == 1000.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d8400000000000025, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.84 );
	bool expected = true;
	bool actual = object.getValue() == 1000.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d8600000000000025, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.86 );
	bool expected = true;
	bool actual = object.getValue() == 1000.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d8800000000000026, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.88 );
	bool expected = true;
	bool actual = object.getValue() == 1000.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d9000000000000026, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.9 );
	bool expected = true;
	bool actual = object.getValue() == 1000.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d9200000000000026, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.92 );
	bool expected = true;
	bool actual = object.getValue() == 1000.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d9400000000000026, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.94 );
	bool expected = true;
	bool actual = object.getValue() == 1000.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d9600000000000026, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.96 );
	bool expected = true;
	bool actual = object.getValue() == 1000.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d9800000000000026, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.98 );
	bool expected = true;
	bool actual = object.getValue() == 1000.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d0000000000000027, MxNumberDecimal )
{
	MxNumberDecimal object( 1001 );
	bool expected = true;
	bool actual = object.getValue() == 1001;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d0200000000000027, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.02 );
	bool expected = true;
	bool actual = object.getValue() == 1001.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d0400000000000027, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.04 );
	bool expected = true;
	bool actual = object.getValue() == 1001.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d0600000000000027, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.06 );
	bool expected = true;
	bool actual = object.getValue() == 1001.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d0800000000000027, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.08 );
	bool expected = true;
	bool actual = object.getValue() == 1001.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d1000000000000028, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.1 );
	bool expected = true;
	bool actual = object.getValue() == 1001.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d1200000000000028, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.12 );
	bool expected = true;
	bool actual = object.getValue() == 1001.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d1400000000000028, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.14 );
	bool expected = true;
	bool actual = object.getValue() == 1001.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d1600000000000028, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.16 );
	bool expected = true;
	bool actual = object.getValue() == 1001.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d1800000000000028, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.18 );
	bool expected = true;
	bool actual = object.getValue() == 1001.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d2000000000000028, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.2 );
	bool expected = true;
	bool actual = object.getValue() == 1001.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d2200000000000029, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.22 );
	bool expected = true;
	bool actual = object.getValue() == 1001.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d2400000000000029, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.24 );
	bool expected = true;
	bool actual = object.getValue() == 1001.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d2600000000000029, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.26 );
	bool expected = true;
	bool actual = object.getValue() == 1001.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d2800000000000029, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.28 );
	bool expected = true;
	bool actual = object.getValue() == 1001.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d3000000000000029, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.3 );
	bool expected = true;
	bool actual = object.getValue() == 1001.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d3200000000000029, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.32 );
	bool expected = true;
	bool actual = object.getValue() == 1001.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d340000000000003, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.34 );
	bool expected = true;
	bool actual = object.getValue() == 1001.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d360000000000003, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.36 );
	bool expected = true;
	bool actual = object.getValue() == 1001.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d380000000000003, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.38 );
	bool expected = true;
	bool actual = object.getValue() == 1001.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d400000000000003, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.4 );
	bool expected = true;
	bool actual = object.getValue() == 1001.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d420000000000003, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.42 );
	bool expected = true;
	bool actual = object.getValue() == 1001.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d4400000000000031, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.44 );
	bool expected = true;
	bool actual = object.getValue() == 1001.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d4600000000000031, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.46 );
	bool expected = true;
	bool actual = object.getValue() == 1001.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d4800000000000031, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.48 );
	bool expected = true;
	bool actual = object.getValue() == 1001.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d5000000000000031, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.5 );
	bool expected = true;
	bool actual = object.getValue() == 1001.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d5200000000000031, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.52 );
	bool expected = true;
	bool actual = object.getValue() == 1001.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d5400000000000031, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.54 );
	bool expected = true;
	bool actual = object.getValue() == 1001.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d5600000000000032, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.56 );
	bool expected = true;
	bool actual = object.getValue() == 1001.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d5800000000000032, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.58 );
	bool expected = true;
	bool actual = object.getValue() == 1001.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d6000000000000032, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.6 );
	bool expected = true;
	bool actual = object.getValue() == 1001.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d6200000000000032, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.62 );
	bool expected = true;
	bool actual = object.getValue() == 1001.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d6400000000000032, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.64 );
	bool expected = true;
	bool actual = object.getValue() == 1001.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d6600000000000033, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.66 );
	bool expected = true;
	bool actual = object.getValue() == 1001.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d6800000000000033, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.68 );
	bool expected = true;
	bool actual = object.getValue() == 1001.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d7000000000000033, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.7 );
	bool expected = true;
	bool actual = object.getValue() == 1001.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d7200000000000033, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.72 );
	bool expected = true;
	bool actual = object.getValue() == 1001.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d7400000000000033, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.74 );
	bool expected = true;
	bool actual = object.getValue() == 1001.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d7600000000000033, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.76 );
	bool expected = true;
	bool actual = object.getValue() == 1001.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d7800000000000034, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.78 );
	bool expected = true;
	bool actual = object.getValue() == 1001.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d8000000000000034, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.8 );
	bool expected = true;
	bool actual = object.getValue() == 1001.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d8200000000000034, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.82 );
	bool expected = true;
	bool actual = object.getValue() == 1001.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d8400000000000034, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.84 );
	bool expected = true;
	bool actual = object.getValue() == 1001.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d8600000000000034, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.86 );
	bool expected = true;
	bool actual = object.getValue() == 1001.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d8800000000000034, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.88 );
	bool expected = true;
	bool actual = object.getValue() == 1001.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d9000000000000035, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.9 );
	bool expected = true;
	bool actual = object.getValue() == 1001.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d9200000000000035, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.92 );
	bool expected = true;
	bool actual = object.getValue() == 1001.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d9400000000000035, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.94 );
	bool expected = true;
	bool actual = object.getValue() == 1001.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d9600000000000035, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.96 );
	bool expected = true;
	bool actual = object.getValue() == 1001.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d9800000000000035, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.98 );
	bool expected = true;
	bool actual = object.getValue() == 1001.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d20000000000000001, MxNumberDecimal )
{
	MxNumberDecimal object( 998.2 );
	bool expected = true;
	bool actual = object.getValue() == 998.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d40000000000000002, MxNumberDecimal )
{
	MxNumberDecimal object( 998.4 );
	bool expected = true;
	bool actual = object.getValue() == 998.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d60000000000000003, MxNumberDecimal )
{
	MxNumberDecimal object( 998.6 );
	bool expected = true;
	bool actual = object.getValue() == 998.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue998d80000000000000004, MxNumberDecimal )
{
	MxNumberDecimal object( 998.8 );
	bool expected = true;
	bool actual = object.getValue() == 998.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d00000000000000006, MxNumberDecimal )
{
	MxNumberDecimal object( 999 );
	bool expected = true;
	bool actual = object.getValue() == 999;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d20000000000000007, MxNumberDecimal )
{
	MxNumberDecimal object( 999.2 );
	bool expected = true;
	bool actual = object.getValue() == 999.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d40000000000000008, MxNumberDecimal )
{
	MxNumberDecimal object( 999.4 );
	bool expected = true;
	bool actual = object.getValue() == 999.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d60000000000000009, MxNumberDecimal )
{
	MxNumberDecimal object( 999.6 );
	bool expected = true;
	bool actual = object.getValue() == 999.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue999d8000000000000001, MxNumberDecimal )
{
	MxNumberDecimal object( 999.8 );
	bool expected = true;
	bool actual = object.getValue() == 999.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d0000000000000001, MxNumberDecimal )
{
	MxNumberDecimal object( 1000 );
	bool expected = true;
	bool actual = object.getValue() == 1000;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d2000000000000001, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.2 );
	bool expected = true;
	bool actual = object.getValue() == 1000.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d4000000000000001, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.4 );
	bool expected = true;
	bool actual = object.getValue() == 1000.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d6000000000000001, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.6 );
	bool expected = true;
	bool actual = object.getValue() == 1000.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1000d8000000000000002, MxNumberDecimal )
{
	MxNumberDecimal object( 1000.8 );
	bool expected = true;
	bool actual = object.getValue() == 1000.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d0000000000000002, MxNumberDecimal )
{
	MxNumberDecimal object( 1001 );
	bool expected = true;
	bool actual = object.getValue() == 1001;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d2000000000000002, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.2 );
	bool expected = true;
	bool actual = object.getValue() == 1001.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d4000000000000002, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.4 );
	bool expected = true;
	bool actual = object.getValue() == 1001.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d6000000000000002, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.6 );
	bool expected = true;
	bool actual = object.getValue() == 1001.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1001d8000000000000002, MxNumberDecimal )
{
	MxNumberDecimal object( 1001.8 );
	bool expected = true;
	bool actual = object.getValue() == 1001.8;
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor Tests --------------------------------------------------- */


/* Assignment Test ---------------------------------------------------------- */

TEST( assignment, MxNumberDecimal )
{
	MxNumberDecimal original( 1000 );
	MxNumberDecimal other( 1000 );
	other = original;
	int expected = 1000;
	int actual = other.getValue();
	CHECK_EQUAL( expected, actual )
	other.setValue( 1000 );
	expected = 1000;
	actual = original.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: Assignment Test ----------------------------------------------------- */


/* Upper and Lower Bound Tests ---------------------------------------------- */

TEST( isLowerRangeBound, MxNumberDecimal )
{
	MxNumberDecimal object;
	bool expected = false;
	bool actual = object.isLowerRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeBound, MxNumberDecimal )
{
	MxNumberDecimal object;
	bool expected = false;
	bool actual = object.isUpperRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isLowerRangeLimitInclusive, MxNumberDecimal )
{
	MxNumberDecimal object;
	bool expected = true;
	bool actual = object.isLowerRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeLimitInclusive, MxNumberDecimal )
{
	MxNumberDecimal object;
	bool expected = true;
	bool actual = object.isUpperRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}

/* End: Upper and Lower Bound Tests ----------------------------------------- */


/* Documentation Tests ------------------------------------------------------ */

TEST( getXmlTypeName, MxNumberDecimal )
{
	MxNumberDecimal object;
	std::string expected = "xs:decimal";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName, MxNumberDecimal )
{
	MxNumberDecimal object;
	std::string expected = "MxNumberDecimal";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxNumberDecimal )
{
	MxNumberDecimal object;
	std::string expected = "There is no corresponding MusicXML type for MxNumberDecimal. This is more akin to generic xs:decimal as it is a float with no restrictions on value.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Documentation Tests ------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( getValue_setValue_1001_999, MxNumberDecimal )
{
	MxNumberDecimal object( 1001 );
	int expected = 1001;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 999 );
	expected = 999;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_1002_998, MxNumberDecimal )
{
	MxNumberDecimal object( 1002 );
	int expected = 1002;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 998 );
	expected = 998;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_1003_997, MxNumberDecimal )
{
	MxNumberDecimal object( 1003 );
	int expected = 1003;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 997 );
	expected = 997;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* stream Tests ------------------------------------------------------------- */

TEST( stream_1001_999, MxNumberDecimal )
{
	MxNumberDecimal object( 1001 );
	std::stringstream ss1;
	ss1.setf( std::ios::fixed );
	object.stream( ss1 );
	std::string expected = "1001";
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
TEST( stream_1002_998, MxNumberDecimal )
{
	MxNumberDecimal object( 1002 );
	std::stringstream ss1;
	ss1.setf( std::ios::fixed );
	object.stream( ss1 );
	std::string expected = "1002";
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
TEST( stream_1003_997, MxNumberDecimal )
{
	MxNumberDecimal object( 1003 );
	std::stringstream ss1;
	ss1.setf( std::ios::fixed );
	object.stream( ss1 );
	std::string expected = "1003";
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

TEST( toString_1000, MxNumberDecimal )
{
	MxNumberDecimal object( 1000 );
	std::string expected = "1000";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_1001, MxNumberDecimal )
{
	MxNumberDecimal object( 1001 );
	std::string expected = "1001";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_998, MxNumberDecimal )
{
	MxNumberDecimal object( 998 );
	std::string expected = "998";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_1003, MxNumberDecimal )
{
	MxNumberDecimal object( 1003 );
	std::string expected = "1003";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}

/* End: toString() Tests ---------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( fromString_999_1001, MxNumberDecimal )
{
	MxNumberDecimal object( 999 );
	std::stringstream ss1;
	std::string value1 = "1001";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 1001;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 999 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 1001;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_1002_998, MxNumberDecimal )
{
	MxNumberDecimal object( 1002 );
	std::stringstream ss1;
	std::string value1 = "998";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 998;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 1002 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 998;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_997_1003, MxNumberDecimal )
{
	MxNumberDecimal object( 997 );
	std::stringstream ss1;
	std::string value1 = "1003";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 1003;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 997 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 1003;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* Comparison Operators ----------------------------------------------------- */

TEST( operatorEqEq_1000_1001_false, MxNumberDecimal )
{
	MxNumberDecimal object1( 1000 );
	MxNumberDecimal object2( 1001 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_1001_1001_true, MxNumberDecimal )
{
	MxNumberDecimal object1( 1001 );
	MxNumberDecimal object2( 1001 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_1002_1001_false, MxNumberDecimal )
{
	MxNumberDecimal object1( 1002 );
	MxNumberDecimal object2( 1001 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_999_1000_false, MxNumberDecimal )
{
	MxNumberDecimal object1( 999 );
	MxNumberDecimal object2( 1000 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_999_999_true, MxNumberDecimal )
{
	MxNumberDecimal object1( 999 );
	MxNumberDecimal object2( 999 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_999_998_false, MxNumberDecimal )
{
	MxNumberDecimal object1( 999 );
	MxNumberDecimal object2( 998 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_1000_1001_true, MxNumberDecimal )
{
	MxNumberDecimal object1( 1000 );
	MxNumberDecimal object2( 1001 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_1001_1001_false, MxNumberDecimal )
{
	MxNumberDecimal object1( 1001 );
	MxNumberDecimal object2( 1001 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_1002_1001_true, MxNumberDecimal )
{
	MxNumberDecimal object1( 1002 );
	MxNumberDecimal object2( 1001 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_999_1000_true, MxNumberDecimal )
{
	MxNumberDecimal object1( 999 );
	MxNumberDecimal object2( 1000 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_999_999_false, MxNumberDecimal )
{
	MxNumberDecimal object1( 999 );
	MxNumberDecimal object2( 999 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_999_998_true, MxNumberDecimal )
{
	MxNumberDecimal object1( 999 );
	MxNumberDecimal object2( 998 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_1000_1001_false, MxNumberDecimal )
{
	MxNumberDecimal object1( 1000 );
	MxNumberDecimal object2( 1001 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_1001_1001_false, MxNumberDecimal )
{
	MxNumberDecimal object1( 1001 );
	MxNumberDecimal object2( 1001 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_1002_1001_true, MxNumberDecimal )
{
	MxNumberDecimal object1( 1002 );
	MxNumberDecimal object2( 1001 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_999_1000_false, MxNumberDecimal )
{
	MxNumberDecimal object1( 999 );
	MxNumberDecimal object2( 1000 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_999_999_false, MxNumberDecimal )
{
	MxNumberDecimal object1( 999 );
	MxNumberDecimal object2( 999 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_999_998_true, MxNumberDecimal )
{
	MxNumberDecimal object1( 999 );
	MxNumberDecimal object2( 998 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_1000_1001_false, MxNumberDecimal )
{
	MxNumberDecimal object1( 1000 );
	MxNumberDecimal object2( 1001 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_1001_1001_true, MxNumberDecimal )
{
	MxNumberDecimal object1( 1001 );
	MxNumberDecimal object2( 1001 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_1002_1001_true, MxNumberDecimal )
{
	MxNumberDecimal object1( 1002 );
	MxNumberDecimal object2( 1001 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_999_1000_false, MxNumberDecimal )
{
	MxNumberDecimal object1( 999 );
	MxNumberDecimal object2( 1000 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_999_999_true, MxNumberDecimal )
{
	MxNumberDecimal object1( 999 );
	MxNumberDecimal object2( 999 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_999_998_true, MxNumberDecimal )
{
	MxNumberDecimal object1( 999 );
	MxNumberDecimal object2( 998 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_1000_1001_true, MxNumberDecimal )
{
	MxNumberDecimal object1( 1000 );
	MxNumberDecimal object2( 1001 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_1001_1001_false, MxNumberDecimal )
{
	MxNumberDecimal object1( 1001 );
	MxNumberDecimal object2( 1001 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_1002_1001_false, MxNumberDecimal )
{
	MxNumberDecimal object1( 1002 );
	MxNumberDecimal object2( 1001 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_999_1000_true, MxNumberDecimal )
{
	MxNumberDecimal object1( 999 );
	MxNumberDecimal object2( 1000 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_999_999_false, MxNumberDecimal )
{
	MxNumberDecimal object1( 999 );
	MxNumberDecimal object2( 999 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_999_998_false, MxNumberDecimal )
{
	MxNumberDecimal object1( 999 );
	MxNumberDecimal object2( 998 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_1000_1001_true, MxNumberDecimal )
{
	MxNumberDecimal object1( 1000 );
	MxNumberDecimal object2( 1001 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_1001_1001_true, MxNumberDecimal )
{
	MxNumberDecimal object1( 1001 );
	MxNumberDecimal object2( 1001 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_1002_1001_false, MxNumberDecimal )
{
	MxNumberDecimal object1( 1002 );
	MxNumberDecimal object2( 1001 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_999_1000_true, MxNumberDecimal )
{
	MxNumberDecimal object1( 999 );
	MxNumberDecimal object2( 1000 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_999_999_true, MxNumberDecimal )
{
	MxNumberDecimal object1( 999 );
	MxNumberDecimal object2( 999 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_999_998_false, MxNumberDecimal )
{
	MxNumberDecimal object1( 999 );
	MxNumberDecimal object2( 998 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}

/* End: Comparison Operators ------------------------------------------------ */


