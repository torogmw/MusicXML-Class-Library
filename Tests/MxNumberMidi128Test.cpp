/** *******************************************************
  * Class under test: MxNumberMidi128
  * *******************************************************
  * **/
#include <iostream>
#include <string>
#include <sstream>
#include "TestHarness.h"
#include "MxNumberMidi128.h"

using namespace std;
using namespace lexicon;

/* Constructor Tests -------------------------------------------------------- */

TEST( ctorDefault, MxNumberMidi128 )
{
	MxNumberMidi128 object;
	CHECK( true )
}
TEST( ctorValuen1, MxNumberMidi128 )
{
	MxNumberMidi128 object( -1 );
	bool expected = false;
	bool actual = object.getValue() == -1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0, MxNumberMidi128 )
{
	MxNumberMidi128 object( 0 );
	bool expected = false;
	bool actual = object.getValue() == 0;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1, MxNumberMidi128 )
{
	MxNumberMidi128 object( 1 );
	bool expected = true;
	bool actual = object.getValue() == 1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxNumberMidi128 )
{
	MxNumberMidi128 object( 2 );
	bool expected = true;
	bool actual = object.getValue() == 2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue126, MxNumberMidi128 )
{
	MxNumberMidi128 object( 126 );
	bool expected = true;
	bool actual = object.getValue() == 126;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue127, MxNumberMidi128 )
{
	MxNumberMidi128 object( 127 );
	bool expected = true;
	bool actual = object.getValue() == 127;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue128, MxNumberMidi128 )
{
	MxNumberMidi128 object( 128 );
	bool expected = true;
	bool actual = object.getValue() == 128;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue129, MxNumberMidi128 )
{
	MxNumberMidi128 object( 129 );
	bool expected = false;
	bool actual = object.getValue() == 129;
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor Tests --------------------------------------------------- */


/* Assignment Test ---------------------------------------------------------- */

TEST( assignment, MxNumberMidi128 )
{
	MxNumberMidi128 original( 1 );
	MxNumberMidi128 other( 128 );
	other = original;
	int expected = 1;
	int actual = other.getValue();
	CHECK_EQUAL( expected, actual )
	other.setValue( 128 );
	expected = 1;
	actual = original.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: Assignment Test ----------------------------------------------------- */


/* Upper and Lower Bound Tests ---------------------------------------------- */

TEST( isLowerRangeBound, MxNumberMidi128 )
{
	MxNumberMidi128 object;
	bool expected = true;
	bool actual = object.isLowerRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeBound, MxNumberMidi128 )
{
	MxNumberMidi128 object;
	bool expected = true;
	bool actual = object.isUpperRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isLowerRangeLimitInclusive, MxNumberMidi128 )
{
	MxNumberMidi128 object;
	bool expected = true;
	bool actual = object.isLowerRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeLimitInclusive, MxNumberMidi128 )
{
	MxNumberMidi128 object;
	bool expected = true;
	bool actual = object.isUpperRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( getLowerBound, MxNumberMidi128 )
{
	MxNumberMidi128 object;
	int expected = 1;
	int actual = object.getLowerBound();
	CHECK_EQUAL( expected, actual )
}
TEST( getUpperBound, MxNumberMidi128 )
{
	MxNumberMidi128 object;
	int expected = 128;
	int actual = object.getUpperBound();
	CHECK_EQUAL( expected, actual )
}

/* End: Upper and Lower Bound Tests ----------------------------------------- */


/* Documentation Tests ------------------------------------------------------ */

TEST( getXmlTypeName, MxNumberMidi128 )
{
	MxNumberMidi128 object;
	std::string expected = "midi-128";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName, MxNumberMidi128 )
{
	MxNumberMidi128 object;
	std::string expected = "MxNumberMidi128";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxNumberMidi128 )
{
	MxNumberMidi128 object;
	std::string expected = "The midi-16 type is used to express MIDI 1.0 values that range from 1 to 128.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Documentation Tests ------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( getValue_setValue_1_128, MxNumberMidi128 )
{
	MxNumberMidi128 object( 1 );
	int expected = 1;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 128 );
	expected = 128;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_2_127, MxNumberMidi128 )
{
	MxNumberMidi128 object( 2 );
	int expected = 2;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 127 );
	expected = 127;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_3_126, MxNumberMidi128 )
{
	MxNumberMidi128 object( 3 );
	int expected = 3;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 126 );
	expected = 126;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_4_125, MxNumberMidi128 )
{
	MxNumberMidi128 object( 4 );
	int expected = 4;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 125 );
	expected = 125;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* stream Tests ------------------------------------------------------------- */

TEST( stream_1_128, MxNumberMidi128 )
{
	MxNumberMidi128 object( 1 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "1";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 128 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "128128";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "128";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_2_127, MxNumberMidi128 )
{
	MxNumberMidi128 object( 2 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "2";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 127 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "127127";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "127";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_3_126, MxNumberMidi128 )
{
	MxNumberMidi128 object( 3 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "3";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 126 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "126126";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "126";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_4_125, MxNumberMidi128 )
{
	MxNumberMidi128 object( 4 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "4";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 125 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "125125";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "125";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}

/* End: stream Tests -------------------------------------------------------- */


/* toString() Tests --------------------------------------------------------- */

TEST( toString_128, MxNumberMidi128 )
{
	MxNumberMidi128 object( 128 );
	std::string expected = "128";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_2, MxNumberMidi128 )
{
	MxNumberMidi128 object( 2 );
	std::string expected = "2";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_126, MxNumberMidi128 )
{
	MxNumberMidi128 object( 126 );
	std::string expected = "126";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_4, MxNumberMidi128 )
{
	MxNumberMidi128 object( 4 );
	std::string expected = "4";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}

/* End: toString() Tests ---------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( fromString_1_128, MxNumberMidi128 )
{
	MxNumberMidi128 object( 1 );
	std::stringstream ss1;
	std::string value1 = "128";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 128;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 1 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 128;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_127_2, MxNumberMidi128 )
{
	MxNumberMidi128 object( 127 );
	std::stringstream ss1;
	std::string value1 = "2";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 2;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 127 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 2;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_3_126, MxNumberMidi128 )
{
	MxNumberMidi128 object( 3 );
	std::stringstream ss1;
	std::string value1 = "126";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 126;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 3 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 126;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_125_4, MxNumberMidi128 )
{
	MxNumberMidi128 object( 125 );
	std::stringstream ss1;
	std::string value1 = "4";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 4;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 125 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 4;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* Comparison Operators ----------------------------------------------------- */

TEST( operatorEqEq_1_2_false, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 1 );
	MxNumberMidi128 object2( 2 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_2_2_true, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 2 );
	MxNumberMidi128 object2( 2 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_3_2_false, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 3 );
	MxNumberMidi128 object2( 2 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_127_128_false, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 127 );
	MxNumberMidi128 object2( 128 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_127_127_true, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 127 );
	MxNumberMidi128 object2( 127 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_127_126_false, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 127 );
	MxNumberMidi128 object2( 126 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_1_2_true, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 1 );
	MxNumberMidi128 object2( 2 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_2_2_false, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 2 );
	MxNumberMidi128 object2( 2 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_3_2_true, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 3 );
	MxNumberMidi128 object2( 2 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_127_128_true, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 127 );
	MxNumberMidi128 object2( 128 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_127_127_false, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 127 );
	MxNumberMidi128 object2( 127 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_127_126_true, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 127 );
	MxNumberMidi128 object2( 126 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_1_2_false, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 1 );
	MxNumberMidi128 object2( 2 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_2_2_false, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 2 );
	MxNumberMidi128 object2( 2 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_3_2_true, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 3 );
	MxNumberMidi128 object2( 2 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_127_128_false, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 127 );
	MxNumberMidi128 object2( 128 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_127_127_false, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 127 );
	MxNumberMidi128 object2( 127 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_127_126_true, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 127 );
	MxNumberMidi128 object2( 126 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_1_2_false, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 1 );
	MxNumberMidi128 object2( 2 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_2_2_true, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 2 );
	MxNumberMidi128 object2( 2 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_3_2_true, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 3 );
	MxNumberMidi128 object2( 2 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_127_128_false, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 127 );
	MxNumberMidi128 object2( 128 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_127_127_true, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 127 );
	MxNumberMidi128 object2( 127 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_127_126_true, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 127 );
	MxNumberMidi128 object2( 126 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_1_2_true, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 1 );
	MxNumberMidi128 object2( 2 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_2_2_false, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 2 );
	MxNumberMidi128 object2( 2 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_3_2_false, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 3 );
	MxNumberMidi128 object2( 2 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_127_128_true, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 127 );
	MxNumberMidi128 object2( 128 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_127_127_false, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 127 );
	MxNumberMidi128 object2( 127 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_127_126_false, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 127 );
	MxNumberMidi128 object2( 126 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_1_2_true, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 1 );
	MxNumberMidi128 object2( 2 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_2_2_true, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 2 );
	MxNumberMidi128 object2( 2 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_3_2_false, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 3 );
	MxNumberMidi128 object2( 2 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_127_128_true, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 127 );
	MxNumberMidi128 object2( 128 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_127_127_true, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 127 );
	MxNumberMidi128 object2( 127 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_127_126_false, MxNumberMidi128 )
{
	MxNumberMidi128 object1( 127 );
	MxNumberMidi128 object2( 126 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}

/* End: Comparison Operators ------------------------------------------------ */


