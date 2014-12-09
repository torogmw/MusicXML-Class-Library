/** *******************************************************
  * 
  * MxEmGlassTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmGlass.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmGlass )
{
	MxEmGlass object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmGlass )
{
	MxEmGlass object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmGlass )
{
	MxEmGlass object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmGlass )
{
	MxEmGlass object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmGlass )
{
	MxEmGlass object( lexicon::enums::Glass::windChimes );
	std::string expected;
	std::string actual;
	expected = "wind chimes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGlass( lexicon::enums::Glass::windChimes ) );
	expected = "wind chimes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmGlass )
{
	MxEmGlass object( lexicon::enums::Glass::windChimes );
	std::string expected;
	std::string actual;
	expected = "wind chimes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGlass( lexicon::enums::Glass::windChimes ) );
	expected = "wind chimes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmGlass )
{
	MxEmGlass object( lexicon::enums::Glass::windChimes );
	std::string expected;
	std::string actual;
	expected = "wind chimes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGlass( lexicon::enums::Glass::windChimes ) );
	expected = "wind chimes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmGlass )
{
	MxEmGlass object( lexicon::enums::Glass::windChimes );
	std::string expected;
	std::string actual;
	expected = "wind chimes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGlass( lexicon::enums::Glass::windChimes ) );
	expected = "wind chimes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmGlass )
{
	MxEmGlass object( lexicon::enums::Glass::windChimes );
	std::string expected;
	std::string actual;
	expected = "wind chimes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGlass( lexicon::enums::Glass::windChimes ) );
	expected = "wind chimes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmGlass )
{
	MxEmGlass object;
	std::string expected = "MxEmGlass";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmGlass )
{
	MxEmGlass object;
	std::string expected = "glass";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmGlass )
{
	MxEmGlass object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmGlass )
{
	MxEmGlass object( lexicon::enums::Glass::windChimes );
	std::string expected;
	std::string actual;
	expected = "<glass>wind chimes</glass>";
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


