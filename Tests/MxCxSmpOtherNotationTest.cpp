/** *******************************************************
  * 
  * MxCxSmpOtherNotationTest.cpp
  * Created: 2014-12-02 17:31:54
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpOtherNotation.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	std::string expected = ( MxEnumStartStopSingle(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	std::string expected = ( MxNumberNumberLevel( 1 ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::yes ) ).toString();
	std::string actual = object.getPrintObject().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	std::string expected = ( MxEnumAboveBelow(  ) ).toString();
	std::string actual = object.getPlacement().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "" ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "A,B,C" ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "D,E,F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "WOOF" ) );
	expected = "WOOF";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "X,Y,Z" ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "X,Y,Z";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "A,B,C" ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "D,E,F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "WOOF" ) );
	expected = "WOOF";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "X,Y,Z" ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "X,Y,Z";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "A,B,C" ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	std::string expected = "MxCxSmpOtherNotation";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	std::string expected = "other-notation";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	std::string expected = "The other-notation type is used to define any notations not yet in the MusicXML format. This allows extended representation, though without application interoperability. It handles notations where more specific extension elements such as other-dynamics and other-technical are not appropriate.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxSmpOtherNotation )
{
	MxEnumStartStopSingle value1( lexicon::enums::StartStopSingle::single );
	MxEnumStartStopSingle value2( lexicon::enums::StartStopSingle::stop );
	CHECK( ( value1 != value2 ) )
	MxCxSmpOtherNotation object;
	object.setType( value1 );
	MxEnumStartStopSingle expected = value1;
	MxEnumStartStopSingle actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setNumber1, MxCxSmpOtherNotation )
{
	MxNumberNumberLevel value1( 1 );
	MxNumberNumberLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpOtherNotation object;
	object.setNumber( value1 );
	MxNumberNumberLevel expected = value1;
	MxNumberNumberLevel actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setPrintObject2, MxCxSmpOtherNotation )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpOtherNotation object;
	object.setPrintObject( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getPrintObject();
	CHECK_EQUAL( expected, actual )
	object.setPrintObject( value2 );
	expected = value2;
	actual = object.getPrintObject();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX3, MxCxSmpOtherNotation )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpOtherNotation object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY4, MxCxSmpOtherNotation )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpOtherNotation object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX5, MxCxSmpOtherNotation )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpOtherNotation object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY6, MxCxSmpOtherNotation )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpOtherNotation object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily7, MxCxSmpOtherNotation )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpOtherNotation object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle8, MxCxSmpOtherNotation )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpOtherNotation object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize9, MxCxSmpOtherNotation )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpOtherNotation object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight10, MxCxSmpOtherNotation )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpOtherNotation object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor11, MxCxSmpOtherNotation )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpOtherNotation object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setPlacement12, MxCxSmpOtherNotation )
{
	MxEnumAboveBelow value1( lexicon::enums::AboveBelow::below );
	MxEnumAboveBelow value2( lexicon::enums::AboveBelow::above );
	CHECK( ( value1 != value2 ) )
	MxCxSmpOtherNotation object;
	object.setPlacement( value1 );
	MxEnumAboveBelow expected = value1;
	MxEnumAboveBelow actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
	object.setPlacement( value2 );
	expected = value2;
	actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsTypeRequired0, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberRequired1, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPrintObjectRequired2, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsPrintObjectRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired3, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired4, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired5, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired6, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired7, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired8, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired9, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired10, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired11, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementRequired12, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsPlacementRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = true;
	bool actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberPresent1, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNumberPresent( true );
	expected = true;
	actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNumberPresent( false );
	expected = false;
	actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPrintObjectPresent2, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
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
TEST( getIsDefaultXPresent3, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
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
TEST( getIsDefaultYPresent4, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
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
TEST( getIsRelativeXPresent5, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
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
TEST( getIsRelativeYPresent6, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
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
TEST( getIsFontFamilyPresent7, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
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
TEST( getIsFontStylePresent8, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
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
TEST( getIsFontSizePresent9, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
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
TEST( getIsFontWeightPresent10, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
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
TEST( getIsColorPresent11, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
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
TEST( getIsPlacementPresent12, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsPlacementPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPlacementPresent( true );
	expected = true;
	actual = object.getIsPlacementPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPlacementPresent( false );
	expected = false;
	actual = object.getIsPlacementPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 253.4 ) );
	object.setDefaultY( MxNumberTenths( 253.4 ) );
	object.setRelativeX( MxNumberTenths( 253.4 ) );
	object.setRelativeY( MxNumberTenths( 253.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setIsNumberPresent( true );
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
	object.setIsPlacementPresent( true );
	expected = "<booksmart type=\"start\" number=\"1\" print-object=\"no\" default-x=\"253.4\" default-y=\"253.4\" relative-x=\"253.4\" relative-y=\"253.4\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#DDDEDDDC\" placement=\"below\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
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
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 253.5 ) );
	object.setDefaultY( MxNumberTenths( 253.5 ) );
	object.setRelativeX( MxNumberTenths( 253.5 ) );
	object.setRelativeY( MxNumberTenths( 253.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" number=\"1\" print-object=\"yes\" default-x=\"253.5\" default-y=\"253.5\" relative-x=\"253.5\" relative-y=\"253.5\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#E0DFDE\" placement=\"above\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
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
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 253.6 ) );
	object.setDefaultY( MxNumberTenths( 253.6 ) );
	object.setRelativeX( MxNumberTenths( 253.6 ) );
	object.setRelativeY( MxNumberTenths( 253.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" print-object=\"no\" default-x=\"253.6\" default-y=\"253.6\" relative-x=\"253.6\" relative-y=\"253.6\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#E1E2E1E0\" placement=\"below\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
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
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 253.7 ) );
	object.setDefaultY( MxNumberTenths( 253.7 ) );
	object.setRelativeX( MxNumberTenths( 253.7 ) );
	object.setRelativeY( MxNumberTenths( 253.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" default-x=\"253.7\" default-y=\"253.7\" relative-x=\"253.7\" relative-y=\"253.7\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#E4E3E2\" placement=\"above\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 253.8 ) );
	object.setDefaultY( MxNumberTenths( 253.8 ) );
	object.setRelativeX( MxNumberTenths( 253.8 ) );
	object.setRelativeY( MxNumberTenths( 253.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" number=\"1\" default-y=\"253.8\" relative-x=\"253.8\" relative-y=\"253.8\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#E5E6E5E4\" placement=\"below\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
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
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 253.9 ) );
	object.setDefaultY( MxNumberTenths( 253.9 ) );
	object.setRelativeX( MxNumberTenths( 253.9 ) );
	object.setRelativeY( MxNumberTenths( 253.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" number=\"1\" relative-x=\"253.9\" relative-y=\"253.9\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#E8E7E6\" placement=\"above\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 254 ) );
	object.setDefaultY( MxNumberTenths( 254 ) );
	object.setRelativeX( MxNumberTenths( 254 ) );
	object.setRelativeY( MxNumberTenths( 254 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" print-object=\"no\" relative-y=\"254\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#E9EAE9E8\" placement=\"below\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 254.1 ) );
	object.setDefaultY( MxNumberTenths( 254.1 ) );
	object.setRelativeX( MxNumberTenths( 254.1 ) );
	object.setRelativeY( MxNumberTenths( 254.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" print-object=\"yes\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#ECEBEA\" placement=\"above\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 254.2 ) );
	object.setDefaultY( MxNumberTenths( 254.2 ) );
	object.setRelativeX( MxNumberTenths( 254.2 ) );
	object.setRelativeY( MxNumberTenths( 254.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" number=\"1\" print-object=\"no\" default-x=\"254.2\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#EDEEEDEC\" placement=\"below\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 254.3 ) );
	object.setDefaultY( MxNumberTenths( 254.3 ) );
	object.setRelativeX( MxNumberTenths( 254.3 ) );
	object.setRelativeY( MxNumberTenths( 254.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" number=\"1\" default-x=\"254.3\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F0EFEE\" placement=\"above\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 254.4 ) );
	object.setDefaultY( MxNumberTenths( 254.4 ) );
	object.setRelativeX( MxNumberTenths( 254.4 ) );
	object.setRelativeY( MxNumberTenths( 254.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" default-x=\"254.4\" default-y=\"254.4\" font-weight=\"normal\" color=\"#F1F2F1F0\" placement=\"below\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 254.5 ) );
	object.setDefaultY( MxNumberTenths( 254.5 ) );
	object.setRelativeX( MxNumberTenths( 254.5 ) );
	object.setRelativeY( MxNumberTenths( 254.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" default-x=\"254.5\" default-y=\"254.5\" color=\"#F4F3F2\" placement=\"above\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 254.6 ) );
	object.setDefaultY( MxNumberTenths( 254.6 ) );
	object.setRelativeX( MxNumberTenths( 254.6 ) );
	object.setRelativeY( MxNumberTenths( 254.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" print-object=\"no\" default-y=\"254.6\" relative-x=\"254.6\" placement=\"below\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 254.7 ) );
	object.setDefaultY( MxNumberTenths( 254.7 ) );
	object.setRelativeX( MxNumberTenths( 254.7 ) );
	object.setRelativeY( MxNumberTenths( 254.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" number=\"1\" print-object=\"yes\" default-y=\"254.7\" relative-x=\"254.7\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 254.8 ) );
	object.setDefaultY( MxNumberTenths( 254.8 ) );
	object.setRelativeX( MxNumberTenths( 254.8 ) );
	object.setRelativeY( MxNumberTenths( 254.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" print-object=\"no\" default-y=\"254.8\" relative-x=\"254.8\" relative-y=\"254.8\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
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
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 254.9 ) );
	object.setDefaultY( MxNumberTenths( 254.9 ) );
	object.setRelativeX( MxNumberTenths( 254.9 ) );
	object.setRelativeY( MxNumberTenths( 254.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" relative-x=\"254.9\" relative-y=\"254.9\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 255 ) );
	object.setDefaultY( MxNumberTenths( 255 ) );
	object.setRelativeX( MxNumberTenths( 255 ) );
	object.setRelativeY( MxNumberTenths( 255 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" number=\"1\" default-x=\"255\" relative-x=\"255\" relative-y=\"255\" font-family=\"XYZ\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 255.1 ) );
	object.setDefaultY( MxNumberTenths( 255.1 ) );
	object.setRelativeX( MxNumberTenths( 255.1 ) );
	object.setRelativeY( MxNumberTenths( 255.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-x=\"255.1\" relative-x=\"255.1\" relative-y=\"255.1\" font-family=\"ABC\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 255.2 ) );
	object.setDefaultY( MxNumberTenths( 255.2 ) );
	object.setRelativeX( MxNumberTenths( 255.2 ) );
	object.setRelativeY( MxNumberTenths( 255.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" print-object=\"no\" default-x=\"255.2\" relative-y=\"255.2\" font-family=\"DEF\" font-style=\"normal\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 255.3 ) );
	object.setDefaultY( MxNumberTenths( 255.3 ) );
	object.setRelativeX( MxNumberTenths( 255.3 ) );
	object.setRelativeY( MxNumberTenths( 255.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#040302" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" print-object=\"yes\" default-x=\"255.3\" relative-y=\"255.3\" font-family=\"XYZ\" font-style=\"italic\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 255.4 ) );
	object.setDefaultY( MxNumberTenths( 255.4 ) );
	object.setRelativeX( MxNumberTenths( 255.4 ) );
	object.setRelativeY( MxNumberTenths( 255.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" number=\"1\" print-object=\"no\" default-y=\"255.4\" relative-y=\"255.4\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 255.5 ) );
	object.setDefaultY( MxNumberTenths( 255.5 ) );
	object.setRelativeX( MxNumberTenths( 255.5 ) );
	object.setRelativeY( MxNumberTenths( 255.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#080706" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" number=\"1\" default-y=\"255.5\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 255.6 ) );
	object.setDefaultY( MxNumberTenths( 255.6 ) );
	object.setRelativeX( MxNumberTenths( 255.6 ) );
	object.setRelativeY( MxNumberTenths( 255.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" default-y=\"255.6\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 255.7 ) );
	object.setDefaultY( MxNumberTenths( 255.7 ) );
	object.setRelativeX( MxNumberTenths( 255.7 ) );
	object.setRelativeY( MxNumberTenths( 255.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" default-y=\"255.7\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 255.8 ) );
	object.setDefaultY( MxNumberTenths( 255.8 ) );
	object.setRelativeX( MxNumberTenths( 255.8 ) );
	object.setRelativeY( MxNumberTenths( 255.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" number=\"1\" print-object=\"no\" default-x=\"255.8\" default-y=\"255.8\" relative-x=\"255.8\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#0D0E0D0C\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 255.9 ) );
	object.setDefaultY( MxNumberTenths( 255.9 ) );
	object.setRelativeX( MxNumberTenths( 255.9 ) );
	object.setRelativeY( MxNumberTenths( 255.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" number=\"1\" print-object=\"yes\" default-x=\"255.9\" relative-x=\"255.9\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#100F0E\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 256 ) );
	object.setDefaultY( MxNumberTenths( 256 ) );
	object.setRelativeX( MxNumberTenths( 256 ) );
	object.setRelativeY( MxNumberTenths( 256 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" print-object=\"no\" default-x=\"256\" relative-x=\"256\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#11121110\" placement=\"below\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 256.1 ) );
	object.setDefaultY( MxNumberTenths( 256.1 ) );
	object.setRelativeX( MxNumberTenths( 256.1 ) );
	object.setRelativeY( MxNumberTenths( 256.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#141312" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"256.1\" relative-x=\"256.1\" font-size=\"1.1\" font-weight=\"bold\" color=\"#141312\" placement=\"above\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 256.2 ) );
	object.setDefaultY( MxNumberTenths( 256.2 ) );
	object.setRelativeX( MxNumberTenths( 256.2 ) );
	object.setRelativeY( MxNumberTenths( 256.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" number=\"1\" relative-x=\"256.2\" relative-y=\"256.2\" font-size=\"large\" font-weight=\"normal\" color=\"#15161514\" placement=\"below\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 256.3 ) );
	object.setDefaultY( MxNumberTenths( 256.3 ) );
	object.setRelativeX( MxNumberTenths( 256.3 ) );
	object.setRelativeY( MxNumberTenths( 256.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" number=\"1\" relative-x=\"256.3\" relative-y=\"256.3\" font-size=\"1.1\" font-weight=\"bold\" color=\"#181716\" placement=\"above\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 256.4 ) );
	object.setDefaultY( MxNumberTenths( 256.4 ) );
	object.setRelativeX( MxNumberTenths( 256.4 ) );
	object.setRelativeY( MxNumberTenths( 256.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" print-object=\"no\" default-y=\"256.4\" relative-y=\"256.4\" font-weight=\"normal\" color=\"#191A1918\" placement=\"below\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 256.5 ) );
	object.setDefaultY( MxNumberTenths( 256.5 ) );
	object.setRelativeX( MxNumberTenths( 256.5 ) );
	object.setRelativeY( MxNumberTenths( 256.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" print-object=\"yes\" default-y=\"256.5\" relative-y=\"256.5\" font-weight=\"bold\" color=\"#1C1B1A\" placement=\"above\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 256.6 ) );
	object.setDefaultY( MxNumberTenths( 256.6 ) );
	object.setRelativeX( MxNumberTenths( 256.6 ) );
	object.setRelativeY( MxNumberTenths( 256.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" print-object=\"no\" default-x=\"256.6\" default-y=\"256.6\" relative-y=\"256.6\" font-family=\"ABC\" font-weight=\"normal\" color=\"#1D1E1D1C\" placement=\"below\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 256.7 ) );
	object.setDefaultY( MxNumberTenths( 256.7 ) );
	object.setRelativeX( MxNumberTenths( 256.7 ) );
	object.setRelativeY( MxNumberTenths( 256.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" number=\"1\" default-x=\"256.7\" default-y=\"256.7\" relative-y=\"256.7\" font-family=\"DEF\" color=\"#201F1E\" placement=\"above\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 256.8 ) );
	object.setDefaultY( MxNumberTenths( 256.8 ) );
	object.setRelativeX( MxNumberTenths( 256.8 ) );
	object.setRelativeY( MxNumberTenths( 256.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" default-x=\"256.8\" default-y=\"256.8\" relative-y=\"256.8\" font-family=\"XYZ\" color=\"#21222120\" placement=\"below\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 256.9 ) );
	object.setDefaultY( MxNumberTenths( 256.9 ) );
	object.setRelativeX( MxNumberTenths( 256.9 ) );
	object.setRelativeY( MxNumberTenths( 256.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#242322" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" default-x=\"256.9\" font-family=\"ABC\" color=\"#242322\" placement=\"above\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 257 ) );
	object.setDefaultY( MxNumberTenths( 257 ) );
	object.setRelativeX( MxNumberTenths( 257 ) );
	object.setRelativeY( MxNumberTenths( 257 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" number=\"1\" print-object=\"no\" relative-x=\"257\" font-family=\"DEF\" font-style=\"normal\" placement=\"below\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 257.1 ) );
	object.setDefaultY( MxNumberTenths( 257.1 ) );
	object.setRelativeX( MxNumberTenths( 257.1 ) );
	object.setRelativeY( MxNumberTenths( 257.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#282726" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" print-object=\"yes\" relative-x=\"257.1\" font-family=\"XYZ\" font-style=\"italic\" placement=\"above\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 257.2 ) );
	object.setDefaultY( MxNumberTenths( 257.2 ) );
	object.setRelativeX( MxNumberTenths( 257.2 ) );
	object.setRelativeY( MxNumberTenths( 257.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" print-object=\"no\" relative-x=\"257.2\" font-family=\"ABC\" font-style=\"normal\" placement=\"below\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 257.3 ) );
	object.setDefaultY( MxNumberTenths( 257.3 ) );
	object.setRelativeX( MxNumberTenths( 257.3 ) );
	object.setRelativeY( MxNumberTenths( 257.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" relative-x=\"257.3\" font-family=\"DEF\" font-style=\"italic\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 257.4 ) );
	object.setDefaultY( MxNumberTenths( 257.4 ) );
	object.setRelativeX( MxNumberTenths( 257.4 ) );
	object.setRelativeY( MxNumberTenths( 257.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-x=\"257.4\" default-y=\"257.4\" relative-x=\"257.4\" font-style=\"normal\" font-size=\"large\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 257.5 ) );
	object.setDefaultY( MxNumberTenths( 257.5 ) );
	object.setRelativeX( MxNumberTenths( 257.5 ) );
	object.setRelativeY( MxNumberTenths( 257.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" number=\"1\" default-x=\"257.5\" default-y=\"257.5\" relative-x=\"257.5\" font-style=\"italic\" font-size=\"1.1\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 257.6 ) );
	object.setDefaultY( MxNumberTenths( 257.6 ) );
	object.setRelativeX( MxNumberTenths( 257.6 ) );
	object.setRelativeY( MxNumberTenths( 257.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" print-object=\"no\" default-x=\"257.6\" default-y=\"257.6\" relative-y=\"257.6\" font-style=\"normal\" font-size=\"large\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 257.7 ) );
	object.setDefaultY( MxNumberTenths( 257.7 ) );
	object.setRelativeX( MxNumberTenths( 257.7 ) );
	object.setRelativeY( MxNumberTenths( 257.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" print-object=\"yes\" default-x=\"257.7\" default-y=\"257.7\" relative-y=\"257.7\" font-style=\"italic\" font-size=\"1.1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 257.8 ) );
	object.setDefaultY( MxNumberTenths( 257.8 ) );
	object.setRelativeX( MxNumberTenths( 257.8 ) );
	object.setRelativeY( MxNumberTenths( 257.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" number=\"1\" print-object=\"no\" default-y=\"257.8\" relative-y=\"257.8\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 257.9 ) );
	object.setDefaultY( MxNumberTenths( 257.9 ) );
	object.setRelativeX( MxNumberTenths( 257.9 ) );
	object.setRelativeY( MxNumberTenths( 257.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" number=\"1\" relative-y=\"257.9\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 258 ) );
	object.setDefaultY( MxNumberTenths( 258 ) );
	object.setRelativeX( MxNumberTenths( 258 ) );
	object.setRelativeY( MxNumberTenths( 258 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" relative-y=\"258\" font-size=\"large\" font-weight=\"normal\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 258.1 ) );
	object.setDefaultY( MxNumberTenths( 258.1 ) );
	object.setRelativeX( MxNumberTenths( 258.1 ) );
	object.setRelativeY( MxNumberTenths( 258.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" relative-y=\"258.1\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 258.2 ) );
	object.setDefaultY( MxNumberTenths( 258.2 ) );
	object.setRelativeX( MxNumberTenths( 258.2 ) );
	object.setRelativeY( MxNumberTenths( 258.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" number=\"1\" print-object=\"no\" default-x=\"258.2\" relative-x=\"258.2\" relative-y=\"258.2\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" color=\"#3D3E3D3C\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 258.3 ) );
	object.setDefaultY( MxNumberTenths( 258.3 ) );
	object.setRelativeX( MxNumberTenths( 258.3 ) );
	object.setRelativeY( MxNumberTenths( 258.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" number=\"1\" print-object=\"yes\" default-x=\"258.3\" relative-x=\"258.3\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" color=\"#403F3E\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 258.4 ) );
	object.setDefaultY( MxNumberTenths( 258.4 ) );
	object.setRelativeX( MxNumberTenths( 258.4 ) );
	object.setRelativeY( MxNumberTenths( 258.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" print-object=\"no\" default-x=\"258.4\" default-y=\"258.4\" relative-x=\"258.4\" font-family=\"ABC\" font-weight=\"normal\" color=\"#41424140\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
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
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 258.5 ) );
	object.setDefaultY( MxNumberTenths( 258.5 ) );
	object.setRelativeX( MxNumberTenths( 258.5 ) );
	object.setRelativeY( MxNumberTenths( 258.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" default-x=\"258.5\" default-y=\"258.5\" relative-x=\"258.5\" font-family=\"DEF\" font-weight=\"bold\" color=\"#444342\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 258.6 ) );
	object.setDefaultY( MxNumberTenths( 258.6 ) );
	object.setRelativeX( MxNumberTenths( 258.6 ) );
	object.setRelativeY( MxNumberTenths( 258.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-y=\"258.6\" relative-x=\"258.6\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#45464544\" placement=\"below\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 258.7 ) );
	object.setDefaultY( MxNumberTenths( 258.7 ) );
	object.setRelativeX( MxNumberTenths( 258.7 ) );
	object.setRelativeY( MxNumberTenths( 258.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" number=\"1\" default-y=\"258.7\" relative-x=\"258.7\" font-family=\"ABC\" font-weight=\"bold\" color=\"#484746\" placement=\"above\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 258.8 ) );
	object.setDefaultY( MxNumberTenths( 258.8 ) );
	object.setRelativeX( MxNumberTenths( 258.8 ) );
	object.setRelativeY( MxNumberTenths( 258.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" print-object=\"no\" default-y=\"258.8\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" color=\"#494A4948\" placement=\"below\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 258.9 ) );
	object.setDefaultY( MxNumberTenths( 258.9 ) );
	object.setRelativeX( MxNumberTenths( 258.9 ) );
	object.setRelativeY( MxNumberTenths( 258.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" print-object=\"yes\" font-family=\"XYZ\" font-style=\"italic\" color=\"#4C4B4A\" placement=\"above\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 259 ) );
	object.setDefaultY( MxNumberTenths( 259 ) );
	object.setRelativeX( MxNumberTenths( 259 ) );
	object.setRelativeY( MxNumberTenths( 259 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" number=\"1\" print-object=\"no\" default-x=\"259\" relative-y=\"259\" font-style=\"normal\" color=\"#4D4E4D4C\" placement=\"below\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 259.1 ) );
	object.setDefaultY( MxNumberTenths( 259.1 ) );
	object.setRelativeX( MxNumberTenths( 259.1 ) );
	object.setRelativeY( MxNumberTenths( 259.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-x=\"259.1\" relative-y=\"259.1\" font-style=\"italic\" color=\"#504F4E\" placement=\"above\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 259.2 ) );
	object.setDefaultY( MxNumberTenths( 259.2 ) );
	object.setRelativeX( MxNumberTenths( 259.2 ) );
	object.setRelativeY( MxNumberTenths( 259.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" default-x=\"259.2\" relative-y=\"259.2\" font-style=\"normal\" color=\"#51525150\" placement=\"below\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 259.3 ) );
	object.setDefaultY( MxNumberTenths( 259.3 ) );
	object.setRelativeX( MxNumberTenths( 259.3 ) );
	object.setRelativeY( MxNumberTenths( 259.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#545352" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" default-x=\"259.3\" relative-y=\"259.3\" font-style=\"italic\" color=\"#545352\" placement=\"above\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 259.4 ) );
	object.setDefaultY( MxNumberTenths( 259.4 ) );
	object.setRelativeX( MxNumberTenths( 259.4 ) );
	object.setRelativeY( MxNumberTenths( 259.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" number=\"1\" print-object=\"no\" default-y=\"259.4\" relative-x=\"259.4\" relative-y=\"259.4\" font-style=\"normal\" font-size=\"large\" placement=\"below\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 259.5 ) );
	object.setDefaultY( MxNumberTenths( 259.5 ) );
	object.setRelativeX( MxNumberTenths( 259.5 ) );
	object.setRelativeY( MxNumberTenths( 259.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#585756" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" number=\"1\" print-object=\"yes\" default-y=\"259.5\" relative-x=\"259.5\" relative-y=\"259.5\" font-style=\"italic\" font-size=\"1.1\" placement=\"above\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 259.6 ) );
	object.setDefaultY( MxNumberTenths( 259.6 ) );
	object.setRelativeX( MxNumberTenths( 259.6 ) );
	object.setRelativeY( MxNumberTenths( 259.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" print-object=\"no\" default-y=\"259.6\" relative-x=\"259.6\" relative-y=\"259.6\" font-style=\"normal\" font-size=\"large\" placement=\"below\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 259.7 ) );
	object.setDefaultY( MxNumberTenths( 259.7 ) );
	object.setRelativeX( MxNumberTenths( 259.7 ) );
	object.setRelativeY( MxNumberTenths( 259.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" default-y=\"259.7\" relative-x=\"259.7\" font-size=\"1.1\" placement=\"above\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 259.8 ) );
	object.setDefaultY( MxNumberTenths( 259.8 ) );
	object.setRelativeX( MxNumberTenths( 259.8 ) );
	object.setRelativeY( MxNumberTenths( 259.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" number=\"1\" default-x=\"259.8\" default-y=\"259.8\" relative-x=\"259.8\" font-family=\"XYZ\" font-size=\"large\" placement=\"below\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 259.9 ) );
	object.setDefaultY( MxNumberTenths( 259.9 ) );
	object.setRelativeX( MxNumberTenths( 259.9 ) );
	object.setRelativeY( MxNumberTenths( 259.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-x=\"259.9\" relative-x=\"259.9\" font-family=\"ABC\" font-size=\"1.1\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 260 ) );
	object.setDefaultY( MxNumberTenths( 260 ) );
	object.setRelativeX( MxNumberTenths( 260 ) );
	object.setRelativeY( MxNumberTenths( 260 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" print-object=\"no\" default-x=\"260\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 260.1 ) );
	object.setDefaultY( MxNumberTenths( 260.1 ) );
	object.setRelativeX( MxNumberTenths( 260.1 ) );
	object.setRelativeY( MxNumberTenths( 260.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#646362" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" print-object=\"yes\" default-x=\"260.1\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 260.2 ) );
	object.setDefaultY( MxNumberTenths( 260.2 ) );
	object.setRelativeX( MxNumberTenths( 260.2 ) );
	object.setRelativeY( MxNumberTenths( 260.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" number=\"1\" print-object=\"no\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
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
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 260.3 ) );
	object.setDefaultY( MxNumberTenths( 260.3 ) );
	object.setRelativeX( MxNumberTenths( 260.3 ) );
	object.setRelativeY( MxNumberTenths( 260.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#686766" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" number=\"1\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 260.4 ) );
	object.setDefaultY( MxNumberTenths( 260.4 ) );
	object.setRelativeX( MxNumberTenths( 260.4 ) );
	object.setRelativeY( MxNumberTenths( 260.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" default-y=\"260.4\" relative-y=\"260.4\" font-family=\"XYZ\" font-weight=\"normal\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 260.5 ) );
	object.setDefaultY( MxNumberTenths( 260.5 ) );
	object.setRelativeX( MxNumberTenths( 260.5 ) );
	object.setRelativeY( MxNumberTenths( 260.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" default-y=\"260.5\" relative-y=\"260.5\" font-family=\"ABC\" font-weight=\"bold\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 260.6 ) );
	object.setDefaultY( MxNumberTenths( 260.6 ) );
	object.setRelativeX( MxNumberTenths( 260.6 ) );
	object.setRelativeY( MxNumberTenths( 260.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" print-object=\"no\" default-x=\"260.6\" default-y=\"260.6\" relative-x=\"260.6\" relative-y=\"260.6\" font-style=\"normal\" font-weight=\"normal\" color=\"#6D6E6D6C\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 260.7 ) );
	object.setDefaultY( MxNumberTenths( 260.7 ) );
	object.setRelativeX( MxNumberTenths( 260.7 ) );
	object.setRelativeY( MxNumberTenths( 260.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" number=\"1\" print-object=\"yes\" default-x=\"260.7\" default-y=\"260.7\" relative-x=\"260.7\" relative-y=\"260.7\" font-style=\"italic\" font-weight=\"bold\" color=\"#706F6E\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 260.8 ) );
	object.setDefaultY( MxNumberTenths( 260.8 ) );
	object.setRelativeX( MxNumberTenths( 260.8 ) );
	object.setRelativeY( MxNumberTenths( 260.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" print-object=\"no\" default-x=\"260.8\" default-y=\"260.8\" relative-x=\"260.8\" relative-y=\"260.8\" font-style=\"normal\" font-weight=\"normal\" color=\"#71727170\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 260.9 ) );
	object.setDefaultY( MxNumberTenths( 260.9 ) );
	object.setRelativeX( MxNumberTenths( 260.9 ) );
	object.setRelativeY( MxNumberTenths( 260.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#747372" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" default-x=\"260.9\" relative-x=\"260.9\" relative-y=\"260.9\" font-style=\"italic\" font-weight=\"bold\" color=\"#747372\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 261 ) );
	object.setDefaultY( MxNumberTenths( 261 ) );
	object.setRelativeX( MxNumberTenths( 261 ) );
	object.setRelativeY( MxNumberTenths( 261 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" number=\"1\" relative-x=\"261\" relative-y=\"261\" font-style=\"normal\" font-weight=\"normal\" color=\"#75767574\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 261.1 ) );
	object.setDefaultY( MxNumberTenths( 261.1 ) );
	object.setRelativeX( MxNumberTenths( 261.1 ) );
	object.setRelativeY( MxNumberTenths( 261.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#787776" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" relative-x=\"261.1\" font-style=\"italic\" color=\"#787776\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
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
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 261.2 ) );
	object.setDefaultY( MxNumberTenths( 261.2 ) );
	object.setRelativeX( MxNumberTenths( 261.2 ) );
	object.setRelativeY( MxNumberTenths( 261.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" print-object=\"no\" font-style=\"normal\" color=\"#797A7978\" placement=\"below\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
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
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 261.3 ) );
	object.setDefaultY( MxNumberTenths( 261.3 ) );
	object.setRelativeX( MxNumberTenths( 261.3 ) );
	object.setRelativeY( MxNumberTenths( 261.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" print-object=\"yes\" font-style=\"italic\" color=\"#7C7B7A\" placement=\"above\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 261.4 ) );
	object.setDefaultY( MxNumberTenths( 261.4 ) );
	object.setRelativeX( MxNumberTenths( 261.4 ) );
	object.setRelativeY( MxNumberTenths( 261.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" number=\"1\" print-object=\"no\" default-x=\"261.4\" default-y=\"261.4\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#7D7E7D7C\" placement=\"below\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 261.5 ) );
	object.setDefaultY( MxNumberTenths( 261.5 ) );
	object.setRelativeX( MxNumberTenths( 261.5 ) );
	object.setRelativeY( MxNumberTenths( 261.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" number=\"1\" default-x=\"261.5\" default-y=\"261.5\" font-family=\"DEF\" font-size=\"1.1\" color=\"#807F7E\" placement=\"above\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 261.6 ) );
	object.setDefaultY( MxNumberTenths( 261.6 ) );
	object.setRelativeX( MxNumberTenths( 261.6 ) );
	object.setRelativeY( MxNumberTenths( 261.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"261.6\" default-y=\"261.6\" font-family=\"XYZ\" font-size=\"large\" color=\"#81828180\" placement=\"below\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 261.7 ) );
	object.setDefaultY( MxNumberTenths( 261.7 ) );
	object.setRelativeX( MxNumberTenths( 261.7 ) );
	object.setRelativeY( MxNumberTenths( 261.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" default-x=\"261.7\" default-y=\"261.7\" font-family=\"ABC\" font-size=\"1.1\" color=\"#848382\" placement=\"above\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
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
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 261.8 ) );
	object.setDefaultY( MxNumberTenths( 261.8 ) );
	object.setRelativeX( MxNumberTenths( 261.8 ) );
	object.setRelativeY( MxNumberTenths( 261.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" number=\"1\" print-object=\"no\" default-y=\"261.8\" relative-x=\"261.8\" relative-y=\"261.8\" font-family=\"DEF\" font-size=\"large\" placement=\"below\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 261.9 ) );
	object.setDefaultY( MxNumberTenths( 261.9 ) );
	object.setRelativeX( MxNumberTenths( 261.9 ) );
	object.setRelativeY( MxNumberTenths( 261.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" number=\"1\" print-object=\"yes\" relative-x=\"261.9\" relative-y=\"261.9\" font-family=\"XYZ\" font-size=\"1.1\" placement=\"above\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 262 ) );
	object.setDefaultY( MxNumberTenths( 262 ) );
	object.setRelativeX( MxNumberTenths( 262 ) );
	object.setRelativeY( MxNumberTenths( 262 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" print-object=\"no\" relative-x=\"262\" relative-y=\"262\" font-family=\"ABC\" font-size=\"large\" placement=\"below\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
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
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 262.1 ) );
	object.setDefaultY( MxNumberTenths( 262.1 ) );
	object.setRelativeX( MxNumberTenths( 262.1 ) );
	object.setRelativeY( MxNumberTenths( 262.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" relative-x=\"262.1\" relative-y=\"262.1\" font-family=\"DEF\" font-size=\"1.1\" placement=\"above\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 262.2 ) );
	object.setDefaultY( MxNumberTenths( 262.2 ) );
	object.setRelativeX( MxNumberTenths( 262.2 ) );
	object.setRelativeY( MxNumberTenths( 262.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" number=\"1\" default-x=\"262.2\" relative-x=\"262.2\" relative-y=\"262.2\" font-size=\"large\" font-weight=\"normal\" placement=\"below\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 262.3 ) );
	object.setDefaultY( MxNumberTenths( 262.3 ) );
	object.setRelativeX( MxNumberTenths( 262.3 ) );
	object.setRelativeY( MxNumberTenths( 262.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" number=\"1\" default-x=\"262.3\" relative-x=\"262.3\" relative-y=\"262.3\" font-size=\"1.1\" font-weight=\"bold\" placement=\"above\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 262.4 ) );
	object.setDefaultY( MxNumberTenths( 262.4 ) );
	object.setRelativeX( MxNumberTenths( 262.4 ) );
	object.setRelativeY( MxNumberTenths( 262.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" print-object=\"no\" default-x=\"262.4\" default-y=\"262.4\" relative-y=\"262.4\" font-style=\"normal\" font-weight=\"normal\" placement=\"below\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 262.5 ) );
	object.setDefaultY( MxNumberTenths( 262.5 ) );
	object.setRelativeX( MxNumberTenths( 262.5 ) );
	object.setRelativeY( MxNumberTenths( 262.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#949392" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" print-object=\"yes\" default-x=\"262.5\" default-y=\"262.5\" font-style=\"italic\" font-weight=\"bold\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 262.6 ) );
	object.setDefaultY( MxNumberTenths( 262.6 ) );
	object.setRelativeX( MxNumberTenths( 262.6 ) );
	object.setRelativeY( MxNumberTenths( 262.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" print-object=\"no\" default-y=\"262.6\" font-style=\"normal\" font-weight=\"normal\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 262.7 ) );
	object.setDefaultY( MxNumberTenths( 262.7 ) );
	object.setRelativeX( MxNumberTenths( 262.7 ) );
	object.setRelativeY( MxNumberTenths( 262.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#989796" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" number=\"1\" default-y=\"262.7\" font-style=\"italic\" font-weight=\"bold\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 262.8 ) );
	object.setDefaultY( MxNumberTenths( 262.8 ) );
	object.setRelativeX( MxNumberTenths( 262.8 ) );
	object.setRelativeY( MxNumberTenths( 262.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" default-y=\"262.8\" font-style=\"normal\" font-weight=\"normal\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 262.9 ) );
	object.setDefaultY( MxNumberTenths( 262.9 ) );
	object.setRelativeX( MxNumberTenths( 262.9 ) );
	object.setRelativeY( MxNumberTenths( 262.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" font-style=\"italic\" font-weight=\"bold\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 263 ) );
	object.setDefaultY( MxNumberTenths( 263 ) );
	object.setRelativeX( MxNumberTenths( 263 ) );
	object.setRelativeY( MxNumberTenths( 263 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" number=\"1\" print-object=\"no\" default-x=\"263\" relative-x=\"263\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" color=\"#9D9E9D9C\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 263.1 ) );
	object.setDefaultY( MxNumberTenths( 263.1 ) );
	object.setRelativeX( MxNumberTenths( 263.1 ) );
	object.setRelativeY( MxNumberTenths( 263.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" print-object=\"yes\" default-x=\"263.1\" relative-x=\"263.1\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" color=\"#A09F9E\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 263.2 ) );
	object.setDefaultY( MxNumberTenths( 263.2 ) );
	object.setRelativeX( MxNumberTenths( 263.2 ) );
	object.setRelativeY( MxNumberTenths( 263.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" print-object=\"no\" default-x=\"263.2\" relative-x=\"263.2\" relative-y=\"263.2\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" color=\"#A1A2A1A0\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 263.3 ) );
	object.setDefaultY( MxNumberTenths( 263.3 ) );
	object.setRelativeX( MxNumberTenths( 263.3 ) );
	object.setRelativeY( MxNumberTenths( 263.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" default-x=\"263.3\" relative-x=\"263.3\" relative-y=\"263.3\" font-family=\"DEF\" color=\"#A4A3A2\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
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
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 263.4 ) );
	object.setDefaultY( MxNumberTenths( 263.4 ) );
	object.setRelativeX( MxNumberTenths( 263.4 ) );
	object.setRelativeY( MxNumberTenths( 263.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\">D,E,F</booksmart>";
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

TEST( getIsTypeDefaultDefined, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberDefaultDefined, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = true;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPrintObjectDefaultDefined, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = true;
	bool actual = object.getIsPrintObjectDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementDefaultDefined, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	bool expected = false;
	bool actual = object.getIsPlacementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	MxEnumStartStopSingle expected;
	MxEnumStartStopSingle actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNumberDefaultValue, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	MxNumberNumberLevel expected( 1 );
	MxNumberNumberLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPrintObjectDefaultValue, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	MxEnumYesNo expected( lexicon::enums::YesNo::yes );
	MxEnumYesNo actual = object.getPrintObjectDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPlacementDefaultValue, MxCxSmpOtherNotation )
{
	MxCxSmpOtherNotation object;
	MxEnumAboveBelow expected;
	MxEnumAboveBelow actual = object.getPlacementDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


