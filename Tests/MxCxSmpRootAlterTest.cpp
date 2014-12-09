/** *******************************************************
  * 
  * MxCxSmpRootAlterTest.cpp
  * Created: 2014-12-02 17:31:53
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpRootAlter.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::yes ) ).toString();
	std::string actual = object.getPrintObject().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	std::string expected = ( MxEnumLeftRight( lexicon::enums::LeftRight::right ) ).toString();
	std::string actual = object.getLocation().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( 1 ) );
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
TEST( ctorValueAndElementName2, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
TEST( ctorValueAndElementName4, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
TEST( ctorValueAndElementName6, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
TEST( ctorValueAndElementName8, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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

TEST( getClassName, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	std::string expected = "MxCxSmpRootAlter";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	std::string expected = "root-alter";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	std::string expected = "The root-alter type represents the chromatic alteration of the root of the current chord within the harmony element. In some chord styles, the text for the root-step element may include root-alter information. In that case, the print-object attribute of the root-alter element can be set to no. The location attribute indicates whether the alteration should appear to the left or the right of the root-step; it is right by default.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setPrintObject0, MxCxSmpRootAlter )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootAlter object;
	object.setPrintObject( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getPrintObject();
	CHECK_EQUAL( expected, actual )
	object.setPrintObject( value2 );
	expected = value2;
	actual = object.getPrintObject();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX1, MxCxSmpRootAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootAlter object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY2, MxCxSmpRootAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootAlter object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX3, MxCxSmpRootAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootAlter object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY4, MxCxSmpRootAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootAlter object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily5, MxCxSmpRootAlter )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootAlter object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle6, MxCxSmpRootAlter )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootAlter object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize7, MxCxSmpRootAlter )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootAlter object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight8, MxCxSmpRootAlter )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootAlter object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor9, MxCxSmpRootAlter )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootAlter object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setLocation10, MxCxSmpRootAlter )
{
	MxEnumLeftRight value1( lexicon::enums::LeftRight::right );
	MxEnumLeftRight value2( lexicon::enums::LeftRight::left );
	CHECK( ( value1 != value2 ) )
	MxCxSmpRootAlter object;
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

TEST( getIsPrintObjectRequired0, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsPrintObjectRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired1, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired2, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired3, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired4, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired5, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired6, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired7, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired8, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired9, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLocationRequired10, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsLocationRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsPrintObjectPresent0, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
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
TEST( getIsDefaultXPresent1, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
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
TEST( getIsDefaultYPresent2, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
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
TEST( getIsRelativeXPresent3, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
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
TEST( getIsRelativeYPresent4, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
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
TEST( getIsFontFamilyPresent5, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
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
TEST( getIsFontStylePresent6, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
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
TEST( getIsFontSizePresent7, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
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
TEST( getIsFontWeightPresent8, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
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
TEST( getIsColorPresent9, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
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
TEST( getIsLocationPresent10, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
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

TEST( toString0, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
	std::string expected;
	std::string actual;
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 172.6 ) );
	object.setDefaultY( MxNumberTenths( 172.6 ) );
	object.setRelativeX( MxNumberTenths( 172.6 ) );
	object.setRelativeY( MxNumberTenths( 172.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
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
	expected = "<booksmart print-object=\"yes\" default-x=\"172.6\" default-y=\"172.6\" relative-x=\"172.6\" relative-y=\"172.6\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#A9AAA9A8\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 172.7 ) );
	object.setDefaultY( MxNumberTenths( 172.7 ) );
	object.setRelativeX( MxNumberTenths( 172.7 ) );
	object.setRelativeY( MxNumberTenths( 172.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet default-x=\"172.7\" default-y=\"172.7\" relative-x=\"172.7\" relative-y=\"172.7\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#ACABAA\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 172.8 ) );
	object.setDefaultY( MxNumberTenths( 172.8 ) );
	object.setRelativeX( MxNumberTenths( 172.8 ) );
	object.setRelativeY( MxNumberTenths( 172.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" default-y=\"172.8\" relative-x=\"172.8\" relative-y=\"172.8\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#ADAEADAC\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 172.9 ) );
	object.setDefaultY( MxNumberTenths( 172.9 ) );
	object.setRelativeX( MxNumberTenths( 172.9 ) );
	object.setRelativeY( MxNumberTenths( 172.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop relative-x=\"172.9\" relative-y=\"172.9\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#B0AFAE\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 173 ) );
	object.setDefaultY( MxNumberTenths( 173 ) );
	object.setRelativeX( MxNumberTenths( 173 ) );
	object.setRelativeY( MxNumberTenths( 173 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" default-x=\"173\" relative-y=\"173\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#B1B2B1B0\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 173.1 ) );
	object.setDefaultY( MxNumberTenths( 173.1 ) );
	object.setRelativeX( MxNumberTenths( 173.1 ) );
	object.setRelativeY( MxNumberTenths( 173.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart default-x=\"173.1\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#B4B3B2\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 173.2 ) );
	object.setDefaultY( MxNumberTenths( 173.2 ) );
	object.setRelativeX( MxNumberTenths( 173.2 ) );
	object.setRelativeY( MxNumberTenths( 173.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" default-y=\"173.2\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#B5B6B5B4\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 173.3 ) );
	object.setDefaultY( MxNumberTenths( 173.3 ) );
	object.setRelativeX( MxNumberTenths( 173.3 ) );
	object.setRelativeY( MxNumberTenths( 173.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard default-y=\"173.3\" font-size=\"large\" font-weight=\"normal\" color=\"#B8B7B6\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 173.4 ) );
	object.setDefaultY( MxNumberTenths( 173.4 ) );
	object.setRelativeX( MxNumberTenths( 173.4 ) );
	object.setRelativeY( MxNumberTenths( 173.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" default-x=\"173.4\" default-y=\"173.4\" relative-x=\"173.4\" font-weight=\"bold\" color=\"#B9BAB9B8\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 173.5 ) );
	object.setDefaultY( MxNumberTenths( 173.5 ) );
	object.setRelativeX( MxNumberTenths( 173.5 ) );
	object.setRelativeY( MxNumberTenths( 173.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie default-x=\"173.5\" relative-x=\"173.5\" color=\"#BCBBBA\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 173.6 ) );
	object.setDefaultY( MxNumberTenths( 173.6 ) );
	object.setRelativeX( MxNumberTenths( 173.6 ) );
	object.setRelativeY( MxNumberTenths( 173.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart print-object=\"yes\" relative-x=\"173.6\" relative-y=\"173.6\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 173.7 ) );
	object.setDefaultY( MxNumberTenths( 173.7 ) );
	object.setRelativeX( MxNumberTenths( 173.7 ) );
	object.setRelativeY( MxNumberTenths( 173.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet relative-x=\"173.7\" relative-y=\"173.7\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 173.8 ) );
	object.setDefaultY( MxNumberTenths( 173.8 ) );
	object.setRelativeX( MxNumberTenths( 173.8 ) );
	object.setRelativeY( MxNumberTenths( 173.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" default-x=\"173.8\" default-y=\"173.8\" relative-y=\"173.8\" font-family=\"ABC\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 173.9 ) );
	object.setDefaultY( MxNumberTenths( 173.9 ) );
	object.setRelativeX( MxNumberTenths( 173.9 ) );
	object.setRelativeY( MxNumberTenths( 173.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop default-x=\"173.9\" default-y=\"173.9\" relative-y=\"173.9\" font-family=\"DEF\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 174 ) );
	object.setDefaultY( MxNumberTenths( 174 ) );
	object.setRelativeX( MxNumberTenths( 174 ) );
	object.setRelativeY( MxNumberTenths( 174 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" default-y=\"174\" relative-y=\"174\" font-family=\"XYZ\" font-style=\"italic\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 174.1 ) );
	object.setDefaultY( MxNumberTenths( 174.1 ) );
	object.setRelativeX( MxNumberTenths( 174.1 ) );
	object.setRelativeY( MxNumberTenths( 174.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart font-family=\"ABC\" font-style=\"normal\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 174.2 ) );
	object.setDefaultY( MxNumberTenths( 174.2 ) );
	object.setRelativeX( MxNumberTenths( 174.2 ) );
	object.setRelativeY( MxNumberTenths( 174.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" default-x=\"174.2\" relative-x=\"174.2\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 174.3 ) );
	object.setDefaultY( MxNumberTenths( 174.3 ) );
	object.setRelativeX( MxNumberTenths( 174.3 ) );
	object.setRelativeY( MxNumberTenths( 174.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard default-x=\"174.3\" relative-x=\"174.3\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 174.4 ) );
	object.setDefaultY( MxNumberTenths( 174.4 ) );
	object.setRelativeX( MxNumberTenths( 174.4 ) );
	object.setRelativeY( MxNumberTenths( 174.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" default-y=\"174.4\" relative-x=\"174.4\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 174.5 ) );
	object.setDefaultY( MxNumberTenths( 174.5 ) );
	object.setRelativeX( MxNumberTenths( 174.5 ) );
	object.setRelativeY( MxNumberTenths( 174.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie default-y=\"174.5\" relative-x=\"174.5\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 174.6 ) );
	object.setDefaultY( MxNumberTenths( 174.6 ) );
	object.setRelativeX( MxNumberTenths( 174.6 ) );
	object.setRelativeY( MxNumberTenths( 174.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart print-object=\"yes\" default-x=\"174.6\" default-y=\"174.6\" relative-y=\"174.6\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#D1D2D1D0\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 174.7 ) );
	object.setDefaultY( MxNumberTenths( 174.7 ) );
	object.setRelativeX( MxNumberTenths( 174.7 ) );
	object.setRelativeY( MxNumberTenths( 174.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet default-x=\"174.7\" relative-y=\"174.7\" font-size=\"large\" font-weight=\"normal\" color=\"#D4D3D2\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 174.8 ) );
	object.setDefaultY( MxNumberTenths( 174.8 ) );
	object.setRelativeX( MxNumberTenths( 174.8 ) );
	object.setRelativeY( MxNumberTenths( 174.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" relative-y=\"174.8\" font-size=\"1.1\" font-weight=\"bold\" color=\"#D5D6D5D4\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 174.9 ) );
	object.setDefaultY( MxNumberTenths( 174.9 ) );
	object.setRelativeX( MxNumberTenths( 174.9 ) );
	object.setRelativeY( MxNumberTenths( 174.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop relative-y=\"174.9\" font-size=\"large\" font-weight=\"normal\" color=\"#D8D7D6\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 175 ) );
	object.setDefaultY( MxNumberTenths( 175 ) );
	object.setRelativeX( MxNumberTenths( 175 ) );
	object.setRelativeY( MxNumberTenths( 175 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" default-x=\"175\" default-y=\"175\" relative-x=\"175\" relative-y=\"175\" font-family=\"ABC\" font-weight=\"bold\" color=\"#D9DAD9D8\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 175.1 ) );
	object.setDefaultY( MxNumberTenths( 175.1 ) );
	object.setRelativeX( MxNumberTenths( 175.1 ) );
	object.setRelativeY( MxNumberTenths( 175.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart default-x=\"175.1\" default-y=\"175.1\" relative-x=\"175.1\" font-family=\"DEF\" font-weight=\"normal\" color=\"#DCDBDA\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 175.2 ) );
	object.setDefaultY( MxNumberTenths( 175.2 ) );
	object.setRelativeX( MxNumberTenths( 175.2 ) );
	object.setRelativeY( MxNumberTenths( 175.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" default-y=\"175.2\" relative-x=\"175.2\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#DDDEDDDC\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 175.3 ) );
	object.setDefaultY( MxNumberTenths( 175.3 ) );
	object.setRelativeX( MxNumberTenths( 175.3 ) );
	object.setRelativeY( MxNumberTenths( 175.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard relative-x=\"175.3\" font-family=\"ABC\" color=\"#E0DFDE\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 175.4 ) );
	object.setDefaultY( MxNumberTenths( 175.4 ) );
	object.setRelativeX( MxNumberTenths( 175.4 ) );
	object.setRelativeY( MxNumberTenths( 175.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" default-x=\"175.4\" font-family=\"DEF\" font-style=\"italic\" color=\"#E1E2E1E0\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 175.5 ) );
	object.setDefaultY( MxNumberTenths( 175.5 ) );
	object.setRelativeX( MxNumberTenths( 175.5 ) );
	object.setRelativeY( MxNumberTenths( 175.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie default-x=\"175.5\" font-family=\"XYZ\" font-style=\"normal\" color=\"#E4E3E2\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 175.6 ) );
	object.setDefaultY( MxNumberTenths( 175.6 ) );
	object.setRelativeX( MxNumberTenths( 175.6 ) );
	object.setRelativeY( MxNumberTenths( 175.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart print-object=\"yes\" default-y=\"175.6\" relative-y=\"175.6\" font-style=\"italic\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 175.7 ) );
	object.setDefaultY( MxNumberTenths( 175.7 ) );
	object.setRelativeX( MxNumberTenths( 175.7 ) );
	object.setRelativeY( MxNumberTenths( 175.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet default-y=\"175.7\" relative-y=\"175.7\" font-style=\"normal\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 175.8 ) );
	object.setDefaultY( MxNumberTenths( 175.8 ) );
	object.setRelativeX( MxNumberTenths( 175.8 ) );
	object.setRelativeY( MxNumberTenths( 175.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" default-x=\"175.8\" default-y=\"175.8\" relative-x=\"175.8\" relative-y=\"175.8\" font-style=\"italic\" font-size=\"1.1\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 175.9 ) );
	object.setDefaultY( MxNumberTenths( 175.9 ) );
	object.setRelativeX( MxNumberTenths( 175.9 ) );
	object.setRelativeY( MxNumberTenths( 175.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop default-x=\"175.9\" relative-x=\"175.9\" relative-y=\"175.9\" font-style=\"normal\" font-size=\"large\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 176 ) );
	object.setDefaultY( MxNumberTenths( 176 ) );
	object.setRelativeX( MxNumberTenths( 176 ) );
	object.setRelativeY( MxNumberTenths( 176 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" relative-x=\"176\" relative-y=\"176\" font-style=\"italic\" font-size=\"1.1\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 176.1 ) );
	object.setDefaultY( MxNumberTenths( 176.1 ) );
	object.setRelativeX( MxNumberTenths( 176.1 ) );
	object.setRelativeY( MxNumberTenths( 176.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart relative-x=\"176.1\" font-size=\"large\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 176.2 ) );
	object.setDefaultY( MxNumberTenths( 176.2 ) );
	object.setRelativeX( MxNumberTenths( 176.2 ) );
	object.setRelativeY( MxNumberTenths( 176.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" default-x=\"176.2\" default-y=\"176.2\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 176.3 ) );
	object.setDefaultY( MxNumberTenths( 176.3 ) );
	object.setRelativeX( MxNumberTenths( 176.3 ) );
	object.setRelativeY( MxNumberTenths( 176.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard default-x=\"176.3\" default-y=\"176.3\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 176.4 ) );
	object.setDefaultY( MxNumberTenths( 176.4 ) );
	object.setRelativeX( MxNumberTenths( 176.4 ) );
	object.setRelativeY( MxNumberTenths( 176.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" default-y=\"176.4\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 176.5 ) );
	object.setDefaultY( MxNumberTenths( 176.5 ) );
	object.setRelativeX( MxNumberTenths( 176.5 ) );
	object.setRelativeY( MxNumberTenths( 176.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 176.6 ) );
	object.setDefaultY( MxNumberTenths( 176.6 ) );
	object.setRelativeX( MxNumberTenths( 176.6 ) );
	object.setRelativeY( MxNumberTenths( 176.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart print-object=\"yes\" default-x=\"176.6\" relative-x=\"176.6\" relative-y=\"176.6\" font-family=\"DEF\" font-weight=\"bold\" color=\"#F9FAF9F8\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 176.7 ) );
	object.setDefaultY( MxNumberTenths( 176.7 ) );
	object.setRelativeX( MxNumberTenths( 176.7 ) );
	object.setRelativeY( MxNumberTenths( 176.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet default-x=\"176.7\" relative-x=\"176.7\" relative-y=\"176.7\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#FCFBFA\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 176.8 ) );
	object.setDefaultY( MxNumberTenths( 176.8 ) );
	object.setRelativeX( MxNumberTenths( 176.8 ) );
	object.setRelativeY( MxNumberTenths( 176.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" default-y=\"176.8\" relative-x=\"176.8\" relative-y=\"176.8\" font-style=\"italic\" font-weight=\"bold\" color=\"#FDFEFDFC\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 176.9 ) );
	object.setDefaultY( MxNumberTenths( 176.9 ) );
	object.setRelativeX( MxNumberTenths( 176.9 ) );
	object.setRelativeY( MxNumberTenths( 176.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop default-y=\"176.9\" relative-x=\"176.9\" relative-y=\"176.9\" font-style=\"normal\" font-weight=\"normal\" color=\"#00FFFE\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 177 ) );
	object.setDefaultY( MxNumberTenths( 177 ) );
	object.setRelativeX( MxNumberTenths( 177 ) );
	object.setRelativeY( MxNumberTenths( 177 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" default-x=\"177\" default-y=\"177\" relative-y=\"177\" font-style=\"italic\" font-weight=\"bold\" color=\"#01020100\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 177.1 ) );
	object.setDefaultY( MxNumberTenths( 177.1 ) );
	object.setRelativeX( MxNumberTenths( 177.1 ) );
	object.setRelativeY( MxNumberTenths( 177.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#040302" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart default-x=\"177.1\" font-style=\"normal\" color=\"#040302\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 177.2 ) );
	object.setDefaultY( MxNumberTenths( 177.2 ) );
	object.setRelativeX( MxNumberTenths( 177.2 ) );
	object.setRelativeY( MxNumberTenths( 177.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" font-style=\"italic\" color=\"#05060504\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 177.3 ) );
	object.setDefaultY( MxNumberTenths( 177.3 ) );
	object.setRelativeX( MxNumberTenths( 177.3 ) );
	object.setRelativeY( MxNumberTenths( 177.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#080706" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard font-style=\"normal\" color=\"#080706\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 177.4 ) );
	object.setDefaultY( MxNumberTenths( 177.4 ) );
	object.setRelativeX( MxNumberTenths( 177.4 ) );
	object.setRelativeY( MxNumberTenths( 177.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" default-x=\"177.4\" default-y=\"177.4\" relative-x=\"177.4\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#090A0908\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 177.5 ) );
	object.setDefaultY( MxNumberTenths( 177.5 ) );
	object.setRelativeX( MxNumberTenths( 177.5 ) );
	object.setRelativeY( MxNumberTenths( 177.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie default-x=\"177.5\" default-y=\"177.5\" relative-x=\"177.5\" font-family=\"DEF\" font-size=\"large\" color=\"#0C0B0A\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 177.6 ) );
	object.setDefaultY( MxNumberTenths( 177.6 ) );
	object.setRelativeX( MxNumberTenths( 177.6 ) );
	object.setRelativeY( MxNumberTenths( 177.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart print-object=\"yes\" default-y=\"177.6\" relative-x=\"177.6\" relative-y=\"177.6\" font-family=\"XYZ\" font-size=\"1.1\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 177.7 ) );
	object.setDefaultY( MxNumberTenths( 177.7 ) );
	object.setRelativeX( MxNumberTenths( 177.7 ) );
	object.setRelativeY( MxNumberTenths( 177.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet relative-x=\"177.7\" relative-y=\"177.7\" font-family=\"ABC\" font-size=\"large\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 177.8 ) );
	object.setDefaultY( MxNumberTenths( 177.8 ) );
	object.setRelativeX( MxNumberTenths( 177.8 ) );
	object.setRelativeY( MxNumberTenths( 177.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" default-x=\"177.8\" relative-y=\"177.8\" font-family=\"DEF\" font-size=\"1.1\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 177.9 ) );
	object.setDefaultY( MxNumberTenths( 177.9 ) );
	object.setRelativeX( MxNumberTenths( 177.9 ) );
	object.setRelativeY( MxNumberTenths( 177.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#141312" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop default-x=\"177.9\" relative-y=\"177.9\" font-family=\"XYZ\" font-size=\"large\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 178 ) );
	object.setDefaultY( MxNumberTenths( 178 ) );
	object.setRelativeX( MxNumberTenths( 178 ) );
	object.setRelativeY( MxNumberTenths( 178 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" default-y=\"178\" relative-y=\"178\" font-size=\"1.1\" font-weight=\"bold\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 178.1 ) );
	object.setDefaultY( MxNumberTenths( 178.1 ) );
	object.setRelativeX( MxNumberTenths( 178.1 ) );
	object.setRelativeY( MxNumberTenths( 178.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#181716" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart default-y=\"178.1\" font-size=\"large\" font-weight=\"normal\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 178.2 ) );
	object.setDefaultY( MxNumberTenths( 178.2 ) );
	object.setRelativeX( MxNumberTenths( 178.2 ) );
	object.setRelativeY( MxNumberTenths( 178.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" default-x=\"178.2\" default-y=\"178.2\" relative-x=\"178.2\" font-style=\"italic\" font-weight=\"bold\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 178.3 ) );
	object.setDefaultY( MxNumberTenths( 178.3 ) );
	object.setRelativeX( MxNumberTenths( 178.3 ) );
	object.setRelativeY( MxNumberTenths( 178.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard default-x=\"178.3\" relative-x=\"178.3\" font-style=\"normal\" font-weight=\"normal\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 178.4 ) );
	object.setDefaultY( MxNumberTenths( 178.4 ) );
	object.setRelativeX( MxNumberTenths( 178.4 ) );
	object.setRelativeY( MxNumberTenths( 178.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" relative-x=\"178.4\" font-style=\"italic\" font-weight=\"bold\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 178.5 ) );
	object.setDefaultY( MxNumberTenths( 178.5 ) );
	object.setRelativeX( MxNumberTenths( 178.5 ) );
	object.setRelativeY( MxNumberTenths( 178.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie relative-x=\"178.5\" font-style=\"normal\" font-weight=\"normal\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 178.6 ) );
	object.setDefaultY( MxNumberTenths( 178.6 ) );
	object.setRelativeX( MxNumberTenths( 178.6 ) );
	object.setRelativeY( MxNumberTenths( 178.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart print-object=\"yes\" default-x=\"178.6\" default-y=\"178.6\" relative-y=\"178.6\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" color=\"#21222120\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 178.7 ) );
	object.setDefaultY( MxNumberTenths( 178.7 ) );
	object.setRelativeX( MxNumberTenths( 178.7 ) );
	object.setRelativeY( MxNumberTenths( 178.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#242322" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet default-x=\"178.7\" default-y=\"178.7\" relative-y=\"178.7\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" color=\"#242322\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 178.8 ) );
	object.setDefaultY( MxNumberTenths( 178.8 ) );
	object.setRelativeX( MxNumberTenths( 178.8 ) );
	object.setRelativeY( MxNumberTenths( 178.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" default-y=\"178.8\" relative-y=\"178.8\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" color=\"#25262524\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 178.9 ) );
	object.setDefaultY( MxNumberTenths( 178.9 ) );
	object.setRelativeX( MxNumberTenths( 178.9 ) );
	object.setRelativeY( MxNumberTenths( 178.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#282726" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop relative-y=\"178.9\" font-family=\"ABC\" color=\"#282726\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 179 ) );
	object.setDefaultY( MxNumberTenths( 179 ) );
	object.setRelativeX( MxNumberTenths( 179 ) );
	object.setRelativeY( MxNumberTenths( 179 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" default-x=\"179\" relative-x=\"179\" relative-y=\"179\" font-family=\"DEF\" font-size=\"1.1\" color=\"#292A2928\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 179.1 ) );
	object.setDefaultY( MxNumberTenths( 179.1 ) );
	object.setRelativeX( MxNumberTenths( 179.1 ) );
	object.setRelativeY( MxNumberTenths( 179.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart default-x=\"179.1\" relative-x=\"179.1\" font-family=\"XYZ\" font-size=\"large\" color=\"#2C2B2A\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 179.2 ) );
	object.setDefaultY( MxNumberTenths( 179.2 ) );
	object.setRelativeX( MxNumberTenths( 179.2 ) );
	object.setRelativeY( MxNumberTenths( 179.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" default-y=\"179.2\" relative-x=\"179.2\" font-size=\"1.1\" color=\"#2D2E2D2C\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 179.3 ) );
	object.setDefaultY( MxNumberTenths( 179.3 ) );
	object.setRelativeX( MxNumberTenths( 179.3 ) );
	object.setRelativeY( MxNumberTenths( 179.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard default-y=\"179.3\" relative-x=\"179.3\" font-size=\"large\" color=\"#302F2E\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 179.4 ) );
	object.setDefaultY( MxNumberTenths( 179.4 ) );
	object.setRelativeX( MxNumberTenths( 179.4 ) );
	object.setRelativeY( MxNumberTenths( 179.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" default-x=\"179.4\" default-y=\"179.4\" font-size=\"1.1\" color=\"#31323130\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 179.5 ) );
	object.setDefaultY( MxNumberTenths( 179.5 ) );
	object.setRelativeX( MxNumberTenths( 179.5 ) );
	object.setRelativeY( MxNumberTenths( 179.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#343332" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie default-x=\"179.5\" font-size=\"large\" color=\"#343332\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 179.6 ) );
	object.setDefaultY( MxNumberTenths( 179.6 ) );
	object.setRelativeX( MxNumberTenths( 179.6 ) );
	object.setRelativeY( MxNumberTenths( 179.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart print-object=\"yes\" relative-y=\"179.6\" font-style=\"italic\" font-size=\"1.1\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 179.7 ) );
	object.setDefaultY( MxNumberTenths( 179.7 ) );
	object.setRelativeX( MxNumberTenths( 179.7 ) );
	object.setRelativeY( MxNumberTenths( 179.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#383736" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet relative-y=\"179.7\" font-style=\"normal\" font-size=\"large\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 179.8 ) );
	object.setDefaultY( MxNumberTenths( 179.8 ) );
	object.setRelativeX( MxNumberTenths( 179.8 ) );
	object.setRelativeY( MxNumberTenths( 179.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" default-x=\"179.8\" default-y=\"179.8\" relative-x=\"179.8\" relative-y=\"179.8\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 179.9 ) );
	object.setDefaultY( MxNumberTenths( 179.9 ) );
	object.setRelativeX( MxNumberTenths( 179.9 ) );
	object.setRelativeY( MxNumberTenths( 179.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop default-x=\"179.9\" default-y=\"179.9\" relative-x=\"179.9\" relative-y=\"179.9\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 180 ) );
	object.setDefaultY( MxNumberTenths( 180 ) );
	object.setRelativeX( MxNumberTenths( 180 ) );
	object.setRelativeY( MxNumberTenths( 180 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" default-y=\"180\" relative-x=\"180\" relative-y=\"180\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 180.1 ) );
	object.setDefaultY( MxNumberTenths( 180.1 ) );
	object.setRelativeX( MxNumberTenths( 180.1 ) );
	object.setRelativeY( MxNumberTenths( 180.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart relative-x=\"180.1\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 180.2 ) );
	object.setDefaultY( MxNumberTenths( 180.2 ) );
	object.setRelativeX( MxNumberTenths( 180.2 ) );
	object.setRelativeY( MxNumberTenths( 180.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" default-x=\"180.2\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 180.3 ) );
	object.setDefaultY( MxNumberTenths( 180.3 ) );
	object.setRelativeX( MxNumberTenths( 180.3 ) );
	object.setRelativeY( MxNumberTenths( 180.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#444342" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard default-x=\"180.3\" font-family=\"XYZ\" font-weight=\"normal\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 180.4 ) );
	object.setDefaultY( MxNumberTenths( 180.4 ) );
	object.setRelativeX( MxNumberTenths( 180.4 ) );
	object.setRelativeY( MxNumberTenths( 180.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" default-y=\"180.4\" font-weight=\"bold\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 180.5 ) );
	object.setDefaultY( MxNumberTenths( 180.5 ) );
	object.setRelativeX( MxNumberTenths( 180.5 ) );
	object.setRelativeY( MxNumberTenths( 180.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#484746" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie default-y=\"180.5\" font-weight=\"normal\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 180.6 ) );
	object.setDefaultY( MxNumberTenths( 180.6 ) );
	object.setRelativeX( MxNumberTenths( 180.6 ) );
	object.setRelativeY( MxNumberTenths( 180.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart print-object=\"yes\" default-x=\"180.6\" default-y=\"180.6\" relative-x=\"180.6\" relative-y=\"180.6\" font-size=\"1.1\" font-weight=\"bold\" color=\"#494A4948\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 180.7 ) );
	object.setDefaultY( MxNumberTenths( 180.7 ) );
	object.setRelativeX( MxNumberTenths( 180.7 ) );
	object.setRelativeY( MxNumberTenths( 180.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet default-x=\"180.7\" relative-x=\"180.7\" relative-y=\"180.7\" font-size=\"large\" color=\"#4C4B4A\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 180.8 ) );
	object.setDefaultY( MxNumberTenths( 180.8 ) );
	object.setRelativeX( MxNumberTenths( 180.8 ) );
	object.setRelativeY( MxNumberTenths( 180.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" relative-x=\"180.8\" relative-y=\"180.8\" font-size=\"1.1\" color=\"#4D4E4D4C\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 180.9 ) );
	object.setDefaultY( MxNumberTenths( 180.9 ) );
	object.setRelativeX( MxNumberTenths( 180.9 ) );
	object.setRelativeY( MxNumberTenths( 180.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop relative-x=\"180.9\" relative-y=\"180.9\" font-size=\"large\" color=\"#504F4E\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 181 ) );
	object.setDefaultY( MxNumberTenths( 181 ) );
	object.setRelativeX( MxNumberTenths( 181 ) );
	object.setRelativeY( MxNumberTenths( 181 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" default-x=\"181\" default-y=\"181\" relative-y=\"181\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#51525150\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 181.1 ) );
	object.setDefaultY( MxNumberTenths( 181.1 ) );
	object.setRelativeX( MxNumberTenths( 181.1 ) );
	object.setRelativeY( MxNumberTenths( 181.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#545352" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart default-x=\"181.1\" default-y=\"181.1\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#545352\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 181.2 ) );
	object.setDefaultY( MxNumberTenths( 181.2 ) );
	object.setRelativeX( MxNumberTenths( 181.2 ) );
	object.setRelativeY( MxNumberTenths( 181.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" default-y=\"181.2\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#55565554\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 181.3 ) );
	object.setDefaultY( MxNumberTenths( 181.3 ) );
	object.setRelativeX( MxNumberTenths( 181.3 ) );
	object.setRelativeY( MxNumberTenths( 181.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#585756" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#585756\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 181.4 ) );
	object.setDefaultY( MxNumberTenths( 181.4 ) );
	object.setRelativeX( MxNumberTenths( 181.4 ) );
	object.setRelativeY( MxNumberTenths( 181.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" default-x=\"181.4\" relative-x=\"181.4\" font-family=\"DEF\" font-style=\"italic\" color=\"#595A5958\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 181.5 ) );
	object.setDefaultY( MxNumberTenths( 181.5 ) );
	object.setRelativeX( MxNumberTenths( 181.5 ) );
	object.setRelativeY( MxNumberTenths( 181.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie default-x=\"181.5\" relative-x=\"181.5\" font-family=\"XYZ\" font-style=\"normal\" color=\"#5C5B5A\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 181.6 ) );
	object.setDefaultY( MxNumberTenths( 181.6 ) );
	object.setRelativeX( MxNumberTenths( 181.6 ) );
	object.setRelativeY( MxNumberTenths( 181.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart print-object=\"yes\" default-y=\"181.6\" relative-x=\"181.6\" relative-y=\"181.6\" font-style=\"italic\" font-weight=\"bold\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 181.7 ) );
	object.setDefaultY( MxNumberTenths( 181.7 ) );
	object.setRelativeX( MxNumberTenths( 181.7 ) );
	object.setRelativeY( MxNumberTenths( 181.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet default-y=\"181.7\" relative-x=\"181.7\" relative-y=\"181.7\" font-weight=\"normal\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 181.8 ) );
	object.setDefaultY( MxNumberTenths( 181.8 ) );
	object.setRelativeX( MxNumberTenths( 181.8 ) );
	object.setRelativeY( MxNumberTenths( 181.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard print-object=\"yes\" default-x=\"181.8\" default-y=\"181.8\" relative-y=\"181.8\" font-weight=\"bold\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 181.9 ) );
	object.setDefaultY( MxNumberTenths( 181.9 ) );
	object.setRelativeX( MxNumberTenths( 181.9 ) );
	object.setRelativeY( MxNumberTenths( 181.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop default-x=\"181.9\" relative-y=\"181.9\" font-weight=\"normal\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 182 ) );
	object.setDefaultY( MxNumberTenths( 182 ) );
	object.setRelativeX( MxNumberTenths( 182 ) );
	object.setRelativeY( MxNumberTenths( 182 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie print-object=\"yes\" relative-y=\"182\" font-weight=\"bold\" location=\"left\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 182.1 ) );
	object.setDefaultY( MxNumberTenths( 182.1 ) );
	object.setRelativeX( MxNumberTenths( 182.1 ) );
	object.setRelativeY( MxNumberTenths( 182.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<booksmart font-weight=\"normal\" location=\"left\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "quiet", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 182.2 ) );
	object.setDefaultY( MxNumberTenths( 182.2 ) );
	object.setRelativeX( MxNumberTenths( 182.2 ) );
	object.setRelativeY( MxNumberTenths( 182.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<quiet print-object=\"yes\" default-x=\"182.2\" default-y=\"182.2\" relative-x=\"182.2\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" location=\"left\">-1000</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "musicxmlishard", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 182.3 ) );
	object.setDefaultY( MxNumberTenths( 182.3 ) );
	object.setRelativeX( MxNumberTenths( 182.3 ) );
	object.setRelativeY( MxNumberTenths( 182.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<musicxmlishard default-x=\"182.3\" default-y=\"182.3\" relative-x=\"182.3\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" location=\"left\">-1000</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "bishop", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 182.4 ) );
	object.setDefaultY( MxNumberTenths( 182.4 ) );
	object.setRelativeX( MxNumberTenths( 182.4 ) );
	object.setRelativeY( MxNumberTenths( 182.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bishop print-object=\"yes\" default-y=\"182.4\" relative-x=\"182.4\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" location=\"left\">-1000</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "charlie", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 182.5 ) );
	object.setDefaultY( MxNumberTenths( 182.5 ) );
	object.setRelativeX( MxNumberTenths( 182.5 ) );
	object.setRelativeY( MxNumberTenths( 182.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<charlie relative-x=\"182.5\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\">-1000</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object( "booksmart", MxNumberSemitones( -1000 ) );
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
	object.setDefaultX( MxNumberTenths( 182.6 ) );
	object.setDefaultY( MxNumberTenths( 182.6 ) );
	object.setRelativeX( MxNumberTenths( 182.6 ) );
	object.setRelativeY( MxNumberTenths( 182.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
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

TEST( getIsPrintObjectDefaultDefined, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = true;
	bool actual = object.getIsPrintObjectDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLocationDefaultDefined, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	bool expected = true;
	bool actual = object.getIsLocationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getPrintObjectDefaultValue, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	MxEnumYesNo expected( lexicon::enums::YesNo::yes );
	MxEnumYesNo actual = object.getPrintObjectDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLocationDefaultValue, MxCxSmpRootAlter )
{
	MxCxSmpRootAlter object;
	MxEnumLeftRight expected( lexicon::enums::LeftRight::right );
	MxEnumLeftRight actual = object.getLocationDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


