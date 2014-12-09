/** *******************************************************
  * Class under test: MxNumberNumberLevel
  * *******************************************************
  * **/
#include <iostream>
#include <string>
#include <sstream>
#include "TestHarness.h"
#include "MxNumberNumberLevel.h"

using namespace std;
using namespace lexicon;

/* Constructor Tests -------------------------------------------------------- */

TEST( ctorDefault, MxNumberNumberLevel )
{
	MxNumberNumberLevel object;
	CHECK( true )
}
TEST( ctorValuen1, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( -1 );
	bool expected = false;
	bool actual = object.getValue() == -1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 0 );
	bool expected = false;
	bool actual = object.getValue() == 0;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 1 );
	bool expected = true;
	bool actual = object.getValue() == 1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 2 );
	bool expected = true;
	bool actual = object.getValue() == 2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 4 );
	bool expected = true;
	bool actual = object.getValue() == 4;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue5, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 5 );
	bool expected = true;
	bool actual = object.getValue() == 5;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 6 );
	bool expected = true;
	bool actual = object.getValue() == 6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue7, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 7 );
	bool expected = false;
	bool actual = object.getValue() == 7;
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor Tests --------------------------------------------------- */


/* Assignment Test ---------------------------------------------------------- */

TEST( assignment, MxNumberNumberLevel )
{
	MxNumberNumberLevel original( 1 );
	MxNumberNumberLevel other( 6 );
	other = original;
	int expected = 1;
	int actual = other.getValue();
	CHECK_EQUAL( expected, actual )
	other.setValue( 6 );
	expected = 1;
	actual = original.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: Assignment Test ----------------------------------------------------- */


/* Upper and Lower Bound Tests ---------------------------------------------- */

TEST( isLowerRangeBound, MxNumberNumberLevel )
{
	MxNumberNumberLevel object;
	bool expected = true;
	bool actual = object.isLowerRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeBound, MxNumberNumberLevel )
{
	MxNumberNumberLevel object;
	bool expected = true;
	bool actual = object.isUpperRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isLowerRangeLimitInclusive, MxNumberNumberLevel )
{
	MxNumberNumberLevel object;
	bool expected = true;
	bool actual = object.isLowerRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeLimitInclusive, MxNumberNumberLevel )
{
	MxNumberNumberLevel object;
	bool expected = true;
	bool actual = object.isUpperRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( getLowerBound, MxNumberNumberLevel )
{
	MxNumberNumberLevel object;
	int expected = 1;
	int actual = object.getLowerBound();
	CHECK_EQUAL( expected, actual )
}
TEST( getUpperBound, MxNumberNumberLevel )
{
	MxNumberNumberLevel object;
	int expected = 6;
	int actual = object.getUpperBound();
	CHECK_EQUAL( expected, actual )
}

/* End: Upper and Lower Bound Tests ----------------------------------------- */


/* Documentation Tests ------------------------------------------------------ */

TEST( getXmlTypeName, MxNumberNumberLevel )
{
	MxNumberNumberLevel object;
	std::string expected = "number-level";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName, MxNumberNumberLevel )
{
	MxNumberNumberLevel object;
	std::string expected = "MxNumberNumberLevel";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxNumberNumberLevel )
{
	MxNumberNumberLevel object;
	std::string expected = "Slurs, tuplets, and many other features can be concurrent and overlapping within a single musical part. The number-level type distinguishes up to six concurrent objects of the same type. A reading program should be prepared to handle cases where the number-levels stop in an arbitrary order. Different numbers are needed when the features overlap in MusicXML document order. When a number-level value is implied, the value is 1 by default.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Documentation Tests ------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( getValue_setValue_1_6, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 1 );
	int expected = 1;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 6 );
	expected = 6;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_2_5, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 2 );
	int expected = 2;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 5 );
	expected = 5;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_3_4, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 3 );
	int expected = 3;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 4 );
	expected = 4;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_4_3, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 4 );
	int expected = 4;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 3 );
	expected = 3;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* stream Tests ------------------------------------------------------------- */

