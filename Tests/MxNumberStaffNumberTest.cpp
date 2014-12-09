/** *******************************************************
  * Class under test: MxNumberStaffNumber
  * *******************************************************
  * **/
#include <iostream>
#include <string>
#include <sstream>
#include "TestHarness.h"
#include "MxNumberStaffNumber.h"

using namespace std;
using namespace lexicon;

/* Constructor Tests -------------------------------------------------------- */

TEST( ctorDefault, MxNumberStaffNumber )
{
	MxNumberStaffNumber object;
	CHECK( true )
}
TEST( ctorValuen32767, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( -32767 );
	bool expected = true;
	bool actual = object.getValue() == -32767;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValuen32766, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( -32766 );
	bool expected = true;
	bool actual = object.getValue() == -32766;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue32765, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( 32765 );
	bool expected = true;
	bool actual = object.getValue() == 32765;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue32766, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( 32766 );
	bool expected = true;
	bool actual = object.getValue() == 32766;
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor Tests --------------------------------------------------- */


/* Assignment Test ---------------------------------------------------------- */

TEST( assignment, MxNumberStaffNumber )
{
	MxNumberStaffNumber original( -32767 );
	MxNumberStaffNumber other( 32767 );
	other = original;
	int expected = -32767;
	int actual = other.getValue();
	CHECK_EQUAL( expected, actual )
	other.setValue( 32767 );
	expected = -32767;
	actual = original.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: Assignment Test ----------------------------------------------------- */


/* Upper and Lower Bound Tests ---------------------------------------------- */

TEST( isLowerRangeBound, MxNumberStaffNumber )
{
	MxNumberStaffNumber object;
	bool expected = false;
	bool actual = object.isLowerRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeBound, MxNumberStaffNumber )
{
	MxNumberStaffNumber object;
	bool expected = false;
	bool actual = object.isUpperRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isLowerRangeLimitInclusive, MxNumberStaffNumber )
{
	MxNumberStaffNumber object;
	bool expected = true;
	bool actual = object.isLowerRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeLimitInclusive, MxNumberStaffNumber )
{
	MxNumberStaffNumber object;
	bool expected = true;
	bool actual = object.isUpperRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}

/* End: Upper and Lower Bound Tests ----------------------------------------- */


/* Documentation Tests ------------------------------------------------------ */

TEST( getXmlTypeName, MxNumberStaffNumber )
{
	MxNumberStaffNumber object;
	std::string expected = "staff-number";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName, MxNumberStaffNumber )
{
	MxNumberStaffNumber object;
	std::string expected = "MxNumberStaffNumber";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxNumberStaffNumber )
{
	MxNumberStaffNumber object;
	std::string expected = "The staff-number type indicates staff numbers within a multi-staff part. Staves are numbered from top to bottom, with 1 being the top staff on a part.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Documentation Tests ------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( getValue_setValue_n32767_32767, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( -32767 );
	int expected = -32767;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 32767 );
	expected = 32767;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_n32766_32766, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( -32766 );
	int expected = -32766;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 32766 );
	expected = 32766;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_n32765_32765, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( -32765 );
	int expected = -32765;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 32765 );
	expected = 32765;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_n32764_32764, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( -32764 );
	int expected = -32764;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 32764 );
	expected = 32764;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* stream Tests ------------------------------------------------------------- */

