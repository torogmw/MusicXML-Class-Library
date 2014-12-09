/** *******************************************************
  * 
  * MxCxSmpDegreeValueTest.cpp
  * Created: 2014-12-02 17:31:52
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpDegreeValue.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	std::string expected = ( MxEnumDegreeSymbolValue(  ) ).toString();
	std::string actual = object.getSymbol().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getText().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
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
TEST( ctorValueAndElementName2, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
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
TEST( ctorValueAndElementName4, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
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
TEST( ctorValueAndElementName6, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
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
TEST( ctorValueAndElementName8, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
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

TEST( getClassName, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	std::string expected = "MxCxSmpDegreeValue";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	std::string expected = "degree-value";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	std::string expected = "The content of the degree-value type is a number indicating the degree of the chord (1 for the root, 3 for third, etc). The text attribute specifies how the type of the degree should be displayed in a score. The degree-value symbol attribute indicates that a symbol should be used in specifying the degree. If the symbol attribute is present, the value of the text attribute follows the symbol.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setSymbol0, MxCxSmpDegreeValue )
{
	MxEnumDegreeSymbolValue value1( lexicon::enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue value2( lexicon::enums::DegreeSymbolValue::diminished );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeValue object;
	object.setSymbol( value1 );
	MxEnumDegreeSymbolValue expected = value1;
	MxEnumDegreeSymbolValue actual = object.getSymbol();
	CHECK_EQUAL( expected, actual )
	object.setSymbol( value2 );
	expected = value2;
	actual = object.getSymbol();
	CHECK_EQUAL( expected, actual )
}
TEST( setText1, MxCxSmpDegreeValue )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeValue object;
	object.setText( value1 );
	XsToken expected = value1;
	XsToken actual = object.getText();
	CHECK_EQUAL( expected, actual )
	object.setText( value2 );
	expected = value2;
	actual = object.getText();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX2, MxCxSmpDegreeValue )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeValue object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY3, MxCxSmpDegreeValue )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeValue object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX4, MxCxSmpDegreeValue )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeValue object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY5, MxCxSmpDegreeValue )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeValue object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily6, MxCxSmpDegreeValue )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeValue object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle7, MxCxSmpDegreeValue )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeValue object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize8, MxCxSmpDegreeValue )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeValue object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight9, MxCxSmpDegreeValue )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeValue object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor10, MxCxSmpDegreeValue )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeValue object;
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

TEST( getIsSymbolRequired0, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsSymbolRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextRequired1, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsTextRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired2, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired3, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired4, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired5, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired6, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired7, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired8, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired9, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired10, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsSymbolPresent0, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsSymbolPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSymbolPresent( true );
	expected = true;
	actual = object.getIsSymbolPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSymbolPresent( false );
	expected = false;
	actual = object.getIsSymbolPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextPresent1, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
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
TEST( getIsDefaultXPresent2, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
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
TEST( getIsDefaultYPresent3, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
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
TEST( getIsRelativeXPresent4, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
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
TEST( getIsRelativeYPresent5, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
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
TEST( getIsFontFamilyPresent6, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
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
TEST( getIsFontStylePresent7, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
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
TEST( getIsFontSizePresent8, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
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
TEST( getIsFontWeightPresent9, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
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
TEST( getIsColorPresent10, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
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

TEST( toString0, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 112 ) );
	object.setDefaultY( MxNumberTenths( 112 ) );
	object.setRelativeX( MxNumberTenths( 112 ) );
	object.setRelativeY( MxNumberTenths( 112 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setIsSymbolPresent( true );
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
	expected = "<booksmart symbol=\"major\" text=\"\" default-x=\"112\" default-y=\"112\" relative-x=\"112\" relative-y=\"112\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#EDEEEDEC\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
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
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 112.1 ) );
	object.setDefaultY( MxNumberTenths( 112.1 ) );
	object.setRelativeX( MxNumberTenths( 112.1 ) );
	object.setRelativeY( MxNumberTenths( 112.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	expected = "<quiet text=\"\" default-x=\"112.1\" default-y=\"112.1\" relative-x=\"112.1\" relative-y=\"112.1\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F0EFEE\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
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
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 112.2 ) );
	object.setDefaultY( MxNumberTenths( 112.2 ) );
	object.setRelativeX( MxNumberTenths( 112.2 ) );
	object.setRelativeY( MxNumberTenths( 112.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	expected = "<musicxmlishard symbol=\"major\" default-x=\"112.2\" default-y=\"112.2\" relative-x=\"112.2\" relative-y=\"112.2\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#F1F2F1F0\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 112.3 ) );
	object.setDefaultY( MxNumberTenths( 112.3 ) );
	object.setRelativeX( MxNumberTenths( 112.3 ) );
	object.setRelativeY( MxNumberTenths( 112.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	expected = "<bishop default-y=\"112.3\" relative-x=\"112.3\" relative-y=\"112.3\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F4F3F2\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 112.4 ) );
	object.setDefaultY( MxNumberTenths( 112.4 ) );
	object.setRelativeX( MxNumberTenths( 112.4 ) );
	object.setRelativeY( MxNumberTenths( 112.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<charlie symbol=\"major\" text=\"\" relative-x=\"112.4\" relative-y=\"112.4\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#F5F6F5F4\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 112.5 ) );
	object.setDefaultY( MxNumberTenths( 112.5 ) );
	object.setRelativeX( MxNumberTenths( 112.5 ) );
	object.setRelativeY( MxNumberTenths( 112.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	expected = "<booksmart text=\"\" relative-y=\"112.5\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F8F7F6\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
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
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 112.6 ) );
	object.setDefaultY( MxNumberTenths( 112.6 ) );
	object.setRelativeX( MxNumberTenths( 112.6 ) );
	object.setRelativeY( MxNumberTenths( 112.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<quiet symbol=\"major\" default-x=\"112.6\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#F9FAF9F8\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 112.7 ) );
	object.setDefaultY( MxNumberTenths( 112.7 ) );
	object.setRelativeX( MxNumberTenths( 112.7 ) );
	object.setRelativeY( MxNumberTenths( 112.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<musicxmlishard default-x=\"112.7\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#FCFBFA\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 112.8 ) );
	object.setDefaultY( MxNumberTenths( 112.8 ) );
	object.setRelativeX( MxNumberTenths( 112.8 ) );
	object.setRelativeY( MxNumberTenths( 112.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<bishop symbol=\"major\" text=\"\" default-x=\"112.8\" default-y=\"112.8\" font-size=\"large\" font-weight=\"normal\" color=\"#FDFEFDFC\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 112.9 ) );
	object.setDefaultY( MxNumberTenths( 112.9 ) );
	object.setRelativeX( MxNumberTenths( 112.9 ) );
	object.setRelativeY( MxNumberTenths( 112.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<charlie text=\"\" default-y=\"112.9\" font-weight=\"bold\" color=\"#00FFFE\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 113 ) );
	object.setDefaultY( MxNumberTenths( 113 ) );
	object.setRelativeX( MxNumberTenths( 113 ) );
	object.setRelativeY( MxNumberTenths( 113 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#01020100" ) );
	expected = "<booksmart symbol=\"major\" default-y=\"113\" relative-x=\"113\" color=\"#01020100\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 113.1 ) );
	object.setDefaultY( MxNumberTenths( 113.1 ) );
	object.setRelativeX( MxNumberTenths( 113.1 ) );
	object.setRelativeY( MxNumberTenths( 113.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#040302" ) );
	expected = "<quiet default-y=\"113.1\" relative-x=\"113.1\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 113.2 ) );
	object.setDefaultY( MxNumberTenths( 113.2 ) );
	object.setRelativeX( MxNumberTenths( 113.2 ) );
	object.setRelativeY( MxNumberTenths( 113.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#05060504" ) );
	expected = "<musicxmlishard symbol=\"major\" text=\"\" default-x=\"113.2\" relative-x=\"113.2\" relative-y=\"113.2\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 113.3 ) );
	object.setDefaultY( MxNumberTenths( 113.3 ) );
	object.setRelativeX( MxNumberTenths( 113.3 ) );
	object.setRelativeY( MxNumberTenths( 113.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#080706" ) );
	expected = "<bishop text=\"\" default-x=\"113.3\" relative-x=\"113.3\" relative-y=\"113.3\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 113.4 ) );
	object.setDefaultY( MxNumberTenths( 113.4 ) );
	object.setRelativeX( MxNumberTenths( 113.4 ) );
	object.setRelativeY( MxNumberTenths( 113.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#090A0908" ) );
	expected = "<charlie symbol=\"major\" default-x=\"113.4\" relative-x=\"113.4\" relative-y=\"113.4\" font-family=\"XYZ\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 113.5 ) );
	object.setDefaultY( MxNumberTenths( 113.5 ) );
	object.setRelativeX( MxNumberTenths( 113.5 ) );
	object.setRelativeY( MxNumberTenths( 113.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	expected = "<booksmart relative-y=\"113.5\" font-family=\"ABC\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
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
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 113.6 ) );
	object.setDefaultY( MxNumberTenths( 113.6 ) );
	object.setRelativeX( MxNumberTenths( 113.6 ) );
	object.setRelativeY( MxNumberTenths( 113.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	expected = "<quiet symbol=\"major\" text=\"\" default-y=\"113.6\" relative-y=\"113.6\" font-family=\"DEF\" font-style=\"normal\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
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
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 113.7 ) );
	object.setDefaultY( MxNumberTenths( 113.7 ) );
	object.setRelativeX( MxNumberTenths( 113.7 ) );
	object.setRelativeY( MxNumberTenths( 113.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#100F0E" ) );
	expected = "<musicxmlishard text=\"\" default-y=\"113.7\" relative-y=\"113.7\" font-family=\"XYZ\" font-style=\"italic\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 113.8 ) );
	object.setDefaultY( MxNumberTenths( 113.8 ) );
	object.setRelativeX( MxNumberTenths( 113.8 ) );
	object.setRelativeY( MxNumberTenths( 113.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#11121110" ) );
	expected = "<bishop symbol=\"major\" default-x=\"113.8\" default-y=\"113.8\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 113.9 ) );
	object.setDefaultY( MxNumberTenths( 113.9 ) );
	object.setRelativeX( MxNumberTenths( 113.9 ) );
	object.setRelativeY( MxNumberTenths( 113.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#141312" ) );
	expected = "<charlie default-x=\"113.9\" default-y=\"113.9\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 114 ) );
	object.setDefaultY( MxNumberTenths( 114 ) );
	object.setRelativeX( MxNumberTenths( 114 ) );
	object.setRelativeY( MxNumberTenths( 114 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#15161514" ) );
	expected = "<booksmart symbol=\"major\" text=\"\" default-x=\"114\" relative-x=\"114\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 114.1 ) );
	object.setDefaultY( MxNumberTenths( 114.1 ) );
	object.setRelativeX( MxNumberTenths( 114.1 ) );
	object.setRelativeY( MxNumberTenths( 114.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
	expected = "<quiet text=\"\" relative-x=\"114.1\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 114.2 ) );
	object.setDefaultY( MxNumberTenths( 114.2 ) );
	object.setRelativeX( MxNumberTenths( 114.2 ) );
	object.setRelativeY( MxNumberTenths( 114.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<musicxmlishard symbol=\"major\" relative-x=\"114.2\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#191A1918\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 114.3 ) );
	object.setDefaultY( MxNumberTenths( 114.3 ) );
	object.setRelativeX( MxNumberTenths( 114.3 ) );
	object.setRelativeY( MxNumberTenths( 114.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<bishop relative-x=\"114.3\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#1C1B1A\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
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
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 114.4 ) );
	object.setDefaultY( MxNumberTenths( 114.4 ) );
	object.setRelativeX( MxNumberTenths( 114.4 ) );
	object.setRelativeY( MxNumberTenths( 114.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<charlie symbol=\"major\" text=\"\" default-x=\"114.4\" default-y=\"114.4\" relative-x=\"114.4\" relative-y=\"114.4\" font-size=\"large\" font-weight=\"normal\" color=\"#1D1E1D1C\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 114.5 ) );
	object.setDefaultY( MxNumberTenths( 114.5 ) );
	object.setRelativeX( MxNumberTenths( 114.5 ) );
	object.setRelativeY( MxNumberTenths( 114.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<booksmart text=\"\" default-x=\"114.5\" default-y=\"114.5\" relative-y=\"114.5\" font-size=\"1.1\" font-weight=\"bold\" color=\"#201F1E\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 114.6 ) );
	object.setDefaultY( MxNumberTenths( 114.6 ) );
	object.setRelativeX( MxNumberTenths( 114.6 ) );
	object.setRelativeY( MxNumberTenths( 114.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<quiet symbol=\"major\" default-x=\"114.6\" default-y=\"114.6\" relative-y=\"114.6\" font-size=\"large\" font-weight=\"normal\" color=\"#21222120\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 114.7 ) );
	object.setDefaultY( MxNumberTenths( 114.7 ) );
	object.setRelativeX( MxNumberTenths( 114.7 ) );
	object.setRelativeY( MxNumberTenths( 114.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<musicxmlishard default-y=\"114.7\" relative-y=\"114.7\" font-weight=\"bold\" color=\"#242322\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 114.8 ) );
	object.setDefaultY( MxNumberTenths( 114.8 ) );
	object.setRelativeX( MxNumberTenths( 114.8 ) );
	object.setRelativeY( MxNumberTenths( 114.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<bishop symbol=\"major\" text=\"\" relative-y=\"114.8\" font-family=\"DEF\" font-weight=\"normal\" color=\"#25262524\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 114.9 ) );
	object.setDefaultY( MxNumberTenths( 114.9 ) );
	object.setRelativeX( MxNumberTenths( 114.9 ) );
	object.setRelativeY( MxNumberTenths( 114.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<charlie text=\"\" relative-y=\"114.9\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#282726\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 115 ) );
	object.setDefaultY( MxNumberTenths( 115 ) );
	object.setRelativeX( MxNumberTenths( 115 ) );
	object.setRelativeY( MxNumberTenths( 115 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<booksmart symbol=\"major\" default-x=\"115\" relative-x=\"115\" font-family=\"ABC\" color=\"#292A2928\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 115.1 ) );
	object.setDefaultY( MxNumberTenths( 115.1 ) );
	object.setRelativeX( MxNumberTenths( 115.1 ) );
	object.setRelativeY( MxNumberTenths( 115.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<quiet default-x=\"115.1\" relative-x=\"115.1\" font-family=\"DEF\" color=\"#2C2B2A\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 115.2 ) );
	object.setDefaultY( MxNumberTenths( 115.2 ) );
	object.setRelativeX( MxNumberTenths( 115.2 ) );
	object.setRelativeY( MxNumberTenths( 115.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<musicxmlishard symbol=\"major\" text=\"\" default-x=\"115.2\" default-y=\"115.2\" relative-x=\"115.2\" font-family=\"XYZ\" font-style=\"normal\" color=\"#2D2E2D2C\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 115.3 ) );
	object.setDefaultY( MxNumberTenths( 115.3 ) );
	object.setRelativeX( MxNumberTenths( 115.3 ) );
	object.setRelativeY( MxNumberTenths( 115.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<bishop text=\"\" default-y=\"115.3\" relative-x=\"115.3\" font-family=\"ABC\" font-style=\"italic\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 115.4 ) );
	object.setDefaultY( MxNumberTenths( 115.4 ) );
	object.setRelativeX( MxNumberTenths( 115.4 ) );
	object.setRelativeY( MxNumberTenths( 115.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<charlie symbol=\"major\" default-y=\"115.4\" relative-x=\"115.4\" font-family=\"DEF\" font-style=\"normal\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 115.5 ) );
	object.setDefaultY( MxNumberTenths( 115.5 ) );
	object.setRelativeX( MxNumberTenths( 115.5 ) );
	object.setRelativeY( MxNumberTenths( 115.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<booksmart default-y=\"115.5\" font-style=\"italic\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 115.6 ) );
	object.setDefaultY( MxNumberTenths( 115.6 ) );
	object.setRelativeX( MxNumberTenths( 115.6 ) );
	object.setRelativeY( MxNumberTenths( 115.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<quiet symbol=\"major\" text=\"\" default-x=\"115.6\" relative-y=\"115.6\" font-style=\"normal\" font-size=\"large\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 115.7 ) );
	object.setDefaultY( MxNumberTenths( 115.7 ) );
	object.setRelativeX( MxNumberTenths( 115.7 ) );
	object.setRelativeY( MxNumberTenths( 115.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<musicxmlishard text=\"\" default-x=\"115.7\" relative-y=\"115.7\" font-style=\"italic\" font-size=\"1.1\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 115.8 ) );
	object.setDefaultY( MxNumberTenths( 115.8 ) );
	object.setRelativeX( MxNumberTenths( 115.8 ) );
	object.setRelativeY( MxNumberTenths( 115.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<bishop symbol=\"major\" default-x=\"115.8\" relative-y=\"115.8\" font-style=\"normal\" font-size=\"large\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
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
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 115.9 ) );
	object.setDefaultY( MxNumberTenths( 115.9 ) );
	object.setRelativeX( MxNumberTenths( 115.9 ) );
	object.setRelativeY( MxNumberTenths( 115.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<charlie relative-y=\"115.9\" font-style=\"italic\" font-size=\"1.1\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 116 ) );
	object.setDefaultY( MxNumberTenths( 116 ) );
	object.setRelativeX( MxNumberTenths( 116 ) );
	object.setRelativeY( MxNumberTenths( 116 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<booksmart symbol=\"major\" text=\"\" default-y=\"116\" relative-x=\"116\" relative-y=\"116\" font-size=\"large\" font-weight=\"normal\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 116.1 ) );
	object.setDefaultY( MxNumberTenths( 116.1 ) );
	object.setRelativeX( MxNumberTenths( 116.1 ) );
	object.setRelativeY( MxNumberTenths( 116.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<quiet text=\"\" default-y=\"116.1\" relative-x=\"116.1\" relative-y=\"116.1\" font-size=\"1.1\" font-weight=\"bold\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
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
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 116.2 ) );
	object.setDefaultY( MxNumberTenths( 116.2 ) );
	object.setRelativeX( MxNumberTenths( 116.2 ) );
	object.setRelativeY( MxNumberTenths( 116.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<musicxmlishard symbol=\"major\" default-x=\"116.2\" default-y=\"116.2\" relative-x=\"116.2\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
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
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 116.3 ) );
	object.setDefaultY( MxNumberTenths( 116.3 ) );
	object.setRelativeX( MxNumberTenths( 116.3 ) );
	object.setRelativeY( MxNumberTenths( 116.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<bishop default-x=\"116.3\" default-y=\"116.3\" relative-x=\"116.3\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 116.4 ) );
	object.setDefaultY( MxNumberTenths( 116.4 ) );
	object.setRelativeX( MxNumberTenths( 116.4 ) );
	object.setRelativeY( MxNumberTenths( 116.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<charlie symbol=\"major\" text=\"\" default-x=\"116.4\" relative-x=\"116.4\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" color=\"#45464544\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 116.5 ) );
	object.setDefaultY( MxNumberTenths( 116.5 ) );
	object.setRelativeX( MxNumberTenths( 116.5 ) );
	object.setRelativeY( MxNumberTenths( 116.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<booksmart text=\"\" font-family=\"ABC\" font-weight=\"bold\" color=\"#484746\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 116.6 ) );
	object.setDefaultY( MxNumberTenths( 116.6 ) );
	object.setRelativeX( MxNumberTenths( 116.6 ) );
	object.setRelativeY( MxNumberTenths( 116.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<quiet symbol=\"major\" font-family=\"DEF\" font-weight=\"normal\" color=\"#494A4948\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 116.7 ) );
	object.setDefaultY( MxNumberTenths( 116.7 ) );
	object.setRelativeX( MxNumberTenths( 116.7 ) );
	object.setRelativeY( MxNumberTenths( 116.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<musicxmlishard font-family=\"XYZ\" font-weight=\"bold\" color=\"#4C4B4A\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
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
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 116.8 ) );
	object.setDefaultY( MxNumberTenths( 116.8 ) );
	object.setRelativeX( MxNumberTenths( 116.8 ) );
	object.setRelativeY( MxNumberTenths( 116.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<bishop symbol=\"major\" text=\"\" default-x=\"116.8\" default-y=\"116.8\" relative-y=\"116.8\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" color=\"#4D4E4D4C\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
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
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 116.9 ) );
	object.setDefaultY( MxNumberTenths( 116.9 ) );
	object.setRelativeX( MxNumberTenths( 116.9 ) );
	object.setRelativeY( MxNumberTenths( 116.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<charlie text=\"\" default-x=\"116.9\" default-y=\"116.9\" relative-y=\"116.9\" font-style=\"italic\" font-weight=\"bold\" color=\"#504F4E\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 117 ) );
	object.setDefaultY( MxNumberTenths( 117 ) );
	object.setRelativeX( MxNumberTenths( 117 ) );
	object.setRelativeY( MxNumberTenths( 117 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<booksmart symbol=\"major\" default-x=\"117\" default-y=\"117\" relative-x=\"117\" relative-y=\"117\" font-style=\"normal\" color=\"#51525150\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 117.1 ) );
	object.setDefaultY( MxNumberTenths( 117.1 ) );
	object.setRelativeX( MxNumberTenths( 117.1 ) );
	object.setRelativeY( MxNumberTenths( 117.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<quiet default-y=\"117.1\" relative-x=\"117.1\" relative-y=\"117.1\" font-style=\"italic\" color=\"#545352\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 117.2 ) );
	object.setDefaultY( MxNumberTenths( 117.2 ) );
	object.setRelativeX( MxNumberTenths( 117.2 ) );
	object.setRelativeY( MxNumberTenths( 117.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#55565554" ) );
	expected = "<musicxmlishard symbol=\"major\" text=\"\" relative-x=\"117.2\" relative-y=\"117.2\" font-style=\"normal\" color=\"#55565554\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 117.3 ) );
	object.setDefaultY( MxNumberTenths( 117.3 ) );
	object.setRelativeX( MxNumberTenths( 117.3 ) );
	object.setRelativeY( MxNumberTenths( 117.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#585756" ) );
	expected = "<bishop text=\"\" relative-x=\"117.3\" relative-y=\"117.3\" font-style=\"italic\" color=\"#585756\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 117.4 ) );
	object.setDefaultY( MxNumberTenths( 117.4 ) );
	object.setRelativeX( MxNumberTenths( 117.4 ) );
	object.setRelativeY( MxNumberTenths( 117.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
	expected = "<charlie symbol=\"major\" default-x=\"117.4\" relative-x=\"117.4\" font-style=\"normal\" font-size=\"large\" color=\"#595A5958\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 117.5 ) );
	object.setDefaultY( MxNumberTenths( 117.5 ) );
	object.setRelativeX( MxNumberTenths( 117.5 ) );
	object.setRelativeY( MxNumberTenths( 117.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	expected = "<booksmart default-x=\"117.5\" font-style=\"italic\" font-size=\"1.1\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 117.6 ) );
	object.setDefaultY( MxNumberTenths( 117.6 ) );
	object.setRelativeX( MxNumberTenths( 117.6 ) );
	object.setRelativeY( MxNumberTenths( 117.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	expected = "<quiet symbol=\"major\" text=\"\" default-x=\"117.6\" default-y=\"117.6\" font-family=\"XYZ\" font-size=\"large\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 117.7 ) );
	object.setDefaultY( MxNumberTenths( 117.7 ) );
	object.setRelativeX( MxNumberTenths( 117.7 ) );
	object.setRelativeY( MxNumberTenths( 117.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
	expected = "<musicxmlishard text=\"\" default-y=\"117.7\" font-family=\"ABC\" font-size=\"1.1\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 117.8 ) );
	object.setDefaultY( MxNumberTenths( 117.8 ) );
	object.setRelativeX( MxNumberTenths( 117.8 ) );
	object.setRelativeY( MxNumberTenths( 117.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<bishop symbol=\"major\" default-y=\"117.8\" font-family=\"DEF\" font-size=\"large\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 117.9 ) );
	object.setDefaultY( MxNumberTenths( 117.9 ) );
	object.setRelativeX( MxNumberTenths( 117.9 ) );
	object.setRelativeY( MxNumberTenths( 117.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<charlie default-y=\"117.9\" font-family=\"XYZ\" font-size=\"1.1\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 118 ) );
	object.setDefaultY( MxNumberTenths( 118 ) );
	object.setRelativeX( MxNumberTenths( 118 ) );
	object.setRelativeY( MxNumberTenths( 118 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<booksmart symbol=\"major\" text=\"\" default-x=\"118\" relative-x=\"118\" relative-y=\"118\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 118.1 ) );
	object.setDefaultY( MxNumberTenths( 118.1 ) );
	object.setRelativeX( MxNumberTenths( 118.1 ) );
	object.setRelativeY( MxNumberTenths( 118.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<quiet text=\"\" default-x=\"118.1\" relative-x=\"118.1\" relative-y=\"118.1\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 118.2 ) );
	object.setDefaultY( MxNumberTenths( 118.2 ) );
	object.setRelativeX( MxNumberTenths( 118.2 ) );
	object.setRelativeY( MxNumberTenths( 118.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<musicxmlishard symbol=\"major\" default-x=\"118.2\" relative-x=\"118.2\" relative-y=\"118.2\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 118.3 ) );
	object.setDefaultY( MxNumberTenths( 118.3 ) );
	object.setRelativeX( MxNumberTenths( 118.3 ) );
	object.setRelativeY( MxNumberTenths( 118.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<bishop relative-x=\"118.3\" relative-y=\"118.3\" font-weight=\"bold\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
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
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 118.4 ) );
	object.setDefaultY( MxNumberTenths( 118.4 ) );
	object.setRelativeX( MxNumberTenths( 118.4 ) );
	object.setRelativeY( MxNumberTenths( 118.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<charlie symbol=\"major\" text=\"\" default-y=\"118.4\" relative-x=\"118.4\" relative-y=\"118.4\" font-style=\"normal\" font-weight=\"normal\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 118.5 ) );
	object.setDefaultY( MxNumberTenths( 118.5 ) );
	object.setRelativeX( MxNumberTenths( 118.5 ) );
	object.setRelativeY( MxNumberTenths( 118.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<booksmart text=\"\" default-y=\"118.5\" relative-y=\"118.5\" font-style=\"italic\" font-weight=\"bold\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 118.6 ) );
	object.setDefaultY( MxNumberTenths( 118.6 ) );
	object.setRelativeX( MxNumberTenths( 118.6 ) );
	object.setRelativeY( MxNumberTenths( 118.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<quiet symbol=\"major\" default-x=\"118.6\" default-y=\"118.6\" font-style=\"normal\" font-weight=\"normal\" color=\"#71727170\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 118.7 ) );
	object.setDefaultY( MxNumberTenths( 118.7 ) );
	object.setRelativeX( MxNumberTenths( 118.7 ) );
	object.setRelativeY( MxNumberTenths( 118.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<musicxmlishard default-x=\"118.7\" default-y=\"118.7\" font-style=\"italic\" font-weight=\"bold\" color=\"#747372\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 118.8 ) );
	object.setDefaultY( MxNumberTenths( 118.8 ) );
	object.setRelativeX( MxNumberTenths( 118.8 ) );
	object.setRelativeY( MxNumberTenths( 118.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<bishop symbol=\"major\" text=\"\" default-x=\"118.8\" font-style=\"normal\" font-weight=\"normal\" color=\"#75767574\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 118.9 ) );
	object.setDefaultY( MxNumberTenths( 118.9 ) );
	object.setRelativeX( MxNumberTenths( 118.9 ) );
	object.setRelativeY( MxNumberTenths( 118.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<charlie text=\"\" font-style=\"italic\" font-weight=\"bold\" color=\"#787776\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 119 ) );
	object.setDefaultY( MxNumberTenths( 119 ) );
	object.setRelativeX( MxNumberTenths( 119 ) );
	object.setRelativeY( MxNumberTenths( 119 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<booksmart symbol=\"major\" relative-x=\"119\" font-family=\"DEF\" font-style=\"normal\" color=\"#797A7978\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 119.1 ) );
	object.setDefaultY( MxNumberTenths( 119.1 ) );
	object.setRelativeX( MxNumberTenths( 119.1 ) );
	object.setRelativeY( MxNumberTenths( 119.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<quiet relative-x=\"119.1\" font-family=\"XYZ\" font-style=\"italic\" color=\"#7C7B7A\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 119.2 ) );
	object.setDefaultY( MxNumberTenths( 119.2 ) );
	object.setRelativeX( MxNumberTenths( 119.2 ) );
	object.setRelativeY( MxNumberTenths( 119.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<musicxmlishard symbol=\"major\" text=\"\" default-x=\"119.2\" default-y=\"119.2\" relative-x=\"119.2\" relative-y=\"119.2\" font-family=\"ABC\" font-size=\"large\" color=\"#7D7E7D7C\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 119.3 ) );
	object.setDefaultY( MxNumberTenths( 119.3 ) );
	object.setRelativeX( MxNumberTenths( 119.3 ) );
	object.setRelativeY( MxNumberTenths( 119.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<bishop text=\"\" default-x=\"119.3\" default-y=\"119.3\" relative-x=\"119.3\" relative-y=\"119.3\" font-family=\"DEF\" font-size=\"1.1\" color=\"#807F7E\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 119.4 ) );
	object.setDefaultY( MxNumberTenths( 119.4 ) );
	object.setRelativeX( MxNumberTenths( 119.4 ) );
	object.setRelativeY( MxNumberTenths( 119.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<charlie symbol=\"major\" default-x=\"119.4\" default-y=\"119.4\" relative-x=\"119.4\" relative-y=\"119.4\" font-family=\"XYZ\" font-size=\"large\" color=\"#81828180\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 119.5 ) );
	object.setDefaultY( MxNumberTenths( 119.5 ) );
	object.setRelativeX( MxNumberTenths( 119.5 ) );
	object.setRelativeY( MxNumberTenths( 119.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<booksmart default-y=\"119.5\" relative-y=\"119.5\" font-family=\"ABC\" font-size=\"1.1\" color=\"#848382\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 119.6 ) );
	object.setDefaultY( MxNumberTenths( 119.6 ) );
	object.setRelativeX( MxNumberTenths( 119.6 ) );
	object.setRelativeY( MxNumberTenths( 119.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<quiet symbol=\"major\" text=\"\" relative-y=\"119.6\" font-family=\"DEF\" font-size=\"large\" color=\"#85868584\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 119.7 ) );
	object.setDefaultY( MxNumberTenths( 119.7 ) );
	object.setRelativeX( MxNumberTenths( 119.7 ) );
	object.setRelativeY( MxNumberTenths( 119.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<musicxmlishard text=\"\" relative-y=\"119.7\" font-size=\"1.1\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 119.8 ) );
	object.setDefaultY( MxNumberTenths( 119.8 ) );
	object.setRelativeX( MxNumberTenths( 119.8 ) );
	object.setRelativeY( MxNumberTenths( 119.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<bishop symbol=\"major\" default-x=\"119.8\" font-size=\"large\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 119.9 ) );
	object.setDefaultY( MxNumberTenths( 119.9 ) );
	object.setRelativeX( MxNumberTenths( 119.9 ) );
	object.setRelativeY( MxNumberTenths( 119.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<charlie default-x=\"119.9\" font-size=\"1.1\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 120 ) );
	object.setDefaultY( MxNumberTenths( 120 ) );
	object.setRelativeX( MxNumberTenths( 120 ) );
	object.setRelativeY( MxNumberTenths( 120 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<booksmart symbol=\"major\" text=\"\" default-x=\"120\" default-y=\"120\" relative-x=\"120\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 120.1 ) );
	object.setDefaultY( MxNumberTenths( 120.1 ) );
	object.setRelativeX( MxNumberTenths( 120.1 ) );
	object.setRelativeY( MxNumberTenths( 120.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<quiet text=\"\" default-y=\"120.1\" relative-x=\"120.1\" font-style=\"italic\" font-weight=\"bold\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 120.2 ) );
	object.setDefaultY( MxNumberTenths( 120.2 ) );
	object.setRelativeX( MxNumberTenths( 120.2 ) );
	object.setRelativeY( MxNumberTenths( 120.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<musicxmlishard symbol=\"major\" default-y=\"120.2\" relative-x=\"120.2\" font-style=\"normal\" font-weight=\"normal\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 120.3 ) );
	object.setDefaultY( MxNumberTenths( 120.3 ) );
	object.setRelativeX( MxNumberTenths( 120.3 ) );
	object.setRelativeY( MxNumberTenths( 120.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<bishop default-y=\"120.3\" relative-x=\"120.3\" font-style=\"italic\" font-weight=\"bold\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 120.4 ) );
	object.setDefaultY( MxNumberTenths( 120.4 ) );
	object.setRelativeX( MxNumberTenths( 120.4 ) );
	object.setRelativeY( MxNumberTenths( 120.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<charlie symbol=\"major\" text=\"\" default-x=\"120.4\" relative-x=\"120.4\" relative-y=\"120.4\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 120.5 ) );
	object.setDefaultY( MxNumberTenths( 120.5 ) );
	object.setRelativeX( MxNumberTenths( 120.5 ) );
	object.setRelativeY( MxNumberTenths( 120.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<booksmart text=\"\" default-x=\"120.5\" relative-y=\"120.5\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 120.6 ) );
	object.setDefaultY( MxNumberTenths( 120.6 ) );
	object.setRelativeX( MxNumberTenths( 120.6 ) );
	object.setRelativeY( MxNumberTenths( 120.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<quiet symbol=\"major\" default-x=\"120.6\" relative-y=\"120.6\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 120.7 ) );
	object.setDefaultY( MxNumberTenths( 120.7 ) );
	object.setRelativeX( MxNumberTenths( 120.7 ) );
	object.setRelativeY( MxNumberTenths( 120.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<musicxmlishard relative-y=\"120.7\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 120.8 ) );
	object.setDefaultY( MxNumberTenths( 120.8 ) );
	object.setRelativeX( MxNumberTenths( 120.8 ) );
	object.setRelativeY( MxNumberTenths( 120.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<bishop symbol=\"major\" text=\"\" default-y=\"120.8\" relative-y=\"120.8\" font-family=\"DEF\" font-weight=\"normal\" color=\"#9D9E9D9C\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 120.9 ) );
	object.setDefaultY( MxNumberTenths( 120.9 ) );
	object.setRelativeX( MxNumberTenths( 120.9 ) );
	object.setRelativeY( MxNumberTenths( 120.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<charlie text=\"\" default-y=\"120.9\" relative-y=\"120.9\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#A09F9E\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
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
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 121 ) );
	object.setDefaultY( MxNumberTenths( 121 ) );
	object.setRelativeX( MxNumberTenths( 121 ) );
	object.setRelativeY( MxNumberTenths( 121 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<booksmart symbol=\"major\" default-x=\"121\" default-y=\"121\" relative-x=\"121\" font-family=\"ABC\" font-size=\"large\" color=\"#A1A2A1A0\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 121.1 ) );
	object.setDefaultY( MxNumberTenths( 121.1 ) );
	object.setRelativeX( MxNumberTenths( 121.1 ) );
	object.setRelativeY( MxNumberTenths( 121.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<quiet default-x=\"121.1\" default-y=\"121.1\" relative-x=\"121.1\" font-size=\"1.1\" color=\"#A4A3A2\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 121.2 ) );
	object.setDefaultY( MxNumberTenths( 121.2 ) );
	object.setRelativeX( MxNumberTenths( 121.2 ) );
	object.setRelativeY( MxNumberTenths( 121.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<musicxmlishard symbol=\"major\" text=\"\" default-x=\"121.2\" relative-x=\"121.2\" font-size=\"large\" color=\"#A5A6A5A4\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 121.3 ) );
	object.setDefaultY( MxNumberTenths( 121.3 ) );
	object.setRelativeX( MxNumberTenths( 121.3 ) );
	object.setRelativeY( MxNumberTenths( 121.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<bishop text=\"\" relative-x=\"121.3\" font-size=\"1.1\" color=\"#A8A7A6\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 121.4 ) );
	object.setDefaultY( MxNumberTenths( 121.4 ) );
	object.setRelativeX( MxNumberTenths( 121.4 ) );
	object.setRelativeY( MxNumberTenths( 121.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<charlie symbol=\"major\" relative-x=\"121.4\" font-size=\"large\" color=\"#A9AAA9A8\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 121.5 ) );
	object.setDefaultY( MxNumberTenths( 121.5 ) );
	object.setRelativeX( MxNumberTenths( 121.5 ) );
	object.setRelativeY( MxNumberTenths( 121.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<booksmart font-size=\"1.1\" color=\"#ACABAA\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "quiet", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 121.6 ) );
	object.setDefaultY( MxNumberTenths( 121.6 ) );
	object.setRelativeX( MxNumberTenths( 121.6 ) );
	object.setRelativeY( MxNumberTenths( 121.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<quiet symbol=\"major\" text=\"\" default-x=\"121.6\" default-y=\"121.6\" relative-y=\"121.6\" font-style=\"normal\" font-size=\"large\" color=\"#ADAEADAC\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "musicxmlishard", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 121.7 ) );
	object.setDefaultY( MxNumberTenths( 121.7 ) );
	object.setRelativeX( MxNumberTenths( 121.7 ) );
	object.setRelativeY( MxNumberTenths( 121.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<musicxmlishard text=\"\" default-x=\"121.7\" default-y=\"121.7\" relative-y=\"121.7\" font-style=\"italic\" font-size=\"1.1\" color=\"#B0AFAE\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "bishop", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 121.8 ) );
	object.setDefaultY( MxNumberTenths( 121.8 ) );
	object.setRelativeX( MxNumberTenths( 121.8 ) );
	object.setRelativeY( MxNumberTenths( 121.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<bishop symbol=\"major\" default-x=\"121.8\" default-y=\"121.8\" relative-y=\"121.8\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#B1B2B1B0\">1</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "charlie", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 121.9 ) );
	object.setDefaultY( MxNumberTenths( 121.9 ) );
	object.setRelativeX( MxNumberTenths( 121.9 ) );
	object.setRelativeY( MxNumberTenths( 121.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<charlie default-y=\"121.9\" relative-y=\"121.9\" font-family=\"ABC\" font-style=\"italic\">1</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object( "booksmart", XsPositiveInteger( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
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
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 122 ) );
	object.setDefaultY( MxNumberTenths( 122 ) );
	object.setRelativeX( MxNumberTenths( 122 ) );
	object.setRelativeY( MxNumberTenths( 122 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<booksmart>1</booksmart>";
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

TEST( getIsSymbolDefaultDefined, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsSymbolDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextDefaultDefined, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsTextDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getSymbolDefaultValue, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	MxEnumDegreeSymbolValue expected;
	MxEnumDegreeSymbolValue actual = object.getSymbolDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTextDefaultValue, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	XsToken expected;
	XsToken actual = object.getTextDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpDegreeValue )
{
	MxCxSmpDegreeValue object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


