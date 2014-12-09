/** *******************************************************
  * Class under test: MxNumberMidi16384
  * *******************************************************
  * **/
#include <iostream>
#include <string>
#include <sstream>
#include "TestHarness.h"
#include "MxNumberMidi16384.h"

using namespace std;
using namespace lexicon;

/* Constructor Tests -------------------------------------------------------- */

TEST( ctorDefault, MxNumberMidi16384 )
{
	MxNumberMidi16384 object;
	CHECK( true )
}
TEST( ctorValuen1, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( -1 );
	bool expected = false;
	bool actual = object.getValue() == -1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 0 );
	bool expected = false;
	bool actual = object.getValue() == 0;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 1 );
	bool expected = true;
	bool actual = object.getValue() == 1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 2 );
	bool expected = true;
	bool actual = object.getValue() == 2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue16382, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 16382 );
	bool expected = true;
	bool actual = object.getValue() == 16382;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue16383, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 16383 );
	bool expected = true;
	bool actual = object.getValue() == 16383;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue16384, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 16384 );
	bool expected = true;
	bool actual = object.getValue() == 16384;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue16385, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 16385 );
	bool expected = false;
	bool actual = object.getValue() == 16385;
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor Tests --------------------------------------------------- */


/* Assignment Test ---------------------------------------------------------- */

TEST( assignment, MxNumberMidi16384 )
{
	MxNumberMidi16384 original( 1 );
	MxNumberMidi16384 other( 16384 );
	other = original;
	int expected = 1;
	int actual = other.getValue();
	CHECK_EQUAL( expected, actual )
	other.setValue( 16384 );
	expected = 1;
	actual = original.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: Assignment Test ----------------------------------------------------- */


/* Upper and Lower Bound Tests ---------------------------------------------- */

TEST( isLowerRangeBound, MxNumberMidi16384 )
{
	MxNumberMidi16384 object;
	bool expected = true;
	bool actual = object.isLowerRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeBound, MxNumberMidi16384 )
{
	MxNumberMidi16384 object;
	bool expected = true;
	bool actual = object.isUpperRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isLowerRangeLimitInclusive, MxNumberMidi16384 )
{
	MxNumberMidi16384 object;
	bool expected = true;
	bool actual = object.isLowerRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeLimitInclusive, MxNumberMidi16384 )
{
	MxNumberMidi16384 object;
	bool expected = true;
	bool actual = object.isUpperRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( getLowerBound, MxNumberMidi16384 )
{
	MxNumberMidi16384 object;
	int expected = 1;
	int actual = object.getLowerBound();
	CHECK_EQUAL( expected, actual )
}
TEST( getUpperBound, MxNumberMidi16384 )
{
	MxNumberMidi16384 object;
	int expected = 16384;
	int actual = object.getUpperBound();
	CHECK_EQUAL( expected, actual )
}

/* End: Upper and Lower Bound Tests ----------------------------------------- */


/* Documentation Tests ------------------------------------------------------ */

TEST( getXmlTypeName, MxNumberMidi16384 )
{
	MxNumberMidi16384 object;
	std::string expected = "midi-16384";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName, MxNumberMidi16384 )
{
	MxNumberMidi16384 object;
	std::string expected = "MxNumberMidi16384";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxNumberMidi16384 )
{
	MxNumberMidi16384 object;
	std::string expected = "The midi-16 type is used to express MIDI 1.0 values that range from 1 to 16,384.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Documentation Tests ------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( getValue_setValue_1_16384, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 1 );
	int expected = 1;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 16384 );
	expected = 16384;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_2_16383, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 2 );
	int expected = 2;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 16383 );
	expected = 16383;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_3_16382, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 3 );
	int expected = 3;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 16382 );
	expected = 16382;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_4_16381, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 4 );
	int expected = 4;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 16381 );
	expected = 16381;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* stream Tests ------------------------------------------------------------- */

TEST( stream_1_16384, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 1 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "1";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 16384 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "1638416384";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "16384";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_2_16383, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 2 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "2";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 16383 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "1638316383";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "16383";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_3_16382, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 3 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "3";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 16382 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "1638216382";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "16382";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_4_16381, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 4 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "4";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 16381 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "1638116381";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "16381";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}

