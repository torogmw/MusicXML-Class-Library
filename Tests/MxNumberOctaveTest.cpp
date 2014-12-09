/** *******************************************************
  * Class under test: MxNumberOctave
  * *******************************************************
  * **/
#include <iostream>
#include <string>
#include <sstream>
#include "TestHarness.h"
#include "MxNumberOctave.h"

using namespace std;
using namespace lexicon;

/* Constructor Tests -------------------------------------------------------- */

TEST( ctorDefault, MxNumberOctave )
{
	MxNumberOctave object;
	CHECK( true )
}
TEST( ctorValuen2, MxNumberOctave )
{
	MxNumberOctave object( -2 );
	bool expected = false;
	bool actual = object.getValue() == -2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValuen1, MxNumberOctave )
{
	MxNumberOctave object( -1 );
	bool expected = false;
	bool actual = object.getValue() == -1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0, MxNumberOctave )
{
	MxNumberOctave object( 0 );
	bool expected = true;
	bool actual = object.getValue() == 0;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1, MxNumberOctave )
{
	MxNumberOctave object( 1 );
	bool expected = true;
	bool actual = object.getValue() == 1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue7, MxNumberOctave )
{
	MxNumberOctave object( 7 );
	bool expected = true;
	bool actual = object.getValue() == 7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxNumberOctave )
{
	MxNumberOctave object( 8 );
	bool expected = true;
	bool actual = object.getValue() == 8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue9, MxNumberOctave )
{
	MxNumberOctave object( 9 );
	bool expected = true;
	bool actual = object.getValue() == 9;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue10, MxNumberOctave )
{
	MxNumberOctave object( 10 );
	bool expected = false;
	bool actual = object.getValue() == 10;
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor Tests --------------------------------------------------- */


/* Assignment Test ---------------------------------------------------------- */

TEST( assignment, MxNumberOctave )
{
	MxNumberOctave original( 0 );
	MxNumberOctave other( 9 );
	other = original;
	int expected = 0;
	int actual = other.getValue();
	CHECK_EQUAL( expected, actual )
	other.setValue( 9 );
	expected = 0;
	actual = original.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: Assignment Test ----------------------------------------------------- */


/* Upper and Lower Bound Tests ---------------------------------------------- */

TEST( isLowerRangeBound, MxNumberOctave )
{
	MxNumberOctave object;
	bool expected = true;
	bool actual = object.isLowerRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeBound, MxNumberOctave )
{
	MxNumberOctave object;
	bool expected = true;
	bool actual = object.isUpperRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isLowerRangeLimitInclusive, MxNumberOctave )
{
	MxNumberOctave object;
	bool expected = true;
	bool actual = object.isLowerRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeLimitInclusive, MxNumberOctave )
{
	MxNumberOctave object;
	bool expected = true;
	bool actual = object.isUpperRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( getLowerBound, MxNumberOctave )
{
	MxNumberOctave object;
	int expected = 0;
	int actual = object.getLowerBound();
	CHECK_EQUAL( expected, actual )
}
TEST( getUpperBound, MxNumberOctave )
{
	MxNumberOctave object;
	int expected = 9;
	int actual = object.getUpperBound();
	CHECK_EQUAL( expected, actual )
}

/* End: Upper and Lower Bound Tests ----------------------------------------- */


/* Documentation Tests ------------------------------------------------------ */

TEST( getXmlTypeName, MxNumberOctave )
{
	MxNumberOctave object;
	std::string expected = "octave";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName, MxNumberOctave )
{
	MxNumberOctave object;
	std::string expected = "MxNumberOctave";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxNumberOctave )
{
	MxNumberOctave object;
	std::string expected = "Octaves are represented by the numbers 0 to 9, where 4 indicates the octave started by middle C.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Documentation Tests ------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( getValue_setValue_0_9, MxNumberOctave )
{
	MxNumberOctave object( 0 );
	int expected = 0;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 9 );
	expected = 9;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_1_8, MxNumberOctave )
{
	MxNumberOctave object( 1 );
	int expected = 1;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 8 );
	expected = 8;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_2_7, MxNumberOctave )
{
	MxNumberOctave object( 2 );
	int expected = 2;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 7 );
	expected = 7;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_3_6, MxNumberOctave )
{
	MxNumberOctave object( 3 );
	int expected = 3;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 6 );
	expected = 6;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* stream Tests ------------------------------------------------------------- */

TEST( stream_0_9, MxNumberOctave )
{
	MxNumberOctave object( 0 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "0";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 9 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "99";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "9";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_1_8, MxNumberOctave )
{
	MxNumberOctave object( 1 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "1";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 8 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "88";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "8";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_2_7, MxNumberOctave )
{
	MxNumberOctave object( 2 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "2";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 7 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "77";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "7";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_3_6, MxNumberOctave )
{
	MxNumberOctave object( 3 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "3";
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

/* End: stream Tests -------------------------------------------------------- */


/* toString() Tests --------------------------------------------------------- */

TEST( toString_9, MxNumberOctave )
{
	MxNumberOctave object( 9 );
	std::string expected = "9";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_1, MxNumberOctave )
{
	MxNumberOctave object( 1 );
	std::string expected = "1";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_7, MxNumberOctave )
{
	MxNumberOctave object( 7 );
	std::string expected = "7";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_3, MxNumberOctave )
{
	MxNumberOctave object( 3 );
	std::string expected = "3";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}

/* End: toString() Tests ---------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( fromString_0_9, MxNumberOctave )
{
	MxNumberOctave object( 0 );
	std::stringstream ss1;
	std::string value1 = "9";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 9;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 0 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 9;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_8_1, MxNumberOctave )
{
	MxNumberOctave object( 8 );
	std::stringstream ss1;
	std::string value1 = "1";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 1;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 8 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 1;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_2_7, MxNumberOctave )
{
	MxNumberOctave object( 2 );
	std::stringstream ss1;
	std::string value1 = "7";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 7;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 2 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 7;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_6_3, MxNumberOctave )
{
	MxNumberOctave object( 6 );
	std::stringstream ss1;
	std::string value1 = "3";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 3;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 6 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 3;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* Comparison Operators ----------------------------------------------------- */

TEST( operatorEqEq_0_1_false, MxNumberOctave )
{
	MxNumberOctave object1( 0 );
	MxNumberOctave object2( 1 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_1_1_true, MxNumberOctave )
{
	MxNumberOctave object1( 1 );
	MxNumberOctave object2( 1 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_2_1_false, MxNumberOctave )
{
	MxNumberOctave object1( 2 );
	MxNumberOctave object2( 1 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_8_9_false, MxNumberOctave )
{
	MxNumberOctave object1( 8 );
	MxNumberOctave object2( 9 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_8_8_true, MxNumberOctave )
{
	MxNumberOctave object1( 8 );
	MxNumberOctave object2( 8 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_8_7_false, MxNumberOctave )
{
	MxNumberOctave object1( 8 );
	MxNumberOctave object2( 7 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_0_1_true, MxNumberOctave )
{
	MxNumberOctave object1( 0 );
	MxNumberOctave object2( 1 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_1_1_false, MxNumberOctave )
{
	MxNumberOctave object1( 1 );
	MxNumberOctave object2( 1 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_2_1_true, MxNumberOctave )
{
	MxNumberOctave object1( 2 );
	MxNumberOctave object2( 1 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_8_9_true, MxNumberOctave )
{
	MxNumberOctave object1( 8 );
	MxNumberOctave object2( 9 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_8_8_false, MxNumberOctave )
{
	MxNumberOctave object1( 8 );
	MxNumberOctave object2( 8 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_8_7_true, MxNumberOctave )
{
	MxNumberOctave object1( 8 );
	MxNumberOctave object2( 7 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_0_1_false, MxNumberOctave )
{
	MxNumberOctave object1( 0 );
	MxNumberOctave object2( 1 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_1_1_false, MxNumberOctave )
{
	MxNumberOctave object1( 1 );
	MxNumberOctave object2( 1 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_2_1_true, MxNumberOctave )
{
	MxNumberOctave object1( 2 );
	MxNumberOctave object2( 1 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_8_9_false, MxNumberOctave )
{
	MxNumberOctave object1( 8 );
	MxNumberOctave object2( 9 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_8_8_false, MxNumberOctave )
{
	MxNumberOctave object1( 8 );
	MxNumberOctave object2( 8 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_8_7_true, MxNumberOctave )
{
	MxNumberOctave object1( 8 );
	MxNumberOctave object2( 7 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_0_1_false, MxNumberOctave )
{
	MxNumberOctave object1( 0 );
	MxNumberOctave object2( 1 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_1_1_true, MxNumberOctave )
{
	MxNumberOctave object1( 1 );
	MxNumberOctave object2( 1 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_2_1_true, MxNumberOctave )
{
	MxNumberOctave object1( 2 );
	MxNumberOctave object2( 1 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_8_9_false, MxNumberOctave )
{
	MxNumberOctave object1( 8 );
	MxNumberOctave object2( 9 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_8_8_true, MxNumberOctave )
{
	MxNumberOctave object1( 8 );
	MxNumberOctave object2( 8 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_8_7_true, MxNumberOctave )
{
	MxNumberOctave object1( 8 );
	MxNumberOctave object2( 7 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_0_1_true, MxNumberOctave )
{
	MxNumberOctave object1( 0 );
	MxNumberOctave object2( 1 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_1_1_false, MxNumberOctave )
{
	MxNumberOctave object1( 1 );
	MxNumberOctave object2( 1 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_2_1_false, MxNumberOctave )
{
	MxNumberOctave object1( 2 );
	MxNumberOctave object2( 1 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_8_9_true, MxNumberOctave )
{
	MxNumberOctave object1( 8 );
	MxNumberOctave object2( 9 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_8_8_false, MxNumberOctave )
{
	MxNumberOctave object1( 8 );
	MxNumberOctave object2( 8 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_8_7_false, MxNumberOctave )
{
	MxNumberOctave object1( 8 );
	MxNumberOctave object2( 7 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_0_1_true, MxNumberOctave )
{
	MxNumberOctave object1( 0 );
	MxNumberOctave object2( 1 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_1_1_true, MxNumberOctave )
{
	MxNumberOctave object1( 1 );
	MxNumberOctave object2( 1 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_2_1_false, MxNumberOctave )
{
	MxNumberOctave object1( 2 );
	MxNumberOctave object2( 1 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_8_9_true, MxNumberOctave )
{
	MxNumberOctave object1( 8 );
	MxNumberOctave object2( 9 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_8_8_true, MxNumberOctave )
{
	MxNumberOctave object1( 8 );
	MxNumberOctave object2( 8 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_8_7_false, MxNumberOctave )
{
	MxNumberOctave object1( 8 );
	MxNumberOctave object2( 7 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}

/* End: Comparison Operators ------------------------------------------------ */


