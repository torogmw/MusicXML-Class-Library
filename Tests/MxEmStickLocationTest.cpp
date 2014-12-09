/** *******************************************************
  * 
  * MxEmStickLocationTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmStickLocation.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmStickLocation )
{
	MxEmStickLocation object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmStickLocation )
{
	MxEmStickLocation object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmStickLocation )
{
	MxEmStickLocation object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmStickLocation )
{
	MxEmStickLocation object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmStickLocation )
{
	MxEmStickLocation object( lexicon::enums::StickLocation::center );
	std::string expected;
	std::string actual;
	expected = "center";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStickLocation( lexicon::enums::StickLocation::rim ) );
	expected = "rim";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmStickLocation )
{
	MxEmStickLocation object( lexicon::enums::StickLocation::cymbalBell );
	std::string expected;
	std::string actual;
	expected = "cymbal bell";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStickLocation( lexicon::enums::StickLocation::cymbalEdge ) );
	expected = "cymbal edge";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmStickLocation )
{
	MxEmStickLocation object( lexicon::enums::StickLocation::center );
	std::string expected;
	std::string actual;
	expected = "center";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStickLocation( lexicon::enums::StickLocation::rim ) );
	expected = "rim";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmStickLocation )
{
	MxEmStickLocation object( lexicon::enums::StickLocation::cymbalBell );
	std::string expected;
	std::string actual;
	expected = "cymbal bell";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStickLocation( lexicon::enums::StickLocation::cymbalEdge ) );
	expected = "cymbal edge";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmStickLocation )
{
	MxEmStickLocation object( lexicon::enums::StickLocation::center );
	std::string expected;
	std::string actual;
	expected = "center";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStickLocation( lexicon::enums::StickLocation::rim ) );
	expected = "rim";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmStickLocation )
{
	MxEmStickLocation object;
	std::string expected = "MxEmStickLocation";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmStickLocation )
{
	MxEmStickLocation object;
	std::string expected = "stick-location";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmStickLocation )
{
	MxEmStickLocation object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmStickLocation )
{
	MxEmStickLocation object( lexicon::enums::StickLocation::cymbalBell );
	std::string expected;
	std::string actual;
	expected = "<stick-location>cymbal bell</stick-location>";
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


