/** *******************************************************
  * 
  * MxEmPanTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmPan.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmPan )
{
	MxEmPan object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmPan )
{
	MxEmPan object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmPan )
{
	MxEmPan object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmPan )
{
	MxEmPan object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmPan )
{
	MxEmPan object( 1 );
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
TEST( ctorValue2, MxEmPan )
{
	MxEmPan object( -180 );
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
TEST( ctorValue4, MxEmPan )
{
	MxEmPan object( -180 );
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
TEST( ctorValue6, MxEmPan )
{
	MxEmPan object( -180 );
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
TEST( ctorValue8, MxEmPan )
{
	MxEmPan object( -180 );
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

TEST( getClassName, MxEmPan )
{
	MxEmPan object;
	std::string expected = "MxEmPan";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmPan )
{
	MxEmPan object;
	std::string expected = "pan";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmPan )
{
	MxEmPan object;
	std::string expected = "The pan and elevation elements allow placing of sound in a 3-D space relative to the listener. Both are expressed in degrees ranging from -180 to 180. For pan, 0 is straight ahead, -90 is hard left, 90 is hard right, and -180 and 180 are directly behind the listener.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmPan )
{
	MxEmPan object( -180 );
	std::string expected;
	std::string actual;
	expected = "<pan>-180</pan>";
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


