/** *******************************************************
  * 
  * MxEmModeTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmMode.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmMode )
{
	MxEmMode object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmMode )
{
	MxEmMode object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmMode )
{
	MxEmMode object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmMode )
{
	MxEmMode object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmMode )
{
	MxEmMode object( lexicon::enums::Mode::major );
	std::string expected;
	std::string actual;
	expected = "major";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumMode( lexicon::enums::Mode::minor ) );
	expected = "minor";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmMode )
{
	MxEmMode object( lexicon::enums::Mode::dorian );
	std::string expected;
	std::string actual;
	expected = "dorian";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumMode( lexicon::enums::Mode::phrygian ) );
	expected = "phrygian";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmMode )
{
	MxEmMode object( lexicon::enums::Mode::lydian );
	std::string expected;
	std::string actual;
	expected = "lydian";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumMode( lexicon::enums::Mode::mixolydian ) );
	expected = "mixolydian";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmMode )
{
	MxEmMode object( lexicon::enums::Mode::aeolian );
	std::string expected;
	std::string actual;
	expected = "aeolian";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumMode( lexicon::enums::Mode::ionian ) );
	expected = "ionian";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmMode )
{
	MxEmMode object( lexicon::enums::Mode::locrian );
	std::string expected;
	std::string actual;
	expected = "locrian";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumMode( lexicon::enums::Mode::none ) );
	expected = "none";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmMode )
{
	MxEmMode object;
	std::string expected = "MxEmMode";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmMode )
{
	MxEmMode object;
	std::string expected = "mode";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmMode )
{
	MxEmMode object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmMode )
{
	MxEmMode object( lexicon::enums::Mode::other );
	std::string expected;
	std::string actual;
	expected = "<mode>other</mode>";
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


