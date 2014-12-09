/** *******************************************************
  * 
  * MxEmBendAlterTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmBendAlter.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmBendAlter )
{
	MxEmBendAlter object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmBendAlter )
{
	MxEmBendAlter object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmBendAlter )
{
	MxEmBendAlter object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmBendAlter )
{
	MxEmBendAlter object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmBendAlter )
{
	MxEmBendAlter object( 1 );
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
TEST( ctorValue2, MxEmBendAlter )
{
	MxEmBendAlter object( -1000 );
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
TEST( ctorValue4, MxEmBendAlter )
{
	MxEmBendAlter object( -1000 );
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
TEST( ctorValue6, MxEmBendAlter )
{
	MxEmBendAlter object( -1000 );
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
TEST( ctorValue8, MxEmBendAlter )
{
	MxEmBendAlter object( -1000 );
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

TEST( getClassName, MxEmBendAlter )
{
	MxEmBendAlter object;
	std::string expected = "MxEmBendAlter";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmBendAlter )
{
	MxEmBendAlter object;
	std::string expected = "bend-alter";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmBendAlter )
{
	MxEmBendAlter object;
	std::string expected = "The bend-alter element indicates the number of steps in the bend, similar to the alter element. As with the alter element, numbers like 0.5 can be used to indicate microtones. Negative numbers indicate pre-bends or releases; the pre-bend and release elements are used to distinguish what is intended.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmBendAlter )
{
	MxEmBendAlter object( -1000 );
	std::string expected;
	std::string actual;
	expected = "<bend-alter>-1000</bend-alter>";
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


