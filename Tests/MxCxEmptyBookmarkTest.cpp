/** *******************************************************
  * 
  * MxCxEmptyBookmarkTest.cpp
  * Created: 2014-12-03 16:31:29
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyBookmark.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	std::string expected = ( XsId(  ) ).toString();
	std::string actual = object.getId().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getName().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	std::string expected = ( XsNmToken(  ) ).toString();
	std::string actual = object.getElement().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	std::string expected = ( XsPositiveInteger(  ) ).toString();
	std::string actual = object.getPosition().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	std::string expected = "MxCxEmptyBookmark";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	std::string expected = "bookmark";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	std::string expected = "The bookmark type serves as a well-defined target for an incoming simple XLink.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setId0, MxCxEmptyBookmark )
{
	XsId value1( "ID01" );
	XsId value2( "ID02" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyBookmark object;
	object.setId( value1 );
	XsId expected = value1;
	XsId actual = object.getId();
	CHECK_EQUAL( expected, actual )
	object.setId( value2 );
	expected = value2;
	actual = object.getId();
	CHECK_EQUAL( expected, actual )
}
TEST( setName1, MxCxEmptyBookmark )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyBookmark object;
	object.setName( value1 );
	XsToken expected = value1;
	XsToken actual = object.getName();
	CHECK_EQUAL( expected, actual )
	object.setName( value2 );
	expected = value2;
	actual = object.getName();
	CHECK_EQUAL( expected, actual )
}
TEST( setElement2, MxCxEmptyBookmark )
{
	XsNmToken value1( "TOKEN1" );
	XsNmToken value2( "TOKEN2" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyBookmark object;
	object.setElement( value1 );
	XsNmToken expected = value1;
	XsNmToken actual = object.getElement();
	CHECK_EQUAL( expected, actual )
	object.setElement( value2 );
	expected = value2;
	actual = object.getElement();
	CHECK_EQUAL( expected, actual )
}
TEST( setPosition3, MxCxEmptyBookmark )
{
	XsPositiveInteger value1( 1 );
	XsPositiveInteger value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyBookmark object;
	object.setPosition( value1 );
	XsPositiveInteger expected = value1;
	XsPositiveInteger actual = object.getPosition();
	CHECK_EQUAL( expected, actual )
	object.setPosition( value2 );
	expected = value2;
	actual = object.getPosition();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsIdRequired0, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	bool expected = true;
	bool actual = object.getIsIdRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNameRequired1, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	bool expected = false;
	bool actual = object.getIsNameRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsElementRequired2, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	bool expected = false;
	bool actual = object.getIsElementRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPositionRequired3, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	bool expected = false;
	bool actual = object.getIsPositionRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsIdPresent0, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	bool expected = true;
	bool actual = object.getIsIdPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsIdPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsIdPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNamePresent1, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	bool expected = false;
	bool actual = object.getIsNamePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNamePresent( true );
	expected = true;
	actual = object.getIsNamePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNamePresent( false );
	expected = false;
	actual = object.getIsNamePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsElementPresent2, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	bool expected = false;
	bool actual = object.getIsElementPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsElementPresent( true );
	expected = true;
	actual = object.getIsElementPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsElementPresent( false );
	expected = false;
	actual = object.getIsElementPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPositionPresent3, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	bool expected = false;
	bool actual = object.getIsPositionPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPositionPresent( true );
	expected = true;
	actual = object.getIsPositionPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPositionPresent( false );
	expected = false;
	actual = object.getIsPositionPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsIdDefaultDefined, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	bool expected = false;
	bool actual = object.getIsIdDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNameDefaultDefined, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	bool expected = false;
	bool actual = object.getIsNameDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsElementDefaultDefined, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	bool expected = false;
	bool actual = object.getIsElementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPositionDefaultDefined, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	bool expected = false;
	bool actual = object.getIsPositionDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getIdDefaultValue, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	XsId expected;
	XsId actual = object.getIdDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNameDefaultValue, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	XsToken expected;
	XsToken actual = object.getNameDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getElementDefaultValue, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	XsNmToken expected;
	XsNmToken actual = object.getElementDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPositionDefaultValue, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object;
	XsPositiveInteger expected;
	XsPositiveInteger actual = object.getPositionDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 2 ) );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	expected = "<booksmart id=\"\" name=\"\" element=\"ABC\" position=\"2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 3 ) );
	expected = "<quiet id=\"\" name=\"\" element=\"DEF\" position=\"3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 4 ) );
	expected = "<musicxmlishard id=\"\" element=\"XYZ\" position=\"4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 5 ) );
	expected = "<bishop id=\"\" position=\"5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 6 ) );
	expected = "<charlie id=\"\" name=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 7 ) );
	expected = "<booksmart id=\"\" name=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 8 ) );
	expected = "<quiet id=\"\" element=\"ABC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 9 ) );
	expected = "<musicxmlishard id=\"\" element=\"DEF\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 10 ) );
	expected = "<bishop id=\"\" name=\"\" position=\"10\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 11 ) );
	expected = "<charlie id=\"\" position=\"11\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 12 ) );
	expected = "<booksmart id=\"\" position=\"12\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 13 ) );
	expected = "<quiet id=\"\" name=\"\" element=\"XYZ\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 14 ) );
	expected = "<musicxmlishard id=\"\" name=\"\" element=\"ABC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 15 ) );
	expected = "<bishop id=\"\" element=\"DEF\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxEmptyBookmark )
{
	MxCxEmptyBookmark object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 16 ) );
	expected = "<charlie id=\"\"/>";
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


