/** *******************************************************
  * 
  * MxEmBottomMarginTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmBottomMargin.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmBottomMargin )
{
	MxEmBottomMargin object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmBottomMargin )
{
	MxEmBottomMargin object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmBottomMargin )
{
	MxEmBottomMargin object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmBottomMargin )
{
	MxEmBottomMargin object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmBottomMargin )
{
	MxEmBottomMargin object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberTenths( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmBottomMargin )
{
	MxEmBottomMargin object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberTenths( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmBottomMargin )
{
	MxEmBottomMargin object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberTenths( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmBottomMargin )
{
	MxEmBottomMargin object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberTenths( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmBottomMargin )
{
	MxEmBottomMargin object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberTenths( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmBottomMargin )
{
	MxEmBottomMargin object;
	std::string expected = "MxEmBottomMargin";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmBottomMargin )
{
	MxEmBottomMargin object;
	std::string expected = "bottom-margin";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmBottomMargin )
{
	MxEmBottomMargin object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmBottomMargin )
{
	MxEmBottomMargin object( -1000 );
	std::string expected;
	std::string actual;
	expected = "<bottom-margin>-1000</bottom-margin>";
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


