/** *******************************************************
  * 
  * MxCxSmpDegreeTypeTest.cpp
  * Created: 2014-12-02 17:31:52
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpDegreeType.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getText().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::add ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "add";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
	expected = "alter";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::subtract ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "subtract";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::add ) );
	expected = "add";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "alter";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::subtract ) );
	expected = "subtract";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::add ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "add";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
	expected = "alter";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::subtract ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "subtract";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::add ) );
	expected = "add";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	std::string expected = "MxCxSmpDegreeType";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	std::string expected = "degree-type";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	std::string expected = "The degree-type type indicates if this degree is an addition, alteration, or subtraction relative to the kind of the current chord. The value of the degree-type element affects the interpretation of the value of the degree-alter element. The text attribute specifies how the type of the degree should be displayed in a score.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setText0, MxCxSmpDegreeType )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeType object;
	object.setText( value1 );
	XsToken expected = value1;
	XsToken actual = object.getText();
	CHECK_EQUAL( expected, actual )
	object.setText( value2 );
	expected = value2;
	actual = object.getText();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX1, MxCxSmpDegreeType )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeType object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY2, MxCxSmpDegreeType )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeType object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX3, MxCxSmpDegreeType )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeType object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY4, MxCxSmpDegreeType )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeType object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily5, MxCxSmpDegreeType )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeType object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle6, MxCxSmpDegreeType )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeType object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize7, MxCxSmpDegreeType )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeType object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight8, MxCxSmpDegreeType )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeType object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor9, MxCxSmpDegreeType )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeType object;
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

TEST( getIsTextRequired0, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsTextRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired1, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired2, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired3, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired4, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired5, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired6, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired7, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired8, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired9, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTextPresent0, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
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
TEST( getIsDefaultXPresent1, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
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
TEST( getIsDefaultYPresent2, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
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
TEST( getIsRelativeXPresent3, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
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
TEST( getIsRelativeYPresent4, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
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
TEST( getIsFontFamilyPresent5, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
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
TEST( getIsFontStylePresent6, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
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
TEST( getIsFontSizePresent7, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
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
TEST( getIsFontWeightPresent8, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
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
TEST( getIsColorPresent9, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
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

TEST( toString0, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
	std::string expected;
	std::string actual;
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 101.9 ) );
	object.setDefaultY( MxNumberTenths( 101.9 ) );
	object.setRelativeX( MxNumberTenths( 101.9 ) );
	object.setRelativeY( MxNumberTenths( 101.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#242322" ) );
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
	expected = "<booksmart text=\"\" default-x=\"101.9\" default-y=\"101.9\" relative-x=\"101.9\" relative-y=\"101.9\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#242322\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 102 ) );
	object.setDefaultY( MxNumberTenths( 102 ) );
	object.setRelativeX( MxNumberTenths( 102 ) );
	object.setRelativeY( MxNumberTenths( 102 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<quiet default-x=\"102\" default-y=\"102\" relative-x=\"102\" relative-y=\"102\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#25262524\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 102.1 ) );
	object.setDefaultY( MxNumberTenths( 102.1 ) );
	object.setRelativeX( MxNumberTenths( 102.1 ) );
	object.setRelativeY( MxNumberTenths( 102.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<musicxmlishard text=\"\" default-y=\"102.1\" relative-x=\"102.1\" relative-y=\"102.1\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#282726\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 102.2 ) );
	object.setDefaultY( MxNumberTenths( 102.2 ) );
	object.setRelativeX( MxNumberTenths( 102.2 ) );
	object.setRelativeY( MxNumberTenths( 102.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<bishop relative-x=\"102.2\" relative-y=\"102.2\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#292A2928\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 102.3 ) );
	object.setDefaultY( MxNumberTenths( 102.3 ) );
	object.setRelativeX( MxNumberTenths( 102.3 ) );
	object.setRelativeY( MxNumberTenths( 102.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<charlie text=\"\" default-x=\"102.3\" relative-y=\"102.3\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#2C2B2A\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 102.4 ) );
	object.setDefaultY( MxNumberTenths( 102.4 ) );
	object.setRelativeX( MxNumberTenths( 102.4 ) );
	object.setRelativeY( MxNumberTenths( 102.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<booksmart default-x=\"102.4\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#2D2E2D2C\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 102.5 ) );
	object.setDefaultY( MxNumberTenths( 102.5 ) );
	object.setRelativeX( MxNumberTenths( 102.5 ) );
	object.setRelativeY( MxNumberTenths( 102.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<quiet text=\"\" default-y=\"102.5\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#302F2E\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 102.6 ) );
	object.setDefaultY( MxNumberTenths( 102.6 ) );
	object.setRelativeX( MxNumberTenths( 102.6 ) );
	object.setRelativeY( MxNumberTenths( 102.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<musicxmlishard default-y=\"102.6\" font-size=\"large\" font-weight=\"normal\" color=\"#31323130\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 102.7 ) );
	object.setDefaultY( MxNumberTenths( 102.7 ) );
	object.setRelativeX( MxNumberTenths( 102.7 ) );
	object.setRelativeY( MxNumberTenths( 102.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<bishop text=\"\" default-x=\"102.7\" default-y=\"102.7\" relative-x=\"102.7\" font-weight=\"bold\" color=\"#343332\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 102.8 ) );
	object.setDefaultY( MxNumberTenths( 102.8 ) );
	object.setRelativeX( MxNumberTenths( 102.8 ) );
	object.setRelativeY( MxNumberTenths( 102.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<charlie default-x=\"102.8\" relative-x=\"102.8\" color=\"#35363534\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 102.9 ) );
	object.setDefaultY( MxNumberTenths( 102.9 ) );
	object.setRelativeX( MxNumberTenths( 102.9 ) );
	object.setRelativeY( MxNumberTenths( 102.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<booksmart text=\"\" relative-x=\"102.9\" relative-y=\"102.9\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 103 ) );
	object.setDefaultY( MxNumberTenths( 103 ) );
	object.setRelativeX( MxNumberTenths( 103 ) );
	object.setRelativeY( MxNumberTenths( 103 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<quiet relative-x=\"103\" relative-y=\"103\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 103.1 ) );
	object.setDefaultY( MxNumberTenths( 103.1 ) );
	object.setRelativeX( MxNumberTenths( 103.1 ) );
	object.setRelativeY( MxNumberTenths( 103.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<musicxmlishard text=\"\" default-x=\"103.1\" default-y=\"103.1\" relative-y=\"103.1\" font-family=\"DEF\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 103.2 ) );
	object.setDefaultY( MxNumberTenths( 103.2 ) );
	object.setRelativeX( MxNumberTenths( 103.2 ) );
	object.setRelativeY( MxNumberTenths( 103.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<bishop default-x=\"103.2\" default-y=\"103.2\" relative-y=\"103.2\" font-family=\"XYZ\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 103.3 ) );
	object.setDefaultY( MxNumberTenths( 103.3 ) );
	object.setRelativeX( MxNumberTenths( 103.3 ) );
	object.setRelativeY( MxNumberTenths( 103.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<charlie text=\"\" default-y=\"103.3\" relative-y=\"103.3\" font-family=\"ABC\" font-style=\"italic\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 103.4 ) );
	object.setDefaultY( MxNumberTenths( 103.4 ) );
	object.setRelativeX( MxNumberTenths( 103.4 ) );
	object.setRelativeY( MxNumberTenths( 103.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<booksmart font-family=\"DEF\" font-style=\"normal\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 103.5 ) );
	object.setDefaultY( MxNumberTenths( 103.5 ) );
	object.setRelativeX( MxNumberTenths( 103.5 ) );
	object.setRelativeY( MxNumberTenths( 103.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<quiet text=\"\" default-x=\"103.5\" relative-x=\"103.5\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 103.6 ) );
	object.setDefaultY( MxNumberTenths( 103.6 ) );
	object.setRelativeX( MxNumberTenths( 103.6 ) );
	object.setRelativeY( MxNumberTenths( 103.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<musicxmlishard default-x=\"103.6\" relative-x=\"103.6\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 103.7 ) );
	object.setDefaultY( MxNumberTenths( 103.7 ) );
	object.setRelativeX( MxNumberTenths( 103.7 ) );
	object.setRelativeY( MxNumberTenths( 103.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<bishop text=\"\" default-y=\"103.7\" relative-x=\"103.7\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 103.8 ) );
	object.setDefaultY( MxNumberTenths( 103.8 ) );
	object.setRelativeX( MxNumberTenths( 103.8 ) );
	object.setRelativeY( MxNumberTenths( 103.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<charlie default-y=\"103.8\" relative-x=\"103.8\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 103.9 ) );
	object.setDefaultY( MxNumberTenths( 103.9 ) );
	object.setRelativeX( MxNumberTenths( 103.9 ) );
	object.setRelativeY( MxNumberTenths( 103.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<booksmart text=\"\" default-x=\"103.9\" default-y=\"103.9\" relative-y=\"103.9\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#4C4B4A\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 104 ) );
	object.setDefaultY( MxNumberTenths( 104 ) );
	object.setRelativeX( MxNumberTenths( 104 ) );
	object.setRelativeY( MxNumberTenths( 104 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<quiet default-x=\"104\" relative-y=\"104\" font-size=\"large\" font-weight=\"normal\" color=\"#4D4E4D4C\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 104.1 ) );
	object.setDefaultY( MxNumberTenths( 104.1 ) );
	object.setRelativeX( MxNumberTenths( 104.1 ) );
	object.setRelativeY( MxNumberTenths( 104.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<musicxmlishard text=\"\" relative-y=\"104.1\" font-size=\"1.1\" font-weight=\"bold\" color=\"#504F4E\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 104.2 ) );
	object.setDefaultY( MxNumberTenths( 104.2 ) );
	object.setRelativeX( MxNumberTenths( 104.2 ) );
	object.setRelativeY( MxNumberTenths( 104.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<bishop relative-y=\"104.2\" font-size=\"large\" font-weight=\"normal\" color=\"#51525150\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 104.3 ) );
	object.setDefaultY( MxNumberTenths( 104.3 ) );
	object.setRelativeX( MxNumberTenths( 104.3 ) );
	object.setRelativeY( MxNumberTenths( 104.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<charlie text=\"\" default-x=\"104.3\" default-y=\"104.3\" relative-x=\"104.3\" relative-y=\"104.3\" font-family=\"DEF\" font-weight=\"bold\" color=\"#545352\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 104.4 ) );
	object.setDefaultY( MxNumberTenths( 104.4 ) );
	object.setRelativeX( MxNumberTenths( 104.4 ) );
	object.setRelativeY( MxNumberTenths( 104.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#55565554" ) );
	expected = "<booksmart default-x=\"104.4\" default-y=\"104.4\" relative-x=\"104.4\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#55565554\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 104.5 ) );
	object.setDefaultY( MxNumberTenths( 104.5 ) );
	object.setRelativeX( MxNumberTenths( 104.5 ) );
	object.setRelativeY( MxNumberTenths( 104.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#585756" ) );
	expected = "<quiet text=\"\" default-y=\"104.5\" relative-x=\"104.5\" font-family=\"ABC\" font-weight=\"bold\" color=\"#585756\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 104.6 ) );
	object.setDefaultY( MxNumberTenths( 104.6 ) );
	object.setRelativeX( MxNumberTenths( 104.6 ) );
	object.setRelativeY( MxNumberTenths( 104.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
	expected = "<musicxmlishard relative-x=\"104.6\" font-family=\"DEF\" color=\"#595A5958\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 104.7 ) );
	object.setDefaultY( MxNumberTenths( 104.7 ) );
	object.setRelativeX( MxNumberTenths( 104.7 ) );
	object.setRelativeY( MxNumberTenths( 104.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	expected = "<bishop text=\"\" default-x=\"104.7\" font-family=\"XYZ\" font-style=\"italic\" color=\"#5C5B5A\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 104.8 ) );
	object.setDefaultY( MxNumberTenths( 104.8 ) );
	object.setRelativeX( MxNumberTenths( 104.8 ) );
	object.setRelativeY( MxNumberTenths( 104.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	expected = "<charlie default-x=\"104.8\" font-family=\"ABC\" font-style=\"normal\" color=\"#5D5E5D5C\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 104.9 ) );
	object.setDefaultY( MxNumberTenths( 104.9 ) );
	object.setRelativeX( MxNumberTenths( 104.9 ) );
	object.setRelativeY( MxNumberTenths( 104.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
	expected = "<booksmart text=\"\" default-y=\"104.9\" relative-y=\"104.9\" font-style=\"italic\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 105 ) );
	object.setDefaultY( MxNumberTenths( 105 ) );
	object.setRelativeX( MxNumberTenths( 105 ) );
	object.setRelativeY( MxNumberTenths( 105 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<quiet default-y=\"105\" relative-y=\"105\" font-style=\"normal\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 105.1 ) );
	object.setDefaultY( MxNumberTenths( 105.1 ) );
	object.setRelativeX( MxNumberTenths( 105.1 ) );
	object.setRelativeY( MxNumberTenths( 105.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<musicxmlishard text=\"\" default-x=\"105.1\" default-y=\"105.1\" relative-x=\"105.1\" relative-y=\"105.1\" font-style=\"italic\" font-size=\"1.1\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 105.2 ) );
	object.setDefaultY( MxNumberTenths( 105.2 ) );
	object.setRelativeX( MxNumberTenths( 105.2 ) );
	object.setRelativeY( MxNumberTenths( 105.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<bishop default-x=\"105.2\" relative-x=\"105.2\" relative-y=\"105.2\" font-style=\"normal\" font-size=\"large\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 105.3 ) );
	object.setDefaultY( MxNumberTenths( 105.3 ) );
	object.setRelativeX( MxNumberTenths( 105.3 ) );
	object.setRelativeY( MxNumberTenths( 105.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<charlie text=\"\" relative-x=\"105.3\" relative-y=\"105.3\" font-style=\"italic\" font-size=\"1.1\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 105.4 ) );
	object.setDefaultY( MxNumberTenths( 105.4 ) );
	object.setRelativeX( MxNumberTenths( 105.4 ) );
	object.setRelativeY( MxNumberTenths( 105.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<booksmart relative-x=\"105.4\" font-size=\"large\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 105.5 ) );
	object.setDefaultY( MxNumberTenths( 105.5 ) );
	object.setRelativeX( MxNumberTenths( 105.5 ) );
	object.setRelativeY( MxNumberTenths( 105.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<quiet text=\"\" default-x=\"105.5\" default-y=\"105.5\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 105.6 ) );
	object.setDefaultY( MxNumberTenths( 105.6 ) );
	object.setRelativeX( MxNumberTenths( 105.6 ) );
	object.setRelativeY( MxNumberTenths( 105.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<musicxmlishard default-x=\"105.6\" default-y=\"105.6\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 105.7 ) );
	object.setDefaultY( MxNumberTenths( 105.7 ) );
	object.setRelativeX( MxNumberTenths( 105.7 ) );
	object.setRelativeY( MxNumberTenths( 105.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<bishop text=\"\" default-y=\"105.7\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 105.8 ) );
	object.setDefaultY( MxNumberTenths( 105.8 ) );
	object.setRelativeX( MxNumberTenths( 105.8 ) );
	object.setRelativeY( MxNumberTenths( 105.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<charlie font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 105.9 ) );
	object.setDefaultY( MxNumberTenths( 105.9 ) );
	object.setRelativeX( MxNumberTenths( 105.9 ) );
	object.setRelativeY( MxNumberTenths( 105.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<booksmart text=\"\" default-x=\"105.9\" relative-x=\"105.9\" relative-y=\"105.9\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#747372\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 106 ) );
	object.setDefaultY( MxNumberTenths( 106 ) );
	object.setRelativeX( MxNumberTenths( 106 ) );
	object.setRelativeY( MxNumberTenths( 106 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<quiet default-x=\"106\" relative-x=\"106\" relative-y=\"106\" font-family=\"ABC\" font-weight=\"normal\" color=\"#75767574\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 106.1 ) );
	object.setDefaultY( MxNumberTenths( 106.1 ) );
	object.setRelativeX( MxNumberTenths( 106.1 ) );
	object.setRelativeY( MxNumberTenths( 106.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<musicxmlishard text=\"\" default-y=\"106.1\" relative-x=\"106.1\" relative-y=\"106.1\" font-style=\"italic\" font-weight=\"bold\" color=\"#787776\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 106.2 ) );
	object.setDefaultY( MxNumberTenths( 106.2 ) );
	object.setRelativeX( MxNumberTenths( 106.2 ) );
	object.setRelativeY( MxNumberTenths( 106.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<bishop default-y=\"106.2\" relative-x=\"106.2\" relative-y=\"106.2\" font-style=\"normal\" font-weight=\"normal\" color=\"#797A7978\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 106.3 ) );
	object.setDefaultY( MxNumberTenths( 106.3 ) );
	object.setRelativeX( MxNumberTenths( 106.3 ) );
	object.setRelativeY( MxNumberTenths( 106.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<charlie text=\"\" default-x=\"106.3\" default-y=\"106.3\" relative-y=\"106.3\" font-style=\"italic\" font-weight=\"bold\" color=\"#7C7B7A\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 106.4 ) );
	object.setDefaultY( MxNumberTenths( 106.4 ) );
	object.setRelativeX( MxNumberTenths( 106.4 ) );
	object.setRelativeY( MxNumberTenths( 106.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<booksmart default-x=\"106.4\" font-style=\"normal\" color=\"#7D7E7D7C\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 106.5 ) );
	object.setDefaultY( MxNumberTenths( 106.5 ) );
	object.setRelativeX( MxNumberTenths( 106.5 ) );
	object.setRelativeY( MxNumberTenths( 106.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<quiet text=\"\" font-style=\"italic\" color=\"#807F7E\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 106.6 ) );
	object.setDefaultY( MxNumberTenths( 106.6 ) );
	object.setRelativeX( MxNumberTenths( 106.6 ) );
	object.setRelativeY( MxNumberTenths( 106.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<musicxmlishard font-style=\"normal\" color=\"#81828180\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 106.7 ) );
	object.setDefaultY( MxNumberTenths( 106.7 ) );
	object.setRelativeX( MxNumberTenths( 106.7 ) );
	object.setRelativeY( MxNumberTenths( 106.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<bishop text=\"\" default-x=\"106.7\" default-y=\"106.7\" relative-x=\"106.7\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#848382\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 106.8 ) );
	object.setDefaultY( MxNumberTenths( 106.8 ) );
	object.setRelativeX( MxNumberTenths( 106.8 ) );
	object.setRelativeY( MxNumberTenths( 106.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<charlie default-x=\"106.8\" default-y=\"106.8\" relative-x=\"106.8\" font-family=\"XYZ\" font-size=\"large\" color=\"#85868584\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 106.9 ) );
	object.setDefaultY( MxNumberTenths( 106.9 ) );
	object.setRelativeX( MxNumberTenths( 106.9 ) );
	object.setRelativeY( MxNumberTenths( 106.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<booksmart text=\"\" default-y=\"106.9\" relative-x=\"106.9\" relative-y=\"106.9\" font-family=\"ABC\" font-size=\"1.1\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 107 ) );
	object.setDefaultY( MxNumberTenths( 107 ) );
	object.setRelativeX( MxNumberTenths( 107 ) );
	object.setRelativeY( MxNumberTenths( 107 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<quiet relative-x=\"107\" relative-y=\"107\" font-family=\"DEF\" font-size=\"large\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 107.1 ) );
	object.setDefaultY( MxNumberTenths( 107.1 ) );
	object.setRelativeX( MxNumberTenths( 107.1 ) );
	object.setRelativeY( MxNumberTenths( 107.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<musicxmlishard text=\"\" default-x=\"107.1\" relative-y=\"107.1\" font-family=\"XYZ\" font-size=\"1.1\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 107.2 ) );
	object.setDefaultY( MxNumberTenths( 107.2 ) );
	object.setRelativeX( MxNumberTenths( 107.2 ) );
	object.setRelativeY( MxNumberTenths( 107.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<bishop default-x=\"107.2\" relative-y=\"107.2\" font-family=\"ABC\" font-size=\"large\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 107.3 ) );
	object.setDefaultY( MxNumberTenths( 107.3 ) );
	object.setRelativeX( MxNumberTenths( 107.3 ) );
	object.setRelativeY( MxNumberTenths( 107.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<charlie text=\"\" default-y=\"107.3\" relative-y=\"107.3\" font-size=\"1.1\" font-weight=\"bold\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 107.4 ) );
	object.setDefaultY( MxNumberTenths( 107.4 ) );
	object.setRelativeX( MxNumberTenths( 107.4 ) );
	object.setRelativeY( MxNumberTenths( 107.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<booksmart default-y=\"107.4\" font-size=\"large\" font-weight=\"normal\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 107.5 ) );
	object.setDefaultY( MxNumberTenths( 107.5 ) );
	object.setRelativeX( MxNumberTenths( 107.5 ) );
	object.setRelativeY( MxNumberTenths( 107.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<quiet text=\"\" default-x=\"107.5\" default-y=\"107.5\" relative-x=\"107.5\" font-style=\"italic\" font-weight=\"bold\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 107.6 ) );
	object.setDefaultY( MxNumberTenths( 107.6 ) );
	object.setRelativeX( MxNumberTenths( 107.6 ) );
	object.setRelativeY( MxNumberTenths( 107.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<musicxmlishard default-x=\"107.6\" relative-x=\"107.6\" font-style=\"normal\" font-weight=\"normal\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 107.7 ) );
	object.setDefaultY( MxNumberTenths( 107.7 ) );
	object.setRelativeX( MxNumberTenths( 107.7 ) );
	object.setRelativeY( MxNumberTenths( 107.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<bishop text=\"\" relative-x=\"107.7\" font-style=\"italic\" font-weight=\"bold\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 107.8 ) );
	object.setDefaultY( MxNumberTenths( 107.8 ) );
	object.setRelativeX( MxNumberTenths( 107.8 ) );
	object.setRelativeY( MxNumberTenths( 107.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<charlie relative-x=\"107.8\" font-style=\"normal\" font-weight=\"normal\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 107.9 ) );
	object.setDefaultY( MxNumberTenths( 107.9 ) );
	object.setRelativeX( MxNumberTenths( 107.9 ) );
	object.setRelativeY( MxNumberTenths( 107.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<booksmart text=\"\" default-x=\"107.9\" default-y=\"107.9\" relative-y=\"107.9\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" color=\"#9C9B9A\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 108 ) );
	object.setDefaultY( MxNumberTenths( 108 ) );
	object.setRelativeX( MxNumberTenths( 108 ) );
	object.setRelativeY( MxNumberTenths( 108 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<quiet default-x=\"108\" default-y=\"108\" relative-y=\"108\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" color=\"#9D9E9D9C\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 108.1 ) );
	object.setDefaultY( MxNumberTenths( 108.1 ) );
	object.setRelativeX( MxNumberTenths( 108.1 ) );
	object.setRelativeY( MxNumberTenths( 108.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<musicxmlishard text=\"\" default-y=\"108.1\" relative-y=\"108.1\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" color=\"#A09F9E\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 108.2 ) );
	object.setDefaultY( MxNumberTenths( 108.2 ) );
	object.setRelativeX( MxNumberTenths( 108.2 ) );
	object.setRelativeY( MxNumberTenths( 108.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<bishop relative-y=\"108.2\" font-family=\"DEF\" color=\"#A1A2A1A0\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 108.3 ) );
	object.setDefaultY( MxNumberTenths( 108.3 ) );
	object.setRelativeX( MxNumberTenths( 108.3 ) );
	object.setRelativeY( MxNumberTenths( 108.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<charlie text=\"\" default-x=\"108.3\" relative-x=\"108.3\" relative-y=\"108.3\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#A4A3A2\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 108.4 ) );
	object.setDefaultY( MxNumberTenths( 108.4 ) );
	object.setRelativeX( MxNumberTenths( 108.4 ) );
	object.setRelativeY( MxNumberTenths( 108.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<booksmart default-x=\"108.4\" relative-x=\"108.4\" font-family=\"ABC\" font-size=\"large\" color=\"#A5A6A5A4\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 108.5 ) );
	object.setDefaultY( MxNumberTenths( 108.5 ) );
	object.setRelativeX( MxNumberTenths( 108.5 ) );
	object.setRelativeY( MxNumberTenths( 108.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<quiet text=\"\" default-y=\"108.5\" relative-x=\"108.5\" font-size=\"1.1\" color=\"#A8A7A6\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 108.6 ) );
	object.setDefaultY( MxNumberTenths( 108.6 ) );
	object.setRelativeX( MxNumberTenths( 108.6 ) );
	object.setRelativeY( MxNumberTenths( 108.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<musicxmlishard default-y=\"108.6\" relative-x=\"108.6\" font-size=\"large\" color=\"#A9AAA9A8\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 108.7 ) );
	object.setDefaultY( MxNumberTenths( 108.7 ) );
	object.setRelativeX( MxNumberTenths( 108.7 ) );
	object.setRelativeY( MxNumberTenths( 108.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<bishop text=\"\" default-x=\"108.7\" default-y=\"108.7\" font-size=\"1.1\" color=\"#ACABAA\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 108.8 ) );
	object.setDefaultY( MxNumberTenths( 108.8 ) );
	object.setRelativeX( MxNumberTenths( 108.8 ) );
	object.setRelativeY( MxNumberTenths( 108.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<charlie default-x=\"108.8\" font-size=\"large\" color=\"#ADAEADAC\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 108.9 ) );
	object.setDefaultY( MxNumberTenths( 108.9 ) );
	object.setRelativeX( MxNumberTenths( 108.9 ) );
	object.setRelativeY( MxNumberTenths( 108.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<booksmart text=\"\" relative-y=\"108.9\" font-style=\"italic\" font-size=\"1.1\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 109 ) );
	object.setDefaultY( MxNumberTenths( 109 ) );
	object.setRelativeX( MxNumberTenths( 109 ) );
	object.setRelativeY( MxNumberTenths( 109 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<quiet relative-y=\"109\" font-style=\"normal\" font-size=\"large\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 109.1 ) );
	object.setDefaultY( MxNumberTenths( 109.1 ) );
	object.setRelativeX( MxNumberTenths( 109.1 ) );
	object.setRelativeY( MxNumberTenths( 109.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<musicxmlishard text=\"\" default-x=\"109.1\" default-y=\"109.1\" relative-x=\"109.1\" relative-y=\"109.1\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 109.2 ) );
	object.setDefaultY( MxNumberTenths( 109.2 ) );
	object.setRelativeX( MxNumberTenths( 109.2 ) );
	object.setRelativeY( MxNumberTenths( 109.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<bishop default-x=\"109.2\" default-y=\"109.2\" relative-x=\"109.2\" relative-y=\"109.2\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 109.3 ) );
	object.setDefaultY( MxNumberTenths( 109.3 ) );
	object.setRelativeX( MxNumberTenths( 109.3 ) );
	object.setRelativeY( MxNumberTenths( 109.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<charlie text=\"\" default-y=\"109.3\" relative-x=\"109.3\" relative-y=\"109.3\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 109.4 ) );
	object.setDefaultY( MxNumberTenths( 109.4 ) );
	object.setRelativeX( MxNumberTenths( 109.4 ) );
	object.setRelativeY( MxNumberTenths( 109.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<booksmart relative-x=\"109.4\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 109.5 ) );
	object.setDefaultY( MxNumberTenths( 109.5 ) );
	object.setRelativeX( MxNumberTenths( 109.5 ) );
	object.setRelativeY( MxNumberTenths( 109.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<quiet text=\"\" default-x=\"109.5\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 109.6 ) );
	object.setDefaultY( MxNumberTenths( 109.6 ) );
	object.setRelativeX( MxNumberTenths( 109.6 ) );
	object.setRelativeY( MxNumberTenths( 109.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<musicxmlishard default-x=\"109.6\" font-family=\"ABC\" font-weight=\"normal\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 109.7 ) );
	object.setDefaultY( MxNumberTenths( 109.7 ) );
	object.setRelativeX( MxNumberTenths( 109.7 ) );
	object.setRelativeY( MxNumberTenths( 109.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<bishop text=\"\" default-y=\"109.7\" font-weight=\"bold\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 109.8 ) );
	object.setDefaultY( MxNumberTenths( 109.8 ) );
	object.setRelativeX( MxNumberTenths( 109.8 ) );
	object.setRelativeY( MxNumberTenths( 109.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<charlie default-y=\"109.8\" font-weight=\"normal\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 109.9 ) );
	object.setDefaultY( MxNumberTenths( 109.9 ) );
	object.setRelativeX( MxNumberTenths( 109.9 ) );
	object.setRelativeY( MxNumberTenths( 109.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<booksmart text=\"\" default-x=\"109.9\" default-y=\"109.9\" relative-x=\"109.9\" relative-y=\"109.9\" font-size=\"1.1\" font-weight=\"bold\" color=\"#C4C3C2\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 110 ) );
	object.setDefaultY( MxNumberTenths( 110 ) );
	object.setRelativeX( MxNumberTenths( 110 ) );
	object.setRelativeY( MxNumberTenths( 110 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<quiet default-x=\"110\" relative-x=\"110\" relative-y=\"110\" font-size=\"large\" color=\"#C5C6C5C4\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 110.1 ) );
	object.setDefaultY( MxNumberTenths( 110.1 ) );
	object.setRelativeX( MxNumberTenths( 110.1 ) );
	object.setRelativeY( MxNumberTenths( 110.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<musicxmlishard text=\"\" relative-x=\"110.1\" relative-y=\"110.1\" font-size=\"1.1\" color=\"#C8C7C6\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 110.2 ) );
	object.setDefaultY( MxNumberTenths( 110.2 ) );
	object.setRelativeX( MxNumberTenths( 110.2 ) );
	object.setRelativeY( MxNumberTenths( 110.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<bishop relative-x=\"110.2\" relative-y=\"110.2\" font-size=\"large\" color=\"#C9CAC9C8\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 110.3 ) );
	object.setDefaultY( MxNumberTenths( 110.3 ) );
	object.setRelativeX( MxNumberTenths( 110.3 ) );
	object.setRelativeY( MxNumberTenths( 110.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<charlie text=\"\" default-x=\"110.3\" default-y=\"110.3\" relative-y=\"110.3\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#CCCBCA\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 110.4 ) );
	object.setDefaultY( MxNumberTenths( 110.4 ) );
	object.setRelativeX( MxNumberTenths( 110.4 ) );
	object.setRelativeY( MxNumberTenths( 110.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<booksmart default-x=\"110.4\" default-y=\"110.4\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#CDCECDCC\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 110.5 ) );
	object.setDefaultY( MxNumberTenths( 110.5 ) );
	object.setRelativeX( MxNumberTenths( 110.5 ) );
	object.setRelativeY( MxNumberTenths( 110.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<quiet text=\"\" default-y=\"110.5\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#D0CFCE\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 110.6 ) );
	object.setDefaultY( MxNumberTenths( 110.6 ) );
	object.setRelativeX( MxNumberTenths( 110.6 ) );
	object.setRelativeY( MxNumberTenths( 110.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<musicxmlishard font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#D1D2D1D0\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 110.7 ) );
	object.setDefaultY( MxNumberTenths( 110.7 ) );
	object.setRelativeX( MxNumberTenths( 110.7 ) );
	object.setRelativeY( MxNumberTenths( 110.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<bishop text=\"\" default-x=\"110.7\" relative-x=\"110.7\" font-family=\"XYZ\" font-style=\"italic\" color=\"#D4D3D2\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 110.8 ) );
	object.setDefaultY( MxNumberTenths( 110.8 ) );
	object.setRelativeX( MxNumberTenths( 110.8 ) );
	object.setRelativeY( MxNumberTenths( 110.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<charlie default-x=\"110.8\" relative-x=\"110.8\" font-family=\"ABC\" font-style=\"normal\" color=\"#D5D6D5D4\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 110.9 ) );
	object.setDefaultY( MxNumberTenths( 110.9 ) );
	object.setRelativeX( MxNumberTenths( 110.9 ) );
	object.setRelativeY( MxNumberTenths( 110.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<booksmart text=\"\" default-y=\"110.9\" relative-x=\"110.9\" relative-y=\"110.9\" font-style=\"italic\" font-weight=\"bold\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 111 ) );
	object.setDefaultY( MxNumberTenths( 111 ) );
	object.setRelativeX( MxNumberTenths( 111 ) );
	object.setRelativeY( MxNumberTenths( 111 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<quiet default-y=\"111\" relative-x=\"111\" relative-y=\"111\" font-weight=\"normal\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 111.1 ) );
	object.setDefaultY( MxNumberTenths( 111.1 ) );
	object.setRelativeX( MxNumberTenths( 111.1 ) );
	object.setRelativeY( MxNumberTenths( 111.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<musicxmlishard text=\"\" default-x=\"111.1\" default-y=\"111.1\" relative-y=\"111.1\" font-weight=\"bold\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 111.2 ) );
	object.setDefaultY( MxNumberTenths( 111.2 ) );
	object.setRelativeX( MxNumberTenths( 111.2 ) );
	object.setRelativeY( MxNumberTenths( 111.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<bishop default-x=\"111.2\" relative-y=\"111.2\" font-weight=\"normal\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 111.3 ) );
	object.setDefaultY( MxNumberTenths( 111.3 ) );
	object.setRelativeX( MxNumberTenths( 111.3 ) );
	object.setRelativeY( MxNumberTenths( 111.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<charlie text=\"\" relative-y=\"111.3\" font-weight=\"bold\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 111.4 ) );
	object.setDefaultY( MxNumberTenths( 111.4 ) );
	object.setRelativeX( MxNumberTenths( 111.4 ) );
	object.setRelativeY( MxNumberTenths( 111.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<booksmart font-weight=\"normal\">alter</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "quiet", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 111.5 ) );
	object.setDefaultY( MxNumberTenths( 111.5 ) );
	object.setRelativeX( MxNumberTenths( 111.5 ) );
	object.setRelativeY( MxNumberTenths( 111.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<quiet text=\"\" default-x=\"111.5\" default-y=\"111.5\" relative-x=\"111.5\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\">alter</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "musicxmlishard", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 111.6 ) );
	object.setDefaultY( MxNumberTenths( 111.6 ) );
	object.setRelativeX( MxNumberTenths( 111.6 ) );
	object.setRelativeY( MxNumberTenths( 111.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	expected = "<musicxmlishard default-x=\"111.6\" default-y=\"111.6\" relative-x=\"111.6\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\">alter</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "bishop", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 111.7 ) );
	object.setDefaultY( MxNumberTenths( 111.7 ) );
	object.setRelativeX( MxNumberTenths( 111.7 ) );
	object.setRelativeY( MxNumberTenths( 111.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	expected = "<bishop text=\"\" default-y=\"111.7\" relative-x=\"111.7\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">alter</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "charlie", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 111.8 ) );
	object.setDefaultY( MxNumberTenths( 111.8 ) );
	object.setRelativeX( MxNumberTenths( 111.8 ) );
	object.setRelativeY( MxNumberTenths( 111.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	expected = "<charlie relative-x=\"111.8\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\">alter</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object( "booksmart", MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
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
	object.setDefaultX( MxNumberTenths( 111.9 ) );
	object.setDefaultY( MxNumberTenths( 111.9 ) );
	object.setRelativeX( MxNumberTenths( 111.9 ) );
	object.setRelativeY( MxNumberTenths( 111.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	expected = "<booksmart>alter</booksmart>";
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

TEST( getIsTextDefaultDefined, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsTextDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTextDefaultValue, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	XsToken expected;
	XsToken actual = object.getTextDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpDegreeType )
{
	MxCxSmpDegreeType object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


