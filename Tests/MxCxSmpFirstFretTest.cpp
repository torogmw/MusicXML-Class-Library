/** *******************************************************
  * 
  * MxCxSmpFirstFretTest.cpp
  * Created: 2014-12-02 17:31:52
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpFirstFret.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getText().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object;
	std::string expected = ( MxEnumLeftRight(  ) ).toString();
	std::string actual = object.getLocation().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsPositiveInteger( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsPositiveInteger( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsPositiveInteger( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsPositiveInteger( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsPositiveInteger( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object;
	std::string expected = "MxCxSmpFirstFret";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object;
	std::string expected = "first-fret";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object;
	std::string expected = "The first-fret type indicates which fret is shown in the top space of the frame; it is fret 1 if the element is not present. The optional text attribute indicates how this is represented in the fret diagram, while the location attribute indicates whether the text appears to the left or right of the frame.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setText0, MxCxSmpFirstFret )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFirstFret object;
	object.setText( value1 );
	XsToken expected = value1;
	XsToken actual = object.getText();
	CHECK_EQUAL( expected, actual )
	object.setText( value2 );
	expected = value2;
	actual = object.getText();
	CHECK_EQUAL( expected, actual )
}
TEST( setLocation1, MxCxSmpFirstFret )
{
	MxEnumLeftRight value1( lexicon::enums::LeftRight::right );
	MxEnumLeftRight value2( lexicon::enums::LeftRight::left );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFirstFret object;
	object.setLocation( value1 );
	MxEnumLeftRight expected = value1;
	MxEnumLeftRight actual = object.getLocation();
	CHECK_EQUAL( expected, actual )
	object.setLocation( value2 );
	expected = value2;
	actual = object.getLocation();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsTextRequired0, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object;
	bool expected = false;
	bool actual = object.getIsTextRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLocationRequired1, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object;
	bool expected = false;
	bool actual = object.getIsLocationRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTextPresent0, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object;
	bool expected = false;
	bool actual = object.getIsTextPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTextPresent( true );
	expected = true;
	actual = object.getIsTextPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTextPresent( false );
	expected = false;
	actual = object.getIsTextPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLocationPresent1, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object;
	bool expected = false;
	bool actual = object.getIsLocationPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLocationPresent( true );
	expected = true;
	actual = object.getIsLocationPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLocationPresent( false );
	expected = false;
	actual = object.getIsLocationPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setText( XsToken( "" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	object.setIsTextPresent( true );
	object.setIsLocationPresent( true );
	expected = "<booksmart text=\"\" location=\"left\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsLocationPresent( true );
	object.setText( XsToken( "" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet location=\"left\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsLocationPresent( false );
	object.setText( XsToken( "" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard text=\"\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsLocationPresent( false );
	object.setText( XsToken( "" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop>1</bishop>";
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

TEST( getIsTextDefaultDefined, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object;
	bool expected = false;
	bool actual = object.getIsTextDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLocationDefaultDefined, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object;
	bool expected = false;
	bool actual = object.getIsLocationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTextDefaultValue, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object;
	XsToken expected;
	XsToken actual = object.getTextDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLocationDefaultValue, MxCxSmpFirstFret )
{
	MxCxSmpFirstFret object;
	MxEnumLeftRight expected;
	MxEnumLeftRight actual = object.getLocationDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


