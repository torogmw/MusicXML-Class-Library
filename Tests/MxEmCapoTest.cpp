/** *******************************************************
  * 
  * MxEmCapoTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmCapo.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmCapo )
{
	MxEmCapo object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmCapo )
{
	MxEmCapo object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmCapo )
{
	MxEmCapo object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmCapo )
{
	MxEmCapo object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmCapo )
{
	MxEmCapo object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsNonNegativeInteger( 2 ) );
	expected = "2";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmCapo )
{
	MxEmCapo object( 3 );
	std::string expected;
	std::string actual;
	expected = "3";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsNonNegativeInteger( 4 ) );
	expected = "4";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmCapo )
{
	MxEmCapo object( 5 );
	std::string expected;
	std::string actual;
	expected = "5";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsNonNegativeInteger( 6 ) );
	expected = "6";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmCapo )
{
	MxEmCapo object( 7 );
	std::string expected;
	std::string actual;
	expected = "7";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsNonNegativeInteger( 8 ) );
	expected = "8";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmCapo )
{
	MxEmCapo object( 9 );
	std::string expected;
	std::string actual;
	expected = "9";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsNonNegativeInteger( 10 ) );
	expected = "10";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmCapo )
{
	MxEmCapo object;
	std::string expected = "MxEmCapo";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmCapo )
{
	MxEmCapo object;
	std::string expected = "capo";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmCapo )
{
	MxEmCapo object;
	std::string expected = "The capo element indicates at which fret a capo should be placed on a fretted instrument. This changes the open tuning of the strings specified by staff-tuning by the specified number of half-steps.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmCapo )
{
	MxEmCapo object( 11 );
	std::string expected;
	std::string actual;
	expected = "<capo>11</capo>";
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


