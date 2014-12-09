/** *******************************************************
  * Class under test: MxNumberBeamLevel
  * *******************************************************
  * **/
#include <iostream>
#include <string>
#include <sstream>
#include "TestHarness.h"
#include "MxNumberBeamLevel.h"

using namespace std;
using namespace lexicon;

/* Constructor Tests -------------------------------------------------------- */

TEST( ctorDefault, MxNumberBeamLevel )
{
	MxNumberBeamLevel object;
	CHECK( true )
}
TEST( ctorValuen1, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( -1 );
	bool expected = false;
	bool actual = object.getValue() == -1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 0 );
	bool expected = false;
	bool actual = object.getValue() == 0;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 1 );
	bool expected = true;
	bool actual = object.getValue() == 1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 2 );
	bool expected = true;
	bool actual = object.getValue() == 2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 6 );
	bool expected = true;
	bool actual = object.getValue() == 6;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue7, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 7 );
	bool expected = true;
	bool actual = object.getValue() == 7;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 8 );
	bool expected = true;
	bool actual = object.getValue() == 8;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue9, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 9 );
	bool expected = false;
	bool actual = object.getValue() == 9;
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor Tests --------------------------------------------------- */


/* Assignment Test ---------------------------------------------------------- */

TEST( assignment, MxNumberBeamLevel )
{
	MxNumberBeamLevel original( 1 );
	MxNumberBeamLevel other( 8 );
	other = original;
	int expected = 1;
	int actual = other.getValue();
	CHECK_EQUAL( expected, actual )
	other.setValue( 8 );
	expected = 1;
	actual = original.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: Assignment Test ----------------------------------------------------- */


/* Upper and Lower Bound Tests ---------------------------------------------- */

TEST( isLowerRangeBound, MxNumberBeamLevel )
{
	MxNumberBeamLevel object;
	bool expected = true;
	bool actual = object.isLowerRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeBound, MxNumberBeamLevel )
{
	MxNumberBeamLevel object;
	bool expected = true;
	bool actual = object.isUpperRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isLowerRangeLimitInclusive, MxNumberBeamLevel )
{
	MxNumberBeamLevel object;
	bool expected = true;
	bool actual = object.isLowerRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeLimitInclusive, MxNumberBeamLevel )
{
	MxNumberBeamLevel object;
	bool expected = true;
	bool actual = object.isUpperRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( getLowerBound, MxNumberBeamLevel )
{
	MxNumberBeamLevel object;
	int expected = 1;
	int actual = object.getLowerBound();
	CHECK_EQUAL( expected, actual )
}
TEST( getUpperBound, MxNumberBeamLevel )
{
	MxNumberBeamLevel object;
	int expected = 8;
	int actual = object.getUpperBound();
	CHECK_EQUAL( expected, actual )
}

/* End: Upper and Lower Bound Tests ----------------------------------------- */


/* Documentation Tests ------------------------------------------------------ */

TEST( getXmlTypeName, MxNumberBeamLevel )
{
	MxNumberBeamLevel object;
	std::string expected = "beam-level";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName, MxNumberBeamLevel )
{
	MxNumberBeamLevel object;
	std::string expected = "MxNumberBeamLevel";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxNumberBeamLevel )
{
	MxNumberBeamLevel object;
	std::string expected = "The MusicXML format supports six levels of beaming, up to 1024th notes. Unlike the number-level type, the beam-level type identifies concurrent beams in a beam group. It does not distinguish overlapping beams such as grace notes within regular notes, or beams used in different voices.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Documentation Tests ------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( getValue_setValue_1_8, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 1 );
	int expected = 1;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 8 );
	expected = 8;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_2_7, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 2 );
	int expected = 2;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 7 );
	expected = 7;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_3_6, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 3 );
	int expected = 3;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 6 );
	expected = 6;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_4_5, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 4 );
	int expected = 4;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 5 );
	expected = 5;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* stream Tests ------------------------------------------------------------- */

