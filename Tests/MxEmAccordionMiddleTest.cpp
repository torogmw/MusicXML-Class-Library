/** *******************************************************
  * 
  * MxEmAccordionMiddleTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmAccordionMiddle.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmAccordionMiddle )
{
	MxEmAccordionMiddle object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmAccordionMiddle )
{
	MxEmAccordionMiddle object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmAccordionMiddle )
{
	MxEmAccordionMiddle object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmAccordionMiddle )
{
	MxEmAccordionMiddle object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmAccordionMiddle )
{
	MxEmAccordionMiddle object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberAccordionMiddle( 2 ) );
	expected = "2";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmAccordionMiddle )
{
	MxEmAccordionMiddle object( 3 );
	std::string expected;
	std::string actual;
	expected = "3";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberAccordionMiddle( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmAccordionMiddle )
{
	MxEmAccordionMiddle object( 2 );
	std::string expected;
	std::string actual;
	expected = "2";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberAccordionMiddle( 3 ) );
	expected = "3";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmAccordionMiddle )
{
	MxEmAccordionMiddle object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberAccordionMiddle( 2 ) );
	expected = "2";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmAccordionMiddle )
{
	MxEmAccordionMiddle object( 3 );
	std::string expected;
	std::string actual;
	expected = "3";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberAccordionMiddle( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmAccordionMiddle )
{
	MxEmAccordionMiddle object;
	std::string expected = "MxEmAccordionMiddle";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmAccordionMiddle )
{
	MxEmAccordionMiddle object;
	std::string expected = "accordion-middle";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmAccordionMiddle )
{
	MxEmAccordionMiddle object;
	std::string expected = "The accordion-middle element indicates the presence of 1 to 3 dots in the middle (8') section of the registration symbol.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmAccordionMiddle )
{
	MxEmAccordionMiddle object( 2 );
	std::string expected;
	std::string actual;
	expected = "<accordion-middle>2</accordion-middle>";
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


