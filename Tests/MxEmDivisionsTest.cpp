/** *******************************************************
  * 
  * MxEmDivisionsTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmDivisions.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmDivisions )
{
	MxEmDivisions object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmDivisions )
{
	MxEmDivisions object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmDivisions )
{
	MxEmDivisions object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmDivisions )
{
	MxEmDivisions object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmDivisions )
{
	MxEmDivisions object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberPositiveDivisions( 0.1 ) );
	expected = "0.1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmDivisions )
{
	MxEmDivisions object( 0.1 );
	std::string expected;
	std::string actual;
	expected = "0.1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberPositiveDivisions( 0.1 ) );
	expected = "0.1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmDivisions )
{
	MxEmDivisions object( 0.1 );
	std::string expected;
	std::string actual;
	expected = "0.1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberPositiveDivisions( 0.1 ) );
	expected = "0.1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmDivisions )
{
	MxEmDivisions object( 0.1 );
	std::string expected;
	std::string actual;
	expected = "0.1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberPositiveDivisions( 0.1 ) );
	expected = "0.1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmDivisions )
{
	MxEmDivisions object( 0.1 );
	std::string expected;
	std::string actual;
	expected = "0.1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberPositiveDivisions( 0.1 ) );
	expected = "0.1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmDivisions )
{
	MxEmDivisions object;
	std::string expected = "MxEmDivisions";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmDivisions )
{
	MxEmDivisions object;
	std::string expected = "divisions";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmDivisions )
{
	MxEmDivisions object;
	std::string expected = "Musical notation duration is commonly represented as fractions. The divisions element indicates how many divisions per quarter note are used to indicate a note's duration. For example, if duration = 1 and divisions = 2, this is an eighth note duration. Duration and divisions are used directly for generating sound output, so they must be chosen to take tuplets into account. Using a divisions element lets us use just one number to represent a duration for each note in the score, while retaining the full power of a fractional representation. If maximum compatibility with Standard MIDI 1.0 files is important, do not have the divisions value exceed 16383.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmDivisions )
{
	MxEmDivisions object( 0.1 );
	std::string expected;
	std::string actual;
	expected = "<divisions>0.1</divisions>";
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


