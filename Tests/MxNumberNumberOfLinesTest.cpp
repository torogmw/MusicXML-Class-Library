/** *******************************************************
  * Class under test: MxNumberNumberOfLines
  * *******************************************************
  * **/
#include <iostream>
#include <string>
#include <sstream>
#include "TestHarness.h"
#include "MxNumberNumberOfLines.h"

using namespace std;
using namespace lexicon;

/* Constructor Tests -------------------------------------------------------- */

TEST( ctorDefault, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object;
	CHECK( true )
}
TEST( ctorValuen2, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object( -2 );
	bool expected = false;
	bool actual = object.getValue() == -2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValuen1, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object( -1 );
	bool expected = false;
	bool actual = object.getValue() == -1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object( 0 );
	bool expected = true;
	bool actual = object.getValue() == 0;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object( 1 );
	bool expected = true;
	bool actual = object.getValue() == 1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object( 2 );
	bool expected = true;
	bool actual = object.getValue() == 2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object( 3 );
	bool expected = true;
	bool actual = object.getValue() == 3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object( 4 );
	bool expected = false;
	bool actual = object.getValue() == 4;
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor Tests --------------------------------------------------- */


/* Assignment Test ---------------------------------------------------------- */

TEST( assignment, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines original( 0 );
	MxNumberNumberOfLines other( 3 );
	other = original;
	int expected = 0;
	int actual = other.getValue();
	CHECK_EQUAL( expected, actual )
	other.setValue( 3 );
	expected = 0;
	actual = original.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: Assignment Test ----------------------------------------------------- */


/* Upper and Lower Bound Tests ---------------------------------------------- */

TEST( isLowerRangeBound, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object;
	bool expected = true;
	bool actual = object.isLowerRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeBound, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object;
	bool expected = true;
	bool actual = object.isUpperRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isLowerRangeLimitInclusive, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object;
	bool expected = true;
	bool actual = object.isLowerRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeLimitInclusive, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object;
	bool expected = true;
	bool actual = object.isUpperRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( getLowerBound, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object;
	int expected = 0;
	int actual = object.getLowerBound();
	CHECK_EQUAL( expected, actual )
}
TEST( getUpperBound, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object;
	int expected = 3;
	int actual = object.getUpperBound();
	CHECK_EQUAL( expected, actual )
}

/* End: Upper and Lower Bound Tests ----------------------------------------- */


/* Documentation Tests ------------------------------------------------------ */

TEST( getXmlTypeName, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object;
	std::string expected = "number-of-lines";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object;
	std::string expected = "MxNumberNumberOfLines";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object;
	std::string expected = "The number-of-lines type is used to specify the number of lines in text decoration attributes.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Documentation Tests ------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( getValue_setValue_0_3, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object( 0 );
	int expected = 0;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 3 );
	expected = 3;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_1_2, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object( 1 );
	int expected = 1;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 2 );
	expected = 2;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_2_1, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object( 2 );
	int expected = 2;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 1 );
	expected = 1;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_3_0, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object( 3 );
	int expected = 3;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 0 );
	expected = 0;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* stream Tests ------------------------------------------------------------- */

TEST( stream_0_3, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object( 0 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "0";
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
TEST( stream_1_2, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object( 1 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "1";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 2 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "22";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "2";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_2_1, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object( 2 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "2";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 1 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "11";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "1";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_3_0, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object( 3 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "3";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 0 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "00";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "0";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}

/* End: stream Tests -------------------------------------------------------- */


/* toString() Tests --------------------------------------------------------- */

TEST( toString_3, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object( 3 );
	std::string expected = "3";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_1, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object( 1 );
	std::string expected = "1";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}

/* End: toString() Tests ---------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( fromString_0_3, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object( 0 );
	std::stringstream ss1;
	std::string value1 = "3";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 3;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 0 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 3;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_2_1, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object( 2 );
	std::stringstream ss1;
	std::string value1 = "1";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 1;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 2 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 1;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* Comparison Operators ----------------------------------------------------- */

TEST( operatorEqEq_0_1_false, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 0 );
	MxNumberNumberOfLines object2( 1 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_1_1_true, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 1 );
	MxNumberNumberOfLines object2( 1 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_2_1_false, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 2 );
	MxNumberNumberOfLines object2( 1 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_2_3_false, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 2 );
	MxNumberNumberOfLines object2( 3 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_2_2_true, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 2 );
	MxNumberNumberOfLines object2( 2 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_0_1_true, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 0 );
	MxNumberNumberOfLines object2( 1 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_1_1_false, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 1 );
	MxNumberNumberOfLines object2( 1 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_2_1_true, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 2 );
	MxNumberNumberOfLines object2( 1 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_2_3_true, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 2 );
	MxNumberNumberOfLines object2( 3 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_2_2_false, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 2 );
	MxNumberNumberOfLines object2( 2 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_0_1_false, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 0 );
	MxNumberNumberOfLines object2( 1 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_1_1_false, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 1 );
	MxNumberNumberOfLines object2( 1 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_2_1_true, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 2 );
	MxNumberNumberOfLines object2( 1 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_2_3_false, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 2 );
	MxNumberNumberOfLines object2( 3 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_2_2_false, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 2 );
	MxNumberNumberOfLines object2( 2 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_0_1_false, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 0 );
	MxNumberNumberOfLines object2( 1 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_1_1_true, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 1 );
	MxNumberNumberOfLines object2( 1 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_2_1_true, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 2 );
	MxNumberNumberOfLines object2( 1 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_2_3_false, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 2 );
	MxNumberNumberOfLines object2( 3 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_2_2_true, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 2 );
	MxNumberNumberOfLines object2( 2 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_0_1_true, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 0 );
	MxNumberNumberOfLines object2( 1 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_1_1_false, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 1 );
	MxNumberNumberOfLines object2( 1 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_2_1_false, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 2 );
	MxNumberNumberOfLines object2( 1 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_2_3_true, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 2 );
	MxNumberNumberOfLines object2( 3 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_2_2_false, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 2 );
	MxNumberNumberOfLines object2( 2 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_0_1_true, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 0 );
	MxNumberNumberOfLines object2( 1 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_1_1_true, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 1 );
	MxNumberNumberOfLines object2( 1 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_2_1_false, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 2 );
	MxNumberNumberOfLines object2( 1 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_2_3_true, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 2 );
	MxNumberNumberOfLines object2( 3 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_2_2_true, MxNumberNumberOfLines )
{
	MxNumberNumberOfLines object1( 2 );
	MxNumberNumberOfLines object2( 2 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}

/* End: Comparison Operators ------------------------------------------------ */


