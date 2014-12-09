/** *******************************************************
  * Class under test: MxNumberMidi16
  * *******************************************************
  * **/
#include <iostream>
#include <string>
#include <sstream>
#include "TestHarness.h"
#include "MxNumberMidi16.h"

using namespace std;
using namespace lexicon;

/* Constructor Tests -------------------------------------------------------- */

TEST( ctorDefault, MxNumberMidi16 )
{
	MxNumberMidi16 object;
	CHECK( true )
}
TEST( ctorValuen1, MxNumberMidi16 )
{
	MxNumberMidi16 object( -1 );
	bool expected = false;
	bool actual = object.getValue() == -1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0, MxNumberMidi16 )
{
	MxNumberMidi16 object( 0 );
	bool expected = false;
	bool actual = object.getValue() == 0;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1, MxNumberMidi16 )
{
	MxNumberMidi16 object( 1 );
	bool expected = true;
	bool actual = object.getValue() == 1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxNumberMidi16 )
{
	MxNumberMidi16 object( 2 );
	bool expected = true;
	bool actual = object.getValue() == 2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue14, MxNumberMidi16 )
{
	MxNumberMidi16 object( 14 );
	bool expected = true;
	bool actual = object.getValue() == 14;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue15, MxNumberMidi16 )
{
	MxNumberMidi16 object( 15 );
	bool expected = true;
	bool actual = object.getValue() == 15;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue16, MxNumberMidi16 )
{
	MxNumberMidi16 object( 16 );
	bool expected = true;
	bool actual = object.getValue() == 16;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue17, MxNumberMidi16 )
{
	MxNumberMidi16 object( 17 );
	bool expected = false;
	bool actual = object.getValue() == 17;
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor Tests --------------------------------------------------- */


/* Assignment Test ---------------------------------------------------------- */

TEST( assignment, MxNumberMidi16 )
{
	MxNumberMidi16 original( 1 );
	MxNumberMidi16 other( 16 );
	other = original;
	int expected = 1;
	int actual = other.getValue();
	CHECK_EQUAL( expected, actual )
	other.setValue( 16 );
	expected = 1;
	actual = original.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: Assignment Test ----------------------------------------------------- */


/* Upper and Lower Bound Tests ---------------------------------------------- */

TEST( isLowerRangeBound, MxNumberMidi16 )
{
	MxNumberMidi16 object;
	bool expected = true;
	bool actual = object.isLowerRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeBound, MxNumberMidi16 )
{
	MxNumberMidi16 object;
	bool expected = true;
	bool actual = object.isUpperRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isLowerRangeLimitInclusive, MxNumberMidi16 )
{
	MxNumberMidi16 object;
	bool expected = true;
	bool actual = object.isLowerRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeLimitInclusive, MxNumberMidi16 )
{
	MxNumberMidi16 object;
	bool expected = true;
	bool actual = object.isUpperRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( getLowerBound, MxNumberMidi16 )
{
	MxNumberMidi16 object;
	int expected = 1;
	int actual = object.getLowerBound();
	CHECK_EQUAL( expected, actual )
}
TEST( getUpperBound, MxNumberMidi16 )
{
	MxNumberMidi16 object;
	int expected = 16;
	int actual = object.getUpperBound();
	CHECK_EQUAL( expected, actual )
}

/* End: Upper and Lower Bound Tests ----------------------------------------- */


/* Documentation Tests ------------------------------------------------------ */

TEST( getXmlTypeName, MxNumberMidi16 )
{
	MxNumberMidi16 object;
	std::string expected = "midi-16";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName, MxNumberMidi16 )
{
	MxNumberMidi16 object;
	std::string expected = "MxNumberMidi16";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxNumberMidi16 )
{
	MxNumberMidi16 object;
	std::string expected = "The midi-16 type is used to express MIDI 1.0 values that range from 1 to 16.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Documentation Tests ------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( getValue_setValue_1_16, MxNumberMidi16 )
{
	MxNumberMidi16 object( 1 );
	int expected = 1;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 16 );
	expected = 16;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_2_15, MxNumberMidi16 )
{
	MxNumberMidi16 object( 2 );
	int expected = 2;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 15 );
	expected = 15;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_3_14, MxNumberMidi16 )
{
	MxNumberMidi16 object( 3 );
	int expected = 3;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 14 );
	expected = 14;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_4_13, MxNumberMidi16 )
{
	MxNumberMidi16 object( 4 );
	int expected = 4;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 13 );
	expected = 13;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* stream Tests ------------------------------------------------------------- */

TEST( stream_1_16, MxNumberMidi16 )
{
	MxNumberMidi16 object( 1 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "1";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 16 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "1616";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "16";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_2_15, MxNumberMidi16 )
{
	MxNumberMidi16 object( 2 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "2";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 15 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "1515";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "15";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_3_14, MxNumberMidi16 )
{
	MxNumberMidi16 object( 3 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "3";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 14 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "1414";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "14";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_4_13, MxNumberMidi16 )
{
	MxNumberMidi16 object( 4 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "4";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 13 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "1313";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "13";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}

/* End: stream Tests -------------------------------------------------------- */


/* toString() Tests --------------------------------------------------------- */

TEST( toString_16, MxNumberMidi16 )
{
	MxNumberMidi16 object( 16 );
	std::string expected = "16";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_2, MxNumberMidi16 )
{
	MxNumberMidi16 object( 2 );
	std::string expected = "2";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_14, MxNumberMidi16 )
{
	MxNumberMidi16 object( 14 );
	std::string expected = "14";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_4, MxNumberMidi16 )
{
	MxNumberMidi16 object( 4 );
	std::string expected = "4";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}

/* End: toString() Tests ---------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( fromString_1_16, MxNumberMidi16 )
{
	MxNumberMidi16 object( 1 );
	std::stringstream ss1;
	std::string value1 = "16";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 16;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 1 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 16;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_15_2, MxNumberMidi16 )
{
	MxNumberMidi16 object( 15 );
	std::stringstream ss1;
	std::string value1 = "2";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 2;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 15 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 2;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_3_14, MxNumberMidi16 )
{
	MxNumberMidi16 object( 3 );
	std::stringstream ss1;
	std::string value1 = "14";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 14;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 3 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 14;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_13_4, MxNumberMidi16 )
{
	MxNumberMidi16 object( 13 );
	std::stringstream ss1;
	std::string value1 = "4";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 4;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 13 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 4;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* Comparison Operators ----------------------------------------------------- */

TEST( operatorEqEq_1_2_false, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 1 );
	MxNumberMidi16 object2( 2 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_2_2_true, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 2 );
	MxNumberMidi16 object2( 2 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_3_2_false, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 3 );
	MxNumberMidi16 object2( 2 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_15_16_false, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 15 );
	MxNumberMidi16 object2( 16 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_15_15_true, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 15 );
	MxNumberMidi16 object2( 15 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_15_14_false, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 15 );
	MxNumberMidi16 object2( 14 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_1_2_true, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 1 );
	MxNumberMidi16 object2( 2 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_2_2_false, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 2 );
	MxNumberMidi16 object2( 2 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_3_2_true, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 3 );
	MxNumberMidi16 object2( 2 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_15_16_true, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 15 );
	MxNumberMidi16 object2( 16 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_15_15_false, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 15 );
	MxNumberMidi16 object2( 15 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_15_14_true, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 15 );
	MxNumberMidi16 object2( 14 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_1_2_false, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 1 );
	MxNumberMidi16 object2( 2 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_2_2_false, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 2 );
	MxNumberMidi16 object2( 2 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_3_2_true, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 3 );
	MxNumberMidi16 object2( 2 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_15_16_false, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 15 );
	MxNumberMidi16 object2( 16 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_15_15_false, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 15 );
	MxNumberMidi16 object2( 15 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_15_14_true, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 15 );
	MxNumberMidi16 object2( 14 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_1_2_false, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 1 );
	MxNumberMidi16 object2( 2 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_2_2_true, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 2 );
	MxNumberMidi16 object2( 2 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_3_2_true, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 3 );
	MxNumberMidi16 object2( 2 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_15_16_false, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 15 );
	MxNumberMidi16 object2( 16 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_15_15_true, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 15 );
	MxNumberMidi16 object2( 15 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_15_14_true, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 15 );
	MxNumberMidi16 object2( 14 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_1_2_true, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 1 );
	MxNumberMidi16 object2( 2 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_2_2_false, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 2 );
	MxNumberMidi16 object2( 2 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_3_2_false, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 3 );
	MxNumberMidi16 object2( 2 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_15_16_true, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 15 );
	MxNumberMidi16 object2( 16 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_15_15_false, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 15 );
	MxNumberMidi16 object2( 15 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_15_14_false, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 15 );
	MxNumberMidi16 object2( 14 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_1_2_true, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 1 );
	MxNumberMidi16 object2( 2 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_2_2_true, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 2 );
	MxNumberMidi16 object2( 2 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_3_2_false, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 3 );
	MxNumberMidi16 object2( 2 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_15_16_true, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 15 );
	MxNumberMidi16 object2( 16 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_15_15_true, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 15 );
	MxNumberMidi16 object2( 15 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_15_14_false, MxNumberMidi16 )
{
	MxNumberMidi16 object1( 15 );
	MxNumberMidi16 object2( 14 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}

/* End: Comparison Operators ------------------------------------------------ */


