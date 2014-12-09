/** *******************************************************
  * Class under test: MxNumberRotationDegrees
  * *******************************************************
  * **/
#include <iostream>
#include <string>
#include <sstream>
#include "TestHarness.h"
#include "MxNumberRotationDegrees.h"

using namespace std;
using namespace lexicon;

/* Constructor Tests -------------------------------------------------------- */

TEST( ctorDefault, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object;
	CHECK( true )
}
TEST( ctorValueN182, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -182 );
	bool expected = false;
	bool actual = object.getValue() == -182;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d98, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.98 );
	bool expected = false;
	bool actual = object.getValue() == -181.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d95999999999999999, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.96 );
	bool expected = false;
	bool actual = object.getValue() == -181.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d93999999999999999, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.94 );
	bool expected = false;
	bool actual = object.getValue() == -181.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d91999999999999998, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.92 );
	bool expected = false;
	bool actual = object.getValue() == -181.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d89999999999999998, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.9 );
	bool expected = false;
	bool actual = object.getValue() == -181.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d87999999999999998, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.88 );
	bool expected = false;
	bool actual = object.getValue() == -181.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d85999999999999997, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.86 );
	bool expected = false;
	bool actual = object.getValue() == -181.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d83999999999999997, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.84 );
	bool expected = false;
	bool actual = object.getValue() == -181.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d81999999999999997, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.82 );
	bool expected = false;
	bool actual = object.getValue() == -181.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d79999999999999996, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.8 );
	bool expected = false;
	bool actual = object.getValue() == -181.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d77999999999999996, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.78 );
	bool expected = false;
	bool actual = object.getValue() == -181.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d75999999999999995, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.76 );
	bool expected = false;
	bool actual = object.getValue() == -181.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d73999999999999995, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.74 );
	bool expected = false;
	bool actual = object.getValue() == -181.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d71999999999999995, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.72 );
	bool expected = false;
	bool actual = object.getValue() == -181.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d69999999999999994, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.7 );
	bool expected = false;
	bool actual = object.getValue() == -181.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d67999999999999994, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.68 );
	bool expected = false;
	bool actual = object.getValue() == -181.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d65999999999999993, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.66 );
	bool expected = false;
	bool actual = object.getValue() == -181.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d63999999999999993, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.64 );
	bool expected = false;
	bool actual = object.getValue() == -181.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d61999999999999993, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.62 );
	bool expected = false;
	bool actual = object.getValue() == -181.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d59999999999999992, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.6 );
	bool expected = false;
	bool actual = object.getValue() == -181.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d57999999999999992, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.58 );
	bool expected = false;
	bool actual = object.getValue() == -181.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d55999999999999991, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.56 );
	bool expected = false;
	bool actual = object.getValue() == -181.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d53999999999999991, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.54 );
	bool expected = false;
	bool actual = object.getValue() == -181.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d51999999999999991, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.52 );
	bool expected = false;
	bool actual = object.getValue() == -181.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d4999999999999999, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.5 );
	bool expected = false;
	bool actual = object.getValue() == -181.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d4799999999999999, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.48 );
	bool expected = false;
	bool actual = object.getValue() == -181.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d4599999999999999, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.46 );
	bool expected = false;
	bool actual = object.getValue() == -181.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d43999999999999989, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.44 );
	bool expected = false;
	bool actual = object.getValue() == -181.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d41999999999999989, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.42 );
	bool expected = false;
	bool actual = object.getValue() == -181.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d39999999999999988, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.4 );
	bool expected = false;
	bool actual = object.getValue() == -181.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d37999999999999988, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.38 );
	bool expected = false;
	bool actual = object.getValue() == -181.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d35999999999999988, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.36 );
	bool expected = false;
	bool actual = object.getValue() == -181.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d33999999999999987, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.34 );
	bool expected = false;
	bool actual = object.getValue() == -181.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d31999999999999987, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.32 );
	bool expected = false;
	bool actual = object.getValue() == -181.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d29999999999999986, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.3 );
	bool expected = false;
	bool actual = object.getValue() == -181.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d27999999999999986, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.28 );
	bool expected = false;
	bool actual = object.getValue() == -181.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d25999999999999986, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.26 );
	bool expected = false;
	bool actual = object.getValue() == -181.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d23999999999999985, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.24 );
	bool expected = false;
	bool actual = object.getValue() == -181.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d21999999999999985, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.22 );
	bool expected = false;
	bool actual = object.getValue() == -181.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d19999999999999984, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.2 );
	bool expected = false;
	bool actual = object.getValue() == -181.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d17999999999999984, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.18 );
	bool expected = false;
	bool actual = object.getValue() == -181.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d15999999999999984, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.16 );
	bool expected = false;
	bool actual = object.getValue() == -181.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d13999999999999983, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.14 );
	bool expected = false;
	bool actual = object.getValue() == -181.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d11999999999999983, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.12 );
	bool expected = false;
	bool actual = object.getValue() == -181.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d09999999999999983, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.1 );
	bool expected = false;
	bool actual = object.getValue() == -181.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d07999999999999982, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.08 );
	bool expected = false;
	bool actual = object.getValue() == -181.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d05999999999999982, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.06 );
	bool expected = false;
	bool actual = object.getValue() == -181.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d03999999999999981, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.04 );
	bool expected = false;
	bool actual = object.getValue() == -181.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN181d01999999999999981, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181.02 );
	bool expected = false;
	bool actual = object.getValue() == -181.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d99999999999999981, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -181 );
	bool expected = false;
	bool actual = object.getValue() == -181;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d9799999999999998, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.98 );
	bool expected = false;
	bool actual = object.getValue() == -180.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d9599999999999998, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.96 );
	bool expected = false;
	bool actual = object.getValue() == -180.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d93999999999999979, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.94 );
	bool expected = false;
	bool actual = object.getValue() == -180.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d91999999999999979, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.92 );
	bool expected = false;
	bool actual = object.getValue() == -180.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d89999999999999979, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.9 );
	bool expected = false;
	bool actual = object.getValue() == -180.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d87999999999999978, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.88 );
	bool expected = false;
	bool actual = object.getValue() == -180.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d85999999999999978, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.86 );
	bool expected = false;
	bool actual = object.getValue() == -180.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d83999999999999977, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.84 );
	bool expected = false;
	bool actual = object.getValue() == -180.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d81999999999999977, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.82 );
	bool expected = false;
	bool actual = object.getValue() == -180.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d79999999999999977, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.8 );
	bool expected = false;
	bool actual = object.getValue() == -180.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d77999999999999976, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.78 );
	bool expected = false;
	bool actual = object.getValue() == -180.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d75999999999999976, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.76 );
	bool expected = false;
	bool actual = object.getValue() == -180.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d73999999999999976, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.74 );
	bool expected = false;
	bool actual = object.getValue() == -180.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d71999999999999975, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.72 );
	bool expected = false;
	bool actual = object.getValue() == -180.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d69999999999999975, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.7 );
	bool expected = false;
	bool actual = object.getValue() == -180.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d67999999999999974, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.68 );
	bool expected = false;
	bool actual = object.getValue() == -180.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d65999999999999974, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.66 );
	bool expected = false;
	bool actual = object.getValue() == -180.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d63999999999999974, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.64 );
	bool expected = false;
	bool actual = object.getValue() == -180.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d61999999999999973, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.62 );
	bool expected = false;
	bool actual = object.getValue() == -180.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d59999999999999973, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.6 );
	bool expected = false;
	bool actual = object.getValue() == -180.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d57999999999999972, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.58 );
	bool expected = false;
	bool actual = object.getValue() == -180.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d55999999999999972, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.56 );
	bool expected = false;
	bool actual = object.getValue() == -180.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d53999999999999972, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.54 );
	bool expected = false;
	bool actual = object.getValue() == -180.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d51999999999999971, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.52 );
	bool expected = false;
	bool actual = object.getValue() == -180.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d49999999999999971, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.5 );
	bool expected = false;
	bool actual = object.getValue() == -180.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d4799999999999997, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.48 );
	bool expected = false;
	bool actual = object.getValue() == -180.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d4599999999999997, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.46 );
	bool expected = false;
	bool actual = object.getValue() == -180.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d4399999999999997, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.44 );
	bool expected = false;
	bool actual = object.getValue() == -180.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d41999999999999969, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.42 );
	bool expected = false;
	bool actual = object.getValue() == -180.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d39999999999999969, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.4 );
	bool expected = false;
	bool actual = object.getValue() == -180.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d37999999999999969, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.38 );
	bool expected = false;
	bool actual = object.getValue() == -180.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d35999999999999968, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.36 );
	bool expected = false;
	bool actual = object.getValue() == -180.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d33999999999999968, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.34 );
	bool expected = false;
	bool actual = object.getValue() == -180.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d31999999999999967, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.32 );
	bool expected = false;
	bool actual = object.getValue() == -180.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d29999999999999967, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.3 );
	bool expected = false;
	bool actual = object.getValue() == -180.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d27999999999999967, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.28 );
	bool expected = false;
	bool actual = object.getValue() == -180.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d25999999999999966, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.26 );
	bool expected = false;
	bool actual = object.getValue() == -180.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d23999999999999966, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.24 );
	bool expected = false;
	bool actual = object.getValue() == -180.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d21999999999999965, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.22 );
	bool expected = false;
	bool actual = object.getValue() == -180.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d19999999999999965, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.2 );
	bool expected = false;
	bool actual = object.getValue() == -180.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d17999999999999965, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.18 );
	bool expected = false;
	bool actual = object.getValue() == -180.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d15999999999999964, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.16 );
	bool expected = false;
	bool actual = object.getValue() == -180.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d13999999999999964, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.14 );
	bool expected = false;
	bool actual = object.getValue() == -180.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d11999999999999963, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.12 );
	bool expected = false;
	bool actual = object.getValue() == -180.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d09999999999999963, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.1 );
	bool expected = false;
	bool actual = object.getValue() == -180.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d07999999999999963, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.08 );
	bool expected = false;
	bool actual = object.getValue() == -180.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d05999999999999962, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.06 );
	bool expected = false;
	bool actual = object.getValue() == -180.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d03999999999999962, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.04 );
	bool expected = false;
	bool actual = object.getValue() == -180.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN180d01999999999999962, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180.02 );
	bool expected = false;
	bool actual = object.getValue() == -180.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d99999999999999961, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180 );
	bool expected = true;
	bool actual = object.getValue() == -180;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d97999999999999961, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.98 );
	bool expected = true;
	bool actual = object.getValue() == -179.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d9599999999999996, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.96 );
	bool expected = true;
	bool actual = object.getValue() == -179.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d9399999999999996, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.94 );
	bool expected = true;
	bool actual = object.getValue() == -179.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d9199999999999996, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.92 );
	bool expected = true;
	bool actual = object.getValue() == -179.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d89999999999999959, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.9 );
	bool expected = true;
	bool actual = object.getValue() == -179.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d87999999999999959, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.88 );
	bool expected = true;
	bool actual = object.getValue() == -179.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d85999999999999958, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.86 );
	bool expected = true;
	bool actual = object.getValue() == -179.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d83999999999999958, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.84 );
	bool expected = true;
	bool actual = object.getValue() == -179.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d81999999999999958, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.82 );
	bool expected = true;
	bool actual = object.getValue() == -179.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d79999999999999957, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.8 );
	bool expected = true;
	bool actual = object.getValue() == -179.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d77999999999999957, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.78 );
	bool expected = true;
	bool actual = object.getValue() == -179.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d75999999999999956, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.76 );
	bool expected = true;
	bool actual = object.getValue() == -179.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d73999999999999956, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.74 );
	bool expected = true;
	bool actual = object.getValue() == -179.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d71999999999999956, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.72 );
	bool expected = true;
	bool actual = object.getValue() == -179.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d69999999999999955, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.7 );
	bool expected = true;
	bool actual = object.getValue() == -179.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d67999999999999955, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.68 );
	bool expected = true;
	bool actual = object.getValue() == -179.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d65999999999999955, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.66 );
	bool expected = true;
	bool actual = object.getValue() == -179.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d63999999999999954, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.64 );
	bool expected = true;
	bool actual = object.getValue() == -179.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d61999999999999954, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.62 );
	bool expected = true;
	bool actual = object.getValue() == -179.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d59999999999999953, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.6 );
	bool expected = true;
	bool actual = object.getValue() == -179.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d57999999999999953, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.58 );
	bool expected = true;
	bool actual = object.getValue() == -179.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d55999999999999953, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.56 );
	bool expected = true;
	bool actual = object.getValue() == -179.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d53999999999999952, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.54 );
	bool expected = true;
	bool actual = object.getValue() == -179.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d51999999999999952, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.52 );
	bool expected = true;
	bool actual = object.getValue() == -179.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d49999999999999951, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.5 );
	bool expected = true;
	bool actual = object.getValue() == -179.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d47999999999999951, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.48 );
	bool expected = true;
	bool actual = object.getValue() == -179.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d45999999999999951, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.46 );
	bool expected = true;
	bool actual = object.getValue() == -179.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d4399999999999995, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.44 );
	bool expected = true;
	bool actual = object.getValue() == -179.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d4199999999999995, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.42 );
	bool expected = true;
	bool actual = object.getValue() == -179.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d39999999999999949, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.4 );
	bool expected = true;
	bool actual = object.getValue() == -179.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d37999999999999949, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.38 );
	bool expected = true;
	bool actual = object.getValue() == -179.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d35999999999999949, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.36 );
	bool expected = true;
	bool actual = object.getValue() == -179.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d33999999999999948, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.34 );
	bool expected = true;
	bool actual = object.getValue() == -179.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d31999999999999948, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.32 );
	bool expected = true;
	bool actual = object.getValue() == -179.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d29999999999999948, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.3 );
	bool expected = true;
	bool actual = object.getValue() == -179.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d27999999999999947, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.28 );
	bool expected = true;
	bool actual = object.getValue() == -179.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d25999999999999947, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.26 );
	bool expected = true;
	bool actual = object.getValue() == -179.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d23999999999999946, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.24 );
	bool expected = true;
	bool actual = object.getValue() == -179.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d21999999999999946, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.22 );
	bool expected = true;
	bool actual = object.getValue() == -179.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d19999999999999946, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.2 );
	bool expected = true;
	bool actual = object.getValue() == -179.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d17999999999999945, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.18 );
	bool expected = true;
	bool actual = object.getValue() == -179.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d15999999999999945, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.16 );
	bool expected = true;
	bool actual = object.getValue() == -179.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d13999999999999944, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.14 );
	bool expected = true;
	bool actual = object.getValue() == -179.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d11999999999999944, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.12 );
	bool expected = true;
	bool actual = object.getValue() == -179.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d09999999999999944, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.1 );
	bool expected = true;
	bool actual = object.getValue() == -179.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d07999999999999943, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.08 );
	bool expected = true;
	bool actual = object.getValue() == -179.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d05999999999999943, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.06 );
	bool expected = true;
	bool actual = object.getValue() == -179.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d03999999999999942, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.04 );
	bool expected = true;
	bool actual = object.getValue() == -179.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN179d01999999999999942, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179.02 );
	bool expected = true;
	bool actual = object.getValue() == -179.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d99999999999999942, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179 );
	bool expected = true;
	bool actual = object.getValue() == -179;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d97999999999999941, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.98 );
	bool expected = true;
	bool actual = object.getValue() == -178.98;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d95999999999999941, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.96 );
	bool expected = true;
	bool actual = object.getValue() == -178.96;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d93999999999999941, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.94 );
	bool expected = true;
	bool actual = object.getValue() == -178.94;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d9199999999999994, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.92 );
	bool expected = true;
	bool actual = object.getValue() == -178.92;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d8999999999999994, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.9 );
	bool expected = true;
	bool actual = object.getValue() == -178.9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d87999999999999939, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.88 );
	bool expected = true;
	bool actual = object.getValue() == -178.88;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d85999999999999939, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.86 );
	bool expected = true;
	bool actual = object.getValue() == -178.86;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d83999999999999939, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.84 );
	bool expected = true;
	bool actual = object.getValue() == -178.84;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d81999999999999938, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.82 );
	bool expected = true;
	bool actual = object.getValue() == -178.82;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d79999999999999938, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.8 );
	bool expected = true;
	bool actual = object.getValue() == -178.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d77999999999999937, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.78 );
	bool expected = true;
	bool actual = object.getValue() == -178.78;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d75999999999999937, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.76 );
	bool expected = true;
	bool actual = object.getValue() == -178.76;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d73999999999999937, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.74 );
	bool expected = true;
	bool actual = object.getValue() == -178.74;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d71999999999999936, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.72 );
	bool expected = true;
	bool actual = object.getValue() == -178.72;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d69999999999999936, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.7 );
	bool expected = true;
	bool actual = object.getValue() == -178.7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d67999999999999935, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.68 );
	bool expected = true;
	bool actual = object.getValue() == -178.68;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d65999999999999935, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.66 );
	bool expected = true;
	bool actual = object.getValue() == -178.66;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d63999999999999935, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.64 );
	bool expected = true;
	bool actual = object.getValue() == -178.64;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d61999999999999934, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.62 );
	bool expected = true;
	bool actual = object.getValue() == -178.62;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d59999999999999934, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.6 );
	bool expected = true;
	bool actual = object.getValue() == -178.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d57999999999999934, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.58 );
	bool expected = true;
	bool actual = object.getValue() == -178.58;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d55999999999999933, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.56 );
	bool expected = true;
	bool actual = object.getValue() == -178.56;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d53999999999999933, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.54 );
	bool expected = true;
	bool actual = object.getValue() == -178.54;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d51999999999999932, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.52 );
	bool expected = true;
	bool actual = object.getValue() == -178.52;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d49999999999999932, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.5 );
	bool expected = true;
	bool actual = object.getValue() == -178.5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d47999999999999932, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.48 );
	bool expected = true;
	bool actual = object.getValue() == -178.48;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d45999999999999931, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.46 );
	bool expected = true;
	bool actual = object.getValue() == -178.46;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d43999999999999931, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.44 );
	bool expected = true;
	bool actual = object.getValue() == -178.44;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d4199999999999993, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.42 );
	bool expected = true;
	bool actual = object.getValue() == -178.42;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d3999999999999993, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.4 );
	bool expected = true;
	bool actual = object.getValue() == -178.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d3799999999999993, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.38 );
	bool expected = true;
	bool actual = object.getValue() == -178.38;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d35999999999999929, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.36 );
	bool expected = true;
	bool actual = object.getValue() == -178.36;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d33999999999999929, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.34 );
	bool expected = true;
	bool actual = object.getValue() == -178.34;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d31999999999999929, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.32 );
	bool expected = true;
	bool actual = object.getValue() == -178.32;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d29999999999999928, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.3 );
	bool expected = true;
	bool actual = object.getValue() == -178.3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d27999999999999928, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.28 );
	bool expected = true;
	bool actual = object.getValue() == -178.28;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d25999999999999927, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.26 );
	bool expected = true;
	bool actual = object.getValue() == -178.26;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d23999999999999927, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.24 );
	bool expected = true;
	bool actual = object.getValue() == -178.24;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d21999999999999927, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.22 );
	bool expected = true;
	bool actual = object.getValue() == -178.22;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d19999999999999926, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.2 );
	bool expected = true;
	bool actual = object.getValue() == -178.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d17999999999999926, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.18 );
	bool expected = true;
	bool actual = object.getValue() == -178.18;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d15999999999999925, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.16 );
	bool expected = true;
	bool actual = object.getValue() == -178.16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d13999999999999925, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.14 );
	bool expected = true;
	bool actual = object.getValue() == -178.14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d11999999999999925, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.12 );
	bool expected = true;
	bool actual = object.getValue() == -178.12;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d09999999999999924, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.1 );
	bool expected = true;
	bool actual = object.getValue() == -178.1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d07999999999999924, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.08 );
	bool expected = true;
	bool actual = object.getValue() == -178.08;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d05999999999999923, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.06 );
	bool expected = true;
	bool actual = object.getValue() == -178.06;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d03999999999999923, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.04 );
	bool expected = true;
	bool actual = object.getValue() == -178.04;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueN178d01999999999999923, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178.02 );
	bool expected = true;
	bool actual = object.getValue() == -178.02;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue178, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 178 );
	bool expected = true;
	bool actual = object.getValue() == 178;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue178d2, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 178.2 );
	bool expected = true;
	bool actual = object.getValue() == 178.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue178d39999999999999999, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 178.4 );
	bool expected = true;
	bool actual = object.getValue() == 178.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue178d59999999999999999, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 178.6 );
	bool expected = true;
	bool actual = object.getValue() == 178.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue178d79999999999999999, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 178.8 );
	bool expected = true;
	bool actual = object.getValue() == 178.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue178d99999999999999999, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 179 );
	bool expected = true;
	bool actual = object.getValue() == 179;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue179d19999999999999998, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 179.2 );
	bool expected = true;
	bool actual = object.getValue() == 179.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue179d39999999999999998, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 179.4 );
	bool expected = true;
	bool actual = object.getValue() == 179.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue179d59999999999999998, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 179.6 );
	bool expected = true;
	bool actual = object.getValue() == 179.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue179d79999999999999998, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 179.8 );
	bool expected = true;
	bool actual = object.getValue() == 179.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue179d99999999999999997, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 180 );
	bool expected = true;
	bool actual = object.getValue() == 180;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue180d19999999999999997, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 180.2 );
	bool expected = false;
	bool actual = object.getValue() == 180.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue180d39999999999999997, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 180.4 );
	bool expected = false;
	bool actual = object.getValue() == 180.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue180d59999999999999996, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 180.6 );
	bool expected = false;
	bool actual = object.getValue() == 180.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue180d79999999999999996, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 180.8 );
	bool expected = false;
	bool actual = object.getValue() == 180.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue180d99999999999999996, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 181 );
	bool expected = false;
	bool actual = object.getValue() == 181;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue181d19999999999999996, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 181.2 );
	bool expected = false;
	bool actual = object.getValue() == 181.2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue181d39999999999999995, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 181.4 );
	bool expected = false;
	bool actual = object.getValue() == 181.4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue181d59999999999999995, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 181.6 );
	bool expected = false;
	bool actual = object.getValue() == 181.6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue181d79999999999999995, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 181.8 );
	bool expected = false;
	bool actual = object.getValue() == 181.8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue181d99999999999999994, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 182 );
	bool expected = false;
	bool actual = object.getValue() == 182;
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor Tests --------------------------------------------------- */


