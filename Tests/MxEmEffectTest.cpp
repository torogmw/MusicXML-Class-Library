/** *******************************************************
  * 
  * MxEmEffectTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmEffect.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmEffect )
{
	MxEmEffect object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmEffect )
{
	MxEmEffect object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmEffect )
{
	MxEmEffect object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmEffect )
{
	MxEmEffect object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmEffect )
{
	MxEmEffect object( lexicon::enums::Effect::anvil );
	std::string expected;
	std::string actual;
	expected = "anvil";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumEffect( lexicon::enums::Effect::autoHorn ) );
	expected = "auto horn";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmEffect )
{
	MxEmEffect object( lexicon::enums::Effect::birdWhistle );
	std::string expected;
	std::string actual;
	expected = "bird whistle";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumEffect( lexicon::enums::Effect::cannon ) );
	expected = "cannon";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmEffect )
{
	MxEmEffect object( lexicon::enums::Effect::duckCall );
	std::string expected;
	std::string actual;
	expected = "duck call";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumEffect( lexicon::enums::Effect::gunShot ) );
	expected = "gun shot";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmEffect )
{
	MxEmEffect object( lexicon::enums::Effect::klaxonHorn );
	std::string expected;
	std::string actual;
	expected = "klaxon horn";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumEffect( lexicon::enums::Effect::lionsRoar ) );
	expected = "lions roar";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmEffect )
{
	MxEmEffect object( lexicon::enums::Effect::policeWhistle );
	std::string expected;
	std::string actual;
	expected = "police whistle";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumEffect( lexicon::enums::Effect::siren ) );
	expected = "siren";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmEffect )
{
	MxEmEffect object;
	std::string expected = "MxEmEffect";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmEffect )
{
	MxEmEffect object;
	std::string expected = "effect";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmEffect )
{
	MxEmEffect object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmEffect )
{
	MxEmEffect object( lexicon::enums::Effect::slideWhistle );
	std::string expected;
	std::string actual;
	expected = "<effect>slide whistle</effect>";
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


