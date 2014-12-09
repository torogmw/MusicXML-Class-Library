/** *******************************************************
  * 
  * MxEmDiatonicTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmDiatonic.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmDiatonic )
{
	MxEmDiatonic object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmDiatonic )
{
	MxEmDiatonic object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmDiatonic )
{
	MxEmDiatonic object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmDiatonic )
{
	MxEmDiatonic object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmDiatonic )
{
	MxEmDiatonic object( 0 );
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
TEST( ctorValue2, MxEmDiatonic )
{
	MxEmDiatonic object( 2 );
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
TEST( ctorValue4, MxEmDiatonic )
{
	MxEmDiatonic object( 4 );
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
TEST( ctorValue6, MxEmDiatonic )
{
	MxEmDiatonic object( 6 );
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
TEST( ctorValue8, MxEmDiatonic )
{
	MxEmDiatonic object( 8 );
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

TEST( getClassName, MxEmDiatonic )
{
	MxEmDiatonic object;
	std::string expected = "MxEmDiatonic";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmDiatonic )
{
	MxEmDiatonic object;
	std::string expected = "diatonic";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmDiatonic )
{
	MxEmDiatonic object;
	std::string expected = "The diatonic element specifies the number of pitch steps needed to go from written to sounding pitch. This allows for correct spelling of enharmonic transpositions.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmDiatonic )
{
	MxEmDiatonic object( 10 );
	std::string expected;
	std::string actual;
	expected = "<diatonic>10</diatonic>";
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


