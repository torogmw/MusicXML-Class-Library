/** *******************************************************
  * 
  * MxEmDisplayStepTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmDisplayStep.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmDisplayStep )
{
	MxEmDisplayStep object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmDisplayStep )
{
	MxEmDisplayStep object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmDisplayStep )
{
	MxEmDisplayStep object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmDisplayStep )
{
	MxEmDisplayStep object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmDisplayStep )
{
	MxEmDisplayStep object( lexicon::enums::Step::a );
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
TEST( ctorValue2, MxEmDisplayStep )
{
	MxEmDisplayStep object( lexicon::enums::Step::c );
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
TEST( ctorValue4, MxEmDisplayStep )
{
	MxEmDisplayStep object( lexicon::enums::Step::e );
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
TEST( ctorValue6, MxEmDisplayStep )
{
	MxEmDisplayStep object( lexicon::enums::Step::g );
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
TEST( ctorValue8, MxEmDisplayStep )
{
	MxEmDisplayStep object( lexicon::enums::Step::b );
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

TEST( getClassName, MxEmDisplayStep )
{
	MxEmDisplayStep object;
	std::string expected = "MxEmDisplayStep";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmDisplayStep )
{
	MxEmDisplayStep object;
	std::string expected = "display-step";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmDisplayStep )
{
	MxEmDisplayStep object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmDisplayStep )
{
	MxEmDisplayStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	expected = "<display-step>D</display-step>";
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


