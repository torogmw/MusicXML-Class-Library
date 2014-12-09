/** *******************************************************
  * 
  * MxEmKeyStepTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmKeyStep.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmKeyStep )
{
	MxEmKeyStep object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmKeyStep )
{
	MxEmKeyStep object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmKeyStep )
{
	MxEmKeyStep object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmKeyStep )
{
	MxEmKeyStep object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmKeyStep )
{
	MxEmKeyStep object( lexicon::enums::Step::a );
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
TEST( ctorValue2, MxEmKeyStep )
{
	MxEmKeyStep object( lexicon::enums::Step::c );
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
TEST( ctorValue4, MxEmKeyStep )
{
	MxEmKeyStep object( lexicon::enums::Step::e );
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
TEST( ctorValue6, MxEmKeyStep )
{
	MxEmKeyStep object( lexicon::enums::Step::g );
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
TEST( ctorValue8, MxEmKeyStep )
{
	MxEmKeyStep object( lexicon::enums::Step::b );
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

TEST( getClassName, MxEmKeyStep )
{
	MxEmKeyStep object;
	std::string expected = "MxEmKeyStep";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmKeyStep )
{
	MxEmKeyStep object;
	std::string expected = "key-step";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmKeyStep )
{
	MxEmKeyStep object;
	std::string expected = "Non-traditional key signatures can be represented using the Humdrum/Scot concept of a list of altered tones. The key-step element indicates the pitch step to be altered, represented using the same names as in the step element.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmKeyStep )
{
	MxEmKeyStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	expected = "<key-step>D</key-step>";
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


