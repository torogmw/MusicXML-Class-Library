/** *******************************************************
  * 
  * MxEmStaffTypeTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmStaffType.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmStaffType )
{
	MxEmStaffType object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmStaffType )
{
	MxEmStaffType object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmStaffType )
{
	MxEmStaffType object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmStaffType )
{
	MxEmStaffType object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmStaffType )
{
	MxEmStaffType object( lexicon::enums::StaffType::ossia );
	std::string expected;
	std::string actual;
	expected = "ossia";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStaffType( lexicon::enums::StaffType::cue ) );
	expected = "cue";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmStaffType )
{
	MxEmStaffType object( lexicon::enums::StaffType::editorial );
	std::string expected;
	std::string actual;
	expected = "editorial";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStaffType( lexicon::enums::StaffType::regular ) );
	expected = "regular";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmStaffType )
{
	MxEmStaffType object( lexicon::enums::StaffType::alternate );
	std::string expected;
	std::string actual;
	expected = "alternate";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStaffType( lexicon::enums::StaffType::ossia ) );
	expected = "ossia";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmStaffType )
{
	MxEmStaffType object( lexicon::enums::StaffType::cue );
	std::string expected;
	std::string actual;
	expected = "cue";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStaffType( lexicon::enums::StaffType::editorial ) );
	expected = "editorial";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmStaffType )
{
	MxEmStaffType object( lexicon::enums::StaffType::regular );
	std::string expected;
	std::string actual;
	expected = "regular";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStaffType( lexicon::enums::StaffType::alternate ) );
	expected = "alternate";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmStaffType )
{
	MxEmStaffType object;
	std::string expected = "MxEmStaffType";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmStaffType )
{
	MxEmStaffType object;
	std::string expected = "staff-type";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmStaffType )
{
	MxEmStaffType object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmStaffType )
{
	MxEmStaffType object( lexicon::enums::StaffType::ossia );
	std::string expected;
	std::string actual;
	expected = "<staff-type>ossia</staff-type>";
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


