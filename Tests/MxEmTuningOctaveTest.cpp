/** *******************************************************
  * 
  * MxEmTuningOctaveTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmTuningOctave.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmTuningOctave )
{
	MxEmTuningOctave object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmTuningOctave )
{
	MxEmTuningOctave object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmTuningOctave )
{
	MxEmTuningOctave object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmTuningOctave )
{
	MxEmTuningOctave object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmTuningOctave )
{
	MxEmTuningOctave object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberOctave( 2 ) );
	expected = "2";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmTuningOctave )
{
	MxEmTuningOctave object( 3 );
	std::string expected;
	std::string actual;
	expected = "3";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberOctave( 4 ) );
	expected = "4";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmTuningOctave )
{
	MxEmTuningOctave object( 5 );
	std::string expected;
	std::string actual;
	expected = "5";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberOctave( 6 ) );
	expected = "6";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmTuningOctave )
{
	MxEmTuningOctave object( 7 );
	std::string expected;
	std::string actual;
	expected = "7";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberOctave( 8 ) );
	expected = "8";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmTuningOctave )
{
	MxEmTuningOctave object( 9 );
	std::string expected;
	std::string actual;
	expected = "9";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberOctave( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmTuningOctave )
{
	MxEmTuningOctave object;
	std::string expected = "MxEmTuningOctave";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmTuningOctave )
{
	MxEmTuningOctave object;
	std::string expected = "tuning-octave";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmTuningOctave )
{
	MxEmTuningOctave object;
	std::string expected = "The tuning-octave element is represented like the octave element, with a different name to reflect is different function.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmTuningOctave )
{
	MxEmTuningOctave object( 1 );
	std::string expected;
	std::string actual;
	expected = "<tuning-octave>1</tuning-octave>";
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


