/** *******************************************************
  * 
  * MxEmPitchedTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmPitched.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmPitched )
{
	MxEmPitched object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmPitched )
{
	MxEmPitched object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmPitched )
{
	MxEmPitched object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmPitched )
{
	MxEmPitched object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmPitched )
{
	MxEmPitched object( lexicon::enums::Pitched::chimes );
	std::string expected;
	std::string actual;
	expected = "chimes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumPitched( lexicon::enums::Pitched::glockenspiel ) );
	expected = "glockenspiel";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmPitched )
{
	MxEmPitched object( lexicon::enums::Pitched::mallet );
	std::string expected;
	std::string actual;
	expected = "mallet";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumPitched( lexicon::enums::Pitched::marimba ) );
	expected = "marimba";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmPitched )
{
	MxEmPitched object( lexicon::enums::Pitched::tubularChimes );
	std::string expected;
	std::string actual;
	expected = "tubular chimes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumPitched( lexicon::enums::Pitched::vibraphone ) );
	expected = "vibraphone";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmPitched )
{
	MxEmPitched object( lexicon::enums::Pitched::xylophone );
	std::string expected;
	std::string actual;
	expected = "xylophone";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumPitched( lexicon::enums::Pitched::chimes ) );
	expected = "chimes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmPitched )
{
	MxEmPitched object( lexicon::enums::Pitched::glockenspiel );
	std::string expected;
	std::string actual;
	expected = "glockenspiel";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumPitched( lexicon::enums::Pitched::mallet ) );
	expected = "mallet";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmPitched )
{
	MxEmPitched object;
	std::string expected = "MxEmPitched";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmPitched )
{
	MxEmPitched object;
	std::string expected = "pitched";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmPitched )
{
	MxEmPitched object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmPitched )
{
	MxEmPitched object( lexicon::enums::Pitched::marimba );
	std::string expected;
	std::string actual;
	expected = "<pitched>marimba</pitched>";
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


