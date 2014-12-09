/** *******************************************************
  * 
  * MxEmPedalStepTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmPedalStep.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmPedalStep )
{
	MxEmPedalStep object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmPedalStep )
{
	MxEmPedalStep object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmPedalStep )
{
	MxEmPedalStep object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmPedalStep )
{
	MxEmPedalStep object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmPedalStep )
{
	MxEmPedalStep object( lexicon::enums::Step::a );
	std::string expected;
	std::string actual;
	expected = "A";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStep( lexicon::enums::Step::b ) );
	expected = "B";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmPedalStep )
{
	MxEmPedalStep object( lexicon::enums::Step::c );
	std::string expected;
	std::string actual;
	expected = "C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStep( lexicon::enums::Step::d ) );
	expected = "D";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmPedalStep )
{
	MxEmPedalStep object( lexicon::enums::Step::e );
	std::string expected;
	std::string actual;
	expected = "E";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStep( lexicon::enums::Step::f ) );
	expected = "F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmPedalStep )
{
	MxEmPedalStep object( lexicon::enums::Step::g );
	std::string expected;
	std::string actual;
	expected = "G";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStep( lexicon::enums::Step::a ) );
	expected = "A";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmPedalStep )
{
	MxEmPedalStep object( lexicon::enums::Step::b );
	std::string expected;
	std::string actual;
	expected = "B";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStep( lexicon::enums::Step::c ) );
	expected = "C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmPedalStep )
{
	MxEmPedalStep object;
	std::string expected = "MxEmPedalStep";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmPedalStep )
{
	MxEmPedalStep object;
	std::string expected = "pedal-step";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmPedalStep )
{
	MxEmPedalStep object;
	std::string expected = "The pedal-step element defines the pitch step for a single harp pedal.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmPedalStep )
{
	MxEmPedalStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	expected = "<pedal-step>D</pedal-step>";
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


