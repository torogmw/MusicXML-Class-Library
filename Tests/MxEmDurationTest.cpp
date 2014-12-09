/** *******************************************************
  * 
  * MxEmDurationTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmDuration.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmDuration )
{
	MxEmDuration object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmDuration )
{
	MxEmDuration object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmDuration )
{
	MxEmDuration object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmDuration )
{
	MxEmDuration object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmDuration )
{
	MxEmDuration object( 1 );
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
TEST( ctorValue2, MxEmDuration )
{
	MxEmDuration object( 0.1 );
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
TEST( ctorValue4, MxEmDuration )
{
	MxEmDuration object( 0.1 );
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
TEST( ctorValue6, MxEmDuration )
{
	MxEmDuration object( 0.1 );
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
TEST( ctorValue8, MxEmDuration )
{
	MxEmDuration object( 0.1 );
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

TEST( getClassName, MxEmDuration )
{
	MxEmDuration object;
	std::string expected = "MxEmDuration";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmDuration )
{
	MxEmDuration object;
	std::string expected = "duration";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmDuration )
{
	MxEmDuration object;
	std::string expected = "Duration is a positive number specified in division units. This is the intended duration vs. notated duration (for instance, swing eighths vs. even eighths, or differences in dotted notes in Baroque-era music). Differences in duration specific to an interpretation or performance should use the note element's attack and release attributes.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmDuration )
{
	MxEmDuration object( 0.1 );
	std::string expected;
	std::string actual;
	expected = "<duration>0.1</duration>";
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


