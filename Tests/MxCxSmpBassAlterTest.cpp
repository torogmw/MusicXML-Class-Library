/** *******************************************************
  * 
  * MxCxSmpBassAlterTest.cpp
  * Created: 2014-12-02 17:31:51
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpBassAlter.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::yes ) ).toString();
	std::string actual = object.getPrintObject().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	std::string expected = ( MxEnumLeftRight( lexicon::enums::LeftRight::right ) ).toString();
	std::string actual = object.getLocation().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( 1 ) );
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
TEST( ctorValueAndElementName2, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
TEST( ctorValueAndElementName4, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
TEST( ctorValueAndElementName6, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
TEST( ctorValueAndElementName8, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
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

TEST( getClassName, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	std::string expected = "MxCxSmpBassAlter";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	std::string expected = "bass-alter";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	std::string expected = "The bass-alter type represents the chromatic alteration of the bass of the current chord within the harmony element. In some chord styles, the text for the bass-step element may include bass-alter information. In that case, the print-object attribute of the bass-alter element can be set to no. The location attribute indicates whether the alteration should appear to the left or the right of the bass-step; it is right by default.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setPrintObject0, MxCxSmpBassAlter )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpBassAlter object;
	object.setPrintObject( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getPrintObject();
	CHECK_EQUAL( expected, actual )
	object.setPrintObject( value2 );
	expected = value2;
	actual = object.getPrintObject();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX1, MxCxSmpBassAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpBassAlter object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY2, MxCxSmpBassAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpBassAlter object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX3, MxCxSmpBassAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpBassAlter object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY4, MxCxSmpBassAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpBassAlter object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily5, MxCxSmpBassAlter )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpBassAlter object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle6, MxCxSmpBassAlter )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpBassAlter object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize7, MxCxSmpBassAlter )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpBassAlter object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight8, MxCxSmpBassAlter )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpBassAlter object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor9, MxCxSmpBassAlter )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpBassAlter object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setLocation10, MxCxSmpBassAlter )
{
	MxEnumLeftRight value1( lexicon::enums::LeftRight::right );
	MxEnumLeftRight value2( lexicon::enums::LeftRight::left );
	CHECK( ( value1 != value2 ) )
	MxCxSmpBassAlter object;
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

TEST( getIsPrintObjectRequired0, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsPrintObjectRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired1, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired2, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired3, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired4, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired5, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired6, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired7, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired8, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired9, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLocationRequired10, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsLocationRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsPrintObjectPresent0, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsPrintObjectPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPrintObjectPresent( true );
	expected = true;
	actual = object.getIsPrintObjectPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPrintObjectPresent( false );
	expected = false;
	actual = object.getIsPrintObjectPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXPresent1, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
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
TEST( getIsDefaultYPresent2, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
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
TEST( getIsRelativeXPresent3, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
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
TEST( getIsRelativeYPresent4, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
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
TEST( getIsFontFamilyPresent5, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
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
TEST( getIsFontStylePresent6, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
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
TEST( getIsFontSizePresent7, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
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
TEST( getIsFontWeightPresent8, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
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
TEST( getIsColorPresent9, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
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
TEST( getIsLocationPresent10, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
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

TEST( toString0, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 71.6 ) );
	object.setDefaultY( MxNumberTenths( 71.6 ) );
	object.setRelativeX( MxNumberTenths( 71.6 ) );
	object.setRelativeY( MxNumberTenths( 71.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	expected = "<booksmart print-object=\"yes\" default-x=\"71.6\" default-y=\"71.6\" relative-x=\"71.6\" relative-y=\"71.6\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#C5C6C5C4\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 71.7 ) );
	object.setDefaultY( MxNumberTenths( 71.7 ) );
	object.setRelativeX( MxNumberTenths( 71.7 ) );
	object.setRelativeY( MxNumberTenths( 71.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet default-x=\"71.7\" default-y=\"71.7\" relative-x=\"71.7\" relative-y=\"71.7\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#C8C7C6\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 71.8 ) );
	object.setDefaultY( MxNumberTenths( 71.8 ) );
	object.setRelativeX( MxNumberTenths( 71.8 ) );
	object.setRelativeY( MxNumberTenths( 71.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" default-y=\"71.8\" relative-x=\"71.8\" relative-y=\"71.8\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#C9CAC9C8\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 71.9 ) );
	object.setDefaultY( MxNumberTenths( 71.9 ) );
	object.setRelativeX( MxNumberTenths( 71.9 ) );
	object.setRelativeY( MxNumberTenths( 71.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop relative-x=\"71.9\" relative-y=\"71.9\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#CCCBCA\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 72 ) );
	object.setDefaultY( MxNumberTenths( 72 ) );
	object.setRelativeX( MxNumberTenths( 72 ) );
	object.setRelativeY( MxNumberTenths( 72 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" default-x=\"72\" relative-y=\"72\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#CDCECDCC\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 72.1 ) );
	object.setDefaultY( MxNumberTenths( 72.1 ) );
	object.setRelativeX( MxNumberTenths( 72.1 ) );
	object.setRelativeY( MxNumberTenths( 72.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart default-x=\"72.1\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#D0CFCE\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 72.2 ) );
	object.setDefaultY( MxNumberTenths( 72.2 ) );
	object.setRelativeX( MxNumberTenths( 72.2 ) );
	object.setRelativeY( MxNumberTenths( 72.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" default-y=\"72.2\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#D1D2D1D0\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 72.3 ) );
	object.setDefaultY( MxNumberTenths( 72.3 ) );
	object.setRelativeX( MxNumberTenths( 72.3 ) );
	object.setRelativeY( MxNumberTenths( 72.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard default-y=\"72.3\" font-size=\"1.1\" font-weight=\"bold\" color=\"#D4D3D2\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 72.4 ) );
	object.setDefaultY( MxNumberTenths( 72.4 ) );
	object.setRelativeX( MxNumberTenths( 72.4 ) );
	object.setRelativeY( MxNumberTenths( 72.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" default-x=\"72.4\" default-y=\"72.4\" relative-x=\"72.4\" font-weight=\"normal\" color=\"#D5D6D5D4\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 72.5 ) );
	object.setDefaultY( MxNumberTenths( 72.5 ) );
	object.setRelativeX( MxNumberTenths( 72.5 ) );
	object.setRelativeY( MxNumberTenths( 72.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie default-x=\"72.5\" relative-x=\"72.5\" color=\"#D8D7D6\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 72.6 ) );
	object.setDefaultY( MxNumberTenths( 72.6 ) );
	object.setRelativeX( MxNumberTenths( 72.6 ) );
	object.setRelativeY( MxNumberTenths( 72.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart print-object=\"yes\" relative-x=\"72.6\" relative-y=\"72.6\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 72.7 ) );
	object.setDefaultY( MxNumberTenths( 72.7 ) );
	object.setRelativeX( MxNumberTenths( 72.7 ) );
	object.setRelativeY( MxNumberTenths( 72.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet relative-x=\"72.7\" relative-y=\"72.7\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 72.8 ) );
	object.setDefaultY( MxNumberTenths( 72.8 ) );
	object.setRelativeX( MxNumberTenths( 72.8 ) );
	object.setRelativeY( MxNumberTenths( 72.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" default-x=\"72.8\" default-y=\"72.8\" relative-y=\"72.8\" font-family=\"DEF\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 72.9 ) );
	object.setDefaultY( MxNumberTenths( 72.9 ) );
	object.setRelativeX( MxNumberTenths( 72.9 ) );
	object.setRelativeY( MxNumberTenths( 72.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop default-x=\"72.9\" default-y=\"72.9\" relative-y=\"72.9\" font-family=\"XYZ\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 73 ) );
	object.setDefaultY( MxNumberTenths( 73 ) );
	object.setRelativeX( MxNumberTenths( 73 ) );
	object.setRelativeY( MxNumberTenths( 73 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" default-y=\"73\" relative-y=\"73\" font-family=\"ABC\" font-style=\"normal\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 73.1 ) );
	object.setDefaultY( MxNumberTenths( 73.1 ) );
	object.setRelativeX( MxNumberTenths( 73.1 ) );
	object.setRelativeY( MxNumberTenths( 73.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart font-family=\"DEF\" font-style=\"italic\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 73.2 ) );
	object.setDefaultY( MxNumberTenths( 73.2 ) );
	object.setRelativeX( MxNumberTenths( 73.2 ) );
	object.setRelativeY( MxNumberTenths( 73.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" default-x=\"73.2\" relative-x=\"73.2\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 73.3 ) );
	object.setDefaultY( MxNumberTenths( 73.3 ) );
	object.setRelativeX( MxNumberTenths( 73.3 ) );
	object.setRelativeY( MxNumberTenths( 73.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard default-x=\"73.3\" relative-x=\"73.3\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 73.4 ) );
	object.setDefaultY( MxNumberTenths( 73.4 ) );
	object.setRelativeX( MxNumberTenths( 73.4 ) );
	object.setRelativeY( MxNumberTenths( 73.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" default-y=\"73.4\" relative-x=\"73.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 73.5 ) );
	object.setDefaultY( MxNumberTenths( 73.5 ) );
	object.setRelativeX( MxNumberTenths( 73.5 ) );
	object.setRelativeY( MxNumberTenths( 73.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie default-y=\"73.5\" relative-x=\"73.5\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 73.6 ) );
	object.setDefaultY( MxNumberTenths( 73.6 ) );
	object.setRelativeX( MxNumberTenths( 73.6 ) );
	object.setRelativeY( MxNumberTenths( 73.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart print-object=\"yes\" default-x=\"73.6\" default-y=\"73.6\" relative-y=\"73.6\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#EDEEEDEC\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 73.7 ) );
	object.setDefaultY( MxNumberTenths( 73.7 ) );
	object.setRelativeX( MxNumberTenths( 73.7 ) );
	object.setRelativeY( MxNumberTenths( 73.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet default-x=\"73.7\" relative-y=\"73.7\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F0EFEE\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 73.8 ) );
	object.setDefaultY( MxNumberTenths( 73.8 ) );
	object.setRelativeX( MxNumberTenths( 73.8 ) );
	object.setRelativeY( MxNumberTenths( 73.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" relative-y=\"73.8\" font-size=\"large\" font-weight=\"normal\" color=\"#F1F2F1F0\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 73.9 ) );
	object.setDefaultY( MxNumberTenths( 73.9 ) );
	object.setRelativeX( MxNumberTenths( 73.9 ) );
	object.setRelativeY( MxNumberTenths( 73.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop relative-y=\"73.9\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F4F3F2\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 74 ) );
	object.setDefaultY( MxNumberTenths( 74 ) );
	object.setRelativeX( MxNumberTenths( 74 ) );
	object.setRelativeY( MxNumberTenths( 74 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" default-x=\"74\" default-y=\"74\" relative-x=\"74\" relative-y=\"74\" font-family=\"DEF\" font-weight=\"normal\" color=\"#F5F6F5F4\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 74.1 ) );
	object.setDefaultY( MxNumberTenths( 74.1 ) );
	object.setRelativeX( MxNumberTenths( 74.1 ) );
	object.setRelativeY( MxNumberTenths( 74.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart default-x=\"74.1\" default-y=\"74.1\" relative-x=\"74.1\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#F8F7F6\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 74.2 ) );
	object.setDefaultY( MxNumberTenths( 74.2 ) );
	object.setRelativeX( MxNumberTenths( 74.2 ) );
	object.setRelativeY( MxNumberTenths( 74.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" default-y=\"74.2\" relative-x=\"74.2\" font-family=\"ABC\" font-weight=\"normal\" color=\"#F9FAF9F8\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 74.3 ) );
	object.setDefaultY( MxNumberTenths( 74.3 ) );
	object.setRelativeX( MxNumberTenths( 74.3 ) );
	object.setRelativeY( MxNumberTenths( 74.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard relative-x=\"74.3\" font-family=\"DEF\" color=\"#FCFBFA\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 74.4 ) );
	object.setDefaultY( MxNumberTenths( 74.4 ) );
	object.setRelativeX( MxNumberTenths( 74.4 ) );
	object.setRelativeY( MxNumberTenths( 74.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" default-x=\"74.4\" font-family=\"XYZ\" font-style=\"normal\" color=\"#FDFEFDFC\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 74.5 ) );
	object.setDefaultY( MxNumberTenths( 74.5 ) );
	object.setRelativeX( MxNumberTenths( 74.5 ) );
	object.setRelativeY( MxNumberTenths( 74.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie default-x=\"74.5\" font-family=\"ABC\" font-style=\"italic\" color=\"#00FFFE\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 74.6 ) );
	object.setDefaultY( MxNumberTenths( 74.6 ) );
	object.setRelativeX( MxNumberTenths( 74.6 ) );
	object.setRelativeY( MxNumberTenths( 74.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart print-object=\"yes\" default-y=\"74.6\" relative-y=\"74.6\" font-style=\"normal\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 74.7 ) );
	object.setDefaultY( MxNumberTenths( 74.7 ) );
	object.setRelativeX( MxNumberTenths( 74.7 ) );
	object.setRelativeY( MxNumberTenths( 74.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#040302" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet default-y=\"74.7\" relative-y=\"74.7\" font-style=\"italic\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 74.8 ) );
	object.setDefaultY( MxNumberTenths( 74.8 ) );
	object.setRelativeX( MxNumberTenths( 74.8 ) );
	object.setRelativeY( MxNumberTenths( 74.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" default-x=\"74.8\" default-y=\"74.8\" relative-x=\"74.8\" relative-y=\"74.8\" font-style=\"normal\" font-size=\"large\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 74.9 ) );
	object.setDefaultY( MxNumberTenths( 74.9 ) );
	object.setRelativeX( MxNumberTenths( 74.9 ) );
	object.setRelativeY( MxNumberTenths( 74.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#080706" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop default-x=\"74.9\" relative-x=\"74.9\" relative-y=\"74.9\" font-style=\"italic\" font-size=\"1.1\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 75 ) );
	object.setDefaultY( MxNumberTenths( 75 ) );
	object.setRelativeX( MxNumberTenths( 75 ) );
	object.setRelativeY( MxNumberTenths( 75 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" relative-x=\"75\" relative-y=\"75\" font-style=\"normal\" font-size=\"large\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 75.1 ) );
	object.setDefaultY( MxNumberTenths( 75.1 ) );
	object.setRelativeX( MxNumberTenths( 75.1 ) );
	object.setRelativeY( MxNumberTenths( 75.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart relative-x=\"75.1\" font-size=\"1.1\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 75.2 ) );
	object.setDefaultY( MxNumberTenths( 75.2 ) );
	object.setRelativeX( MxNumberTenths( 75.2 ) );
	object.setRelativeY( MxNumberTenths( 75.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" default-x=\"75.2\" default-y=\"75.2\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 75.3 ) );
	object.setDefaultY( MxNumberTenths( 75.3 ) );
	object.setRelativeX( MxNumberTenths( 75.3 ) );
	object.setRelativeY( MxNumberTenths( 75.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard default-x=\"75.3\" default-y=\"75.3\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 75.4 ) );
	object.setDefaultY( MxNumberTenths( 75.4 ) );
	object.setRelativeX( MxNumberTenths( 75.4 ) );
	object.setRelativeY( MxNumberTenths( 75.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" default-y=\"75.4\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 75.5 ) );
	object.setDefaultY( MxNumberTenths( 75.5 ) );
	object.setRelativeX( MxNumberTenths( 75.5 ) );
	object.setRelativeY( MxNumberTenths( 75.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#141312" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 75.6 ) );
	object.setDefaultY( MxNumberTenths( 75.6 ) );
	object.setRelativeX( MxNumberTenths( 75.6 ) );
	object.setRelativeY( MxNumberTenths( 75.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart print-object=\"yes\" default-x=\"75.6\" relative-x=\"75.6\" relative-y=\"75.6\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#15161514\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 75.7 ) );
	object.setDefaultY( MxNumberTenths( 75.7 ) );
	object.setRelativeX( MxNumberTenths( 75.7 ) );
	object.setRelativeY( MxNumberTenths( 75.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet default-x=\"75.7\" relative-x=\"75.7\" relative-y=\"75.7\" font-family=\"ABC\" font-weight=\"bold\" color=\"#181716\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 75.8 ) );
	object.setDefaultY( MxNumberTenths( 75.8 ) );
	object.setRelativeX( MxNumberTenths( 75.8 ) );
	object.setRelativeY( MxNumberTenths( 75.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" default-y=\"75.8\" relative-x=\"75.8\" relative-y=\"75.8\" font-style=\"normal\" font-weight=\"normal\" color=\"#191A1918\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 75.9 ) );
	object.setDefaultY( MxNumberTenths( 75.9 ) );
	object.setRelativeX( MxNumberTenths( 75.9 ) );
	object.setRelativeY( MxNumberTenths( 75.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop default-y=\"75.9\" relative-x=\"75.9\" relative-y=\"75.9\" font-style=\"italic\" font-weight=\"bold\" color=\"#1C1B1A\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 76 ) );
	object.setDefaultY( MxNumberTenths( 76 ) );
	object.setRelativeX( MxNumberTenths( 76 ) );
	object.setRelativeY( MxNumberTenths( 76 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" default-x=\"76\" default-y=\"76\" relative-y=\"76\" font-style=\"normal\" font-weight=\"normal\" color=\"#1D1E1D1C\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 76.1 ) );
	object.setDefaultY( MxNumberTenths( 76.1 ) );
	object.setRelativeX( MxNumberTenths( 76.1 ) );
	object.setRelativeY( MxNumberTenths( 76.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart default-x=\"76.1\" font-style=\"italic\" color=\"#201F1E\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 76.2 ) );
	object.setDefaultY( MxNumberTenths( 76.2 ) );
	object.setRelativeX( MxNumberTenths( 76.2 ) );
	object.setRelativeY( MxNumberTenths( 76.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" font-style=\"normal\" color=\"#21222120\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 76.3 ) );
	object.setDefaultY( MxNumberTenths( 76.3 ) );
	object.setRelativeX( MxNumberTenths( 76.3 ) );
	object.setRelativeY( MxNumberTenths( 76.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#242322" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard font-style=\"italic\" color=\"#242322\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 76.4 ) );
	object.setDefaultY( MxNumberTenths( 76.4 ) );
	object.setRelativeX( MxNumberTenths( 76.4 ) );
	object.setRelativeY( MxNumberTenths( 76.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" default-x=\"76.4\" default-y=\"76.4\" relative-x=\"76.4\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#25262524\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 76.5 ) );
	object.setDefaultY( MxNumberTenths( 76.5 ) );
	object.setRelativeX( MxNumberTenths( 76.5 ) );
	object.setRelativeY( MxNumberTenths( 76.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#282726" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie default-x=\"76.5\" default-y=\"76.5\" relative-x=\"76.5\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#282726\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 76.6 ) );
	object.setDefaultY( MxNumberTenths( 76.6 ) );
	object.setRelativeX( MxNumberTenths( 76.6 ) );
	object.setRelativeY( MxNumberTenths( 76.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart print-object=\"yes\" default-y=\"76.6\" relative-x=\"76.6\" relative-y=\"76.6\" font-family=\"ABC\" font-size=\"large\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 76.7 ) );
	object.setDefaultY( MxNumberTenths( 76.7 ) );
	object.setRelativeX( MxNumberTenths( 76.7 ) );
	object.setRelativeY( MxNumberTenths( 76.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet relative-x=\"76.7\" relative-y=\"76.7\" font-family=\"DEF\" font-size=\"1.1\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 76.8 ) );
	object.setDefaultY( MxNumberTenths( 76.8 ) );
	object.setRelativeX( MxNumberTenths( 76.8 ) );
	object.setRelativeY( MxNumberTenths( 76.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" default-x=\"76.8\" relative-y=\"76.8\" font-family=\"XYZ\" font-size=\"large\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 76.9 ) );
	object.setDefaultY( MxNumberTenths( 76.9 ) );
	object.setRelativeX( MxNumberTenths( 76.9 ) );
	object.setRelativeY( MxNumberTenths( 76.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop default-x=\"76.9\" relative-y=\"76.9\" font-family=\"ABC\" font-size=\"1.1\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 77 ) );
	object.setDefaultY( MxNumberTenths( 77 ) );
	object.setRelativeX( MxNumberTenths( 77 ) );
	object.setRelativeY( MxNumberTenths( 77 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" default-y=\"77\" relative-y=\"77\" font-size=\"large\" font-weight=\"normal\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 77.1 ) );
	object.setDefaultY( MxNumberTenths( 77.1 ) );
	object.setRelativeX( MxNumberTenths( 77.1 ) );
	object.setRelativeY( MxNumberTenths( 77.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart default-y=\"77.1\" font-size=\"1.1\" font-weight=\"bold\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 77.2 ) );
	object.setDefaultY( MxNumberTenths( 77.2 ) );
	object.setRelativeX( MxNumberTenths( 77.2 ) );
	object.setRelativeY( MxNumberTenths( 77.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" default-x=\"77.2\" default-y=\"77.2\" relative-x=\"77.2\" font-style=\"normal\" font-weight=\"normal\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 77.3 ) );
	object.setDefaultY( MxNumberTenths( 77.3 ) );
	object.setRelativeX( MxNumberTenths( 77.3 ) );
	object.setRelativeY( MxNumberTenths( 77.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard default-x=\"77.3\" relative-x=\"77.3\" font-style=\"italic\" font-weight=\"bold\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 77.4 ) );
	object.setDefaultY( MxNumberTenths( 77.4 ) );
	object.setRelativeX( MxNumberTenths( 77.4 ) );
	object.setRelativeY( MxNumberTenths( 77.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" relative-x=\"77.4\" font-style=\"normal\" font-weight=\"normal\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 77.5 ) );
	object.setDefaultY( MxNumberTenths( 77.5 ) );
	object.setRelativeX( MxNumberTenths( 77.5 ) );
	object.setRelativeY( MxNumberTenths( 77.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie relative-x=\"77.5\" font-style=\"italic\" font-weight=\"bold\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 77.6 ) );
	object.setDefaultY( MxNumberTenths( 77.6 ) );
	object.setRelativeX( MxNumberTenths( 77.6 ) );
	object.setRelativeY( MxNumberTenths( 77.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart print-object=\"yes\" default-x=\"77.6\" default-y=\"77.6\" relative-y=\"77.6\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" color=\"#3D3E3D3C\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 77.7 ) );
	object.setDefaultY( MxNumberTenths( 77.7 ) );
	object.setRelativeX( MxNumberTenths( 77.7 ) );
	object.setRelativeY( MxNumberTenths( 77.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet default-x=\"77.7\" default-y=\"77.7\" relative-y=\"77.7\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" color=\"#403F3E\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 77.8 ) );
	object.setDefaultY( MxNumberTenths( 77.8 ) );
	object.setRelativeX( MxNumberTenths( 77.8 ) );
	object.setRelativeY( MxNumberTenths( 77.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" default-y=\"77.8\" relative-y=\"77.8\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" color=\"#41424140\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 77.9 ) );
	object.setDefaultY( MxNumberTenths( 77.9 ) );
	object.setRelativeX( MxNumberTenths( 77.9 ) );
	object.setRelativeY( MxNumberTenths( 77.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop relative-y=\"77.9\" font-family=\"DEF\" color=\"#444342\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 78 ) );
	object.setDefaultY( MxNumberTenths( 78 ) );
	object.setRelativeX( MxNumberTenths( 78 ) );
	object.setRelativeY( MxNumberTenths( 78 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" default-x=\"78\" relative-x=\"78\" relative-y=\"78\" font-family=\"XYZ\" font-size=\"large\" color=\"#45464544\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 78.1 ) );
	object.setDefaultY( MxNumberTenths( 78.1 ) );
	object.setRelativeX( MxNumberTenths( 78.1 ) );
	object.setRelativeY( MxNumberTenths( 78.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart default-x=\"78.1\" relative-x=\"78.1\" font-family=\"ABC\" font-size=\"1.1\" color=\"#484746\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 78.2 ) );
	object.setDefaultY( MxNumberTenths( 78.2 ) );
	object.setRelativeX( MxNumberTenths( 78.2 ) );
	object.setRelativeY( MxNumberTenths( 78.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" default-y=\"78.2\" relative-x=\"78.2\" font-size=\"large\" color=\"#494A4948\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 78.3 ) );
	object.setDefaultY( MxNumberTenths( 78.3 ) );
	object.setRelativeX( MxNumberTenths( 78.3 ) );
	object.setRelativeY( MxNumberTenths( 78.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard default-y=\"78.3\" relative-x=\"78.3\" font-size=\"1.1\" color=\"#4C4B4A\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 78.4 ) );
	object.setDefaultY( MxNumberTenths( 78.4 ) );
	object.setRelativeX( MxNumberTenths( 78.4 ) );
	object.setRelativeY( MxNumberTenths( 78.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" default-x=\"78.4\" default-y=\"78.4\" font-size=\"large\" color=\"#4D4E4D4C\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 78.5 ) );
	object.setDefaultY( MxNumberTenths( 78.5 ) );
	object.setRelativeX( MxNumberTenths( 78.5 ) );
	object.setRelativeY( MxNumberTenths( 78.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie default-x=\"78.5\" font-size=\"1.1\" color=\"#504F4E\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 78.6 ) );
	object.setDefaultY( MxNumberTenths( 78.6 ) );
	object.setRelativeX( MxNumberTenths( 78.6 ) );
	object.setRelativeY( MxNumberTenths( 78.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart print-object=\"yes\" relative-y=\"78.6\" font-style=\"normal\" font-size=\"large\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 78.7 ) );
	object.setDefaultY( MxNumberTenths( 78.7 ) );
	object.setRelativeX( MxNumberTenths( 78.7 ) );
	object.setRelativeY( MxNumberTenths( 78.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#545352" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet relative-y=\"78.7\" font-style=\"italic\" font-size=\"1.1\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 78.8 ) );
	object.setDefaultY( MxNumberTenths( 78.8 ) );
	object.setRelativeX( MxNumberTenths( 78.8 ) );
	object.setRelativeY( MxNumberTenths( 78.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" default-x=\"78.8\" default-y=\"78.8\" relative-x=\"78.8\" relative-y=\"78.8\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 78.9 ) );
	object.setDefaultY( MxNumberTenths( 78.9 ) );
	object.setRelativeX( MxNumberTenths( 78.9 ) );
	object.setRelativeY( MxNumberTenths( 78.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#585756" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop default-x=\"78.9\" default-y=\"78.9\" relative-x=\"78.9\" relative-y=\"78.9\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 79 ) );
	object.setDefaultY( MxNumberTenths( 79 ) );
	object.setRelativeX( MxNumberTenths( 79 ) );
	object.setRelativeY( MxNumberTenths( 79 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" default-y=\"79\" relative-x=\"79\" relative-y=\"79\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 79.1 ) );
	object.setDefaultY( MxNumberTenths( 79.1 ) );
	object.setRelativeX( MxNumberTenths( 79.1 ) );
	object.setRelativeY( MxNumberTenths( 79.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart relative-x=\"79.1\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 79.2 ) );
	object.setDefaultY( MxNumberTenths( 79.2 ) );
	object.setRelativeX( MxNumberTenths( 79.2 ) );
	object.setRelativeY( MxNumberTenths( 79.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" default-x=\"79.2\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 79.3 ) );
	object.setDefaultY( MxNumberTenths( 79.3 ) );
	object.setRelativeX( MxNumberTenths( 79.3 ) );
	object.setRelativeY( MxNumberTenths( 79.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard default-x=\"79.3\" font-family=\"ABC\" font-weight=\"bold\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 79.4 ) );
	object.setDefaultY( MxNumberTenths( 79.4 ) );
	object.setRelativeX( MxNumberTenths( 79.4 ) );
	object.setRelativeY( MxNumberTenths( 79.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" default-y=\"79.4\" font-weight=\"normal\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 79.5 ) );
	object.setDefaultY( MxNumberTenths( 79.5 ) );
	object.setRelativeX( MxNumberTenths( 79.5 ) );
	object.setRelativeY( MxNumberTenths( 79.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#646362" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie default-y=\"79.5\" font-weight=\"bold\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 79.6 ) );
	object.setDefaultY( MxNumberTenths( 79.6 ) );
	object.setRelativeX( MxNumberTenths( 79.6 ) );
	object.setRelativeY( MxNumberTenths( 79.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart print-object=\"yes\" default-x=\"79.6\" default-y=\"79.6\" relative-x=\"79.6\" relative-y=\"79.6\" font-size=\"large\" font-weight=\"normal\" color=\"#65666564\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 79.7 ) );
	object.setDefaultY( MxNumberTenths( 79.7 ) );
	object.setRelativeX( MxNumberTenths( 79.7 ) );
	object.setRelativeY( MxNumberTenths( 79.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#686766" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet default-x=\"79.7\" relative-x=\"79.7\" relative-y=\"79.7\" font-size=\"1.1\" color=\"#686766\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 79.8 ) );
	object.setDefaultY( MxNumberTenths( 79.8 ) );
	object.setRelativeX( MxNumberTenths( 79.8 ) );
	object.setRelativeY( MxNumberTenths( 79.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" relative-x=\"79.8\" relative-y=\"79.8\" font-size=\"large\" color=\"#696A6968\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 79.9 ) );
	object.setDefaultY( MxNumberTenths( 79.9 ) );
	object.setRelativeX( MxNumberTenths( 79.9 ) );
	object.setRelativeY( MxNumberTenths( 79.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop relative-x=\"79.9\" relative-y=\"79.9\" font-size=\"1.1\" color=\"#6C6B6A\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 80 ) );
	object.setDefaultY( MxNumberTenths( 80 ) );
	object.setRelativeX( MxNumberTenths( 80 ) );
	object.setRelativeY( MxNumberTenths( 80 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" default-x=\"80\" default-y=\"80\" relative-y=\"80\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#6D6E6D6C\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 80.1 ) );
	object.setDefaultY( MxNumberTenths( 80.1 ) );
	object.setRelativeX( MxNumberTenths( 80.1 ) );
	object.setRelativeY( MxNumberTenths( 80.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart default-x=\"80.1\" default-y=\"80.1\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#706F6E\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 80.2 ) );
	object.setDefaultY( MxNumberTenths( 80.2 ) );
	object.setRelativeX( MxNumberTenths( 80.2 ) );
	object.setRelativeY( MxNumberTenths( 80.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" default-y=\"80.2\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#71727170\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 80.3 ) );
	object.setDefaultY( MxNumberTenths( 80.3 ) );
	object.setRelativeX( MxNumberTenths( 80.3 ) );
	object.setRelativeY( MxNumberTenths( 80.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#747372" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#747372\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 80.4 ) );
	object.setDefaultY( MxNumberTenths( 80.4 ) );
	object.setRelativeX( MxNumberTenths( 80.4 ) );
	object.setRelativeY( MxNumberTenths( 80.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" default-x=\"80.4\" relative-x=\"80.4\" font-family=\"XYZ\" font-style=\"normal\" color=\"#75767574\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 80.5 ) );
	object.setDefaultY( MxNumberTenths( 80.5 ) );
	object.setRelativeX( MxNumberTenths( 80.5 ) );
	object.setRelativeY( MxNumberTenths( 80.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#787776" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie default-x=\"80.5\" relative-x=\"80.5\" font-family=\"ABC\" font-style=\"italic\" color=\"#787776\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 80.6 ) );
	object.setDefaultY( MxNumberTenths( 80.6 ) );
	object.setRelativeX( MxNumberTenths( 80.6 ) );
	object.setRelativeY( MxNumberTenths( 80.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart print-object=\"yes\" default-y=\"80.6\" relative-x=\"80.6\" relative-y=\"80.6\" font-style=\"normal\" font-weight=\"normal\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 80.7 ) );
	object.setDefaultY( MxNumberTenths( 80.7 ) );
	object.setRelativeX( MxNumberTenths( 80.7 ) );
	object.setRelativeY( MxNumberTenths( 80.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet default-y=\"80.7\" relative-x=\"80.7\" relative-y=\"80.7\" font-weight=\"bold\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 80.8 ) );
	object.setDefaultY( MxNumberTenths( 80.8 ) );
	object.setRelativeX( MxNumberTenths( 80.8 ) );
	object.setRelativeY( MxNumberTenths( 80.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" default-x=\"80.8\" default-y=\"80.8\" relative-y=\"80.8\" font-weight=\"normal\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 80.9 ) );
	object.setDefaultY( MxNumberTenths( 80.9 ) );
	object.setRelativeX( MxNumberTenths( 80.9 ) );
	object.setRelativeY( MxNumberTenths( 80.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop default-x=\"80.9\" relative-y=\"80.9\" font-weight=\"bold\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 81 ) );
	object.setDefaultY( MxNumberTenths( 81 ) );
	object.setRelativeX( MxNumberTenths( 81 ) );
	object.setRelativeY( MxNumberTenths( 81 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" relative-y=\"81\" font-weight=\"normal\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 81.1 ) );
	object.setDefaultY( MxNumberTenths( 81.1 ) );
	object.setRelativeX( MxNumberTenths( 81.1 ) );
	object.setRelativeY( MxNumberTenths( 81.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart font-weight=\"bold\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "quiet", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 81.2 ) );
	object.setDefaultY( MxNumberTenths( 81.2 ) );
	object.setRelativeX( MxNumberTenths( 81.2 ) );
	object.setRelativeY( MxNumberTenths( 81.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" default-x=\"81.2\" default-y=\"81.2\" relative-x=\"81.2\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 81.3 ) );
	object.setDefaultY( MxNumberTenths( 81.3 ) );
	object.setRelativeX( MxNumberTenths( 81.3 ) );
	object.setRelativeY( MxNumberTenths( 81.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard default-x=\"81.3\" default-y=\"81.3\" relative-x=\"81.3\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "bishop", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 81.4 ) );
	object.setDefaultY( MxNumberTenths( 81.4 ) );
	object.setRelativeX( MxNumberTenths( 81.4 ) );
	object.setRelativeY( MxNumberTenths( 81.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" default-y=\"81.4\" relative-x=\"81.4\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "charlie", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 81.5 ) );
	object.setDefaultY( MxNumberTenths( 81.5 ) );
	object.setRelativeX( MxNumberTenths( 81.5 ) );
	object.setRelativeY( MxNumberTenths( 81.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie relative-x=\"81.5\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 81.6 ) );
	object.setDefaultY( MxNumberTenths( 81.6 ) );
	object.setRelativeX( MxNumberTenths( 81.6 ) );
	object.setRelativeY( MxNumberTenths( 81.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
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

TEST( getIsPrintObjectDefaultDefined, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = true;
	bool actual = object.getIsPrintObjectDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLocationDefaultDefined, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	bool expected = true;
	bool actual = object.getIsLocationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getPrintObjectDefaultValue, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	MxEnumYesNo expected( lexicon::enums::YesNo::yes );
	MxEnumYesNo actual = object.getPrintObjectDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLocationDefaultValue, MxCxSmpBassAlter )
{
	MxCxSmpBassAlter object;
	MxEnumLeftRight expected( lexicon::enums::LeftRight::right );
	MxEnumLeftRight actual = object.getLocationDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


