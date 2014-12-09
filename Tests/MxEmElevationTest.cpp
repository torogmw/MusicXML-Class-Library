/** *******************************************************
  * 
  * MxEmElevationTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmElevation.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmElevation )
{
	MxEmElevation object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmElevation )
{
	MxEmElevation object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmElevation )
{
	MxEmElevation object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmElevation )
{
	MxEmElevation object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmElevation )
{
	MxEmElevation object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberRotationDegrees( -180 ) );
	expected = "-180";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmElevation )
{
	MxEmElevation object( -180 );
	std::string expected;
	std::string actual;
	expected = "-180";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberRotationDegrees( -180 ) );
	expected = "-180";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmElevation )
{
	MxEmElevation object( -180 );
	std::string expected;
	std::string actual;
	expected = "-180";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberRotationDegrees( -180 ) );
	expected = "-180";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmElevation )
{
	MxEmElevation object( -180 );
	std::string expected;
	std::string actual;
	expected = "-180";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberRotationDegrees( -180 ) );
	expected = "-180";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmElevation )
{
	MxEmElevation object( -180 );
	std::string expected;
	std::string actual;
	expected = "-180";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberRotationDegrees( -180 ) );
	expected = "-180";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmElevation )
{
	MxEmElevation object;
	std::string expected = "MxEmElevation";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmElevation )
{
	MxEmElevation object;
	std::string expected = "elevation";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmElevation )
{
	MxEmElevation object;
	std::string expected = "The elevation and pan elements allow placing of sound in a 3-D space relative to the listener. Both are expressed in degrees ranging from -180 to 180. For elevation, 0 is level with the listener, 90 is directly above, and -90 is directly below.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmElevation )
{
	MxEmElevation object( -180 );
	std::string expected;
	std::string actual;
	expected = "<elevation>-180</elevation>";
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