TEST( stream_1_8, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 1 );
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
TEST( stream_2_7, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 2 );
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
TEST( stream_3_6, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 3 );
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
TEST( stream_4_5, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 4 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "4";
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

TEST( toString_8, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 8 );
	std::string expected = "8";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_2, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 2 );
	std::string expected = "2";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_6, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 6 );
	std::string expected = "6";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_4, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 4 );
	std::string expected = "4";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}

/* End: toString() Tests ---------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( fromString_1_8, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 1 );
	std::stringstream ss1;
	std::string value1 = "8";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 8;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 1 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 8;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_7_2, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 7 );
	std::stringstream ss1;
	std::string value1 = "2";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 2;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 7 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 2;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_3_6, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 3 );
	std::stringstream ss1;
	std::string value1 = "6";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 6;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 3 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 6;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_5_4, MxNumberBeamLevel )
{
	MxNumberBeamLevel object( 5 );
	std::stringstream ss1;
	std::string value1 = "4";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 4;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 5 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 4;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* Comparison Operators ----------------------------------------------------- */

TEST( operatorEqEq_1_2_false, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 1 );
	MxNumberBeamLevel object2( 2 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_2_2_true, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 2 );
	MxNumberBeamLevel object2( 2 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_3_2_false, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 3 );
	MxNumberBeamLevel object2( 2 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_7_8_false, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 7 );
	MxNumberBeamLevel object2( 8 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_7_7_true, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 7 );
	MxNumberBeamLevel object2( 7 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_7_6_false, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 7 );
	MxNumberBeamLevel object2( 6 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_1_2_true, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 1 );
	MxNumberBeamLevel object2( 2 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_2_2_false, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 2 );
	MxNumberBeamLevel object2( 2 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_3_2_true, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 3 );
	MxNumberBeamLevel object2( 2 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_7_8_true, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 7 );
	MxNumberBeamLevel object2( 8 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_7_7_false, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 7 );
	MxNumberBeamLevel object2( 7 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_7_6_true, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 7 );
	MxNumberBeamLevel object2( 6 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_1_2_false, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 1 );
	MxNumberBeamLevel object2( 2 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_2_2_false, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 2 );
	MxNumberBeamLevel object2( 2 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_3_2_true, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 3 );
	MxNumberBeamLevel object2( 2 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_7_8_false, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 7 );
	MxNumberBeamLevel object2( 8 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_7_7_false, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 7 );
	MxNumberBeamLevel object2( 7 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_7_6_true, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 7 );
	MxNumberBeamLevel object2( 6 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_1_2_false, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 1 );
	MxNumberBeamLevel object2( 2 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_2_2_true, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 2 );
	MxNumberBeamLevel object2( 2 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_3_2_true, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 3 );
	MxNumberBeamLevel object2( 2 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_7_8_false, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 7 );
	MxNumberBeamLevel object2( 8 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_7_7_true, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 7 );
	MxNumberBeamLevel object2( 7 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_7_6_true, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 7 );
	MxNumberBeamLevel object2( 6 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_1_2_true, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 1 );
	MxNumberBeamLevel object2( 2 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_2_2_false, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 2 );
	MxNumberBeamLevel object2( 2 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_3_2_false, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 3 );
	MxNumberBeamLevel object2( 2 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_7_8_true, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 7 );
	MxNumberBeamLevel object2( 8 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_7_7_false, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 7 );
	MxNumberBeamLevel object2( 7 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_7_6_false, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 7 );
	MxNumberBeamLevel object2( 6 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_1_2_true, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 1 );
	MxNumberBeamLevel object2( 2 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_2_2_true, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 2 );
	MxNumberBeamLevel object2( 2 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_3_2_false, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 3 );
	MxNumberBeamLevel object2( 2 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_7_8_true, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 7 );
	MxNumberBeamLevel object2( 8 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_7_7_true, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 7 );
	MxNumberBeamLevel object2( 7 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_7_6_false, MxNumberBeamLevel )
{
	MxNumberBeamLevel object1( 7 );
	MxNumberBeamLevel object2( 6 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}

/* End: Comparison Operators ------------------------------------------------ */


