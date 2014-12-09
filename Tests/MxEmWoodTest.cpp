/** *******************************************************
  * 
  * MxEmWoodTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmWood.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmWood )
{
	MxEmWood object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmWood )
{
	MxEmWood object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmWood )
{
	MxEmWood object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmWood )
{
	MxEmWood object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmWood )
{
	MxEmWood object( lexicon::enums::Wood::boardClapper );
	std::string expected;
	std::string actual;
	expected = "board clapper";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumWood( lexicon::enums::Wood::cabasa ) );
	expected = "cabasa";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmWood )
{
	MxEmWood object( lexicon::enums::Wood::castanets );
	std::string expected;
	std::string actual;
	expected = "castanets";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumWood( lexicon::enums::Wood::claves ) );
	expected = "claves";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmWood )
{
	MxEmWood object( lexicon::enums::Wood::guiro );
	std::string expected;
	std::string actual;
	expected = "guiro";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumWood( lexicon::enums::Wood::logDrum ) );
	expected = "log drum";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmWood )
{
	MxEmWood object( lexicon::enums::Wood::maraca );
	std::string expected;
	std::string actual;
	expected = "maraca";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumWood( lexicon::enums::Wood::maracas ) );
	expected = "maracas";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmWood )
{
	MxEmWood object( lexicon::enums::Wood::ratchet );
	std::string expected;
	std::string actual;
	expected = "ratchet";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumWood( lexicon::enums::Wood::sandpaperBlocks ) );
	expected = "sandpaper blocks";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmWood )
{
	MxEmWood object;
	std::string expected = "MxEmWood";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmWood )
{
	MxEmWood object;
	std::string expected = "wood";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmWood )
{
	MxEmWood object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmWood )
{
	MxEmWood object( lexicon::enums::Wood::slitDrum );
	std::string expected;
	std::string actual;
	expected = "<wood>slit drum</wood>";
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


