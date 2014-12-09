/** *******************************************************
  * 
  * MxEmEncodingDateTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmEncodingDate.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmEncodingDate )
{
	MxEmEncodingDate object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmEncodingDate )
{
	MxEmEncodingDate object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmEncodingDate )
{
	MxEmEncodingDate object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmEncodingDate )
{
	MxEmEncodingDate object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmEncodingDate )
{
	MxEmEncodingDate object( MxDate( "1900-01-01" ) );
	std::string expected;
	std::string actual;
	expected = "1900-01-01";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxDate( MxDate( "2014-12-06" ) ) );
	expected = "2014-12-06";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmEncodingDate )
{
	MxEmEncodingDate object( MxDate( "2013-01-31" ) );
	std::string expected;
	std::string actual;
	expected = "2013-01-31";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxDate( MxDate( "2012-05-01" ) ) );
	expected = "2012-05-01";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmEncodingDate )
{
	MxEmEncodingDate object( MxDate( "1930-11-27" ) );
	std::string expected;
	std::string actual;
	expected = "1930-11-27";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxDate( MxDate( "2014-12-06" ) ) );
	expected = "2014-12-06";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmEncodingDate )
{
	MxEmEncodingDate object( MxDate( "2013-01-31" ) );
	std::string expected;
	std::string actual;
	expected = "2013-01-31";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxDate( MxDate( "2012-05-01" ) ) );
	expected = "2012-05-01";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmEncodingDate )
{
	MxEmEncodingDate object( MxDate( "1930-11-27" ) );
	std::string expected;
	std::string actual;
	expected = "1930-11-27";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxDate( MxDate( "2014-12-06" ) ) );
	expected = "2014-12-06";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmEncodingDate )
{
	MxEmEncodingDate object;
	std::string expected = "MxEmEncodingDate";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmEncodingDate )
{
	MxEmEncodingDate object;
	std::string expected = "encoding-date";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmEncodingDate )
{
	MxEmEncodingDate object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmEncodingDate )
{
	MxEmEncodingDate object( MxDate( "2013-01-31" ) );
	std::string expected;
	std::string actual;
	expected = "<encoding-date>2013-01-31</encoding-date>";
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


