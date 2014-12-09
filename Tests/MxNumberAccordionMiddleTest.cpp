/** *******************************************************
  * Class under test: MxNumberAccordionMiddle
  * *******************************************************
  * **/
#include <iostream>
#include <string>
#include <sstream>
#include "TestHarness.h"
#include "MxNumberAccordionMiddle.h"

using namespace std;
using namespace lexicon;

/* Constructor Tests -------------------------------------------------------- */

TEST( ctorDefault, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object;
	CHECK( true )
}
TEST( ctorValuen1, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object( -1 );
	bool expected = false;
	bool actual = object.getValue() == -1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue0, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object( 0 );
	bool expected = false;
	bool actual = object.getValue() == 0;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue1, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object( 1 );
	bool expected = true;
	bool actual = object.getValue() == 1;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object( 2 );
	bool expected = true;
	bool actual = object.getValue() == 2;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue3, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object( 3 );
	bool expected = true;
	bool actual = object.getValue() == 3;
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object( 4 );
	bool expected = false;
	bool actual = object.getValue() == 4;
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor Tests --------------------------------------------------- */


/* Assignment Test ---------------------------------------------------------- */

TEST( assignment, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle original( 1 );
	MxNumberAccordionMiddle other( 3 );
	other = original;
	int expected = 1;
	int actual = other.getValue();
	CHECK_EQUAL( expected, actual )
	other.setValue( 3 );
	expected = 1;
	actual = original.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: Assignment Test ----------------------------------------------------- */


/* Upper and Lower Bound Tests ---------------------------------------------- */

TEST( isLowerRangeBound, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object;
	bool expected = true;
	bool actual = object.isLowerRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeBound, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object;
	bool expected = true;
	bool actual = object.isUpperRangeBound();
	CHECK_EQUAL( expected, actual )
}
TEST( isLowerRangeLimitInclusive, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object;
	bool expected = true;
	bool actual = object.isLowerRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( isUpperRangeLimitInclusive, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object;
	bool expected = true;
	bool actual = object.isUpperRangeLimitInclusive();
	CHECK_EQUAL( expected, actual )
}
TEST( getLowerBound, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object;
	int expected = 1;
	int actual = object.getLowerBound();
	CHECK_EQUAL( expected, actual )
}
TEST( getUpperBound, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object;
	int expected = 3;
	int actual = object.getUpperBound();
	CHECK_EQUAL( expected, actual )
}

/* End: Upper and Lower Bound Tests ----------------------------------------- */


/* Documentation Tests ------------------------------------------------------ */

TEST( getXmlTypeName, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object;
	std::string expected = "accordion-middle";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object;
	std::string expected = "MxNumberAccordionMiddle";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object;
	std::string expected = "The accordion-middle type may have values of 1, 2, or 3, corresponding to having 1 to 3 dots in the middle section of the accordion registration symbol.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Documentation Tests ------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( getValue_setValue_1_3, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object( 1 );
	int expected = 1;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 3 );
	expected = 3;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValue_setValue_3_1, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object( 3 );
	int expected = 3;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( 1 );
	expected = 1;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* stream Tests ------------------------------------------------------------- */

TEST( stream_1_3, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object( 1 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "1";
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
TEST( stream_3_1, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object( 3 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "3";
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

/* End: stream Tests -------------------------------------------------------- */


/* toString() Tests --------------------------------------------------------- */

TEST( toString_3, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object( 3 );
	std::string expected = "3";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString_2, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object( 2 );
	std::string expected = "2";
	std::string actual = object.toString();
	CHECK_EQUAL( expected, actual )
}

/* End: toString() Tests ---------------------------------------------------- */


/* getValue() setValue() Tests ---------------------------------------------- */

TEST( fromString_1_3, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object( 1 );
	std::stringstream ss1;
	std::string value1 = "3";
	bool parseSucceeded = object.fromString( value1 );
	int expected = 3;
	int actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( parseSucceeded )
	std::string value2 = "xyz 1 %^$";
	parseSucceeded = object.fromString( value2 );
	expected = 3;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	CHECK( ! parseSucceeded )
}

/* End: getValue() setValue() Tests ----------------------------------------- */


/* Comparison Operators ----------------------------------------------------- */

TEST( operatorEqEq_1_2_false, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 1 );
	MxNumberAccordionMiddle object2( 2 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_2_2_true, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 2 );
	MxNumberAccordionMiddle object2( 2 );
	bool expected = true;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_3_2_false, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 3 );
	MxNumberAccordionMiddle object2( 2 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_2_3_false, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 2 );
	MxNumberAccordionMiddle object2( 3 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorEqEq_2_1_false, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 2 );
	MxNumberAccordionMiddle object2( 1 );
	bool expected = false;
	bool actual = ( object1 == object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_1_2_true, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 1 );
	MxNumberAccordionMiddle object2( 2 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_2_2_false, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 2 );
	MxNumberAccordionMiddle object2( 2 );
	bool expected = false;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_3_2_true, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 3 );
	MxNumberAccordionMiddle object2( 2 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_2_3_true, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 2 );
	MxNumberAccordionMiddle object2( 3 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorNotEq_2_1_true, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 2 );
	MxNumberAccordionMiddle object2( 1 );
	bool expected = true;
	bool actual = ( object1 != object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_1_2_false, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 1 );
	MxNumberAccordionMiddle object2( 2 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_2_2_false, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 2 );
	MxNumberAccordionMiddle object2( 2 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_3_2_true, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 3 );
	MxNumberAccordionMiddle object2( 2 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_2_3_false, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 2 );
	MxNumberAccordionMiddle object2( 3 );
	bool expected = false;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreater_2_1_true, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 2 );
	MxNumberAccordionMiddle object2( 1 );
	bool expected = true;
	bool actual = ( object1 > object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_1_2_false, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 1 );
	MxNumberAccordionMiddle object2( 2 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_2_2_true, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 2 );
	MxNumberAccordionMiddle object2( 2 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_3_2_true, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 3 );
	MxNumberAccordionMiddle object2( 2 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_2_3_false, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 2 );
	MxNumberAccordionMiddle object2( 3 );
	bool expected = false;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorGreaterOrEq_2_1_true, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 2 );
	MxNumberAccordionMiddle object2( 1 );
	bool expected = true;
	bool actual = ( object1 >= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_1_2_true, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 1 );
	MxNumberAccordionMiddle object2( 2 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_2_2_false, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 2 );
	MxNumberAccordionMiddle object2( 2 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_3_2_false, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 3 );
	MxNumberAccordionMiddle object2( 2 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_2_3_true, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 2 );
	MxNumberAccordionMiddle object2( 3 );
	bool expected = true;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLess_2_1_false, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 2 );
	MxNumberAccordionMiddle object2( 1 );
	bool expected = false;
	bool actual = ( object1 < object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_1_2_true, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 1 );
	MxNumberAccordionMiddle object2( 2 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_2_2_true, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 2 );
	MxNumberAccordionMiddle object2( 2 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_3_2_false, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 3 );
	MxNumberAccordionMiddle object2( 2 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_2_3_true, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 2 );
	MxNumberAccordionMiddle object2( 3 );
	bool expected = true;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}
TEST( operatorLessOrEq_2_1_false, MxNumberAccordionMiddle )
{
	MxNumberAccordionMiddle object1( 2 );
	MxNumberAccordionMiddle object2( 1 );
	bool expected = false;
	bool actual = ( object1 <= object2 );
	CHECK_EQUAL( expected, actual )
}

/* End: Comparison Operators ------------------------------------------------ */