TEST( stream_1_6, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 1 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "1";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 6 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "66";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "6";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_2_5, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 2 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "2";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 5 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "55";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "5";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_3_4, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 3 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "3";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 4 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "44";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "4";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_4_3, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 4 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "4";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 3 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "33";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "3";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}

/* End: stream Tests -------------------------------------------------------- */


/* toString() Tests --------------------------------------------------------- */

TEST( toString_6, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 6 );
	std::string expected = "6";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_2, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 2 );
	std::string expected = "2";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_4, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 4 );
	std::string expected = "4";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}

/* End: toString() Tests ---------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( fromString_1_6, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 1 );
	std::stringstream ss1;
	std::string value1 = "6";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 6;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 1 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 6;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_5_2, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 5 );
	std::stringstream ss1;
	std::string value1 = "2";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 2;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 5 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 2;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_3_4, MxNumberNumberLevel )
{
	MxNumberNumberLevel object( 3 );
	std::stringstream ss1;
	std::string value1 = "4";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 4;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 3 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 4;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* Comparison Operators ----------------------------------------------------- */

TEST( operatorEqEq_1_2_false, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 1 );
	MxNumberNumberLevel object2( 2 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_2_2_true, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 2 );
	MxNumberNumberLevel object2( 2 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_3_2_false, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 3 );
	MxNumberNumberLevel object2( 2 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_5_6_false, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 5 );
	MxNumberNumberLevel object2( 6 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_5_5_true, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 5 );
	MxNumberNumberLevel object2( 5 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_5_4_false, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 5 );
	MxNumberNumberLevel object2( 4 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_1_2_true, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 1 );
	MxNumberNumberLevel object2( 2 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_2_2_false, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 2 );
	MxNumberNumberLevel object2( 2 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_3_2_true, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 3 );
	MxNumberNumberLevel object2( 2 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_5_6_true, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 5 );
	MxNumberNumberLevel object2( 6 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_5_5_false, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 5 );
	MxNumberNumberLevel object2( 5 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_5_4_true, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 5 );
	MxNumberNumberLevel object2( 4 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_1_2_false, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 1 );
	MxNumberNumberLevel object2( 2 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_2_2_false, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 2 );
	MxNumberNumberLevel object2( 2 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_3_2_true, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 3 );
	MxNumberNumberLevel object2( 2 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_5_6_false, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 5 );
	MxNumberNumberLevel object2( 6 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_5_5_false, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 5 );
	MxNumberNumberLevel object2( 5 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_5_4_true, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 5 );
	MxNumberNumberLevel object2( 4 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_1_2_false, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 1 );
	MxNumberNumberLevel object2( 2 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_2_2_true, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 2 );
	MxNumberNumberLevel object2( 2 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_3_2_true, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 3 );
	MxNumberNumberLevel object2( 2 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_5_6_false, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 5 );
	MxNumberNumberLevel object2( 6 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_5_5_true, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 5 );
	MxNumberNumberLevel object2( 5 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_5_4_true, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 5 );
	MxNumberNumberLevel object2( 4 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_1_2_true, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 1 );
	MxNumberNumberLevel object2( 2 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_2_2_false, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 2 );
	MxNumberNumberLevel object2( 2 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_3_2_false, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 3 );
	MxNumberNumberLevel object2( 2 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_5_6_true, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 5 );
	MxNumberNumberLevel object2( 6 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_5_5_false, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 5 );
	MxNumberNumberLevel object2( 5 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_5_4_false, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 5 );
	MxNumberNumberLevel object2( 4 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_1_2_true, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 1 );
	MxNumberNumberLevel object2( 2 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_2_2_true, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 2 );
	MxNumberNumberLevel object2( 2 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_3_2_false, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 3 );
	MxNumberNumberLevel object2( 2 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_5_6_true, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 5 );
	MxNumberNumberLevel object2( 6 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_5_5_true, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 5 );
	MxNumberNumberLevel object2( 5 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_5_4_false, MxNumberNumberLevel )
{
	MxNumberNumberLevel object1( 5 );
	MxNumberNumberLevel object2( 4 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}

/* End: Comparison Operators ------------------------------------------------ */


