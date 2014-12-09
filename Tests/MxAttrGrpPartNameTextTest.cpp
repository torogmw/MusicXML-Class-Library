/** *******************************************************
  * 
  * MxAttrGrpPartNameTextTest.cpp
  * Created: 2014-11-28 19:17:16
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpPartNameText.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues1, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues2, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues3, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues4, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues5, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues6, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues7, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues8, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues9, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::yes ) ).toString();
	std::string actual = object.getPrintObject().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues10, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getJustify().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	std::string expected = "MxAttrGrpPartNameText";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	std::string expected = "part-name-text";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	std::string expected = "The part-name-text attribute group is used by the part-name and part-abbreviation elements. The print-style and justify attribute groups are deprecated in MusicXML 2.0 in favor of the new part-name-display and part-abbreviation-display elements.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setDefaultX0, MxAttrGrpPartNameText )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPartNameText object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY1, MxAttrGrpPartNameText )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPartNameText object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX2, MxAttrGrpPartNameText )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPartNameText object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY3, MxAttrGrpPartNameText )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPartNameText object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily4, MxAttrGrpPartNameText )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPartNameText object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle5, MxAttrGrpPartNameText )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPartNameText object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize6, MxAttrGrpPartNameText )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPartNameText object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight7, MxAttrGrpPartNameText )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPartNameText object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor8, MxAttrGrpPartNameText )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPartNameText object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setPrintObject9, MxAttrGrpPartNameText )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPartNameText object;
	object.setPrintObject( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getPrintObject();
	CHECK_EQUAL( expected, actual )
	object.setPrintObject( value2 );
	expected = value2;
	actual = object.getPrintObject();
	CHECK_EQUAL( expected, actual )
}
TEST( setJustify10, MxAttrGrpPartNameText )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPartNameText object;
	object.setJustify( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getJustify();
	CHECK_EQUAL( expected, actual )
	object.setJustify( value2 );
	expected = value2;
	actual = object.getJustify();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsDefaultXRequired0, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired1, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired2, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired3, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired4, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired5, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired6, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired7, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired8, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPrintObjectRequired9, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsPrintObjectRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsJustifyRequired10, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsJustifyRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsDefaultXPresent0, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
TEST( getIsDefaultYPresent1, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
TEST( getIsRelativeXPresent2, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
TEST( getIsRelativeYPresent3, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
TEST( getIsFontFamilyPresent4, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
TEST( getIsFontStylePresent5, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
TEST( getIsFontSizePresent6, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
TEST( getIsFontWeightPresent7, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
TEST( getIsColorPresent8, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
TEST( getIsPrintObjectPresent9, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
TEST( getIsJustifyPresent10, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsJustifyPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsJustifyPresent( true );
	expected = true;
	actual = object.getIsJustifyPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsJustifyPresent( false );
	expected = false;
	actual = object.getIsJustifyPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	std::string expected;
	std::string actual;
	object.setDefaultX( MxNumberTenths( 53 ) );
	object.setDefaultY( MxNumberTenths( 53 ) );
	object.setRelativeX( MxNumberTenths( 53 ) );
	object.setRelativeY( MxNumberTenths( 53 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	expected = "default-x=\"53\" default-y=\"53\" relative-x=\"53\" relative-y=\"53\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#2D2E2D2C\" print-object=\"yes\" justify=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 53.1 ) );
	object.setDefaultY( MxNumberTenths( 53.1 ) );
	object.setRelativeX( MxNumberTenths( 53.1 ) );
	object.setRelativeY( MxNumberTenths( 53.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-y=\"53.1\" relative-x=\"53.1\" relative-y=\"53.1\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#302F2E\" print-object=\"no\" justify=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 53.2 ) );
	object.setDefaultY( MxNumberTenths( 53.2 ) );
	object.setRelativeX( MxNumberTenths( 53.2 ) );
	object.setRelativeY( MxNumberTenths( 53.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-x=\"53.2\" relative-x=\"53.2\" relative-y=\"53.2\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#31323130\" print-object=\"yes\" justify=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 53.3 ) );
	object.setDefaultY( MxNumberTenths( 53.3 ) );
	object.setRelativeX( MxNumberTenths( 53.3 ) );
	object.setRelativeY( MxNumberTenths( 53.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "relative-y=\"53.3\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#343332\" print-object=\"no\" justify=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 53.4 ) );
	object.setDefaultY( MxNumberTenths( 53.4 ) );
	object.setRelativeX( MxNumberTenths( 53.4 ) );
	object.setRelativeY( MxNumberTenths( 53.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-x=\"53.4\" default-y=\"53.4\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#35363534\" print-object=\"yes\" justify=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 53.5 ) );
	object.setDefaultY( MxNumberTenths( 53.5 ) );
	object.setRelativeX( MxNumberTenths( 53.5 ) );
	object.setRelativeY( MxNumberTenths( 53.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-y=\"53.5\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#383736\" print-object=\"no\" justify=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 53.6 ) );
	object.setDefaultY( MxNumberTenths( 53.6 ) );
	object.setRelativeX( MxNumberTenths( 53.6 ) );
	object.setRelativeY( MxNumberTenths( 53.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-x=\"53.6\" relative-x=\"53.6\" font-size=\"large\" font-weight=\"normal\" color=\"#393A3938\" print-object=\"yes\" justify=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 53.7 ) );
	object.setDefaultY( MxNumberTenths( 53.7 ) );
	object.setRelativeX( MxNumberTenths( 53.7 ) );
	object.setRelativeY( MxNumberTenths( 53.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "relative-x=\"53.7\" font-weight=\"bold\" color=\"#3C3B3A\" print-object=\"no\" justify=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 53.8 ) );
	object.setDefaultY( MxNumberTenths( 53.8 ) );
	object.setRelativeX( MxNumberTenths( 53.8 ) );
	object.setRelativeY( MxNumberTenths( 53.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-x=\"53.8\" default-y=\"53.8\" relative-x=\"53.8\" relative-y=\"53.8\" color=\"#3D3E3D3C\" print-object=\"yes\" justify=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 53.9 ) );
	object.setDefaultY( MxNumberTenths( 53.9 ) );
	object.setRelativeX( MxNumberTenths( 53.9 ) );
	object.setRelativeY( MxNumberTenths( 53.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-y=\"53.9\" relative-y=\"53.9\" print-object=\"no\" justify=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 54 ) );
	object.setDefaultY( MxNumberTenths( 54 ) );
	object.setRelativeX( MxNumberTenths( 54 ) );
	object.setRelativeY( MxNumberTenths( 54 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-x=\"54\" relative-y=\"54\" font-family=\"ABC\" justify=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 54.1 ) );
	object.setDefaultY( MxNumberTenths( 54.1 ) );
	object.setRelativeX( MxNumberTenths( 54.1 ) );
	object.setRelativeY( MxNumberTenths( 54.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "relative-y=\"54.1\" font-family=\"DEF\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 54.2 ) );
	object.setDefaultY( MxNumberTenths( 54.2 ) );
	object.setRelativeX( MxNumberTenths( 54.2 ) );
	object.setRelativeY( MxNumberTenths( 54.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-x=\"54.2\" default-y=\"54.2\" relative-x=\"54.2\" font-family=\"XYZ\" font-style=\"normal\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 54.3 ) );
	object.setDefaultY( MxNumberTenths( 54.3 ) );
	object.setRelativeX( MxNumberTenths( 54.3 ) );
	object.setRelativeY( MxNumberTenths( 54.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-y=\"54.3\" relative-x=\"54.3\" font-family=\"ABC\" font-style=\"italic\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 54.4 ) );
	object.setDefaultY( MxNumberTenths( 54.4 ) );
	object.setRelativeX( MxNumberTenths( 54.4 ) );
	object.setRelativeY( MxNumberTenths( 54.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-x=\"54.4\" relative-x=\"54.4\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 54.5 ) );
	object.setDefaultY( MxNumberTenths( 54.5 ) );
	object.setRelativeX( MxNumberTenths( 54.5 ) );
	object.setRelativeY( MxNumberTenths( 54.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "font-style=\"italic\" font-size=\"1.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 54.6 ) );
	object.setDefaultY( MxNumberTenths( 54.6 ) );
	object.setRelativeX( MxNumberTenths( 54.6 ) );
	object.setRelativeY( MxNumberTenths( 54.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-x=\"54.6\" default-y=\"54.6\" relative-y=\"54.6\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 54.7 ) );
	object.setDefaultY( MxNumberTenths( 54.7 ) );
	object.setRelativeX( MxNumberTenths( 54.7 ) );
	object.setRelativeY( MxNumberTenths( 54.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-y=\"54.7\" relative-y=\"54.7\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 54.8 ) );
	object.setDefaultY( MxNumberTenths( 54.8 ) );
	object.setRelativeX( MxNumberTenths( 54.8 ) );
	object.setRelativeY( MxNumberTenths( 54.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-x=\"54.8\" relative-x=\"54.8\" relative-y=\"54.8\" font-size=\"large\" font-weight=\"normal\" color=\"#51525150\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 54.9 ) );
	object.setDefaultY( MxNumberTenths( 54.9 ) );
	object.setRelativeX( MxNumberTenths( 54.9 ) );
	object.setRelativeY( MxNumberTenths( 54.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#545352" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "relative-x=\"54.9\" relative-y=\"54.9\" font-size=\"1.1\" font-weight=\"bold\" color=\"#545352\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 55 ) );
	object.setDefaultY( MxNumberTenths( 55 ) );
	object.setRelativeX( MxNumberTenths( 55 ) );
	object.setRelativeY( MxNumberTenths( 55 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-x=\"55\" default-y=\"55\" relative-x=\"55\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" color=\"#55565554\" print-object=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 55.1 ) );
	object.setDefaultY( MxNumberTenths( 55.1 ) );
	object.setRelativeX( MxNumberTenths( 55.1 ) );
	object.setRelativeY( MxNumberTenths( 55.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#585756" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-y=\"55.1\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#585756\" print-object=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 55.2 ) );
	object.setDefaultY( MxNumberTenths( 55.2 ) );
	object.setRelativeX( MxNumberTenths( 55.2 ) );
	object.setRelativeY( MxNumberTenths( 55.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-x=\"55.2\" font-family=\"ABC\" font-weight=\"normal\" color=\"#595A5958\" print-object=\"yes\" justify=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 55.3 ) );
	object.setDefaultY( MxNumberTenths( 55.3 ) );
	object.setRelativeX( MxNumberTenths( 55.3 ) );
	object.setRelativeY( MxNumberTenths( 55.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "font-family=\"DEF\" font-weight=\"bold\" color=\"#5C5B5A\" print-object=\"no\" justify=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 55.4 ) );
	object.setDefaultY( MxNumberTenths( 55.4 ) );
	object.setRelativeX( MxNumberTenths( 55.4 ) );
	object.setRelativeY( MxNumberTenths( 55.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-x=\"55.4\" default-y=\"55.4\" relative-x=\"55.4\" relative-y=\"55.4\" font-family=\"XYZ\" font-style=\"normal\" color=\"#5D5E5D5C\" print-object=\"yes\" justify=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 55.5 ) );
	object.setDefaultY( MxNumberTenths( 55.5 ) );
	object.setRelativeX( MxNumberTenths( 55.5 ) );
	object.setRelativeY( MxNumberTenths( 55.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-y=\"55.5\" relative-x=\"55.5\" relative-y=\"55.5\" font-style=\"italic\" color=\"#605F5E\" print-object=\"no\" justify=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 55.6 ) );
	object.setDefaultY( MxNumberTenths( 55.6 ) );
	object.setRelativeX( MxNumberTenths( 55.6 ) );
	object.setRelativeY( MxNumberTenths( 55.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-x=\"55.6\" relative-x=\"55.6\" relative-y=\"55.6\" font-style=\"normal\" color=\"#61626160\" print-object=\"yes\" justify=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 55.7 ) );
	object.setDefaultY( MxNumberTenths( 55.7 ) );
	object.setRelativeX( MxNumberTenths( 55.7 ) );
	object.setRelativeY( MxNumberTenths( 55.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#646362" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "relative-y=\"55.7\" font-style=\"italic\" print-object=\"no\" justify=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 55.8 ) );
	object.setDefaultY( MxNumberTenths( 55.8 ) );
	object.setRelativeX( MxNumberTenths( 55.8 ) );
	object.setRelativeY( MxNumberTenths( 55.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-x=\"55.8\" default-y=\"55.8\" font-style=\"normal\" font-size=\"large\" print-object=\"yes\" justify=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 55.9 ) );
	object.setDefaultY( MxNumberTenths( 55.9 ) );
	object.setRelativeX( MxNumberTenths( 55.9 ) );
	object.setRelativeY( MxNumberTenths( 55.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#686766" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-y=\"55.9\" font-style=\"italic\" font-size=\"1.1\" print-object=\"no\" justify=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 56 ) );
	object.setDefaultY( MxNumberTenths( 56 ) );
	object.setRelativeX( MxNumberTenths( 56 ) );
	object.setRelativeY( MxNumberTenths( 56 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-x=\"56\" relative-x=\"56\" font-family=\"XYZ\" font-size=\"large\" justify=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 56.1 ) );
	object.setDefaultY( MxNumberTenths( 56.1 ) );
	object.setRelativeX( MxNumberTenths( 56.1 ) );
	object.setRelativeY( MxNumberTenths( 56.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "relative-x=\"56.1\" font-family=\"ABC\" font-size=\"1.1\" justify=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 56.2 ) );
	object.setDefaultY( MxNumberTenths( 56.2 ) );
	object.setRelativeX( MxNumberTenths( 56.2 ) );
	object.setRelativeY( MxNumberTenths( 56.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-x=\"56.2\" default-y=\"56.2\" relative-x=\"56.2\" relative-y=\"56.2\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" justify=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 56.3 ) );
	object.setDefaultY( MxNumberTenths( 56.3 ) );
	object.setRelativeX( MxNumberTenths( 56.3 ) );
	object.setRelativeY( MxNumberTenths( 56.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-y=\"56.3\" relative-y=\"56.3\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 56.4 ) );
	object.setDefaultY( MxNumberTenths( 56.4 ) );
	object.setRelativeX( MxNumberTenths( 56.4 ) );
	object.setRelativeY( MxNumberTenths( 56.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-x=\"56.4\" relative-y=\"56.4\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 56.5 ) );
	object.setDefaultY( MxNumberTenths( 56.5 ) );
	object.setRelativeX( MxNumberTenths( 56.5 ) );
	object.setRelativeY( MxNumberTenths( 56.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#747372" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "relative-y=\"56.5\" font-weight=\"bold\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 56.6 ) );
	object.setDefaultY( MxNumberTenths( 56.6 ) );
	object.setRelativeX( MxNumberTenths( 56.6 ) );
	object.setRelativeY( MxNumberTenths( 56.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-x=\"56.6\" default-y=\"56.6\" relative-x=\"56.6\" font-style=\"normal\" font-weight=\"normal\" color=\"#75767574\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 56.7 ) );
	object.setDefaultY( MxNumberTenths( 56.7 ) );
	object.setRelativeX( MxNumberTenths( 56.7 ) );
	object.setRelativeY( MxNumberTenths( 56.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#787776" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-y=\"56.7\" relative-x=\"56.7\" font-style=\"italic\" font-weight=\"bold\" color=\"#787776\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 56.8 ) );
	object.setDefaultY( MxNumberTenths( 56.8 ) );
	object.setRelativeX( MxNumberTenths( 56.8 ) );
	object.setRelativeY( MxNumberTenths( 56.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-x=\"56.8\" relative-x=\"56.8\" font-style=\"normal\" font-weight=\"normal\" color=\"#797A7978\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 56.9 ) );
	object.setDefaultY( MxNumberTenths( 56.9 ) );
	object.setRelativeX( MxNumberTenths( 56.9 ) );
	object.setRelativeY( MxNumberTenths( 56.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "font-style=\"italic\" font-weight=\"bold\" color=\"#7C7B7A\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 57 ) );
	object.setDefaultY( MxNumberTenths( 57 ) );
	object.setRelativeX( MxNumberTenths( 57 ) );
	object.setRelativeY( MxNumberTenths( 57 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-x=\"57\" default-y=\"57\" relative-y=\"57\" font-family=\"ABC\" font-style=\"normal\" color=\"#7D7E7D7C\" print-object=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 57.1 ) );
	object.setDefaultY( MxNumberTenths( 57.1 ) );
	object.setRelativeX( MxNumberTenths( 57.1 ) );
	object.setRelativeY( MxNumberTenths( 57.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-y=\"57.1\" relative-y=\"57.1\" font-family=\"DEF\" font-style=\"italic\" color=\"#807F7E\" print-object=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 57.2 ) );
	object.setDefaultY( MxNumberTenths( 57.2 ) );
	object.setRelativeX( MxNumberTenths( 57.2 ) );
	object.setRelativeY( MxNumberTenths( 57.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-x=\"57.2\" relative-x=\"57.2\" relative-y=\"57.2\" font-family=\"XYZ\" font-size=\"large\" color=\"#81828180\" print-object=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 57.3 ) );
	object.setDefaultY( MxNumberTenths( 57.3 ) );
	object.setRelativeX( MxNumberTenths( 57.3 ) );
	object.setRelativeY( MxNumberTenths( 57.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "relative-x=\"57.3\" relative-y=\"57.3\" font-family=\"ABC\" font-size=\"1.1\" color=\"#848382\" print-object=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 57.4 ) );
	object.setDefaultY( MxNumberTenths( 57.4 ) );
	object.setRelativeX( MxNumberTenths( 57.4 ) );
	object.setRelativeY( MxNumberTenths( 57.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-x=\"57.4\" default-y=\"57.4\" relative-x=\"57.4\" font-family=\"DEF\" font-size=\"large\" color=\"#85868584\" print-object=\"yes\" justify=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 57.5 ) );
	object.setDefaultY( MxNumberTenths( 57.5 ) );
	object.setRelativeX( MxNumberTenths( 57.5 ) );
	object.setRelativeY( MxNumberTenths( 57.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-y=\"57.5\" font-size=\"1.1\" print-object=\"no\" justify=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 57.6 ) );
	object.setDefaultY( MxNumberTenths( 57.6 ) );
	object.setRelativeX( MxNumberTenths( 57.6 ) );
	object.setRelativeY( MxNumberTenths( 57.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-x=\"57.6\" font-size=\"large\" print-object=\"yes\" justify=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 57.7 ) );
	object.setDefaultY( MxNumberTenths( 57.7 ) );
	object.setRelativeX( MxNumberTenths( 57.7 ) );
	object.setRelativeY( MxNumberTenths( 57.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "font-size=\"1.1\" print-object=\"no\" justify=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 57.8 ) );
	object.setDefaultY( MxNumberTenths( 57.8 ) );
	object.setRelativeX( MxNumberTenths( 57.8 ) );
	object.setRelativeY( MxNumberTenths( 57.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-x=\"57.8\" default-y=\"57.8\" relative-x=\"57.8\" relative-y=\"57.8\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" print-object=\"yes\" justify=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 57.9 ) );
	object.setDefaultY( MxNumberTenths( 57.9 ) );
	object.setRelativeX( MxNumberTenths( 57.9 ) );
	object.setRelativeY( MxNumberTenths( 57.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-y=\"57.9\" relative-x=\"57.9\" relative-y=\"57.9\" font-style=\"italic\" font-weight=\"bold\" print-object=\"no\" justify=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 58 ) );
	object.setDefaultY( MxNumberTenths( 58 ) );
	object.setRelativeX( MxNumberTenths( 58 ) );
	object.setRelativeY( MxNumberTenths( 58 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-x=\"58\" relative-x=\"58\" relative-y=\"58\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" justify=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 58.1 ) );
	object.setDefaultY( MxNumberTenths( 58.1 ) );
	object.setRelativeX( MxNumberTenths( 58.1 ) );
	object.setRelativeY( MxNumberTenths( 58.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#949392" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "relative-y=\"58.1\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" justify=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 58.2 ) );
	object.setDefaultY( MxNumberTenths( 58.2 ) );
	object.setRelativeX( MxNumberTenths( 58.2 ) );
	object.setRelativeY( MxNumberTenths( 58.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-x=\"58.2\" default-y=\"58.2\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" justify=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 58.3 ) );
	object.setDefaultY( MxNumberTenths( 58.3 ) );
	object.setRelativeX( MxNumberTenths( 58.3 ) );
	object.setRelativeY( MxNumberTenths( 58.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#989796" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-y=\"58.3\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" justify=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 58.4 ) );
	object.setDefaultY( MxNumberTenths( 58.4 ) );
	object.setRelativeX( MxNumberTenths( 58.4 ) );
	object.setRelativeY( MxNumberTenths( 58.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-x=\"58.4\" relative-x=\"58.4\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#999A9998\" justify=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 58.5 ) );
	object.setDefaultY( MxNumberTenths( 58.5 ) );
	object.setRelativeX( MxNumberTenths( 58.5 ) );
	object.setRelativeY( MxNumberTenths( 58.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "relative-x=\"58.5\" font-weight=\"bold\" color=\"#9C9B9A\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 58.6 ) );
	object.setDefaultY( MxNumberTenths( 58.6 ) );
	object.setRelativeX( MxNumberTenths( 58.6 ) );
	object.setRelativeY( MxNumberTenths( 58.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-x=\"58.6\" default-y=\"58.6\" relative-x=\"58.6\" relative-y=\"58.6\" font-size=\"large\" color=\"#9D9E9D9C\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 58.7 ) );
	object.setDefaultY( MxNumberTenths( 58.7 ) );
	object.setRelativeX( MxNumberTenths( 58.7 ) );
	object.setRelativeY( MxNumberTenths( 58.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-y=\"58.7\" relative-y=\"58.7\" font-size=\"1.1\" color=\"#A09F9E\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 58.8 ) );
	object.setDefaultY( MxNumberTenths( 58.8 ) );
	object.setRelativeX( MxNumberTenths( 58.8 ) );
	object.setRelativeY( MxNumberTenths( 58.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-x=\"58.8\" relative-y=\"58.8\" font-size=\"large\" color=\"#A1A2A1A0\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 58.9 ) );
	object.setDefaultY( MxNumberTenths( 58.9 ) );
	object.setRelativeX( MxNumberTenths( 58.9 ) );
	object.setRelativeY( MxNumberTenths( 58.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "relative-y=\"58.9\" font-size=\"1.1\" color=\"#A4A3A2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 59 ) );
	object.setDefaultY( MxNumberTenths( 59 ) );
	object.setRelativeX( MxNumberTenths( 59 ) );
	object.setRelativeY( MxNumberTenths( 59 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-x=\"59\" default-y=\"59\" relative-x=\"59\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#A5A6A5A4\" print-object=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 59.1 ) );
	object.setDefaultY( MxNumberTenths( 59.1 ) );
	object.setRelativeX( MxNumberTenths( 59.1 ) );
	object.setRelativeY( MxNumberTenths( 59.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-y=\"59.1\" relative-x=\"59.1\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#A8A7A6\" print-object=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 59.2 ) );
	object.setDefaultY( MxNumberTenths( 59.2 ) );
	object.setRelativeX( MxNumberTenths( 59.2 ) );
	object.setRelativeY( MxNumberTenths( 59.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-x=\"59.2\" relative-x=\"59.2\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#A9AAA9A8\" print-object=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 59.3 ) );
	object.setDefaultY( MxNumberTenths( 59.3 ) );
	object.setRelativeX( MxNumberTenths( 59.3 ) );
	object.setRelativeY( MxNumberTenths( 59.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "font-family=\"XYZ\" font-style=\"italic\" print-object=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 59.4 ) );
	object.setDefaultY( MxNumberTenths( 59.4 ) );
	object.setRelativeX( MxNumberTenths( 59.4 ) );
	object.setRelativeY( MxNumberTenths( 59.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-x=\"59.4\" default-y=\"59.4\" relative-y=\"59.4\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" print-object=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 59.5 ) );
	object.setDefaultY( MxNumberTenths( 59.5 ) );
	object.setRelativeX( MxNumberTenths( 59.5 ) );
	object.setRelativeY( MxNumberTenths( 59.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-y=\"59.5\" relative-y=\"59.5\" font-style=\"italic\" font-weight=\"bold\" print-object=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 59.6 ) );
	object.setDefaultY( MxNumberTenths( 59.6 ) );
	object.setRelativeX( MxNumberTenths( 59.6 ) );
	object.setRelativeY( MxNumberTenths( 59.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-x=\"59.6\" relative-x=\"59.6\" relative-y=\"59.6\" font-weight=\"normal\" print-object=\"yes\" justify=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 59.7 ) );
	object.setDefaultY( MxNumberTenths( 59.7 ) );
	object.setRelativeX( MxNumberTenths( 59.7 ) );
	object.setRelativeY( MxNumberTenths( 59.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "relative-x=\"59.7\" relative-y=\"59.7\" font-weight=\"bold\" print-object=\"no\" justify=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 59.8 ) );
	object.setDefaultY( MxNumberTenths( 59.8 ) );
	object.setRelativeX( MxNumberTenths( 59.8 ) );
	object.setRelativeY( MxNumberTenths( 59.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-x=\"59.8\" default-y=\"59.8\" relative-x=\"59.8\" font-weight=\"normal\" print-object=\"yes\" justify=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 59.9 ) );
	object.setDefaultY( MxNumberTenths( 59.9 ) );
	object.setRelativeX( MxNumberTenths( 59.9 ) );
	object.setRelativeY( MxNumberTenths( 59.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-y=\"59.9\" font-weight=\"bold\" print-object=\"no\" justify=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 60 ) );
	object.setDefaultY( MxNumberTenths( 60 ) );
	object.setRelativeX( MxNumberTenths( 60 ) );
	object.setRelativeY( MxNumberTenths( 60 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-x=\"60\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" justify=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 60.1 ) );
	object.setDefaultY( MxNumberTenths( 60.1 ) );
	object.setRelativeX( MxNumberTenths( 60.1 ) );
	object.setRelativeY( MxNumberTenths( 60.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" justify=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 60.2 ) );
	object.setDefaultY( MxNumberTenths( 60.2 ) );
	object.setRelativeX( MxNumberTenths( 60.2 ) );
	object.setRelativeY( MxNumberTenths( 60.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-x=\"60.2\" default-y=\"60.2\" relative-x=\"60.2\" relative-y=\"60.2\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#BDBEBDBC\" justify=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 60.3 ) );
	object.setDefaultY( MxNumberTenths( 60.3 ) );
	object.setRelativeX( MxNumberTenths( 60.3 ) );
	object.setRelativeY( MxNumberTenths( 60.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-y=\"60.3\" relative-x=\"60.3\" relative-y=\"60.3\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#C0BFBE\" justify=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 60.4 ) );
	object.setDefaultY( MxNumberTenths( 60.4 ) );
	object.setRelativeX( MxNumberTenths( 60.4 ) );
	object.setRelativeY( MxNumberTenths( 60.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-x=\"60.4\" relative-x=\"60.4\" relative-y=\"60.4\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#C1C2C1C0\" justify=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 60.5 ) );
	object.setDefaultY( MxNumberTenths( 60.5 ) );
	object.setRelativeX( MxNumberTenths( 60.5 ) );
	object.setRelativeY( MxNumberTenths( 60.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "relative-y=\"60.5\" font-style=\"italic\" font-size=\"1.1\" color=\"#C4C3C2\" justify=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 60.6 ) );
	object.setDefaultY( MxNumberTenths( 60.6 ) );
	object.setRelativeX( MxNumberTenths( 60.6 ) );
	object.setRelativeY( MxNumberTenths( 60.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-x=\"60.6\" default-y=\"60.6\" font-style=\"normal\" font-size=\"large\" color=\"#C5C6C5C4\" justify=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 60.7 ) );
	object.setDefaultY( MxNumberTenths( 60.7 ) );
	object.setRelativeX( MxNumberTenths( 60.7 ) );
	object.setRelativeY( MxNumberTenths( 60.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-y=\"60.7\" font-style=\"italic\" color=\"#C8C7C6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 60.8 ) );
	object.setDefaultY( MxNumberTenths( 60.8 ) );
	object.setRelativeX( MxNumberTenths( 60.8 ) );
	object.setRelativeY( MxNumberTenths( 60.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-x=\"60.8\" relative-x=\"60.8\" color=\"#C9CAC9C8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 60.9 ) );
	object.setDefaultY( MxNumberTenths( 60.9 ) );
	object.setRelativeX( MxNumberTenths( 60.9 ) );
	object.setRelativeY( MxNumberTenths( 60.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "relative-x=\"60.9\" color=\"#CCCBCA\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 61 ) );
	object.setDefaultY( MxNumberTenths( 61 ) );
	object.setRelativeX( MxNumberTenths( 61 ) );
	object.setRelativeY( MxNumberTenths( 61 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-x=\"61\" default-y=\"61\" relative-x=\"61\" relative-y=\"61\" font-family=\"DEF\" font-weight=\"normal\" color=\"#CDCECDCC\" print-object=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 61.1 ) );
	object.setDefaultY( MxNumberTenths( 61.1 ) );
	object.setRelativeX( MxNumberTenths( 61.1 ) );
	object.setRelativeY( MxNumberTenths( 61.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-y=\"61.1\" relative-y=\"61.1\" font-family=\"XYZ\" font-weight=\"bold\" print-object=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 61.2 ) );
	object.setDefaultY( MxNumberTenths( 61.2 ) );
	object.setRelativeX( MxNumberTenths( 61.2 ) );
	object.setRelativeY( MxNumberTenths( 61.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-x=\"61.2\" relative-y=\"61.2\" font-family=\"ABC\" font-weight=\"normal\" print-object=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 61.3 ) );
	object.setDefaultY( MxNumberTenths( 61.3 ) );
	object.setRelativeX( MxNumberTenths( 61.3 ) );
	object.setRelativeY( MxNumberTenths( 61.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "relative-y=\"61.3\" font-family=\"DEF\" font-weight=\"bold\" print-object=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 61.4 ) );
	object.setDefaultY( MxNumberTenths( 61.4 ) );
	object.setRelativeX( MxNumberTenths( 61.4 ) );
	object.setRelativeY( MxNumberTenths( 61.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-x=\"61.4\" default-y=\"61.4\" relative-x=\"61.4\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" print-object=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 61.5 ) );
	object.setDefaultY( MxNumberTenths( 61.5 ) );
	object.setRelativeX( MxNumberTenths( 61.5 ) );
	object.setRelativeY( MxNumberTenths( 61.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-y=\"61.5\" relative-x=\"61.5\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" print-object=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 61.6 ) );
	object.setDefaultY( MxNumberTenths( 61.6 ) );
	object.setRelativeX( MxNumberTenths( 61.6 ) );
	object.setRelativeY( MxNumberTenths( 61.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-x=\"61.6\" relative-x=\"61.6\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" print-object=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 61.7 ) );
	object.setDefaultY( MxNumberTenths( 61.7 ) );
	object.setRelativeX( MxNumberTenths( 61.7 ) );
	object.setRelativeY( MxNumberTenths( 61.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" print-object=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 61.8 ) );
	object.setDefaultY( MxNumberTenths( 61.8 ) );
	object.setRelativeX( MxNumberTenths( 61.8 ) );
	object.setRelativeY( MxNumberTenths( 61.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-x=\"61.8\" default-y=\"61.8\" relative-y=\"61.8\" font-style=\"normal\" font-size=\"large\" print-object=\"yes\" justify=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 61.9 ) );
	object.setDefaultY( MxNumberTenths( 61.9 ) );
	object.setRelativeX( MxNumberTenths( 61.9 ) );
	object.setRelativeY( MxNumberTenths( 61.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-y=\"61.9\" relative-y=\"61.9\" font-style=\"italic\" font-size=\"1.1\" print-object=\"no\" justify=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 62 ) );
	object.setDefaultY( MxNumberTenths( 62 ) );
	object.setRelativeX( MxNumberTenths( 62 ) );
	object.setRelativeY( MxNumberTenths( 62 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-x=\"62\" relative-x=\"62\" relative-y=\"62\" font-family=\"XYZ\" font-size=\"large\" color=\"#E1E2E1E0\" justify=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 62.1 ) );
	object.setDefaultY( MxNumberTenths( 62.1 ) );
	object.setRelativeX( MxNumberTenths( 62.1 ) );
	object.setRelativeY( MxNumberTenths( 62.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "relative-x=\"62.1\" relative-y=\"62.1\" font-family=\"ABC\" color=\"#E4E3E2\" justify=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 62.2 ) );
	object.setDefaultY( MxNumberTenths( 62.2 ) );
	object.setRelativeX( MxNumberTenths( 62.2 ) );
	object.setRelativeY( MxNumberTenths( 62.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-x=\"62.2\" default-y=\"62.2\" relative-x=\"62.2\" font-family=\"DEF\" color=\"#E5E6E5E4\" justify=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 62.3 ) );
	object.setDefaultY( MxNumberTenths( 62.3 ) );
	object.setRelativeX( MxNumberTenths( 62.3 ) );
	object.setRelativeY( MxNumberTenths( 62.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-y=\"62.3\" font-family=\"XYZ\" color=\"#E8E7E6\" justify=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 62.4 ) );
	object.setDefaultY( MxNumberTenths( 62.4 ) );
	object.setRelativeX( MxNumberTenths( 62.4 ) );
	object.setRelativeY( MxNumberTenths( 62.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-x=\"62.4\" font-family=\"ABC\" color=\"#E9EAE9E8\" justify=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 62.5 ) );
	object.setDefaultY( MxNumberTenths( 62.5 ) );
	object.setRelativeX( MxNumberTenths( 62.5 ) );
	object.setRelativeY( MxNumberTenths( 62.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "color=\"#ECEBEA\" justify=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 62.6 ) );
	object.setDefaultY( MxNumberTenths( 62.6 ) );
	object.setRelativeX( MxNumberTenths( 62.6 ) );
	object.setRelativeY( MxNumberTenths( 62.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "default-x=\"62.6\" default-y=\"62.6\" relative-x=\"62.6\" relative-y=\"62.6\" font-style=\"normal\" font-weight=\"normal\" color=\"#EDEEEDEC\" justify=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 62.7 ) );
	object.setDefaultY( MxNumberTenths( 62.7 ) );
	object.setRelativeX( MxNumberTenths( 62.7 ) );
	object.setRelativeY( MxNumberTenths( 62.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "default-y=\"62.7\" relative-x=\"62.7\" relative-y=\"62.7\" font-style=\"italic\" font-weight=\"bold\" color=\"#F0EFEE\" justify=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 62.8 ) );
	object.setDefaultY( MxNumberTenths( 62.8 ) );
	object.setRelativeX( MxNumberTenths( 62.8 ) );
	object.setRelativeY( MxNumberTenths( 62.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "default-x=\"62.8\" relative-x=\"62.8\" relative-y=\"62.8\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#F1F2F1F0\" justify=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 62.9 ) );
	object.setDefaultY( MxNumberTenths( 62.9 ) );
	object.setRelativeX( MxNumberTenths( 62.9 ) );
	object.setRelativeY( MxNumberTenths( 62.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "relative-y=\"62.9\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 63 ) );
	object.setDefaultY( MxNumberTenths( 63 ) );
	object.setRelativeX( MxNumberTenths( 63 ) );
	object.setRelativeY( MxNumberTenths( 63 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
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

TEST( getIsDefaultXDefaultDefined, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPrintObjectDefaultDefined, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = true;
	bool actual = object.getIsPrintObjectDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsJustifyDefaultDefined, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	bool expected = false;
	bool actual = object.getIsJustifyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getDefaultXDefaultValue, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPrintObjectDefaultValue, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	MxEnumYesNo expected( lexicon::enums::YesNo::yes );
	MxEnumYesNo actual = object.getPrintObjectDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getJustifyDefaultValue, MxAttrGrpPartNameText )
{
	MxAttrGrpPartNameText object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getJustifyDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


