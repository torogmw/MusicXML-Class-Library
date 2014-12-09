/** *******************************************************
  * 
  * MxEmClefOctaveChangeTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmClefOctaveChange.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmClefOctaveChange )
{
	MxEmClefOctaveChange object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmClefOctaveChange )
{
	MxEmClefOctaveChange object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmClefOctaveChange )
{
	MxEmClefOctaveChange object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmClefOctaveChange )
{
	MxEmClefOctaveChange object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmClefOctaveChange )
{
	MxEmClefOctaveChange object( 0 );
	std::string expected;
	std::string actual;
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsInteger( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmClefOctaveChange )
{
	MxEmClefOctaveChange object( 2 );
	std::string expected;
	std::string actual;
	expected = "2";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsInteger( 3 ) );
	expected = "3";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmClefOctaveChange )
{
	MxEmClefOctaveChange object( 4 );
	std::string expected;
	std::string actual;
	expected = "4";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsInteger( 5 ) );
	expected = "5";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmClefOctaveChange )
{
	MxEmClefOctaveChange object( 6 );
	std::string expected;
	std::string actual;
	expected = "6";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsInteger( 7 ) );
	expected = "7";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmClefOctaveChange )
{
	MxEmClefOctaveChange object( 8 );
	std::string expected;
	std::string actual;
	expected = "8";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsInteger( 9 ) );
	expected = "9";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmClefOctaveChange )
{
	MxEmClefOctaveChange object;
	std::string expected = "MxEmClefOctaveChange";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmClefOctaveChange )
{
	MxEmClefOctaveChange object;
	std::string expected = "clef-octave-change";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmClefOctaveChange )
{
	MxEmClefOctaveChange object;
	std::string expected = "The clef-octave-change element is used for transposing clefs. A treble clef for tenors would have a value of -1.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmClefOctaveChange )
{
	MxEmClefOctaveChange object( 10 );
	std::string expected;
	std::string actual;
	expected = "<clef-octave-change>10</clef-octave-change>";
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


