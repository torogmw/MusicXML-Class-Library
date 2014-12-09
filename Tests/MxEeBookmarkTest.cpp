/** *******************************************************
  * 
  * MxEeBookmarkTest.cpp
  * Created: 2014-12-05 16:47:07
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeBookmark.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeBookmark )
{
	MxEeBookmark object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected = ( XsId(  ) ).toString();
	std::string actual = object.getId().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getName().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected = ( XsNmToken(  ) ).toString();
	std::string actual = object.getElement().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected = ( XsPositiveInteger(  ) ).toString();
	std::string actual = object.getPosition().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeBookmark )
{
	MxEeBookmark object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeBookmark )
{
	MxEeBookmark object;
	int expected = 32767;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeBookmark )
{
	MxEeBookmark object;
	bool expected = true;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected = "MxEeBookmark";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected = "bookmark";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setId0, MxEeBookmark )
{
	XsId value1( "ID01" );
	XsId value2( "ID02" );
	CHECK( ( value1 != value2 ) )
	MxEeBookmark object;
	object.setId( value1 );
	XsId expected = value1;
	XsId actual = object.getId();
	CHECK_EQUAL( expected, actual )
	object.setId( value2 );
	expected = value2;
	actual = object.getId();
	CHECK_EQUAL( expected, actual )
}
TEST( setName1, MxEeBookmark )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxEeBookmark object;
	object.setName( value1 );
	XsToken expected = value1;
	XsToken actual = object.getName();
	CHECK_EQUAL( expected, actual )
	object.setName( value2 );
	expected = value2;
	actual = object.getName();
	CHECK_EQUAL( expected, actual )
}
TEST( setElement2, MxEeBookmark )
{
	XsNmToken value1( "TOKEN1" );
	XsNmToken value2( "TOKEN2" );
	CHECK( ( value1 != value2 ) )
	MxEeBookmark object;
	object.setElement( value1 );
	XsNmToken expected = value1;
	XsNmToken actual = object.getElement();
	CHECK_EQUAL( expected, actual )
	object.setElement( value2 );
	expected = value2;
	actual = object.getElement();
	CHECK_EQUAL( expected, actual )
}
TEST( setPosition3, MxEeBookmark )
{
	XsPositiveInteger value1( 1 );
	XsPositiveInteger value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEeBookmark object;
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

TEST( getIsIdRequired0, MxEeBookmark )
{
	MxEeBookmark object;
	bool expected = true;
	bool actual = object.getIsIdRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNameRequired1, MxEeBookmark )
{
	MxEeBookmark object;
	bool expected = false;
	bool actual = object.getIsNameRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsElementRequired2, MxEeBookmark )
{
	MxEeBookmark object;
	bool expected = false;
	bool actual = object.getIsElementRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPositionRequired3, MxEeBookmark )
{
	MxEeBookmark object;
	bool expected = false;
	bool actual = object.getIsPositionRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsIdPresent0, MxEeBookmark )
{
	MxEeBookmark object;
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
TEST( getIsNamePresent1, MxEeBookmark )
{
	MxEeBookmark object;
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
TEST( getIsElementPresent2, MxEeBookmark )
{
	MxEeBookmark object;
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
TEST( getIsPositionPresent3, MxEeBookmark )
{
	MxEeBookmark object;
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

TEST( getIsIdDefaultDefined, MxEeBookmark )
{
	MxEeBookmark object;
	bool expected = false;
	bool actual = object.getIsIdDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNameDefaultDefined, MxEeBookmark )
{
	MxEeBookmark object;
	bool expected = false;
	bool actual = object.getIsNameDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsElementDefaultDefined, MxEeBookmark )
{
	MxEeBookmark object;
	bool expected = false;
	bool actual = object.getIsElementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPositionDefaultDefined, MxEeBookmark )
{
	MxEeBookmark object;
	bool expected = false;
	bool actual = object.getIsPositionDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getIdDefaultValue, MxEeBookmark )
{
	MxEeBookmark object;
	XsId expected;
	XsId actual = object.getIdDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNameDefaultValue, MxEeBookmark )
{
	MxEeBookmark object;
	XsToken expected;
	XsToken actual = object.getNameDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getElementDefaultValue, MxEeBookmark )
{
	MxEeBookmark object;
	XsNmToken expected;
	XsNmToken actual = object.getElementDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPositionDefaultValue, MxEeBookmark )
{
	MxEeBookmark object;
	XsPositiveInteger expected;
	XsPositiveInteger actual = object.getPositionDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected;
	std::string actual;
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 103 ) );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	expected = "<bookmark id=\"\" name=\"\" element=\"XYZ\" position=\"103\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected;
	std::string actual;
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 104 ) );
	expected = "<bookmark id=\"\" name=\"\" element=\"ABC\" position=\"104\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected;
	std::string actual;
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 105 ) );
	expected = "<bookmark id=\"\" element=\"DEF\" position=\"105\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected;
	std::string actual;
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 106 ) );
	expected = "<bookmark id=\"\" position=\"106\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected;
	std::string actual;
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 107 ) );
	expected = "<bookmark id=\"\" name=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected;
	std::string actual;
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 108 ) );
	expected = "<bookmark id=\"\" name=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected;
	std::string actual;
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 109 ) );
	expected = "<bookmark id=\"\" element=\"XYZ\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected;
	std::string actual;
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 110 ) );
	expected = "<bookmark id=\"\" element=\"ABC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected;
	std::string actual;
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 111 ) );
	expected = "<bookmark id=\"\" name=\"\" position=\"111\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected;
	std::string actual;
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 112 ) );
	expected = "<bookmark id=\"\" position=\"112\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected;
	std::string actual;
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 113 ) );
	expected = "<bookmark id=\"\" position=\"113\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected;
	std::string actual;
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 114 ) );
	expected = "<bookmark id=\"\" name=\"\" element=\"DEF\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected;
	std::string actual;
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 115 ) );
	expected = "<bookmark id=\"\" name=\"\" element=\"XYZ\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected;
	std::string actual;
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 116 ) );
	expected = "<bookmark id=\"\" element=\"ABC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEeBookmark )
{
	MxEeBookmark object;
	std::string expected;
	std::string actual;
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setId( XsId( "" ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 117 ) );
	expected = "<bookmark id=\"\"/>";
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


