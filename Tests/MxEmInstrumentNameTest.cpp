/** *******************************************************
  * 
  * MxEmInstrumentNameTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmInstrumentName.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmInstrumentName )
{
	MxEmInstrumentName object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmInstrumentName )
{
	MxEmInstrumentName object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmInstrumentName )
{
	MxEmInstrumentName object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmInstrumentName )
{
	MxEmInstrumentName object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmInstrumentName )
{
	MxEmInstrumentName object( XsString( "" ) );
	std::string expected;
	std::string actual;
	expected = "";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "A,B,C" ) ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmInstrumentName )
{
	MxEmInstrumentName object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "D,E,F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "WOOF" ) ) );
	expected = "WOOF";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmInstrumentName )
{
	MxEmInstrumentName object( XsString( "X,Y,Z" ) );
	std::string expected;
	std::string actual;
	expected = "X,Y,Z";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "A,B,C" ) ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmInstrumentName )
{
	MxEmInstrumentName object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "D,E,F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "WOOF" ) ) );
	expected = "WOOF";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmInstrumentName )
{
	MxEmInstrumentName object( XsString( "X,Y,Z" ) );
	std::string expected;
	std::string actual;
	expected = "X,Y,Z";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "A,B,C" ) ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmInstrumentName )
{
	MxEmInstrumentName object;
	std::string expected = "MxEmInstrumentName";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmInstrumentName )
{
	MxEmInstrumentName object;
	std::string expected = "instrument-name";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmInstrumentName )
{
	MxEmInstrumentName object;
	std::string expected = "The instrument-name element is typically used within a software application, rather than appearing on the printed page of a score.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmInstrumentName )
{
	MxEmInstrumentName object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "<instrument-name>D,E,F</instrument-name>";
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


