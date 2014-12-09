/** *******************************************************
  * 
  * MxEmStaffSizeTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmStaffSize.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmStaffSize )
{
	MxEmStaffSize object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmStaffSize )
{
	MxEmStaffSize object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmStaffSize )
{
	MxEmStaffSize object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmStaffSize )
{
	MxEmStaffSize object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmStaffSize )
{
	MxEmStaffSize object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberNonNegativeDecimal( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmStaffSize )
{
	MxEmStaffSize object( 0 );
	std::string expected;
	std::string actual;
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberNonNegativeDecimal( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmStaffSize )
{
	MxEmStaffSize object( 0 );
	std::string expected;
	std::string actual;
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberNonNegativeDecimal( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmStaffSize )
{
	MxEmStaffSize object( 0 );
	std::string expected;
	std::string actual;
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberNonNegativeDecimal( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmStaffSize )
{
	MxEmStaffSize object( 0 );
	std::string expected;
	std::string actual;
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberNonNegativeDecimal( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmStaffSize )
{
	MxEmStaffSize object;
	std::string expected = "MxEmStaffSize";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmStaffSize )
{
	MxEmStaffSize object;
	std::string expected = "staff-size";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmStaffSize )
{
	MxEmStaffSize object;
	std::string expected = "The staff-size element indicates how large a staff space is on this staff, expressed as a percentage of the work's default scaling. Values less than 100 make the staff space smaller while values over 100 make the staff space larger. A staff-type of cue, ossia, or editorial implies a staff-size of less than 100, but the exact value is implementation-dependent unless specified here. Staff size affects staff height only, not the relationship of the staff to the left and right margins.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmStaffSize )
{
	MxEmStaffSize object( 0 );
	std::string expected;
	std::string actual;
	expected = "<staff-size>0</staff-size>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}

/* End: toString ------------------------------------------------------------ */


