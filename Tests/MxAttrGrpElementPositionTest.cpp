/** *******************************************************
  * 
  * MxAttrGrpElementPositionTest.cpp
  * Created: 2014-11-28 19:17:16
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpElementPosition.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpElementPosition )
{
	MxAttrGrpElementPosition object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpElementPosition )
{
	MxAttrGrpElementPosition object;
	std::string expected = ( XsNmToken(  ) ).toString();
	std::string actual = object.getElement().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues1, MxAttrGrpElementPosition )
{
	MxAttrGrpElementPosition object;
	std::string expected = ( XsPositiveInteger(  ) ).toString();
	std::string actual = object.getPosition().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpElementPosition )
{
	MxAttrGrpElementPosition object;
	std::string expected = "MxAttrGrpElementPosition";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpElementPosition )
{
	MxAttrGrpElementPosition object;
	std::string expected = "element-position";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpElementPosition )
{
	MxAttrGrpElementPosition object;
	std::string expected = "The element and position attributes are new as of Version 2.0. They allow for bookmarks and links to be positioned at higher resolution than the level of music-data elements. When no element and position attributes are present, the bookmark or link element refers to the next sibling element in the MusicXML file. The element attribute specifies an element type for a descendant of the next sibling element that is not a link or bookmark. The position attribute specifies the position of this descendant element, where the first position is 1. The position attribute is ignored if the element attribute is not present. For instance, an element value of beam and a position value of 2 defines the link or bookmark to refer to the second beam descendant of the next sibling element that is not a link or bookmark. This is equivalent to an XPath test of [.//beam[2]] done in the context of the sibling element.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setElement0, MxAttrGrpElementPosition )
{
	XsNmToken value1( "TOKEN1" );
	XsNmToken value2( "TOKEN2" );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpElementPosition object;
	object.setElement( value1 );
	XsNmToken expected = value1;
	XsNmToken actual = object.getElement();
	CHECK_EQUAL( expected, actual )
	object.setElement( value2 );
	expected = value2;
	actual = object.getElement();
	CHECK_EQUAL( expected, actual )
}
TEST( setPosition1, MxAttrGrpElementPosition )
{
	XsPositiveInteger value1( 1 );
	XsPositiveInteger value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpElementPosition object;
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

TEST( getIsElementRequired0, MxAttrGrpElementPosition )
{
	MxAttrGrpElementPosition object;
	bool expected = false;
	bool actual = object.getIsElementRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPositionRequired1, MxAttrGrpElementPosition )
{
	MxAttrGrpElementPosition object;
	bool expected = false;
	bool actual = object.getIsPositionRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsElementPresent0, MxAttrGrpElementPosition )
{
	MxAttrGrpElementPosition object;
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
TEST( getIsPositionPresent1, MxAttrGrpElementPosition )
{
	MxAttrGrpElementPosition object;
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


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpElementPosition )
{
	MxAttrGrpElementPosition object;
	std::string expected;
	std::string actual;
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 2 ) );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	expected = "element=\"ABC\" position=\"2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpElementPosition )
{
	MxAttrGrpElementPosition object;
	std::string expected;
	std::string actual;
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 3 ) );
	expected = "position=\"3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxAttrGrpElementPosition )
{
	MxAttrGrpElementPosition object;
	std::string expected;
	std::string actual;
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 4 ) );
	expected = "element=\"XYZ\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxAttrGrpElementPosition )
{
	MxAttrGrpElementPosition object;
	std::string expected;
	std::string actual;
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 5 ) );
	expected = "";
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


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsElementDefaultDefined, MxAttrGrpElementPosition )
{
	MxAttrGrpElementPosition object;
	bool expected = false;
	bool actual = object.getIsElementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPositionDefaultDefined, MxAttrGrpElementPosition )
{
	MxAttrGrpElementPosition object;
	bool expected = false;
	bool actual = object.getIsPositionDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getElementDefaultValue, MxAttrGrpElementPosition )
{
	MxAttrGrpElementPosition object;
	XsNmToken expected;
	XsNmToken actual = object.getElementDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPositionDefaultValue, MxAttrGrpElementPosition )
{
	MxAttrGrpElementPosition object;
	XsPositiveInteger expected;
	XsPositiveInteger actual = object.getPositionDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


