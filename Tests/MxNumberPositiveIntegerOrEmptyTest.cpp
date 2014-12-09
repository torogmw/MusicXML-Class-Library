/** *******************************************************
  * Class under test: MxNumberPositiveIntegerOrEmpty
  * *******************************************************
  * **/
#include <iostream>
#include <string>
#include <sstream>
#include "TestHarness.h"
#include "MxNumberPositiveIntegerOrEmpty.h"

using namespace std;
using namespace lexicon;

/* Unique Features ---------------------------------------------------------- */
TEST( ctorStringEmpty, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( "" );
	CHECK( object.isEmpty() );
    int expected = 1;
    int actual = object.getValue();
    CHECK_EQUAL( expected, actual )
}

TEST( ctorStringNotEmpty01, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( "-365" );
	CHECK( ! object.isEmpty() );
    int expected = 1;
    int actual = object.getValue();
    CHECK_EQUAL( expected, actual )
}

TEST( ctorStringNotEmpty02, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( "6007" );
	CHECK( ! object.isEmpty() );
    int expected = 6007;
    int actual = object.getValue();
    CHECK_EQUAL( expected, actual )
}

TEST( EmptyToString01, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( "" );
	CHECK( object.isEmpty() );
    std::string expected = "";
    std::string actual = object.toString();
    CHECK_EQUAL( expected, actual )
}

TEST( ctorStringNotEmpty03, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( "6007" );
	CHECK( ! object.isEmpty() );
    object.fromString( "" );
    CHECK( object.isEmpty() );
    int expected = 1;
    int actual = object.getValue();
    CHECK_EQUAL( expected, actual )
}


/* Constructor Tests -------------------------------------------------------- */

TEST( ctorDefault, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object;
	CHECK( true )
}
TEST( ctorValuen2, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( -2 );
	bool expected = false;
	bool actual = object.getValue() == -2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValuen1, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( -1 );
	bool expected = false;
	bool actual = object.getValue() == -1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 0 );
	bool expected = false;
	bool actual = object.getValue() == 0;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 1 );
	bool expected = true;
	bool actual = object.getValue() == 1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue32765, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 32765 );
	bool expected = true;
	bool actual = object.getValue() == 32765;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue32766, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 32766 );
	bool expected = true;
	bool actual = object.getValue() == 32766;
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor Tests --------------------------------------------------- */


/* Assignment Test ---------------------------------------------------------- */

TEST( assignment, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty original( 1 );
	MxNumberPositiveIntegerOrEmpty other( 32767 );
	other = original;
	int expected = 1;
	int actual = other.getValue();
	CHECK_EQUAL( expected, actual )
	other.setValue( 32767 );
	expected = 1;
	actual = original.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: Assignment Test ----------------------------------------------------- */


/* Upper and Lower Bound Tests ---------------------------------------------- */

TEST( isLowerRangeBound, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object;
	bool expected = true;
	bool actual = object.isLowerRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeBound, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object;
	bool expected = false;
	bool actual = object.isUpperRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isLowerRangeLimitInclusive, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object;
	bool expected = false;
	bool actual = object.isLowerRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeLimitInclusive, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object;
	bool expected = true;
	bool actual = object.isUpperRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( getLowerBound, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object;
	int expected = 0;
	int actual = object.getLowerBound();
	CHECK_EQUAL( expected, actual )
}

/* End: Upper and Lower Bound Tests ----------------------------------------- */


/* Documentation Tests ------------------------------------------------------ */

TEST( getXmlTypeName, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object;
	std::string expected = "positive-integer-or-empty";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object;
	std::string expected = "MxNumberPositiveIntegerOrEmpty";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object;
	std::string expected = "The positive-integer-or-empty values can be either a positive integer or an empty string.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Documentation Tests ------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( getValue_setValue_1_32767, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 1 );
	int expected = 1;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 32767 );
	expected = 32767;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_2_32766, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 2 );
	int expected = 2;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 32766 );
	expected = 32766;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_3_32765, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 3 );
	int expected = 3;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 32765 );
	expected = 32765;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_4_32764, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 4 );
	int expected = 4;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 32764 );
	expected = 32764;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* stream Tests ------------------------------------------------------------- */

TEST( stream_1_32767, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 1 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "1";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 32767 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "3276732767";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "32767";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_2_32766, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 2 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "2";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 32766 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "3276632766";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "32766";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_3_32765, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 3 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "3";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 32765 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "3276532765";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "32765";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream_4_32764, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 4 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "4";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 32764 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "3276432764";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "32764";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}

/* End: stream Tests -------------------------------------------------------- */


/* toString() Tests --------------------------------------------------------- */