TEST( stream_n32767_32767, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( -32767 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "-32767";
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
TEST( stream_n32766_32766, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( -32766 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "-32766";
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
TEST( stream_n32765_32765, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( -32765 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "-32765";
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
TEST( stream_n32764_32764, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( -32764 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "-32764";
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

TEST( toString_32767, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( 32767 );
	std::string expected = "32767";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_n32766, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( -32766 );
	std::string expected = "-32766";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_32765, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( 32765 );
	std::string expected = "32765";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_n32764, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( -32764 );
	std::string expected = "-32764";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}

/* End: toString() Tests ---------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( fromString_n32767_32767, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( -32767 );
	std::stringstream ss1;
	std::string value1 = "32767";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 32767;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz -32767 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 32767;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_32766_n32766, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( 32766 );
	std::stringstream ss1;
	std::string value1 = "-32766";
	bool parseSucceeded = object.fromString( value1 );
	int expected = -32766;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 32766 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = -32766;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_n32765_32765, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( -32765 );
	std::stringstream ss1;
	std::string value1 = "32765";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 32765;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz -32765 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 32765;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}
TEST( fromString_32764_n32764, MxNumberStaffNumber )
{
	MxNumberStaffNumber object( 32764 );
	std::stringstream ss1;
	std::string value1 = "-32764";
	bool parseSucceeded = object.fromString( value1 );
	int expected = -32764;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 32764 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = -32764;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* Comparison Operators ----------------------------------------------------- */

TEST( operatorEqEq_N32767_N32766_false, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( -32767 );
	MxNumberStaffNumber object2( -32766 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_N32766_N32766_true, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( -32766 );
	MxNumberStaffNumber object2( -32766 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_N32765_N32766_false, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( -32765 );
	MxNumberStaffNumber object2( -32766 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_32766_32767_false, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( 32766 );
	MxNumberStaffNumber object2( 32767 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_32766_32766_true, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( 32766 );
	MxNumberStaffNumber object2( 32766 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_32766_32765_false, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( 32766 );
	MxNumberStaffNumber object2( 32765 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_N32767_N32766_true, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( -32767 );
	MxNumberStaffNumber object2( -32766 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_N32766_N32766_false, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( -32766 );
	MxNumberStaffNumber object2( -32766 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_N32765_N32766_true, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( -32765 );
	MxNumberStaffNumber object2( -32766 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_32766_32767_true, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( 32766 );
	MxNumberStaffNumber object2( 32767 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_32766_32766_false, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( 32766 );
	MxNumberStaffNumber object2( 32766 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_32766_32765_true, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( 32766 );
	MxNumberStaffNumber object2( 32765 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_N32767_N32766_false, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( -32767 );
	MxNumberStaffNumber object2( -32766 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_N32766_N32766_false, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( -32766 );
	MxNumberStaffNumber object2( -32766 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_N32765_N32766_true, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( -32765 );
	MxNumberStaffNumber object2( -32766 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_32766_32767_false, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( 32766 );
	MxNumberStaffNumber object2( 32767 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_32766_32766_false, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( 32766 );
	MxNumberStaffNumber object2( 32766 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_32766_32765_true, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( 32766 );
	MxNumberStaffNumber object2( 32765 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_N32767_N32766_false, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( -32767 );
	MxNumberStaffNumber object2( -32766 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_N32766_N32766_true, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( -32766 );
	MxNumberStaffNumber object2( -32766 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_N32765_N32766_true, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( -32765 );
	MxNumberStaffNumber object2( -32766 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_32766_32767_false, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( 32766 );
	MxNumberStaffNumber object2( 32767 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_32766_32766_true, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( 32766 );
	MxNumberStaffNumber object2( 32766 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_32766_32765_true, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( 32766 );
	MxNumberStaffNumber object2( 32765 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_N32767_N32766_true, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( -32767 );
	MxNumberStaffNumber object2( -32766 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_N32766_N32766_false, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( -32766 );
	MxNumberStaffNumber object2( -32766 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_N32765_N32766_false, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( -32765 );
	MxNumberStaffNumber object2( -32766 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_32766_32767_true, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( 32766 );
	MxNumberStaffNumber object2( 32767 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_32766_32766_false, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( 32766 );
	MxNumberStaffNumber object2( 32766 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_32766_32765_false, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( 32766 );
	MxNumberStaffNumber object2( 32765 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_N32767_N32766_true, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( -32767 );
	MxNumberStaffNumber object2( -32766 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_N32766_N32766_true, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( -32766 );
	MxNumberStaffNumber object2( -32766 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_N32765_N32766_false, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( -32765 );
	MxNumberStaffNumber object2( -32766 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_32766_32767_true, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( 32766 );
	MxNumberStaffNumber object2( 32767 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_32766_32766_true, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( 32766 );
	MxNumberStaffNumber object2( 32766 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_32766_32765_false, MxNumberStaffNumber )
{
	MxNumberStaffNumber object1( 32766 );
	MxNumberStaffNumber object2( 32765 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}

/* End: Comparison Operators ------------------------------------------------ */


