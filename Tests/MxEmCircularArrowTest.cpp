/** *******************************************************
  * 
  * MxEmCircularArrowTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmCircularArrow.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmCircularArrow )
{
	MxEmCircularArrow object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmCircularArrow )
{
	MxEmCircularArrow object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmCircularArrow )
{
	MxEmCircularArrow object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmCircularArrow )
{
	MxEmCircularArrow object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmCircularArrow )
{
	MxEmCircularArrow object( lexicon::enums::CircularArrow::clockwise );
	std::string expected;
	std::string actual;
	expected = "clockwise";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumCircularArrow( lexicon::enums::CircularArrow::anticlockwise ) );
	expected = "anticlockwise";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmCircularArrow )
{
	MxEmCircularArrow object( lexicon::enums::CircularArrow::clockwise );
	std::string expected;
	std::string actual;
	expected = "clockwise";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumCircularArrow( lexicon::enums::CircularArrow::anticlockwise ) );
	expected = "anticlockwise";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmCircularArrow )
{
	MxEmCircularArrow object( lexicon::enums::CircularArrow::clockwise );
	std::string expected;
	std::string actual;
	expected = "clockwise";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumCircularArrow( lexicon::enums::CircularArrow::anticlockwise ) );
	expected = "anticlockwise";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmCircularArrow )
{
	MxEmCircularArrow object( lexicon::enums::CircularArrow::clockwise );
	std::string expected;
	std::string actual;
	expected = "clockwise";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumCircularArrow( lexicon::enums::CircularArrow::anticlockwise ) );
	expected = "anticlockwise";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmCircularArrow )
{
	MxEmCircularArrow object( lexicon::enums::CircularArrow::clockwise );
	std::string expected;
	std::string actual;
	expected = "clockwise";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumCircularArrow( lexicon::enums::CircularArrow::anticlockwise ) );
	expected = "anticlockwise";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmCircularArrow )
{
	MxEmCircularArrow object;
	std::string expected = "MxEmCircularArrow";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmCircularArrow )
{
	MxEmCircularArrow object;
	std::string expected = "circular-arrow";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmCircularArrow )
{
	MxEmCircularArrow object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmCircularArrow )
{
	MxEmCircularArrow object( lexicon::enums::CircularArrow::clockwise );
	std::string expected;
	std::string actual;
	expected = "<circular-arrow>clockwise</circular-arrow>";
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