/* Assignment Test ---------------------------------------------------------- */

TEST( assignment, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees original( -180 );
	MxNumberRotationDegrees other( 180 );
	other = original;
	int expected = -180;
	int actual = other.getValue();
	CHECK_EQUAL( expected, actual )
	other.setValue( 180 );
	expected = -180;
	actual = original.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: Assignment Test ----------------------------------------------------- */


/* Upper and Lower Bound Tests ---------------------------------------------- */

TEST( isLowerRangeBound, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object;
	bool expected = true;
	bool actual = object.isLowerRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeBound, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object;
	bool expected = true;
	bool actual = object.isUpperRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isLowerRangeLimitInclusive, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object;
	bool expected = true;
	bool actual = object.isLowerRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeLimitInclusive, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object;
	bool expected = true;
	bool actual = object.isUpperRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( getLowerBound, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object;
	int expected = -180;
	int actual = object.getLowerBound();
	CHECK_EQUAL( expected, actual )
}
TEST( getUpperBound, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object;
	int expected = 180;
	int actual = object.getUpperBound();
	CHECK_EQUAL( expected, actual )
}

/* End: Upper and Lower Bound Tests ----------------------------------------- */


/* Documentation Tests ------------------------------------------------------ */

TEST( getXmlTypeName, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object;
	std::string expected = "rotation-degrees";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object;
	std::string expected = "MxNumberRotationDegrees";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object;
	std::string expected = "The rotation-degrees type specifies rotation, pan, and elevation values in degrees. Values range from -180 to 180.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Documentation Tests ------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( getValue_setValue_N180_180, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180 );
	int expected = -180;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 180 );
	expected = 180;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_N179_179, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179 );
	int expected = -179;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 179 );
	expected = 179;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_N178_178, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178 );
	int expected = -178;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 178 );
	expected = 178;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_N177_177, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -177 );
	int expected = -177;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 177 );
	expected = 177;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* stream Tests ------------------------------------------------------------- */