TEST( toString_32767, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 32767 );
	std::string expected = "32767";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_2, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 2 );
	std::string expected = "2";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_32765, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 32765 );
	std::string expected = "32765";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_4, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 4 );
	std::string expected = "4";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}

/* End: toString() Tests ---------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( fromString_1_32767, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 1 );
	std::stringstream ss1;
	std::string value1 = "32767";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 32767;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 1 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 32767;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_32766_2, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 32766 );
	std::stringstream ss1;
	std::string value1 = "2";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 2;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 32766 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 2;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_3_32765, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 3 );
	std::stringstream ss1;
	std::string value1 = "32765";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 32765;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 3 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 32765;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_32764_4, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object( 32764 );
	std::stringstream ss1;
	std::string value1 = "4";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 4;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 32764 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 4;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* Comparison Operators ----------------------------------------------------- */

TEST( operatorEqEq_1_2_false, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 1 );
	MxNumberPositiveIntegerOrEmpty object2( 2 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_2_2_true, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 2 );
	MxNumberPositiveIntegerOrEmpty object2( 2 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_3_2_false, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 3 );
	MxNumberPositiveIntegerOrEmpty object2( 2 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_32766_32767_false, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 32766 );
	MxNumberPositiveIntegerOrEmpty object2( 32767 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_32766_32766_true, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 32766 );
	MxNumberPositiveIntegerOrEmpty object2( 32766 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_32766_32765_false, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 32766 );
	MxNumberPositiveIntegerOrEmpty object2( 32765 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_1_2_true, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 1 );
	MxNumberPositiveIntegerOrEmpty object2( 2 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_2_2_false, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 2 );
	MxNumberPositiveIntegerOrEmpty object2( 2 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_3_2_true, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 3 );
	MxNumberPositiveIntegerOrEmpty object2( 2 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_32766_32767_true, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 32766 );
	MxNumberPositiveIntegerOrEmpty object2( 32767 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_32766_32766_false, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 32766 );
	MxNumberPositiveIntegerOrEmpty object2( 32766 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_32766_32765_true, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 32766 );
	MxNumberPositiveIntegerOrEmpty object2( 32765 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_1_2_false, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 1 );
	MxNumberPositiveIntegerOrEmpty object2( 2 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_2_2_false, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 2 );
	MxNumberPositiveIntegerOrEmpty object2( 2 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_3_2_true, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 3 );
	MxNumberPositiveIntegerOrEmpty object2( 2 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_32766_32767_false, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 32766 );
	MxNumberPositiveIntegerOrEmpty object2( 32767 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_32766_32766_false, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 32766 );
	MxNumberPositiveIntegerOrEmpty object2( 32766 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_32766_32765_true, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 32766 );
	MxNumberPositiveIntegerOrEmpty object2( 32765 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_1_2_false, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 1 );
	MxNumberPositiveIntegerOrEmpty object2( 2 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_2_2_true, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 2 );
	MxNumberPositiveIntegerOrEmpty object2( 2 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_3_2_true, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 3 );
	MxNumberPositiveIntegerOrEmpty object2( 2 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_32766_32767_false, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 32766 );
	MxNumberPositiveIntegerOrEmpty object2( 32767 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_32766_32766_true, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 32766 );
	MxNumberPositiveIntegerOrEmpty object2( 32766 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_32766_32765_true, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 32766 );
	MxNumberPositiveIntegerOrEmpty object2( 32765 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_1_2_true, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 1 );
	MxNumberPositiveIntegerOrEmpty object2( 2 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_2_2_false, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 2 );
	MxNumberPositiveIntegerOrEmpty object2( 2 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_3_2_false, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 3 );
	MxNumberPositiveIntegerOrEmpty object2( 2 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_32766_32767_true, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 32766 );
	MxNumberPositiveIntegerOrEmpty object2( 32767 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_32766_32766_false, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 32766 );
	MxNumberPositiveIntegerOrEmpty object2( 32766 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_32766_32765_false, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 32766 );
	MxNumberPositiveIntegerOrEmpty object2( 32765 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_1_2_true, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 1 );
	MxNumberPositiveIntegerOrEmpty object2( 2 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_2_2_true, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 2 );
	MxNumberPositiveIntegerOrEmpty object2( 2 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_3_2_false, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 3 );
	MxNumberPositiveIntegerOrEmpty object2( 2 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_32766_32767_true, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 32766 );
	MxNumberPositiveIntegerOrEmpty object2( 32767 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_32766_32766_true, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 32766 );
	MxNumberPositiveIntegerOrEmpty object2( 32766 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_32766_32765_false, MxNumberPositiveIntegerOrEmpty )
{
	MxNumberPositiveIntegerOrEmpty object1( 32766 );
	MxNumberPositiveIntegerOrEmpty object2( 32765 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}

/* End: Comparison Operators ------------------------------------------------ */