/* End: stream Tests -------------------------------------------------------- */


/* toString() Tests --------------------------------------------------------- */

TEST( toString_16384, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 16384 );
	std::string expected = "16384";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_2, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 2 );
	std::string expected = "2";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_16382, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 16382 );
	std::string expected = "16382";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_4, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 4 );
	std::string expected = "4";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}

/* End: toString() Tests ---------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( fromString_1_16384, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 1 );
	std::stringstream ss1;
	std::string value1 = "16384";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 16384;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 1 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 16384;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_16383_2, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 16383 );
	std::stringstream ss1;
	std::string value1 = "2";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 2;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 16383 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 2;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_3_16382, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 3 );
	std::stringstream ss1;
	std::string value1 = "16382";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 16382;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 3 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 16382;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_16381_4, MxNumberMidi16384 )
{
	MxNumberMidi16384 object( 16381 );
	std::stringstream ss1;
	std::string value1 = "4";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 4;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 16381 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 4;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* Comparison Operators ----------------------------------------------------- */

TEST( operatorEqEq_1_2_false, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 1 );
	MxNumberMidi16384 object2( 2 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_2_2_true, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 2 );
	MxNumberMidi16384 object2( 2 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_3_2_false, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 3 );
	MxNumberMidi16384 object2( 2 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_16383_16384_false, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 16383 );
	MxNumberMidi16384 object2( 16384 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_16383_16383_true, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 16383 );
	MxNumberMidi16384 object2( 16383 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_16383_16382_false, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 16383 );
	MxNumberMidi16384 object2( 16382 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_1_2_true, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 1 );
	MxNumberMidi16384 object2( 2 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_2_2_false, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 2 );
	MxNumberMidi16384 object2( 2 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_3_2_true, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 3 );
	MxNumberMidi16384 object2( 2 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_16383_16384_true, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 16383 );
	MxNumberMidi16384 object2( 16384 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_16383_16383_false, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 16383 );
	MxNumberMidi16384 object2( 16383 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_16383_16382_true, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 16383 );
	MxNumberMidi16384 object2( 16382 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_1_2_false, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 1 );
	MxNumberMidi16384 object2( 2 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_2_2_false, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 2 );
	MxNumberMidi16384 object2( 2 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_3_2_true, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 3 );
	MxNumberMidi16384 object2( 2 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_16383_16384_false, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 16383 );
	MxNumberMidi16384 object2( 16384 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_16383_16383_false, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 16383 );
	MxNumberMidi16384 object2( 16383 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_16383_16382_true, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 16383 );
	MxNumberMidi16384 object2( 16382 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_1_2_false, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 1 );
	MxNumberMidi16384 object2( 2 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_2_2_true, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 2 );
	MxNumberMidi16384 object2( 2 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_3_2_true, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 3 );
	MxNumberMidi16384 object2( 2 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_16383_16384_false, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 16383 );
	MxNumberMidi16384 object2( 16384 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_16383_16383_true, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 16383 );
	MxNumberMidi16384 object2( 16383 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_16383_16382_true, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 16383 );
	MxNumberMidi16384 object2( 16382 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_1_2_true, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 1 );
	MxNumberMidi16384 object2( 2 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_2_2_false, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 2 );
	MxNumberMidi16384 object2( 2 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_3_2_false, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 3 );
	MxNumberMidi16384 object2( 2 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_16383_16384_true, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 16383 );
	MxNumberMidi16384 object2( 16384 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_16383_16383_false, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 16383 );
	MxNumberMidi16384 object2( 16383 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_16383_16382_false, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 16383 );
	MxNumberMidi16384 object2( 16382 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_1_2_true, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 1 );
	MxNumberMidi16384 object2( 2 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_2_2_true, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 2 );
	MxNumberMidi16384 object2( 2 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_3_2_false, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 3 );
	MxNumberMidi16384 object2( 2 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_16383_16384_true, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 16383 );
	MxNumberMidi16384 object2( 16384 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_16383_16383_true, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 16383 );
	MxNumberMidi16384 object2( 16383 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_16383_16382_false, MxNumberMidi16384 )
{
	MxNumberMidi16384 object1( 16383 );
	MxNumberMidi16384 object2( 16382 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}

/* End: Comparison Operators ------------------------------------------------ */


