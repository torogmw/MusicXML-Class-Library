/** *******************************************************
  * Class under test: MxNumberTremoloMarks
  * *******************************************************
  * **/
#include <iostream>
#include <string>
#include <sstream>
#include "TestHarness.h"
#include "MxNumberTremoloMarks.h"

using namespace std;
using namespace lexicon;

/* Constructor Tests -------------------------------------------------------- */

TEST( ctorDefault, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object;
	CHECK( true )
}
TEST( ctorValuen2, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( -2 );
	bool expected = false;
	bool actual = object.getValue() == -2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValuen1, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( -1 );
	bool expected = false;
	bool actual = object.getValue() == -1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 0 );
	bool expected = true;
	bool actual = object.getValue() == 0;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 1 );
	bool expected = true;
	bool actual = object.getValue() == 1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 6 );
	bool expected = true;
	bool actual = object.getValue() == 6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue7, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 7 );
	bool expected = true;
	bool actual = object.getValue() == 7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 8 );
	bool expected = true;
	bool actual = object.getValue() == 8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue9, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 9 );
	bool expected = false;
	bool actual = object.getValue() == 9;
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor Tests --------------------------------------------------- */


/* Assignment Test ---------------------------------------------------------- */

TEST( assignment, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks original( 0 );
	MxNumberTremoloMarks other( 8 );
	other = original;
	int expected = 0;
	int actual = other.getValue();
	CHECK_EQUAL( expected, actual )
	other.setValue( 8 );
	expected = 0;
	actual = original.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: Assignment Test ----------------------------------------------------- */


/* Upper and Lower Bound Tests ---------------------------------------------- */

TEST( isLowerRangeBound, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object;
	bool expected = true;
	bool actual = object.isLowerRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeBound, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object;
	bool expected = true;
	bool actual = object.isUpperRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isLowerRangeLimitInclusive, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object;
	bool expected = true;
	bool actual = object.isLowerRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeLimitInclusive, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object;
	bool expected = true;
	bool actual = object.isUpperRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( getLowerBound, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object;
	int expected = 0;
	int actual = object.getLowerBound();
	CHECK_EQUAL( expected, actual )
}
TEST( getUpperBound, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object;
	int expected = 8;
	int actual = object.getUpperBound();
	CHECK_EQUAL( expected, actual )
}

/* End: Upper and Lower Bound Tests ----------------------------------------- */


/* Documentation Tests ------------------------------------------------------ */

TEST( getXmlTypeName, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object;
	std::string expected = "tremolo-marks";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object;
	std::string expected = "MxNumberTremoloMarks";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object;
	std::string expected = "The number of tremolo marks is represented by a number from 0 to 8: the same as beam-level with 0 added.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Documentation Tests ------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( getValue_setValue_0_8, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 0 );
	int expected = 0;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 8 );
	expected = 8;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_1_7, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 1 );
	int expected = 1;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 7 );
	expected = 7;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_2_6, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 2 );
	int expected = 2;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 6 );
	expected = 6;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_3_5, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 3 );
	int expected = 3;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 5 );
	expected = 5;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* stream Tests ------------------------------------------------------------- */

TEST( stream_0_8, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 0 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "0";
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
TEST( stream_1_7, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 1 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "1";
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
TEST( stream_2_6, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 2 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "2";
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
TEST( stream_3_5, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 3 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "3";
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

/* End: stream Tests -------------------------------------------------------- */


/* toString() Tests --------------------------------------------------------- */

TEST( toString_8, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 8 );
	std::string expected = "8";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_1, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 1 );
	std::string expected = "1";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_6, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 6 );
	std::string expected = "6";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_3, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 3 );
	std::string expected = "3";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}

/* End: toString() Tests ---------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( fromString_0_8, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 0 );
	std::stringstream ss1;
	std::string value1 = "8";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 8;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 0 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 8;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_7_1, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 7 );
	std::stringstream ss1;
	std::string value1 = "1";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 1;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 7 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 1;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_2_6, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 2 );
	std::stringstream ss1;
	std::string value1 = "6";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 6;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 2 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 6;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_5_3, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object( 5 );
	std::stringstream ss1;
	std::string value1 = "3";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 3;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 5 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 3;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* Comparison Operators ----------------------------------------------------- */

TEST( operatorEqEq_0_1_false, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 0 );
	MxNumberTremoloMarks object2( 1 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_1_1_true, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 1 );
	MxNumberTremoloMarks object2( 1 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_2_1_false, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 2 );
	MxNumberTremoloMarks object2( 1 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_7_8_false, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 7 );
	MxNumberTremoloMarks object2( 8 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_7_7_true, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 7 );
	MxNumberTremoloMarks object2( 7 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_7_6_false, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 7 );
	MxNumberTremoloMarks object2( 6 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_0_1_true, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 0 );
	MxNumberTremoloMarks object2( 1 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_1_1_false, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 1 );
	MxNumberTremoloMarks object2( 1 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_2_1_true, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 2 );
	MxNumberTremoloMarks object2( 1 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_7_8_true, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 7 );
	MxNumberTremoloMarks object2( 8 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_7_7_false, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 7 );
	MxNumberTremoloMarks object2( 7 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_7_6_true, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 7 );
	MxNumberTremoloMarks object2( 6 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_0_1_false, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 0 );
	MxNumberTremoloMarks object2( 1 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_1_1_false, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 1 );
	MxNumberTremoloMarks object2( 1 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_2_1_true, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 2 );
	MxNumberTremoloMarks object2( 1 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_7_8_false, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 7 );
	MxNumberTremoloMarks object2( 8 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_7_7_false, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 7 );
	MxNumberTremoloMarks object2( 7 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_7_6_true, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 7 );
	MxNumberTremoloMarks object2( 6 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_0_1_false, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 0 );
	MxNumberTremoloMarks object2( 1 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_1_1_true, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 1 );
	MxNumberTremoloMarks object2( 1 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_2_1_true, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 2 );
	MxNumberTremoloMarks object2( 1 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_7_8_false, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 7 );
	MxNumberTremoloMarks object2( 8 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_7_7_true, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 7 );
	MxNumberTremoloMarks object2( 7 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_7_6_true, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 7 );
	MxNumberTremoloMarks object2( 6 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_0_1_true, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 0 );
	MxNumberTremoloMarks object2( 1 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_1_1_false, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 1 );
	MxNumberTremoloMarks object2( 1 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_2_1_false, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 2 );
	MxNumberTremoloMarks object2( 1 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_7_8_true, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 7 );
	MxNumberTremoloMarks object2( 8 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_7_7_false, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 7 );
	MxNumberTremoloMarks object2( 7 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_7_6_false, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 7 );
	MxNumberTremoloMarks object2( 6 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_0_1_true, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 0 );
	MxNumberTremoloMarks object2( 1 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_1_1_true, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 1 );
	MxNumberTremoloMarks object2( 1 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_2_1_false, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 2 );
	MxNumberTremoloMarks object2( 1 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_7_8_true, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 7 );
	MxNumberTremoloMarks object2( 8 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_7_7_true, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 7 );
	MxNumberTremoloMarks object2( 7 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_7_6_false, MxNumberTremoloMarks )
{
	MxNumberTremoloMarks object1( 7 );
	MxNumberTremoloMarks object2( 6 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}

/* End: Comparison Operators ------------------------------------------------ */


