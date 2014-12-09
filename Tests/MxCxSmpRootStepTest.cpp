/** *******************************************************
  * 
  * MxCxSmpRootStepTest.cpp
  * Created: 2014-12-02 17:31:53
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpRootStep.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getText().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::a ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "A";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStep( lexicon::enums::Step::b ) );
	expected = "B";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::c ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStep( lexicon::enums::Step::d ) );
	expected = "D";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::e ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "E";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStep( lexicon::enums::Step::f ) );
	expected = "F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::g ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "G";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStep( lexicon::enums::Step::a ) );
	expected = "A";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::b ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "B";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStep( lexicon::enums::Step::c ) );
	expected = "C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	std::string expected = "MxCxSmpRootStep";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	std::string expected = "root-step";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	std::string expected = "The root-step type represents the pitch step of the root of the current chord within the harmony element. The text attribute indicates how the root should appear in a score if not using the element contents.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setText0, MxCxSmpRootStep )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootStep object;
	object.setText( value1 );
	XsToken expected = value1;
	XsToken actual = object.getText();
	CHECK_EQUAL( expected, actual )
	object.setText( value2 );
	expected = value2;
	actual = object.getText();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX1, MxCxSmpRootStep )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootStep object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY2, MxCxSmpRootStep )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootStep object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX3, MxCxSmpRootStep )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootStep object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY4, MxCxSmpRootStep )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootStep object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily5, MxCxSmpRootStep )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootStep object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle6, MxCxSmpRootStep )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootStep object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize7, MxCxSmpRootStep )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootStep object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight8, MxCxSmpRootStep )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootStep object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor9, MxCxSmpRootStep )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootStep object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsTextRequired0, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsTextRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired1, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired2, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired3, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired4, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired5, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired6, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired7, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired8, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired9, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTextPresent0, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
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
TEST( getIsDefaultXPresent1, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsDefaultXPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDefaultXPresent( true );
	expected = true;
	actual = object.getIsDefaultXPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDefaultXPresent( false );
	expected = false;
	actual = object.getIsDefaultXPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYPresent2, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsDefaultYPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDefaultYPresent( true );
	expected = true;
	actual = object.getIsDefaultYPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDefaultYPresent( false );
	expected = false;
	actual = object.getIsDefaultYPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXPresent3, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsRelativeXPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsRelativeXPresent( true );
	expected = true;
	actual = object.getIsRelativeXPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsRelativeXPresent( false );
	expected = false;
	actual = object.getIsRelativeXPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYPresent4, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsRelativeYPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsRelativeYPresent( true );
	expected = true;
	actual = object.getIsRelativeYPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsRelativeYPresent( false );
	expected = false;
	actual = object.getIsRelativeYPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyPresent5, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsFontFamilyPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontFamilyPresent( true );
	expected = true;
	actual = object.getIsFontFamilyPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontFamilyPresent( false );
	expected = false;
	actual = object.getIsFontFamilyPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStylePresent6, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsFontStylePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontStylePresent( true );
	expected = true;
	actual = object.getIsFontStylePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontStylePresent( false );
	expected = false;
	actual = object.getIsFontStylePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizePresent7, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsFontSizePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontSizePresent( true );
	expected = true;
	actual = object.getIsFontSizePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontSizePresent( false );
	expected = false;
	actual = object.getIsFontSizePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightPresent8, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsFontWeightPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontWeightPresent( true );
	expected = true;
	actual = object.getIsFontWeightPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontWeightPresent( false );
	expected = false;
	actual = object.getIsFontWeightPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorPresent9, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsColorPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsColorPresent( true );
	expected = true;
	actual = object.getIsColorPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsColorPresent( false );
	expected = false;
	actual = object.getIsColorPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 182.7 ) );
	object.setDefaultY( MxNumberTenths( 182.7 ) );
	object.setRelativeX( MxNumberTenths( 182.7 ) );
	object.setRelativeY( MxNumberTenths( 182.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	expected = "<booksmart text=\"\" default-x=\"182.7\" default-y=\"182.7\" relative-x=\"182.7\" relative-y=\"182.7\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#747372\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 182.8 ) );
	object.setDefaultY( MxNumberTenths( 182.8 ) );
	object.setRelativeX( MxNumberTenths( 182.8 ) );
	object.setRelativeY( MxNumberTenths( 182.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<quiet default-x=\"182.8\" default-y=\"182.8\" relative-x=\"182.8\" relative-y=\"182.8\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#75767574\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 182.9 ) );
	object.setDefaultY( MxNumberTenths( 182.9 ) );
	object.setRelativeX( MxNumberTenths( 182.9 ) );
	object.setRelativeY( MxNumberTenths( 182.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<musicxmlishard text=\"\" default-y=\"182.9\" relative-x=\"182.9\" relative-y=\"182.9\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#787776\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 183 ) );
	object.setDefaultY( MxNumberTenths( 183 ) );
	object.setRelativeX( MxNumberTenths( 183 ) );
	object.setRelativeY( MxNumberTenths( 183 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<bishop relative-x=\"183\" relative-y=\"183\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#797A7978\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 183.1 ) );
	object.setDefaultY( MxNumberTenths( 183.1 ) );
	object.setRelativeX( MxNumberTenths( 183.1 ) );
	object.setRelativeY( MxNumberTenths( 183.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<charlie text=\"\" default-x=\"183.1\" relative-y=\"183.1\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#7C7B7A\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 183.2 ) );
	object.setDefaultY( MxNumberTenths( 183.2 ) );
	object.setRelativeX( MxNumberTenths( 183.2 ) );
	object.setRelativeY( MxNumberTenths( 183.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<booksmart default-x=\"183.2\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#7D7E7D7C\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 183.3 ) );
	object.setDefaultY( MxNumberTenths( 183.3 ) );
	object.setRelativeX( MxNumberTenths( 183.3 ) );
	object.setRelativeY( MxNumberTenths( 183.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<quiet text=\"\" default-y=\"183.3\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#807F7E\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 183.4 ) );
	object.setDefaultY( MxNumberTenths( 183.4 ) );
	object.setRelativeX( MxNumberTenths( 183.4 ) );
	object.setRelativeY( MxNumberTenths( 183.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<musicxmlishard default-y=\"183.4\" font-size=\"1.1\" font-weight=\"bold\" color=\"#81828180\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 183.5 ) );
	object.setDefaultY( MxNumberTenths( 183.5 ) );
	object.setRelativeX( MxNumberTenths( 183.5 ) );
	object.setRelativeY( MxNumberTenths( 183.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<bishop text=\"\" default-x=\"183.5\" default-y=\"183.5\" relative-x=\"183.5\" font-weight=\"normal\" color=\"#848382\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 183.6 ) );
	object.setDefaultY( MxNumberTenths( 183.6 ) );
	object.setRelativeX( MxNumberTenths( 183.6 ) );
	object.setRelativeY( MxNumberTenths( 183.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<charlie default-x=\"183.6\" relative-x=\"183.6\" color=\"#85868584\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 183.7 ) );
	object.setDefaultY( MxNumberTenths( 183.7 ) );
	object.setRelativeX( MxNumberTenths( 183.7 ) );
	object.setRelativeY( MxNumberTenths( 183.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<booksmart text=\"\" relative-x=\"183.7\" relative-y=\"183.7\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 183.8 ) );
	object.setDefaultY( MxNumberTenths( 183.8 ) );
	object.setRelativeX( MxNumberTenths( 183.8 ) );
	object.setRelativeY( MxNumberTenths( 183.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<quiet relative-x=\"183.8\" relative-y=\"183.8\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 183.9 ) );
	object.setDefaultY( MxNumberTenths( 183.9 ) );
	object.setRelativeX( MxNumberTenths( 183.9 ) );
	object.setRelativeY( MxNumberTenths( 183.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<musicxmlishard text=\"\" default-x=\"183.9\" default-y=\"183.9\" relative-y=\"183.9\" font-family=\"XYZ\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 184 ) );
	object.setDefaultY( MxNumberTenths( 184 ) );
	object.setRelativeX( MxNumberTenths( 184 ) );
	object.setRelativeY( MxNumberTenths( 184 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<bishop default-x=\"184\" default-y=\"184\" relative-y=\"184\" font-family=\"ABC\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 184.1 ) );
	object.setDefaultY( MxNumberTenths( 184.1 ) );
	object.setRelativeX( MxNumberTenths( 184.1 ) );
	object.setRelativeY( MxNumberTenths( 184.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<charlie text=\"\" default-y=\"184.1\" relative-y=\"184.1\" font-family=\"DEF\" font-style=\"normal\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 184.2 ) );
	object.setDefaultY( MxNumberTenths( 184.2 ) );
	object.setRelativeX( MxNumberTenths( 184.2 ) );
	object.setRelativeY( MxNumberTenths( 184.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<booksmart font-family=\"XYZ\" font-style=\"italic\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 184.3 ) );
	object.setDefaultY( MxNumberTenths( 184.3 ) );
	object.setRelativeX( MxNumberTenths( 184.3 ) );
	object.setRelativeY( MxNumberTenths( 184.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<quiet text=\"\" default-x=\"184.3\" relative-x=\"184.3\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 184.4 ) );
	object.setDefaultY( MxNumberTenths( 184.4 ) );
	object.setRelativeX( MxNumberTenths( 184.4 ) );
	object.setRelativeY( MxNumberTenths( 184.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<musicxmlishard default-x=\"184.4\" relative-x=\"184.4\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 184.5 ) );
	object.setDefaultY( MxNumberTenths( 184.5 ) );
	object.setRelativeX( MxNumberTenths( 184.5 ) );
	object.setRelativeY( MxNumberTenths( 184.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<bishop text=\"\" default-y=\"184.5\" relative-x=\"184.5\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 184.6 ) );
	object.setDefaultY( MxNumberTenths( 184.6 ) );
	object.setRelativeX( MxNumberTenths( 184.6 ) );
	object.setRelativeY( MxNumberTenths( 184.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<charlie default-y=\"184.6\" relative-x=\"184.6\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 184.7 ) );
	object.setDefaultY( MxNumberTenths( 184.7 ) );
	object.setRelativeX( MxNumberTenths( 184.7 ) );
	object.setRelativeY( MxNumberTenths( 184.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<booksmart text=\"\" default-x=\"184.7\" default-y=\"184.7\" relative-y=\"184.7\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#9C9B9A\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 184.8 ) );
	object.setDefaultY( MxNumberTenths( 184.8 ) );
	object.setRelativeX( MxNumberTenths( 184.8 ) );
	object.setRelativeY( MxNumberTenths( 184.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<quiet default-x=\"184.8\" relative-y=\"184.8\" font-size=\"1.1\" font-weight=\"bold\" color=\"#9D9E9D9C\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 184.9 ) );
	object.setDefaultY( MxNumberTenths( 184.9 ) );
	object.setRelativeX( MxNumberTenths( 184.9 ) );
	object.setRelativeY( MxNumberTenths( 184.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<musicxmlishard text=\"\" relative-y=\"184.9\" font-size=\"large\" font-weight=\"normal\" color=\"#A09F9E\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 185 ) );
	object.setDefaultY( MxNumberTenths( 185 ) );
	object.setRelativeX( MxNumberTenths( 185 ) );
	object.setRelativeY( MxNumberTenths( 185 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<bishop relative-y=\"185\" font-size=\"1.1\" font-weight=\"bold\" color=\"#A1A2A1A0\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 185.1 ) );
	object.setDefaultY( MxNumberTenths( 185.1 ) );
	object.setRelativeX( MxNumberTenths( 185.1 ) );
	object.setRelativeY( MxNumberTenths( 185.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<charlie text=\"\" default-x=\"185.1\" default-y=\"185.1\" relative-x=\"185.1\" relative-y=\"185.1\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#A4A3A2\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 185.2 ) );
	object.setDefaultY( MxNumberTenths( 185.2 ) );
	object.setRelativeX( MxNumberTenths( 185.2 ) );
	object.setRelativeY( MxNumberTenths( 185.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<booksmart default-x=\"185.2\" default-y=\"185.2\" relative-x=\"185.2\" font-family=\"ABC\" font-weight=\"bold\" color=\"#A5A6A5A4\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 185.3 ) );
	object.setDefaultY( MxNumberTenths( 185.3 ) );
	object.setRelativeX( MxNumberTenths( 185.3 ) );
	object.setRelativeY( MxNumberTenths( 185.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<quiet text=\"\" default-y=\"185.3\" relative-x=\"185.3\" font-family=\"DEF\" font-weight=\"normal\" color=\"#A8A7A6\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 185.4 ) );
	object.setDefaultY( MxNumberTenths( 185.4 ) );
	object.setRelativeX( MxNumberTenths( 185.4 ) );
	object.setRelativeY( MxNumberTenths( 185.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<musicxmlishard relative-x=\"185.4\" font-family=\"XYZ\" color=\"#A9AAA9A8\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 185.5 ) );
	object.setDefaultY( MxNumberTenths( 185.5 ) );
	object.setRelativeX( MxNumberTenths( 185.5 ) );
	object.setRelativeY( MxNumberTenths( 185.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<bishop text=\"\" default-x=\"185.5\" font-family=\"ABC\" font-style=\"normal\" color=\"#ACABAA\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 185.6 ) );
	object.setDefaultY( MxNumberTenths( 185.6 ) );
	object.setRelativeX( MxNumberTenths( 185.6 ) );
	object.setRelativeY( MxNumberTenths( 185.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<charlie default-x=\"185.6\" font-family=\"DEF\" font-style=\"italic\" color=\"#ADAEADAC\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 185.7 ) );
	object.setDefaultY( MxNumberTenths( 185.7 ) );
	object.setRelativeX( MxNumberTenths( 185.7 ) );
	object.setRelativeY( MxNumberTenths( 185.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<booksmart text=\"\" default-y=\"185.7\" relative-y=\"185.7\" font-style=\"normal\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 185.8 ) );
	object.setDefaultY( MxNumberTenths( 185.8 ) );
	object.setRelativeX( MxNumberTenths( 185.8 ) );
	object.setRelativeY( MxNumberTenths( 185.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<quiet default-y=\"185.8\" relative-y=\"185.8\" font-style=\"italic\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 185.9 ) );
	object.setDefaultY( MxNumberTenths( 185.9 ) );
	object.setRelativeX( MxNumberTenths( 185.9 ) );
	object.setRelativeY( MxNumberTenths( 185.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<musicxmlishard text=\"\" default-x=\"185.9\" default-y=\"185.9\" relative-x=\"185.9\" relative-y=\"185.9\" font-style=\"normal\" font-size=\"large\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 186 ) );
	object.setDefaultY( MxNumberTenths( 186 ) );
	object.setRelativeX( MxNumberTenths( 186 ) );
	object.setRelativeY( MxNumberTenths( 186 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<bishop default-x=\"186\" relative-x=\"186\" relative-y=\"186\" font-style=\"italic\" font-size=\"1.1\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 186.1 ) );
	object.setDefaultY( MxNumberTenths( 186.1 ) );
	object.setRelativeX( MxNumberTenths( 186.1 ) );
	object.setRelativeY( MxNumberTenths( 186.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<charlie text=\"\" relative-x=\"186.1\" relative-y=\"186.1\" font-style=\"normal\" font-size=\"large\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 186.2 ) );
	object.setDefaultY( MxNumberTenths( 186.2 ) );
	object.setRelativeX( MxNumberTenths( 186.2 ) );
	object.setRelativeY( MxNumberTenths( 186.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<booksmart relative-x=\"186.2\" font-size=\"1.1\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 186.3 ) );
	object.setDefaultY( MxNumberTenths( 186.3 ) );
	object.setRelativeX( MxNumberTenths( 186.3 ) );
	object.setRelativeY( MxNumberTenths( 186.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<quiet text=\"\" default-x=\"186.3\" default-y=\"186.3\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 186.4 ) );
	object.setDefaultY( MxNumberTenths( 186.4 ) );
	object.setRelativeX( MxNumberTenths( 186.4 ) );
	object.setRelativeY( MxNumberTenths( 186.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<musicxmlishard default-x=\"186.4\" default-y=\"186.4\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 186.5 ) );
	object.setDefaultY( MxNumberTenths( 186.5 ) );
	object.setRelativeX( MxNumberTenths( 186.5 ) );
	object.setRelativeY( MxNumberTenths( 186.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<bishop text=\"\" default-y=\"186.5\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 186.6 ) );
	object.setDefaultY( MxNumberTenths( 186.6 ) );
	object.setRelativeX( MxNumberTenths( 186.6 ) );
	object.setRelativeY( MxNumberTenths( 186.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<charlie font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 186.7 ) );
	object.setDefaultY( MxNumberTenths( 186.7 ) );
	object.setRelativeX( MxNumberTenths( 186.7 ) );
	object.setRelativeY( MxNumberTenths( 186.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<booksmart text=\"\" default-x=\"186.7\" relative-x=\"186.7\" relative-y=\"186.7\" font-family=\"ABC\" font-weight=\"normal\" color=\"#C4C3C2\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 186.8 ) );
	object.setDefaultY( MxNumberTenths( 186.8 ) );
	object.setRelativeX( MxNumberTenths( 186.8 ) );
	object.setRelativeY( MxNumberTenths( 186.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<quiet default-x=\"186.8\" relative-x=\"186.8\" relative-y=\"186.8\" font-family=\"DEF\" font-weight=\"bold\" color=\"#C5C6C5C4\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 186.9 ) );
	object.setDefaultY( MxNumberTenths( 186.9 ) );
	object.setRelativeX( MxNumberTenths( 186.9 ) );
	object.setRelativeY( MxNumberTenths( 186.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<musicxmlishard text=\"\" default-y=\"186.9\" relative-x=\"186.9\" relative-y=\"186.9\" font-style=\"normal\" font-weight=\"normal\" color=\"#C8C7C6\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 187 ) );
	object.setDefaultY( MxNumberTenths( 187 ) );
	object.setRelativeX( MxNumberTenths( 187 ) );
	object.setRelativeY( MxNumberTenths( 187 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<bishop default-y=\"187\" relative-x=\"187\" relative-y=\"187\" font-style=\"italic\" font-weight=\"bold\" color=\"#C9CAC9C8\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 187.1 ) );
	object.setDefaultY( MxNumberTenths( 187.1 ) );
	object.setRelativeX( MxNumberTenths( 187.1 ) );
	object.setRelativeY( MxNumberTenths( 187.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<charlie text=\"\" default-x=\"187.1\" default-y=\"187.1\" relative-y=\"187.1\" font-style=\"normal\" font-weight=\"normal\" color=\"#CCCBCA\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 187.2 ) );
	object.setDefaultY( MxNumberTenths( 187.2 ) );
	object.setRelativeX( MxNumberTenths( 187.2 ) );
	object.setRelativeY( MxNumberTenths( 187.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<booksmart default-x=\"187.2\" font-style=\"italic\" color=\"#CDCECDCC\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 187.3 ) );
	object.setDefaultY( MxNumberTenths( 187.3 ) );
	object.setRelativeX( MxNumberTenths( 187.3 ) );
	object.setRelativeY( MxNumberTenths( 187.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<quiet text=\"\" font-style=\"normal\" color=\"#D0CFCE\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 187.4 ) );
	object.setDefaultY( MxNumberTenths( 187.4 ) );
	object.setRelativeX( MxNumberTenths( 187.4 ) );
	object.setRelativeY( MxNumberTenths( 187.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<musicxmlishard font-style=\"italic\" color=\"#D1D2D1D0\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 187.5 ) );
	object.setDefaultY( MxNumberTenths( 187.5 ) );
	object.setRelativeX( MxNumberTenths( 187.5 ) );
	object.setRelativeY( MxNumberTenths( 187.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<bishop text=\"\" default-x=\"187.5\" default-y=\"187.5\" relative-x=\"187.5\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#D4D3D2\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 187.6 ) );
	object.setDefaultY( MxNumberTenths( 187.6 ) );
	object.setRelativeX( MxNumberTenths( 187.6 ) );
	object.setRelativeY( MxNumberTenths( 187.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<charlie default-x=\"187.6\" default-y=\"187.6\" relative-x=\"187.6\" font-family=\"ABC\" font-size=\"1.1\" color=\"#D5D6D5D4\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 187.7 ) );
	object.setDefaultY( MxNumberTenths( 187.7 ) );
	object.setRelativeX( MxNumberTenths( 187.7 ) );
	object.setRelativeY( MxNumberTenths( 187.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<booksmart text=\"\" default-y=\"187.7\" relative-x=\"187.7\" relative-y=\"187.7\" font-family=\"DEF\" font-size=\"large\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 187.8 ) );
	object.setDefaultY( MxNumberTenths( 187.8 ) );
	object.setRelativeX( MxNumberTenths( 187.8 ) );
	object.setRelativeY( MxNumberTenths( 187.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<quiet relative-x=\"187.8\" relative-y=\"187.8\" font-family=\"XYZ\" font-size=\"1.1\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 187.9 ) );
	object.setDefaultY( MxNumberTenths( 187.9 ) );
	object.setRelativeX( MxNumberTenths( 187.9 ) );
	object.setRelativeY( MxNumberTenths( 187.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<musicxmlishard text=\"\" default-x=\"187.9\" relative-y=\"187.9\" font-family=\"ABC\" font-size=\"large\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 188 ) );
	object.setDefaultY( MxNumberTenths( 188 ) );
	object.setRelativeX( MxNumberTenths( 188 ) );
	object.setRelativeY( MxNumberTenths( 188 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<bishop default-x=\"188\" relative-y=\"188\" font-family=\"DEF\" font-size=\"1.1\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 188.1 ) );
	object.setDefaultY( MxNumberTenths( 188.1 ) );
	object.setRelativeX( MxNumberTenths( 188.1 ) );
	object.setRelativeY( MxNumberTenths( 188.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<charlie text=\"\" default-y=\"188.1\" relative-y=\"188.1\" font-size=\"large\" font-weight=\"normal\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 188.2 ) );
	object.setDefaultY( MxNumberTenths( 188.2 ) );
	object.setRelativeX( MxNumberTenths( 188.2 ) );
	object.setRelativeY( MxNumberTenths( 188.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<booksmart default-y=\"188.2\" font-size=\"1.1\" font-weight=\"bold\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 188.3 ) );
	object.setDefaultY( MxNumberTenths( 188.3 ) );
	object.setRelativeX( MxNumberTenths( 188.3 ) );
	object.setRelativeY( MxNumberTenths( 188.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<quiet text=\"\" default-x=\"188.3\" default-y=\"188.3\" relative-x=\"188.3\" font-style=\"normal\" font-weight=\"normal\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 188.4 ) );
	object.setDefaultY( MxNumberTenths( 188.4 ) );
	object.setRelativeX( MxNumberTenths( 188.4 ) );
	object.setRelativeY( MxNumberTenths( 188.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	expected = "<musicxmlishard default-x=\"188.4\" relative-x=\"188.4\" font-style=\"italic\" font-weight=\"bold\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 188.5 ) );
	object.setDefaultY( MxNumberTenths( 188.5 ) );
	object.setRelativeX( MxNumberTenths( 188.5 ) );
	object.setRelativeY( MxNumberTenths( 188.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	expected = "<bishop text=\"\" relative-x=\"188.5\" font-style=\"normal\" font-weight=\"normal\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 188.6 ) );
	object.setDefaultY( MxNumberTenths( 188.6 ) );
	object.setRelativeX( MxNumberTenths( 188.6 ) );
	object.setRelativeY( MxNumberTenths( 188.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	expected = "<charlie relative-x=\"188.6\" font-style=\"italic\" font-weight=\"bold\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 188.7 ) );
	object.setDefaultY( MxNumberTenths( 188.7 ) );
	object.setRelativeX( MxNumberTenths( 188.7 ) );
	object.setRelativeY( MxNumberTenths( 188.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	expected = "<booksmart text=\"\" default-x=\"188.7\" default-y=\"188.7\" relative-y=\"188.7\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" color=\"#ECEBEA\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 188.8 ) );
	object.setDefaultY( MxNumberTenths( 188.8 ) );
	object.setRelativeX( MxNumberTenths( 188.8 ) );
	object.setRelativeY( MxNumberTenths( 188.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	expected = "<quiet default-x=\"188.8\" default-y=\"188.8\" relative-y=\"188.8\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" color=\"#EDEEEDEC\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 188.9 ) );
	object.setDefaultY( MxNumberTenths( 188.9 ) );
	object.setRelativeX( MxNumberTenths( 188.9 ) );
	object.setRelativeY( MxNumberTenths( 188.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	expected = "<musicxmlishard text=\"\" default-y=\"188.9\" relative-y=\"188.9\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" color=\"#F0EFEE\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 189 ) );
	object.setDefaultY( MxNumberTenths( 189 ) );
	object.setRelativeX( MxNumberTenths( 189 ) );
	object.setRelativeY( MxNumberTenths( 189 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	expected = "<bishop relative-y=\"189\" font-family=\"XYZ\" color=\"#F1F2F1F0\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 189.1 ) );
	object.setDefaultY( MxNumberTenths( 189.1 ) );
	object.setRelativeX( MxNumberTenths( 189.1 ) );
	object.setRelativeY( MxNumberTenths( 189.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	expected = "<charlie text=\"\" default-x=\"189.1\" relative-x=\"189.1\" relative-y=\"189.1\" font-family=\"ABC\" font-size=\"large\" color=\"#F4F3F2\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 189.2 ) );
	object.setDefaultY( MxNumberTenths( 189.2 ) );
	object.setRelativeX( MxNumberTenths( 189.2 ) );
	object.setRelativeY( MxNumberTenths( 189.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<booksmart default-x=\"189.2\" relative-x=\"189.2\" font-family=\"DEF\" font-size=\"1.1\" color=\"#F5F6F5F4\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 189.3 ) );
	object.setDefaultY( MxNumberTenths( 189.3 ) );
	object.setRelativeX( MxNumberTenths( 189.3 ) );
	object.setRelativeY( MxNumberTenths( 189.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	expected = "<quiet text=\"\" default-y=\"189.3\" relative-x=\"189.3\" font-size=\"large\" color=\"#F8F7F6\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 189.4 ) );
	object.setDefaultY( MxNumberTenths( 189.4 ) );
	object.setRelativeX( MxNumberTenths( 189.4 ) );
	object.setRelativeY( MxNumberTenths( 189.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<musicxmlishard default-y=\"189.4\" relative-x=\"189.4\" font-size=\"1.1\" color=\"#F9FAF9F8\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 189.5 ) );
	object.setDefaultY( MxNumberTenths( 189.5 ) );
	object.setRelativeX( MxNumberTenths( 189.5 ) );
	object.setRelativeY( MxNumberTenths( 189.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<bishop text=\"\" default-x=\"189.5\" default-y=\"189.5\" font-size=\"large\" color=\"#FCFBFA\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 189.6 ) );
	object.setDefaultY( MxNumberTenths( 189.6 ) );
	object.setRelativeX( MxNumberTenths( 189.6 ) );
	object.setRelativeY( MxNumberTenths( 189.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<charlie default-x=\"189.6\" font-size=\"1.1\" color=\"#FDFEFDFC\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 189.7 ) );
	object.setDefaultY( MxNumberTenths( 189.7 ) );
	object.setRelativeX( MxNumberTenths( 189.7 ) );
	object.setRelativeY( MxNumberTenths( 189.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<booksmart text=\"\" relative-y=\"189.7\" font-style=\"normal\" font-size=\"large\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 189.8 ) );
	object.setDefaultY( MxNumberTenths( 189.8 ) );
	object.setRelativeX( MxNumberTenths( 189.8 ) );
	object.setRelativeY( MxNumberTenths( 189.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#01020100" ) );
	expected = "<quiet relative-y=\"189.8\" font-style=\"italic\" font-size=\"1.1\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 189.9 ) );
	object.setDefaultY( MxNumberTenths( 189.9 ) );
	object.setRelativeX( MxNumberTenths( 189.9 ) );
	object.setRelativeY( MxNumberTenths( 189.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#040302" ) );
	expected = "<musicxmlishard text=\"\" default-x=\"189.9\" default-y=\"189.9\" relative-x=\"189.9\" relative-y=\"189.9\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 190 ) );
	object.setDefaultY( MxNumberTenths( 190 ) );
	object.setRelativeX( MxNumberTenths( 190 ) );
	object.setRelativeY( MxNumberTenths( 190 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#05060504" ) );
	expected = "<bishop default-x=\"190\" default-y=\"190\" relative-x=\"190\" relative-y=\"190\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 190.1 ) );
	object.setDefaultY( MxNumberTenths( 190.1 ) );
	object.setRelativeX( MxNumberTenths( 190.1 ) );
	object.setRelativeY( MxNumberTenths( 190.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#080706" ) );
	expected = "<charlie text=\"\" default-y=\"190.1\" relative-x=\"190.1\" relative-y=\"190.1\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 190.2 ) );
	object.setDefaultY( MxNumberTenths( 190.2 ) );
	object.setRelativeX( MxNumberTenths( 190.2 ) );
	object.setRelativeY( MxNumberTenths( 190.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#090A0908" ) );
	expected = "<booksmart relative-x=\"190.2\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 190.3 ) );
	object.setDefaultY( MxNumberTenths( 190.3 ) );
	object.setRelativeX( MxNumberTenths( 190.3 ) );
	object.setRelativeY( MxNumberTenths( 190.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	expected = "<quiet text=\"\" default-x=\"190.3\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 190.4 ) );
	object.setDefaultY( MxNumberTenths( 190.4 ) );
	object.setRelativeX( MxNumberTenths( 190.4 ) );
	object.setRelativeY( MxNumberTenths( 190.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	expected = "<musicxmlishard default-x=\"190.4\" font-family=\"DEF\" font-weight=\"bold\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 190.5 ) );
	object.setDefaultY( MxNumberTenths( 190.5 ) );
	object.setRelativeX( MxNumberTenths( 190.5 ) );
	object.setRelativeY( MxNumberTenths( 190.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#100F0E" ) );
	expected = "<bishop text=\"\" default-y=\"190.5\" font-weight=\"normal\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 190.6 ) );
	object.setDefaultY( MxNumberTenths( 190.6 ) );
	object.setRelativeX( MxNumberTenths( 190.6 ) );
	object.setRelativeY( MxNumberTenths( 190.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#11121110" ) );
	expected = "<charlie default-y=\"190.6\" font-weight=\"bold\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 190.7 ) );
	object.setDefaultY( MxNumberTenths( 190.7 ) );
	object.setRelativeX( MxNumberTenths( 190.7 ) );
	object.setRelativeY( MxNumberTenths( 190.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#141312" ) );
	expected = "<booksmart text=\"\" default-x=\"190.7\" default-y=\"190.7\" relative-x=\"190.7\" relative-y=\"190.7\" font-size=\"large\" font-weight=\"normal\" color=\"#141312\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 190.8 ) );
	object.setDefaultY( MxNumberTenths( 190.8 ) );
	object.setRelativeX( MxNumberTenths( 190.8 ) );
	object.setRelativeY( MxNumberTenths( 190.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#15161514" ) );
	expected = "<quiet default-x=\"190.8\" relative-x=\"190.8\" relative-y=\"190.8\" font-size=\"1.1\" color=\"#15161514\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 190.9 ) );
	object.setDefaultY( MxNumberTenths( 190.9 ) );
	object.setRelativeX( MxNumberTenths( 190.9 ) );
	object.setRelativeY( MxNumberTenths( 190.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#181716" ) );
	expected = "<musicxmlishard text=\"\" relative-x=\"190.9\" relative-y=\"190.9\" font-size=\"large\" color=\"#181716\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 191 ) );
	object.setDefaultY( MxNumberTenths( 191 ) );
	object.setRelativeX( MxNumberTenths( 191 ) );
	object.setRelativeY( MxNumberTenths( 191 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<bishop relative-x=\"191\" relative-y=\"191\" font-size=\"1.1\" color=\"#191A1918\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 191.1 ) );
	object.setDefaultY( MxNumberTenths( 191.1 ) );
	object.setRelativeX( MxNumberTenths( 191.1 ) );
	object.setRelativeY( MxNumberTenths( 191.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<charlie text=\"\" default-x=\"191.1\" default-y=\"191.1\" relative-y=\"191.1\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#1C1B1A\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 191.2 ) );
	object.setDefaultY( MxNumberTenths( 191.2 ) );
	object.setRelativeX( MxNumberTenths( 191.2 ) );
	object.setRelativeY( MxNumberTenths( 191.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<booksmart default-x=\"191.2\" default-y=\"191.2\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#1D1E1D1C\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 191.3 ) );
	object.setDefaultY( MxNumberTenths( 191.3 ) );
	object.setRelativeX( MxNumberTenths( 191.3 ) );
	object.setRelativeY( MxNumberTenths( 191.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<quiet text=\"\" default-y=\"191.3\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#201F1E\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 191.4 ) );
	object.setDefaultY( MxNumberTenths( 191.4 ) );
	object.setRelativeX( MxNumberTenths( 191.4 ) );
	object.setRelativeY( MxNumberTenths( 191.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<musicxmlishard font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#21222120\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 191.5 ) );
	object.setDefaultY( MxNumberTenths( 191.5 ) );
	object.setRelativeX( MxNumberTenths( 191.5 ) );
	object.setRelativeY( MxNumberTenths( 191.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<bishop text=\"\" default-x=\"191.5\" relative-x=\"191.5\" font-family=\"ABC\" font-style=\"normal\" color=\"#242322\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 191.6 ) );
	object.setDefaultY( MxNumberTenths( 191.6 ) );
	object.setRelativeX( MxNumberTenths( 191.6 ) );
	object.setRelativeY( MxNumberTenths( 191.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<charlie default-x=\"191.6\" relative-x=\"191.6\" font-family=\"DEF\" font-style=\"italic\" color=\"#25262524\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 191.7 ) );
	object.setDefaultY( MxNumberTenths( 191.7 ) );
	object.setRelativeX( MxNumberTenths( 191.7 ) );
	object.setRelativeY( MxNumberTenths( 191.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<booksmart text=\"\" default-y=\"191.7\" relative-x=\"191.7\" relative-y=\"191.7\" font-style=\"normal\" font-weight=\"normal\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 191.8 ) );
	object.setDefaultY( MxNumberTenths( 191.8 ) );
	object.setRelativeX( MxNumberTenths( 191.8 ) );
	object.setRelativeY( MxNumberTenths( 191.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<quiet default-y=\"191.8\" relative-x=\"191.8\" relative-y=\"191.8\" font-weight=\"bold\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 191.9 ) );
	object.setDefaultY( MxNumberTenths( 191.9 ) );
	object.setRelativeX( MxNumberTenths( 191.9 ) );
	object.setRelativeY( MxNumberTenths( 191.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<musicxmlishard text=\"\" default-x=\"191.9\" default-y=\"191.9\" relative-y=\"191.9\" font-weight=\"normal\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 192 ) );
	object.setDefaultY( MxNumberTenths( 192 ) );
	object.setRelativeX( MxNumberTenths( 192 ) );
	object.setRelativeY( MxNumberTenths( 192 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<bishop default-x=\"192\" relative-y=\"192\" font-weight=\"bold\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 192.1 ) );
	object.setDefaultY( MxNumberTenths( 192.1 ) );
	object.setRelativeX( MxNumberTenths( 192.1 ) );
	object.setRelativeY( MxNumberTenths( 192.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<charlie text=\"\" relative-y=\"192.1\" font-weight=\"normal\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 192.2 ) );
	object.setDefaultY( MxNumberTenths( 192.2 ) );
	object.setRelativeX( MxNumberTenths( 192.2 ) );
	object.setRelativeY( MxNumberTenths( 192.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<booksmart font-weight=\"bold\">D</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "quiet", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 192.3 ) );
	object.setDefaultY( MxNumberTenths( 192.3 ) );
	object.setRelativeX( MxNumberTenths( 192.3 ) );
	object.setRelativeY( MxNumberTenths( 192.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<quiet text=\"\" default-x=\"192.3\" default-y=\"192.3\" relative-x=\"192.3\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\">D</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "musicxmlishard", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 192.4 ) );
	object.setDefaultY( MxNumberTenths( 192.4 ) );
	object.setRelativeX( MxNumberTenths( 192.4 ) );
	object.setRelativeY( MxNumberTenths( 192.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<musicxmlishard default-x=\"192.4\" default-y=\"192.4\" relative-x=\"192.4\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">D</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "bishop", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 192.5 ) );
	object.setDefaultY( MxNumberTenths( 192.5 ) );
	object.setRelativeX( MxNumberTenths( 192.5 ) );
	object.setRelativeY( MxNumberTenths( 192.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<bishop text=\"\" default-y=\"192.5\" relative-x=\"192.5\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">D</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "charlie", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 192.6 ) );
	object.setDefaultY( MxNumberTenths( 192.6 ) );
	object.setRelativeX( MxNumberTenths( 192.6 ) );
	object.setRelativeY( MxNumberTenths( 192.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<charlie relative-x=\"192.6\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\">D</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxSmpRootStep )
{
	MxCxSmpRootStep object( "booksmart", MxEnumStep( lexicon::enums::Step::d ) );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 192.7 ) );
	object.setDefaultY( MxNumberTenths( 192.7 ) );
	object.setRelativeX( MxNumberTenths( 192.7 ) );
	object.setRelativeY( MxNumberTenths( 192.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<booksmart>D</booksmart>";
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

TEST( getIsTextDefaultDefined, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsTextDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTextDefaultValue, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	XsToken expected;
	XsToken actual = object.getTextDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpRootStep )
{
	MxCxSmpRootStep object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


