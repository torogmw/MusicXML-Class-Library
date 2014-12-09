/** *******************************************************
  * 
  * MxCxSmpDegreeAlterTest.cpp
  * Created: 2014-12-02 17:31:51
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpDegreeAlter.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::no ) ).toString();
	std::string actual = object.getPlusMinus().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( 1 ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	std::string expected = "MxCxSmpDegreeAlter";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	std::string expected = "degree-alter";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	std::string expected = "The degree-alter type represents the chromatic alteration for the current degree. If the degree-type value is alter or subtract, the degree-alter value is relative to the degree already in the chord based on its kind element. If the degree-type value is add, the degree-alter is relative to a dominant chord (major and perfect intervals except for a minor seventh). The plus-minus attribute is used to indicate if plus and minus symbols should be used instead of sharp and flat symbols to display the degree alteration; it is no by default.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setDefaultX0, MxCxSmpDegreeAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeAlter object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY1, MxCxSmpDegreeAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeAlter object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX2, MxCxSmpDegreeAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeAlter object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY3, MxCxSmpDegreeAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeAlter object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily4, MxCxSmpDegreeAlter )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeAlter object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle5, MxCxSmpDegreeAlter )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeAlter object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize6, MxCxSmpDegreeAlter )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeAlter object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight7, MxCxSmpDegreeAlter )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeAlter object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor8, MxCxSmpDegreeAlter )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeAlter object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setPlusMinus9, MxCxSmpDegreeAlter )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpDegreeAlter object;
	object.setPlusMinus( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getPlusMinus();
	CHECK_EQUAL( expected, actual )
	object.setPlusMinus( value2 );
	expected = value2;
	actual = object.getPlusMinus();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsDefaultXRequired0, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired1, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired2, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired3, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired4, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired5, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired6, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired7, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired8, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlusMinusRequired9, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsPlusMinusRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsDefaultXPresent0, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
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
TEST( getIsDefaultYPresent1, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
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
TEST( getIsRelativeXPresent2, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
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
TEST( getIsRelativeYPresent3, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
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
TEST( getIsFontFamilyPresent4, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
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
TEST( getIsFontStylePresent5, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
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
TEST( getIsFontSizePresent6, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
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
TEST( getIsFontWeightPresent7, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
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
TEST( getIsColorPresent8, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
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
TEST( getIsPlusMinusPresent9, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsPlusMinusPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPlusMinusPresent( true );
	expected = true;
	actual = object.getIsPlusMinusPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPlusMinusPresent( false );
	expected = false;
	actual = object.getIsPlusMinusPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setDefaultX( MxNumberTenths( 91.8 ) );
	object.setDefaultY( MxNumberTenths( 91.8 ) );
	object.setRelativeX( MxNumberTenths( 91.8 ) );
	object.setRelativeY( MxNumberTenths( 91.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	expected = "<booksmart default-x=\"91.8\" default-y=\"91.8\" relative-x=\"91.8\" relative-y=\"91.8\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#595A5958\" plus-minus=\"yes\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 91.9 ) );
	object.setDefaultY( MxNumberTenths( 91.9 ) );
	object.setRelativeX( MxNumberTenths( 91.9 ) );
	object.setRelativeY( MxNumberTenths( 91.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-y=\"91.9\" relative-x=\"91.9\" relative-y=\"91.9\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#5C5B5A\" plus-minus=\"yes\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 92 ) );
	object.setDefaultY( MxNumberTenths( 92 ) );
	object.setRelativeX( MxNumberTenths( 92 ) );
	object.setRelativeY( MxNumberTenths( 92 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"92\" relative-x=\"92\" relative-y=\"92\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#5D5E5D5C\" plus-minus=\"yes\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 92.1 ) );
	object.setDefaultY( MxNumberTenths( 92.1 ) );
	object.setRelativeX( MxNumberTenths( 92.1 ) );
	object.setRelativeY( MxNumberTenths( 92.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop relative-y=\"92.1\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#605F5E\" plus-minus=\"yes\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 92.2 ) );
	object.setDefaultY( MxNumberTenths( 92.2 ) );
	object.setRelativeX( MxNumberTenths( 92.2 ) );
	object.setRelativeY( MxNumberTenths( 92.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"92.2\" default-y=\"92.2\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#61626160\" plus-minus=\"yes\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 92.3 ) );
	object.setDefaultY( MxNumberTenths( 92.3 ) );
	object.setRelativeX( MxNumberTenths( 92.3 ) );
	object.setRelativeY( MxNumberTenths( 92.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#646362" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-y=\"92.3\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#646362\" plus-minus=\"yes\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 92.4 ) );
	object.setDefaultY( MxNumberTenths( 92.4 ) );
	object.setRelativeX( MxNumberTenths( 92.4 ) );
	object.setRelativeY( MxNumberTenths( 92.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"92.4\" relative-x=\"92.4\" font-size=\"large\" font-weight=\"normal\" color=\"#65666564\" plus-minus=\"yes\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 92.5 ) );
	object.setDefaultY( MxNumberTenths( 92.5 ) );
	object.setRelativeX( MxNumberTenths( 92.5 ) );
	object.setRelativeY( MxNumberTenths( 92.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#686766" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard relative-x=\"92.5\" font-weight=\"bold\" color=\"#686766\" plus-minus=\"yes\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 92.6 ) );
	object.setDefaultY( MxNumberTenths( 92.6 ) );
	object.setRelativeX( MxNumberTenths( 92.6 ) );
	object.setRelativeY( MxNumberTenths( 92.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"92.6\" default-y=\"92.6\" relative-x=\"92.6\" relative-y=\"92.6\" color=\"#696A6968\" plus-minus=\"yes\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 92.7 ) );
	object.setDefaultY( MxNumberTenths( 92.7 ) );
	object.setRelativeX( MxNumberTenths( 92.7 ) );
	object.setRelativeY( MxNumberTenths( 92.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-y=\"92.7\" relative-y=\"92.7\" plus-minus=\"yes\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 92.8 ) );
	object.setDefaultY( MxNumberTenths( 92.8 ) );
	object.setRelativeX( MxNumberTenths( 92.8 ) );
	object.setRelativeY( MxNumberTenths( 92.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-x=\"92.8\" relative-y=\"92.8\" font-family=\"ABC\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 92.9 ) );
	object.setDefaultY( MxNumberTenths( 92.9 ) );
	object.setRelativeX( MxNumberTenths( 92.9 ) );
	object.setRelativeY( MxNumberTenths( 92.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet relative-y=\"92.9\" font-family=\"DEF\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 93 ) );
	object.setDefaultY( MxNumberTenths( 93 ) );
	object.setRelativeX( MxNumberTenths( 93 ) );
	object.setRelativeY( MxNumberTenths( 93 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"93\" default-y=\"93\" relative-x=\"93\" font-family=\"XYZ\" font-style=\"normal\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 93.1 ) );
	object.setDefaultY( MxNumberTenths( 93.1 ) );
	object.setRelativeX( MxNumberTenths( 93.1 ) );
	object.setRelativeY( MxNumberTenths( 93.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#747372" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-y=\"93.1\" relative-x=\"93.1\" font-family=\"ABC\" font-style=\"italic\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 93.2 ) );
	object.setDefaultY( MxNumberTenths( 93.2 ) );
	object.setRelativeX( MxNumberTenths( 93.2 ) );
	object.setRelativeY( MxNumberTenths( 93.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"93.2\" relative-x=\"93.2\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 93.3 ) );
	object.setDefaultY( MxNumberTenths( 93.3 ) );
	object.setRelativeX( MxNumberTenths( 93.3 ) );
	object.setRelativeY( MxNumberTenths( 93.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#787776" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart font-style=\"italic\" font-size=\"1.1\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 93.4 ) );
	object.setDefaultY( MxNumberTenths( 93.4 ) );
	object.setRelativeX( MxNumberTenths( 93.4 ) );
	object.setRelativeY( MxNumberTenths( 93.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"93.4\" default-y=\"93.4\" relative-y=\"93.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 93.5 ) );
	object.setDefaultY( MxNumberTenths( 93.5 ) );
	object.setRelativeX( MxNumberTenths( 93.5 ) );
	object.setRelativeY( MxNumberTenths( 93.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-y=\"93.5\" relative-y=\"93.5\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 93.6 ) );
	object.setDefaultY( MxNumberTenths( 93.6 ) );
	object.setRelativeX( MxNumberTenths( 93.6 ) );
	object.setRelativeY( MxNumberTenths( 93.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"93.6\" relative-x=\"93.6\" relative-y=\"93.6\" font-size=\"large\" font-weight=\"normal\" color=\"#7D7E7D7C\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 93.7 ) );
	object.setDefaultY( MxNumberTenths( 93.7 ) );
	object.setRelativeX( MxNumberTenths( 93.7 ) );
	object.setRelativeY( MxNumberTenths( 93.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie relative-x=\"93.7\" relative-y=\"93.7\" font-size=\"1.1\" font-weight=\"bold\" color=\"#807F7E\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 93.8 ) );
	object.setDefaultY( MxNumberTenths( 93.8 ) );
	object.setRelativeX( MxNumberTenths( 93.8 ) );
	object.setRelativeY( MxNumberTenths( 93.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-x=\"93.8\" default-y=\"93.8\" relative-x=\"93.8\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" color=\"#81828180\" plus-minus=\"yes\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 93.9 ) );
	object.setDefaultY( MxNumberTenths( 93.9 ) );
	object.setRelativeX( MxNumberTenths( 93.9 ) );
	object.setRelativeY( MxNumberTenths( 93.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-y=\"93.9\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#848382\" plus-minus=\"yes\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 94 ) );
	object.setDefaultY( MxNumberTenths( 94 ) );
	object.setRelativeX( MxNumberTenths( 94 ) );
	object.setRelativeY( MxNumberTenths( 94 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"94\" font-family=\"ABC\" font-weight=\"normal\" color=\"#85868584\" plus-minus=\"yes\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 94.1 ) );
	object.setDefaultY( MxNumberTenths( 94.1 ) );
	object.setRelativeX( MxNumberTenths( 94.1 ) );
	object.setRelativeY( MxNumberTenths( 94.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop font-family=\"DEF\" font-weight=\"bold\" color=\"#888786\" plus-minus=\"yes\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 94.2 ) );
	object.setDefaultY( MxNumberTenths( 94.2 ) );
	object.setRelativeX( MxNumberTenths( 94.2 ) );
	object.setRelativeY( MxNumberTenths( 94.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"94.2\" default-y=\"94.2\" relative-x=\"94.2\" relative-y=\"94.2\" font-family=\"XYZ\" font-style=\"normal\" color=\"#898A8988\" plus-minus=\"yes\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 94.3 ) );
	object.setDefaultY( MxNumberTenths( 94.3 ) );
	object.setRelativeX( MxNumberTenths( 94.3 ) );
	object.setRelativeY( MxNumberTenths( 94.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-y=\"94.3\" relative-x=\"94.3\" relative-y=\"94.3\" font-style=\"italic\" color=\"#8C8B8A\" plus-minus=\"yes\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 94.4 ) );
	object.setDefaultY( MxNumberTenths( 94.4 ) );
	object.setRelativeX( MxNumberTenths( 94.4 ) );
	object.setRelativeY( MxNumberTenths( 94.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"94.4\" relative-x=\"94.4\" relative-y=\"94.4\" font-style=\"normal\" color=\"#8D8E8D8C\" plus-minus=\"yes\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 94.5 ) );
	object.setDefaultY( MxNumberTenths( 94.5 ) );
	object.setRelativeX( MxNumberTenths( 94.5 ) );
	object.setRelativeY( MxNumberTenths( 94.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard relative-y=\"94.5\" font-style=\"italic\" plus-minus=\"yes\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 94.6 ) );
	object.setDefaultY( MxNumberTenths( 94.6 ) );
	object.setRelativeX( MxNumberTenths( 94.6 ) );
	object.setRelativeY( MxNumberTenths( 94.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"94.6\" default-y=\"94.6\" font-style=\"normal\" font-size=\"large\" plus-minus=\"yes\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 94.7 ) );
	object.setDefaultY( MxNumberTenths( 94.7 ) );
	object.setRelativeX( MxNumberTenths( 94.7 ) );
	object.setRelativeY( MxNumberTenths( 94.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#949392" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-y=\"94.7\" font-style=\"italic\" font-size=\"1.1\" plus-minus=\"yes\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 94.8 ) );
	object.setDefaultY( MxNumberTenths( 94.8 ) );
	object.setRelativeX( MxNumberTenths( 94.8 ) );
	object.setRelativeY( MxNumberTenths( 94.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-x=\"94.8\" relative-x=\"94.8\" font-family=\"XYZ\" font-size=\"large\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 94.9 ) );
	object.setDefaultY( MxNumberTenths( 94.9 ) );
	object.setRelativeX( MxNumberTenths( 94.9 ) );
	object.setRelativeY( MxNumberTenths( 94.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#989796" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet relative-x=\"94.9\" font-family=\"ABC\" font-size=\"1.1\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 95 ) );
	object.setDefaultY( MxNumberTenths( 95 ) );
	object.setRelativeX( MxNumberTenths( 95 ) );
	object.setRelativeY( MxNumberTenths( 95 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"95\" default-y=\"95\" relative-x=\"95\" relative-y=\"95\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 95.1 ) );
	object.setDefaultY( MxNumberTenths( 95.1 ) );
	object.setRelativeX( MxNumberTenths( 95.1 ) );
	object.setRelativeY( MxNumberTenths( 95.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-y=\"95.1\" relative-y=\"95.1\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 95.2 ) );
	object.setDefaultY( MxNumberTenths( 95.2 ) );
	object.setRelativeX( MxNumberTenths( 95.2 ) );
	object.setRelativeY( MxNumberTenths( 95.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"95.2\" relative-y=\"95.2\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 95.3 ) );
	object.setDefaultY( MxNumberTenths( 95.3 ) );
	object.setRelativeX( MxNumberTenths( 95.3 ) );
	object.setRelativeY( MxNumberTenths( 95.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart relative-y=\"95.3\" font-weight=\"bold\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 95.4 ) );
	object.setDefaultY( MxNumberTenths( 95.4 ) );
	object.setRelativeX( MxNumberTenths( 95.4 ) );
	object.setRelativeY( MxNumberTenths( 95.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"95.4\" default-y=\"95.4\" relative-x=\"95.4\" font-style=\"normal\" font-weight=\"normal\" color=\"#A1A2A1A0\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 95.5 ) );
	object.setDefaultY( MxNumberTenths( 95.5 ) );
	object.setRelativeX( MxNumberTenths( 95.5 ) );
	object.setRelativeY( MxNumberTenths( 95.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-y=\"95.5\" relative-x=\"95.5\" font-style=\"italic\" font-weight=\"bold\" color=\"#A4A3A2\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 95.6 ) );
	object.setDefaultY( MxNumberTenths( 95.6 ) );
	object.setRelativeX( MxNumberTenths( 95.6 ) );
	object.setRelativeY( MxNumberTenths( 95.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"95.6\" relative-x=\"95.6\" font-style=\"normal\" font-weight=\"normal\" color=\"#A5A6A5A4\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 95.7 ) );
	object.setDefaultY( MxNumberTenths( 95.7 ) );
	object.setRelativeX( MxNumberTenths( 95.7 ) );
	object.setRelativeY( MxNumberTenths( 95.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie font-style=\"italic\" font-weight=\"bold\" color=\"#A8A7A6\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 95.8 ) );
	object.setDefaultY( MxNumberTenths( 95.8 ) );
	object.setRelativeX( MxNumberTenths( 95.8 ) );
	object.setRelativeY( MxNumberTenths( 95.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-x=\"95.8\" default-y=\"95.8\" relative-y=\"95.8\" font-family=\"ABC\" font-style=\"normal\" color=\"#A9AAA9A8\" plus-minus=\"yes\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 95.9 ) );
	object.setDefaultY( MxNumberTenths( 95.9 ) );
	object.setRelativeX( MxNumberTenths( 95.9 ) );
	object.setRelativeY( MxNumberTenths( 95.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-y=\"95.9\" relative-y=\"95.9\" font-family=\"DEF\" font-style=\"italic\" color=\"#ACABAA\" plus-minus=\"yes\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 96 ) );
	object.setDefaultY( MxNumberTenths( 96 ) );
	object.setRelativeX( MxNumberTenths( 96 ) );
	object.setRelativeY( MxNumberTenths( 96 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"96\" relative-x=\"96\" relative-y=\"96\" font-family=\"XYZ\" font-size=\"large\" color=\"#ADAEADAC\" plus-minus=\"yes\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 96.1 ) );
	object.setDefaultY( MxNumberTenths( 96.1 ) );
	object.setRelativeX( MxNumberTenths( 96.1 ) );
	object.setRelativeY( MxNumberTenths( 96.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop relative-x=\"96.1\" relative-y=\"96.1\" font-family=\"ABC\" font-size=\"1.1\" color=\"#B0AFAE\" plus-minus=\"yes\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 96.2 ) );
	object.setDefaultY( MxNumberTenths( 96.2 ) );
	object.setRelativeX( MxNumberTenths( 96.2 ) );
	object.setRelativeY( MxNumberTenths( 96.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"96.2\" default-y=\"96.2\" relative-x=\"96.2\" font-family=\"DEF\" font-size=\"large\" color=\"#B1B2B1B0\" plus-minus=\"yes\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 96.3 ) );
	object.setDefaultY( MxNumberTenths( 96.3 ) );
	object.setRelativeX( MxNumberTenths( 96.3 ) );
	object.setRelativeY( MxNumberTenths( 96.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-y=\"96.3\" font-size=\"1.1\" plus-minus=\"yes\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 96.4 ) );
	object.setDefaultY( MxNumberTenths( 96.4 ) );
	object.setRelativeX( MxNumberTenths( 96.4 ) );
	object.setRelativeY( MxNumberTenths( 96.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"96.4\" font-size=\"large\" plus-minus=\"yes\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 96.5 ) );
	object.setDefaultY( MxNumberTenths( 96.5 ) );
	object.setRelativeX( MxNumberTenths( 96.5 ) );
	object.setRelativeY( MxNumberTenths( 96.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard font-size=\"1.1\" plus-minus=\"yes\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 96.6 ) );
	object.setDefaultY( MxNumberTenths( 96.6 ) );
	object.setRelativeX( MxNumberTenths( 96.6 ) );
	object.setRelativeY( MxNumberTenths( 96.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"96.6\" default-y=\"96.6\" relative-x=\"96.6\" relative-y=\"96.6\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" plus-minus=\"yes\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 96.7 ) );
	object.setDefaultY( MxNumberTenths( 96.7 ) );
	object.setRelativeX( MxNumberTenths( 96.7 ) );
	object.setRelativeY( MxNumberTenths( 96.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-y=\"96.7\" relative-x=\"96.7\" relative-y=\"96.7\" font-style=\"italic\" font-weight=\"bold\" plus-minus=\"yes\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 96.8 ) );
	object.setDefaultY( MxNumberTenths( 96.8 ) );
	object.setRelativeX( MxNumberTenths( 96.8 ) );
	object.setRelativeY( MxNumberTenths( 96.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-x=\"96.8\" relative-x=\"96.8\" relative-y=\"96.8\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 96.9 ) );
	object.setDefaultY( MxNumberTenths( 96.9 ) );
	object.setRelativeX( MxNumberTenths( 96.9 ) );
	object.setRelativeY( MxNumberTenths( 96.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet relative-y=\"96.9\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 97 ) );
	object.setDefaultY( MxNumberTenths( 97 ) );
	object.setRelativeX( MxNumberTenths( 97 ) );
	object.setRelativeY( MxNumberTenths( 97 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"97\" default-y=\"97\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 97.1 ) );
	object.setDefaultY( MxNumberTenths( 97.1 ) );
	object.setRelativeX( MxNumberTenths( 97.1 ) );
	object.setRelativeY( MxNumberTenths( 97.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-y=\"97.1\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 97.2 ) );
	object.setDefaultY( MxNumberTenths( 97.2 ) );
	object.setRelativeX( MxNumberTenths( 97.2 ) );
	object.setRelativeY( MxNumberTenths( 97.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"97.2\" relative-x=\"97.2\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#C5C6C5C4\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 97.3 ) );
	object.setDefaultY( MxNumberTenths( 97.3 ) );
	object.setRelativeX( MxNumberTenths( 97.3 ) );
	object.setRelativeY( MxNumberTenths( 97.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart relative-x=\"97.3\" font-weight=\"bold\" color=\"#C8C7C6\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 97.4 ) );
	object.setDefaultY( MxNumberTenths( 97.4 ) );
	object.setRelativeX( MxNumberTenths( 97.4 ) );
	object.setRelativeY( MxNumberTenths( 97.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"97.4\" default-y=\"97.4\" relative-x=\"97.4\" relative-y=\"97.4\" font-size=\"large\" color=\"#C9CAC9C8\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 97.5 ) );
	object.setDefaultY( MxNumberTenths( 97.5 ) );
	object.setRelativeX( MxNumberTenths( 97.5 ) );
	object.setRelativeY( MxNumberTenths( 97.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-y=\"97.5\" relative-y=\"97.5\" font-size=\"1.1\" color=\"#CCCBCA\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 97.6 ) );
	object.setDefaultY( MxNumberTenths( 97.6 ) );
	object.setRelativeX( MxNumberTenths( 97.6 ) );
	object.setRelativeY( MxNumberTenths( 97.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"97.6\" relative-y=\"97.6\" font-size=\"large\" color=\"#CDCECDCC\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 97.7 ) );
	object.setDefaultY( MxNumberTenths( 97.7 ) );
	object.setRelativeX( MxNumberTenths( 97.7 ) );
	object.setRelativeY( MxNumberTenths( 97.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie relative-y=\"97.7\" font-size=\"1.1\" color=\"#D0CFCE\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 97.8 ) );
	object.setDefaultY( MxNumberTenths( 97.8 ) );
	object.setRelativeX( MxNumberTenths( 97.8 ) );
	object.setRelativeY( MxNumberTenths( 97.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-x=\"97.8\" default-y=\"97.8\" relative-x=\"97.8\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#D1D2D1D0\" plus-minus=\"yes\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 97.9 ) );
	object.setDefaultY( MxNumberTenths( 97.9 ) );
	object.setRelativeX( MxNumberTenths( 97.9 ) );
	object.setRelativeY( MxNumberTenths( 97.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-y=\"97.9\" relative-x=\"97.9\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#D4D3D2\" plus-minus=\"yes\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 98 ) );
	object.setDefaultY( MxNumberTenths( 98 ) );
	object.setRelativeX( MxNumberTenths( 98 ) );
	object.setRelativeY( MxNumberTenths( 98 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"98\" relative-x=\"98\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#D5D6D5D4\" plus-minus=\"yes\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 98.1 ) );
	object.setDefaultY( MxNumberTenths( 98.1 ) );
	object.setRelativeX( MxNumberTenths( 98.1 ) );
	object.setRelativeY( MxNumberTenths( 98.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop font-family=\"XYZ\" font-style=\"italic\" plus-minus=\"yes\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 98.2 ) );
	object.setDefaultY( MxNumberTenths( 98.2 ) );
	object.setRelativeX( MxNumberTenths( 98.2 ) );
	object.setRelativeY( MxNumberTenths( 98.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"98.2\" default-y=\"98.2\" relative-y=\"98.2\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" plus-minus=\"yes\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 98.3 ) );
	object.setDefaultY( MxNumberTenths( 98.3 ) );
	object.setRelativeX( MxNumberTenths( 98.3 ) );
	object.setRelativeY( MxNumberTenths( 98.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-y=\"98.3\" relative-y=\"98.3\" font-style=\"italic\" font-weight=\"bold\" plus-minus=\"yes\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 98.4 ) );
	object.setDefaultY( MxNumberTenths( 98.4 ) );
	object.setRelativeX( MxNumberTenths( 98.4 ) );
	object.setRelativeY( MxNumberTenths( 98.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"98.4\" relative-x=\"98.4\" relative-y=\"98.4\" font-weight=\"normal\" plus-minus=\"yes\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 98.5 ) );
	object.setDefaultY( MxNumberTenths( 98.5 ) );
	object.setRelativeX( MxNumberTenths( 98.5 ) );
	object.setRelativeY( MxNumberTenths( 98.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard relative-x=\"98.5\" relative-y=\"98.5\" font-weight=\"bold\" plus-minus=\"yes\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 98.6 ) );
	object.setDefaultY( MxNumberTenths( 98.6 ) );
	object.setRelativeX( MxNumberTenths( 98.6 ) );
	object.setRelativeY( MxNumberTenths( 98.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"98.6\" default-y=\"98.6\" relative-x=\"98.6\" font-weight=\"normal\" plus-minus=\"yes\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 98.7 ) );
	object.setDefaultY( MxNumberTenths( 98.7 ) );
	object.setRelativeX( MxNumberTenths( 98.7 ) );
	object.setRelativeY( MxNumberTenths( 98.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-y=\"98.7\" font-weight=\"bold\" plus-minus=\"yes\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 98.8 ) );
	object.setDefaultY( MxNumberTenths( 98.8 ) );
	object.setRelativeX( MxNumberTenths( 98.8 ) );
	object.setRelativeY( MxNumberTenths( 98.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-x=\"98.8\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 98.9 ) );
	object.setDefaultY( MxNumberTenths( 98.9 ) );
	object.setRelativeX( MxNumberTenths( 98.9 ) );
	object.setRelativeY( MxNumberTenths( 98.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 99 ) );
	object.setDefaultY( MxNumberTenths( 99 ) );
	object.setRelativeX( MxNumberTenths( 99 ) );
	object.setRelativeY( MxNumberTenths( 99 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"99\" default-y=\"99\" relative-x=\"99\" relative-y=\"99\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#E9EAE9E8\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 99.1 ) );
	object.setDefaultY( MxNumberTenths( 99.1 ) );
	object.setRelativeX( MxNumberTenths( 99.1 ) );
	object.setRelativeY( MxNumberTenths( 99.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-y=\"99.1\" relative-x=\"99.1\" relative-y=\"99.1\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#ECEBEA\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 99.2 ) );
	object.setDefaultY( MxNumberTenths( 99.2 ) );
	object.setRelativeX( MxNumberTenths( 99.2 ) );
	object.setRelativeY( MxNumberTenths( 99.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"99.2\" relative-x=\"99.2\" relative-y=\"99.2\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#EDEEEDEC\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 99.3 ) );
	object.setDefaultY( MxNumberTenths( 99.3 ) );
	object.setRelativeX( MxNumberTenths( 99.3 ) );
	object.setRelativeY( MxNumberTenths( 99.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart relative-y=\"99.3\" font-style=\"italic\" font-size=\"1.1\" color=\"#F0EFEE\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 99.4 ) );
	object.setDefaultY( MxNumberTenths( 99.4 ) );
	object.setRelativeX( MxNumberTenths( 99.4 ) );
	object.setRelativeY( MxNumberTenths( 99.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"99.4\" default-y=\"99.4\" font-style=\"normal\" font-size=\"large\" color=\"#F1F2F1F0\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 99.5 ) );
	object.setDefaultY( MxNumberTenths( 99.5 ) );
	object.setRelativeX( MxNumberTenths( 99.5 ) );
	object.setRelativeY( MxNumberTenths( 99.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-y=\"99.5\" font-style=\"italic\" color=\"#F4F3F2\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 99.6 ) );
	object.setDefaultY( MxNumberTenths( 99.6 ) );
	object.setRelativeX( MxNumberTenths( 99.6 ) );
	object.setRelativeY( MxNumberTenths( 99.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"99.6\" relative-x=\"99.6\" color=\"#F5F6F5F4\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 99.7 ) );
	object.setDefaultY( MxNumberTenths( 99.7 ) );
	object.setRelativeX( MxNumberTenths( 99.7 ) );
	object.setRelativeY( MxNumberTenths( 99.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie relative-x=\"99.7\" color=\"#F8F7F6\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 99.8 ) );
	object.setDefaultY( MxNumberTenths( 99.8 ) );
	object.setRelativeX( MxNumberTenths( 99.8 ) );
	object.setRelativeY( MxNumberTenths( 99.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-x=\"99.8\" default-y=\"99.8\" relative-x=\"99.8\" relative-y=\"99.8\" font-family=\"DEF\" font-weight=\"normal\" color=\"#F9FAF9F8\" plus-minus=\"yes\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 99.9 ) );
	object.setDefaultY( MxNumberTenths( 99.9 ) );
	object.setRelativeX( MxNumberTenths( 99.9 ) );
	object.setRelativeY( MxNumberTenths( 99.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-y=\"99.9\" relative-y=\"99.9\" font-family=\"XYZ\" font-weight=\"bold\" plus-minus=\"yes\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 100 ) );
	object.setDefaultY( MxNumberTenths( 100 ) );
	object.setRelativeX( MxNumberTenths( 100 ) );
	object.setRelativeY( MxNumberTenths( 100 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"100\" relative-y=\"100\" font-family=\"ABC\" font-weight=\"normal\" plus-minus=\"yes\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 100.1 ) );
	object.setDefaultY( MxNumberTenths( 100.1 ) );
	object.setRelativeX( MxNumberTenths( 100.1 ) );
	object.setRelativeY( MxNumberTenths( 100.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop relative-y=\"100.1\" font-family=\"DEF\" font-weight=\"bold\" plus-minus=\"yes\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 100.2 ) );
	object.setDefaultY( MxNumberTenths( 100.2 ) );
	object.setRelativeX( MxNumberTenths( 100.2 ) );
	object.setRelativeY( MxNumberTenths( 100.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"100.2\" default-y=\"100.2\" relative-x=\"100.2\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" plus-minus=\"yes\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 100.3 ) );
	object.setDefaultY( MxNumberTenths( 100.3 ) );
	object.setRelativeX( MxNumberTenths( 100.3 ) );
	object.setRelativeY( MxNumberTenths( 100.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#040302" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-y=\"100.3\" relative-x=\"100.3\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" plus-minus=\"yes\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 100.4 ) );
	object.setDefaultY( MxNumberTenths( 100.4 ) );
	object.setRelativeX( MxNumberTenths( 100.4 ) );
	object.setRelativeY( MxNumberTenths( 100.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"100.4\" relative-x=\"100.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" plus-minus=\"yes\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 100.5 ) );
	object.setDefaultY( MxNumberTenths( 100.5 ) );
	object.setRelativeX( MxNumberTenths( 100.5 ) );
	object.setRelativeY( MxNumberTenths( 100.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#080706" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" plus-minus=\"yes\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 100.6 ) );
	object.setDefaultY( MxNumberTenths( 100.6 ) );
	object.setRelativeX( MxNumberTenths( 100.6 ) );
	object.setRelativeY( MxNumberTenths( 100.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"100.6\" default-y=\"100.6\" relative-y=\"100.6\" font-style=\"normal\" font-size=\"large\" plus-minus=\"yes\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 100.7 ) );
	object.setDefaultY( MxNumberTenths( 100.7 ) );
	object.setRelativeX( MxNumberTenths( 100.7 ) );
	object.setRelativeY( MxNumberTenths( 100.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-y=\"100.7\" relative-y=\"100.7\" font-style=\"italic\" font-size=\"1.1\" plus-minus=\"yes\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 100.8 ) );
	object.setDefaultY( MxNumberTenths( 100.8 ) );
	object.setRelativeX( MxNumberTenths( 100.8 ) );
	object.setRelativeY( MxNumberTenths( 100.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-x=\"100.8\" relative-x=\"100.8\" relative-y=\"100.8\" font-family=\"XYZ\" font-size=\"large\" color=\"#0D0E0D0C\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 100.9 ) );
	object.setDefaultY( MxNumberTenths( 100.9 ) );
	object.setRelativeX( MxNumberTenths( 100.9 ) );
	object.setRelativeY( MxNumberTenths( 100.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet relative-x=\"100.9\" relative-y=\"100.9\" font-family=\"ABC\" color=\"#100F0E\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 101 ) );
	object.setDefaultY( MxNumberTenths( 101 ) );
	object.setRelativeX( MxNumberTenths( 101 ) );
	object.setRelativeY( MxNumberTenths( 101 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"101\" default-y=\"101\" relative-x=\"101\" font-family=\"DEF\" color=\"#11121110\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 101.1 ) );
	object.setDefaultY( MxNumberTenths( 101.1 ) );
	object.setRelativeX( MxNumberTenths( 101.1 ) );
	object.setRelativeY( MxNumberTenths( 101.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#141312" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-y=\"101.1\" font-family=\"XYZ\" color=\"#141312\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 101.2 ) );
	object.setDefaultY( MxNumberTenths( 101.2 ) );
	object.setRelativeX( MxNumberTenths( 101.2 ) );
	object.setRelativeY( MxNumberTenths( 101.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"101.2\" font-family=\"ABC\" color=\"#15161514\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 101.3 ) );
	object.setDefaultY( MxNumberTenths( 101.3 ) );
	object.setRelativeX( MxNumberTenths( 101.3 ) );
	object.setRelativeY( MxNumberTenths( 101.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart color=\"#181716\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 101.4 ) );
	object.setDefaultY( MxNumberTenths( 101.4 ) );
	object.setRelativeX( MxNumberTenths( 101.4 ) );
	object.setRelativeY( MxNumberTenths( 101.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"101.4\" default-y=\"101.4\" relative-x=\"101.4\" relative-y=\"101.4\" font-style=\"normal\" font-weight=\"normal\" color=\"#191A1918\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 101.5 ) );
	object.setDefaultY( MxNumberTenths( 101.5 ) );
	object.setRelativeX( MxNumberTenths( 101.5 ) );
	object.setRelativeY( MxNumberTenths( 101.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-y=\"101.5\" relative-x=\"101.5\" relative-y=\"101.5\" font-style=\"italic\" font-weight=\"bold\" color=\"#1C1B1A\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 101.6 ) );
	object.setDefaultY( MxNumberTenths( 101.6 ) );
	object.setRelativeX( MxNumberTenths( 101.6 ) );
	object.setRelativeY( MxNumberTenths( 101.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"101.6\" relative-x=\"101.6\" relative-y=\"101.6\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#1D1E1D1C\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 101.7 ) );
	object.setDefaultY( MxNumberTenths( 101.7 ) );
	object.setRelativeX( MxNumberTenths( 101.7 ) );
	object.setRelativeY( MxNumberTenths( 101.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie relative-y=\"101.7\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 101.8 ) );
	object.setDefaultY( MxNumberTenths( 101.8 ) );
	object.setRelativeX( MxNumberTenths( 101.8 ) );
	object.setRelativeY( MxNumberTenths( 101.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart>-1000</booksmart>";
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

TEST( getIsDefaultXDefaultDefined, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlusMinusDefaultDefined, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	bool expected = true;
	bool actual = object.getIsPlusMinusDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getDefaultXDefaultValue, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPlusMinusDefaultValue, MxCxSmpDegreeAlter )
{
	MxCxSmpDegreeAlter object;
	MxEnumYesNo expected( lexicon::enums::YesNo::no );
	MxEnumYesNo actual = object.getPlusMinusDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


