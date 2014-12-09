/** *******************************************************
  * 
  * MxEsFirstFretTest.cpp
  * Created: 2014-12-05 20:57:54
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsFirstFret.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsFirstFret )
{
	MxEsFirstFret object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsFirstFret )
{
	MxEsFirstFret object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getText().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsFirstFret )
{
	MxEsFirstFret object;
	std::string expected = ( MxEnumLeftRight(  ) ).toString();
	std::string actual = object.getLocation().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsFirstFret )
{
	MxEsFirstFret object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsFirstFret )
{
	MxEsFirstFret object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsFirstFret )
{
	MxEsFirstFret object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsFirstFret )
{
	MxEsFirstFret object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsPositiveInteger( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsFirstFret )
{
	MxEsFirstFret object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsPositiveInteger( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsFirstFret )
{
	MxEsFirstFret object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsPositiveInteger( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsFirstFret )
{
	MxEsFirstFret object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsPositiveInteger( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsFirstFret )
{
	MxEsFirstFret object( 1 );
	std::string expected;
	std::string actual;
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

TEST( getClassName, MxEsFirstFret )
{
	MxEsFirstFret object;
	std::string expected = "MxEsFirstFret";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsFirstFret )
{
	MxEsFirstFret object;
	std::string expected = "first-fret";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsFirstFret )
{
	MxEsFirstFret object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setText0, MxEsFirstFret )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxEsFirstFret object;
	object.setText( value1 );
	XsToken expected = value1;
	XsToken actual = object.getText();
	CHECK_EQUAL( expected, actual )
	object.setText( value2 );
	expected = value2;
	actual = object.getText();
	CHECK_EQUAL( expected, actual )
}
TEST( setLocation1, MxEsFirstFret )
{
	MxEnumLeftRight value1( lexicon::enums::LeftRight::right );
	MxEnumLeftRight value2( lexicon::enums::LeftRight::left );
	CHECK( ( value1 != value2 ) )
	MxEsFirstFret object;
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

TEST( getIsTextRequired0, MxEsFirstFret )
{
	MxEsFirstFret object;
	bool expected = false;
	bool actual = object.getIsTextRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLocationRequired1, MxEsFirstFret )
{
	MxEsFirstFret object;
	bool expected = false;
	bool actual = object.getIsLocationRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTextPresent0, MxEsFirstFret )
{
	MxEsFirstFret object;
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
TEST( getIsLocationPresent1, MxEsFirstFret )
{
	MxEsFirstFret object;
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


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsTextDefaultDefined, MxEsFirstFret )
{
	MxEsFirstFret object;
	bool expected = false;
	bool actual = object.getIsTextDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLocationDefaultDefined, MxEsFirstFret )
{
	MxEsFirstFret object;
	bool expected = false;
	bool actual = object.getIsLocationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTextDefaultValue, MxEsFirstFret )
{
	MxEsFirstFret object;
	XsToken expected;
	XsToken actual = object.getTextDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLocationDefaultValue, MxEsFirstFret )
{
	MxEsFirstFret object;
	MxEnumLeftRight expected;
	MxEnumLeftRight actual = object.getLocationDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsFirstFret )
{
	MxEsFirstFret object( 1 );
	std::string expected;
	std::string actual;
	object.setText( XsToken( "" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	object.setIsTextPresent( true );
	object.setIsLocationPresent( true );
	expected = "<first-fret text=\"\" location=\"left\">1</first-fret>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsFirstFret )
{
	MxEsFirstFret object( 1 );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsLocationPresent( true );
	object.setText( XsToken( "" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<first-fret location=\"left\">1</first-fret>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsFirstFret )
{
	MxEsFirstFret object( 1 );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsLocationPresent( false );
	object.setText( XsToken( "" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<first-fret text=\"\">1</first-fret>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsFirstFret )
{
	MxEsFirstFret object( 1 );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsLocationPresent( false );
	object.setText( XsToken( "" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<first-fret>1</first-fret>";
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