TEST( stream_N180_180, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180 );
	std::stringstream ss1;
	ss1.setf( std::ios::fixed );
	object.stream( ss1 );
	std::string expected = "-180";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 180 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "180180";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "180";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_N179_179, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179 );
	std::stringstream ss1;
	ss1.setf( std::ios::fixed );
	object.stream( ss1 );
	std::string expected = "-179";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 179 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "179179";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "179";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_N178_178, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178 );
	std::stringstream ss1;
	ss1.setf( std::ios::fixed );
	object.stream( ss1 );
	std::string expected = "-178";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 178 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "178178";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "178";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_N177_177, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -177 );
	std::stringstream ss1;
	ss1.setf( std::ios::fixed );
	object.stream( ss1 );
	std::string expected = "-177";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 177 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "177177";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "177";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}

/* End: stream Tests -------------------------------------------------------- */


/* toString() Tests --------------------------------------------------------- */

TEST( toString_180, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 180 );
	std::string expected = "180";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_N179, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -179 );
	std::string expected = "-179";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_178, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 178 );
	std::string expected = "178";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_N177, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -177 );
	std::string expected = "-177";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}

/* End: toString() Tests ---------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( fromString_N180_180, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -180 );
	std::stringstream ss1;
	std::string value1 = "180";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 180;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz -180 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 180;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_179_N179, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 179 );
	std::stringstream ss1;
	std::string value1 = "-179";
	bool parseSucceeded = object.fromString( value1 );
	int expected = -179;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 179 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = -179;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_N178_178, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( -178 );
	std::stringstream ss1;
	std::string value1 = "178";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 178;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz -178 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 178;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_177_N177, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object( 177 );
	std::stringstream ss1;
	std::string value1 = "-177";
	bool parseSucceeded = object.fromString( value1 );
	int expected = -177;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 177 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = -177;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* Comparison Operators ----------------------------------------------------- */

