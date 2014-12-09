/** *******************************************************
  * 
  * MxEmPedalAlterTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmPedalAlter.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmPedalAlter )
{
	MxEmPedalAlter object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmPedalAlter )
{
	MxEmPedalAlter object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmPedalAlter )
{
	MxEmPedalAlter object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmPedalAlter )
{
	MxEmPedalAlter object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmPedalAlter )
{
	MxEmPedalAlter object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmPedalAlter )
{
	MxEmPedalAlter object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmPedalAlter )
{
	MxEmPedalAlter object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmPedalAlter )
{
	MxEmPedalAlter object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmPedalAlter )
{
	MxEmPedalAlter object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmPedalAlter )
{
	MxEmPedalAlter object;
	std::string expected = "MxEmPedalAlter";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmPedalAlter )
{
	MxEmPedalAlter object;
	std::string expected = "pedal-alter";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmPedalAlter )
{
	MxEmPedalAlter object;
	std::string expected = "The pedal-alter element defines the chromatic alteration for a single harp pedal.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmPedalAlter )
{
	MxEmPedalAlter object( -1000 );
	std::string expected;
	std::string actual;
	expected = "<pedal-alter>-1000</pedal-alter>";
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