TEST( operatorEqEq_N180_N179_false, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( -180 );
	MxNumberRotationDegrees object2( -179 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_N179_N179_true, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( -179 );
	MxNumberRotationDegrees object2( -179 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_N178_N179_false, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( -178 );
	MxNumberRotationDegrees object2( -179 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_179_180_false, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( 179 );
	MxNumberRotationDegrees object2( 180 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_179_179_true, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( 179 );
	MxNumberRotationDegrees object2( 179 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_179_178_false, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( 179 );
	MxNumberRotationDegrees object2( 178 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_N180_N179_true, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( -180 );
	MxNumberRotationDegrees object2( -179 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_N179_N179_false, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( -179 );
	MxNumberRotationDegrees object2( -179 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_N178_N179_true, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( -178 );
	MxNumberRotationDegrees object2( -179 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_179_180_true, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( 179 );
	MxNumberRotationDegrees object2( 180 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_179_179_false, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( 179 );
	MxNumberRotationDegrees object2( 179 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_179_178_true, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( 179 );
	MxNumberRotationDegrees object2( 178 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_N180_N179_false, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( -180 );
	MxNumberRotationDegrees object2( -179 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_N179_N179_false, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( -179 );
	MxNumberRotationDegrees object2( -179 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_N178_N179_true, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( -178 );
	MxNumberRotationDegrees object2( -179 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_179_180_false, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( 179 );
	MxNumberRotationDegrees object2( 180 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_179_179_false, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( 179 );
	MxNumberRotationDegrees object2( 179 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_179_178_true, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( 179 );
	MxNumberRotationDegrees object2( 178 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_N180_N179_false, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( -180 );
	MxNumberRotationDegrees object2( -179 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_N179_N179_true, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( -179 );
	MxNumberRotationDegrees object2( -179 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_N178_N179_true, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( -178 );
	MxNumberRotationDegrees object2( -179 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_179_180_false, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( 179 );
	MxNumberRotationDegrees object2( 180 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_179_179_true, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( 179 );
	MxNumberRotationDegrees object2( 179 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_179_178_true, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( 179 );
	MxNumberRotationDegrees object2( 178 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_N180_N179_true, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( -180 );
	MxNumberRotationDegrees object2( -179 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_N179_N179_false, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( -179 );
	MxNumberRotationDegrees object2( -179 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_N178_N179_false, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( -178 );
	MxNumberRotationDegrees object2( -179 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_179_180_true, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( 179 );
	MxNumberRotationDegrees object2( 180 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_179_179_false, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( 179 );
	MxNumberRotationDegrees object2( 179 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_179_178_false, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( 179 );
	MxNumberRotationDegrees object2( 178 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_N180_N179_true, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( -180 );
	MxNumberRotationDegrees object2( -179 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_N179_N179_true, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( -179 );
	MxNumberRotationDegrees object2( -179 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_N178_N179_false, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( -178 );
	MxNumberRotationDegrees object2( -179 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_179_180_true, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( 179 );
	MxNumberRotationDegrees object2( 180 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_179_179_true, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( 179 );
	MxNumberRotationDegrees object2( 179 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_179_178_false, MxNumberRotationDegrees )
{
	MxNumberRotationDegrees object1( 179 );
	MxNumberRotationDegrees object2( 178 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}

/* End: Comparison Operators ------------------------------------------------ */


