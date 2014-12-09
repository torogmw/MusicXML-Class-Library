/** *******************************************************
  * 
  * MxCxSmpTremoloTest.cpp
  * Created: 2014-12-02 17:31:55
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpTremolo.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	std::string expected = ( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::single ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	std::string expected = ( MxEnumAboveBelow(  ) ).toString();
	std::string actual = object.getPlacement().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 1 ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberTremoloMarks( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberTremoloMarks( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberTremoloMarks( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberTremoloMarks( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberTremoloMarks( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	std::string expected = "MxCxSmpTremolo";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	std::string expected = "tremolo";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	std::string expected = "The tremolo ornament can be used to indicate either single-note or double-note tremolos. Single-note tremolos use the single type, while double-note tremolos use the start and stop types. The default is 'single' for compatibility with Version 1.1. The text of the element indicates the number of tremolo marks and is an integer from 0 to 8. Note that the number of attached beams is not included in this value, but is represented separately using the beam element. When using double-note tremolos, the duration of each note in the tremolo should correspond to half of the notated type value. A time-modification element should also be added with an actual-notes value of 2 and a normal-notes value of 1. If used within a tuplet, this 2/1 ratio should be multiplied by the existing tuplet ratio. Using repeater beams for indicating tremolos is deprecated as of MusicXML 3.0.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxSmpTremolo )
{
	MxEnumStartStopSingle value1( lexicon::enums::StartStopSingle::single );
	MxEnumStartStopSingle value2( lexicon::enums::StartStopSingle::stop );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTremolo object;
	object.setType( value1 );
	MxEnumStartStopSingle expected = value1;
	MxEnumStartStopSingle actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX1, MxCxSmpTremolo )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTremolo object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY2, MxCxSmpTremolo )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTremolo object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX3, MxCxSmpTremolo )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTremolo object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY4, MxCxSmpTremolo )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTremolo object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily5, MxCxSmpTremolo )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTremolo object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle6, MxCxSmpTremolo )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTremolo object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize7, MxCxSmpTremolo )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTremolo object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight8, MxCxSmpTremolo )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTremolo object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor9, MxCxSmpTremolo )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTremolo object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setPlacement10, MxCxSmpTremolo )
{
	MxEnumAboveBelow value1( lexicon::enums::AboveBelow::below );
	MxEnumAboveBelow value2( lexicon::enums::AboveBelow::above );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTremolo object;
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

TEST( getIsTypeRequired0, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired1, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired2, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired3, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired4, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired5, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired6, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired7, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired8, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired9, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementRequired10, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsPlacementRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTypePresent( true );
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTypePresent( false );
	expected = false;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXPresent1, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
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
TEST( getIsDefaultYPresent2, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
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
TEST( getIsRelativeXPresent3, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
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
TEST( getIsRelativeYPresent4, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
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
TEST( getIsFontFamilyPresent5, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
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
TEST( getIsFontStylePresent6, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
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
TEST( getIsFontSizePresent7, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
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
TEST( getIsFontWeightPresent8, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
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
TEST( getIsColorPresent9, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
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
TEST( getIsPlacementPresent10, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
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

TEST( toString0, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 293.8 ) );
	object.setDefaultY( MxNumberTenths( 293.8 ) );
	object.setRelativeX( MxNumberTenths( 293.8 ) );
	object.setRelativeY( MxNumberTenths( 293.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setIsTypePresent( true );
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
	expected = "<booksmart type=\"start\" default-x=\"293.8\" default-y=\"293.8\" relative-x=\"293.8\" relative-y=\"293.8\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#D8D7D6\" placement=\"below\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
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
	object.setDefaultX( MxNumberTenths( 293.9 ) );
	object.setDefaultY( MxNumberTenths( 293.9 ) );
	object.setRelativeX( MxNumberTenths( 293.9 ) );
	object.setRelativeY( MxNumberTenths( 293.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet default-x=\"293.9\" default-y=\"293.9\" relative-x=\"293.9\" relative-y=\"293.9\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#D9DAD9D8\" placement=\"above\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
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
	object.setDefaultX( MxNumberTenths( 294 ) );
	object.setDefaultY( MxNumberTenths( 294 ) );
	object.setRelativeX( MxNumberTenths( 294 ) );
	object.setRelativeY( MxNumberTenths( 294 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" default-y=\"294\" relative-x=\"294\" relative-y=\"294\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#DCDBDA\" placement=\"below\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
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
	object.setDefaultX( MxNumberTenths( 294.1 ) );
	object.setDefaultY( MxNumberTenths( 294.1 ) );
	object.setRelativeX( MxNumberTenths( 294.1 ) );
	object.setRelativeY( MxNumberTenths( 294.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop relative-x=\"294.1\" relative-y=\"294.1\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#DDDEDDDC\" placement=\"above\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
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
	object.setDefaultX( MxNumberTenths( 294.2 ) );
	object.setDefaultY( MxNumberTenths( 294.2 ) );
	object.setRelativeX( MxNumberTenths( 294.2 ) );
	object.setRelativeY( MxNumberTenths( 294.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" default-x=\"294.2\" relative-y=\"294.2\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#E0DFDE\" placement=\"below\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
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
	object.setDefaultX( MxNumberTenths( 294.3 ) );
	object.setDefaultY( MxNumberTenths( 294.3 ) );
	object.setRelativeX( MxNumberTenths( 294.3 ) );
	object.setRelativeY( MxNumberTenths( 294.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart default-x=\"294.3\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#E1E2E1E0\" placement=\"above\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 294.4 ) );
	object.setDefaultY( MxNumberTenths( 294.4 ) );
	object.setRelativeX( MxNumberTenths( 294.4 ) );
	object.setRelativeY( MxNumberTenths( 294.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" default-y=\"294.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#E4E3E2\" placement=\"below\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 294.5 ) );
	object.setDefaultY( MxNumberTenths( 294.5 ) );
	object.setRelativeX( MxNumberTenths( 294.5 ) );
	object.setRelativeY( MxNumberTenths( 294.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard default-y=\"294.5\" font-size=\"1.1\" font-weight=\"bold\" color=\"#E5E6E5E4\" placement=\"above\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 294.6 ) );
	object.setDefaultY( MxNumberTenths( 294.6 ) );
	object.setRelativeX( MxNumberTenths( 294.6 ) );
	object.setRelativeY( MxNumberTenths( 294.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" default-x=\"294.6\" default-y=\"294.6\" relative-x=\"294.6\" font-weight=\"normal\" color=\"#E8E7E6\" placement=\"below\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 294.7 ) );
	object.setDefaultY( MxNumberTenths( 294.7 ) );
	object.setRelativeX( MxNumberTenths( 294.7 ) );
	object.setRelativeY( MxNumberTenths( 294.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie default-x=\"294.7\" relative-x=\"294.7\" color=\"#E9EAE9E8\" placement=\"above\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 294.8 ) );
	object.setDefaultY( MxNumberTenths( 294.8 ) );
	object.setRelativeX( MxNumberTenths( 294.8 ) );
	object.setRelativeY( MxNumberTenths( 294.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" relative-x=\"294.8\" relative-y=\"294.8\" placement=\"below\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
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
	object.setDefaultX( MxNumberTenths( 294.9 ) );
	object.setDefaultY( MxNumberTenths( 294.9 ) );
	object.setRelativeX( MxNumberTenths( 294.9 ) );
	object.setRelativeY( MxNumberTenths( 294.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet relative-x=\"294.9\" relative-y=\"294.9\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 295 ) );
	object.setDefaultY( MxNumberTenths( 295 ) );
	object.setRelativeX( MxNumberTenths( 295 ) );
	object.setRelativeY( MxNumberTenths( 295 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"295\" default-y=\"295\" relative-y=\"295\" font-family=\"DEF\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 295.1 ) );
	object.setDefaultY( MxNumberTenths( 295.1 ) );
	object.setRelativeX( MxNumberTenths( 295.1 ) );
	object.setRelativeY( MxNumberTenths( 295.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop default-x=\"295.1\" default-y=\"295.1\" relative-y=\"295.1\" font-family=\"XYZ\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 295.2 ) );
	object.setDefaultY( MxNumberTenths( 295.2 ) );
	object.setRelativeX( MxNumberTenths( 295.2 ) );
	object.setRelativeY( MxNumberTenths( 295.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" default-y=\"295.2\" relative-y=\"295.2\" font-family=\"ABC\" font-style=\"normal\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 295.3 ) );
	object.setDefaultY( MxNumberTenths( 295.3 ) );
	object.setRelativeX( MxNumberTenths( 295.3 ) );
	object.setRelativeY( MxNumberTenths( 295.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart font-family=\"DEF\" font-style=\"italic\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 295.4 ) );
	object.setDefaultY( MxNumberTenths( 295.4 ) );
	object.setRelativeX( MxNumberTenths( 295.4 ) );
	object.setRelativeY( MxNumberTenths( 295.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" default-x=\"295.4\" relative-x=\"295.4\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 295.5 ) );
	object.setDefaultY( MxNumberTenths( 295.5 ) );
	object.setRelativeX( MxNumberTenths( 295.5 ) );
	object.setRelativeY( MxNumberTenths( 295.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard default-x=\"295.5\" relative-x=\"295.5\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 295.6 ) );
	object.setDefaultY( MxNumberTenths( 295.6 ) );
	object.setRelativeX( MxNumberTenths( 295.6 ) );
	object.setRelativeY( MxNumberTenths( 295.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" default-y=\"295.6\" relative-x=\"295.6\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 295.7 ) );
	object.setDefaultY( MxNumberTenths( 295.7 ) );
	object.setRelativeX( MxNumberTenths( 295.7 ) );
	object.setRelativeY( MxNumberTenths( 295.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie default-y=\"295.7\" relative-x=\"295.7\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 295.8 ) );
	object.setDefaultY( MxNumberTenths( 295.8 ) );
	object.setRelativeX( MxNumberTenths( 295.8 ) );
	object.setRelativeY( MxNumberTenths( 295.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" default-x=\"295.8\" default-y=\"295.8\" relative-y=\"295.8\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#00FFFE\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 295.9 ) );
	object.setDefaultY( MxNumberTenths( 295.9 ) );
	object.setRelativeX( MxNumberTenths( 295.9 ) );
	object.setRelativeY( MxNumberTenths( 295.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet default-x=\"295.9\" relative-y=\"295.9\" font-size=\"1.1\" font-weight=\"bold\" color=\"#01020100\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 296 ) );
	object.setDefaultY( MxNumberTenths( 296 ) );
	object.setRelativeX( MxNumberTenths( 296 ) );
	object.setRelativeY( MxNumberTenths( 296 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#040302" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" relative-y=\"296\" font-size=\"large\" font-weight=\"normal\" color=\"#040302\" placement=\"below\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 296.1 ) );
	object.setDefaultY( MxNumberTenths( 296.1 ) );
	object.setRelativeX( MxNumberTenths( 296.1 ) );
	object.setRelativeY( MxNumberTenths( 296.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop relative-y=\"296.1\" font-size=\"1.1\" font-weight=\"bold\" color=\"#05060504\" placement=\"above\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 296.2 ) );
	object.setDefaultY( MxNumberTenths( 296.2 ) );
	object.setRelativeX( MxNumberTenths( 296.2 ) );
	object.setRelativeY( MxNumberTenths( 296.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#080706" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" default-x=\"296.2\" default-y=\"296.2\" relative-x=\"296.2\" relative-y=\"296.2\" font-family=\"DEF\" font-weight=\"normal\" color=\"#080706\" placement=\"below\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
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
	object.setDefaultX( MxNumberTenths( 296.3 ) );
	object.setDefaultY( MxNumberTenths( 296.3 ) );
	object.setRelativeX( MxNumberTenths( 296.3 ) );
	object.setRelativeY( MxNumberTenths( 296.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart default-x=\"296.3\" default-y=\"296.3\" relative-x=\"296.3\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#090A0908\" placement=\"above\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
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
	object.setDefaultX( MxNumberTenths( 296.4 ) );
	object.setDefaultY( MxNumberTenths( 296.4 ) );
	object.setRelativeX( MxNumberTenths( 296.4 ) );
	object.setRelativeY( MxNumberTenths( 296.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" default-y=\"296.4\" relative-x=\"296.4\" font-family=\"ABC\" font-weight=\"normal\" color=\"#0C0B0A\" placement=\"below\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 296.5 ) );
	object.setDefaultY( MxNumberTenths( 296.5 ) );
	object.setRelativeX( MxNumberTenths( 296.5 ) );
	object.setRelativeY( MxNumberTenths( 296.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard relative-x=\"296.5\" font-family=\"DEF\" color=\"#0D0E0D0C\" placement=\"above\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
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
	object.setDefaultX( MxNumberTenths( 296.6 ) );
	object.setDefaultY( MxNumberTenths( 296.6 ) );
	object.setRelativeX( MxNumberTenths( 296.6 ) );
	object.setRelativeY( MxNumberTenths( 296.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" default-x=\"296.6\" font-family=\"XYZ\" font-style=\"normal\" color=\"#100F0E\" placement=\"below\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
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
	object.setDefaultX( MxNumberTenths( 296.7 ) );
	object.setDefaultY( MxNumberTenths( 296.7 ) );
	object.setRelativeX( MxNumberTenths( 296.7 ) );
	object.setRelativeY( MxNumberTenths( 296.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie default-x=\"296.7\" font-family=\"ABC\" font-style=\"italic\" color=\"#11121110\" placement=\"above\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 296.8 ) );
	object.setDefaultY( MxNumberTenths( 296.8 ) );
	object.setRelativeX( MxNumberTenths( 296.8 ) );
	object.setRelativeY( MxNumberTenths( 296.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#141312" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" default-y=\"296.8\" relative-y=\"296.8\" font-style=\"normal\" placement=\"below\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 296.9 ) );
	object.setDefaultY( MxNumberTenths( 296.9 ) );
	object.setRelativeX( MxNumberTenths( 296.9 ) );
	object.setRelativeY( MxNumberTenths( 296.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet default-y=\"296.9\" relative-y=\"296.9\" font-style=\"italic\" placement=\"above\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
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
	object.setDefaultX( MxNumberTenths( 297 ) );
	object.setDefaultY( MxNumberTenths( 297 ) );
	object.setRelativeX( MxNumberTenths( 297 ) );
	object.setRelativeY( MxNumberTenths( 297 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#181716" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"297\" default-y=\"297\" relative-x=\"297\" relative-y=\"297\" font-style=\"normal\" font-size=\"large\" placement=\"below\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 297.1 ) );
	object.setDefaultY( MxNumberTenths( 297.1 ) );
	object.setRelativeX( MxNumberTenths( 297.1 ) );
	object.setRelativeY( MxNumberTenths( 297.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop default-x=\"297.1\" relative-x=\"297.1\" relative-y=\"297.1\" font-style=\"italic\" font-size=\"1.1\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 297.2 ) );
	object.setDefaultY( MxNumberTenths( 297.2 ) );
	object.setRelativeX( MxNumberTenths( 297.2 ) );
	object.setRelativeY( MxNumberTenths( 297.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" relative-x=\"297.2\" relative-y=\"297.2\" font-style=\"normal\" font-size=\"large\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 297.3 ) );
	object.setDefaultY( MxNumberTenths( 297.3 ) );
	object.setRelativeX( MxNumberTenths( 297.3 ) );
	object.setRelativeY( MxNumberTenths( 297.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart relative-x=\"297.3\" font-size=\"1.1\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 297.4 ) );
	object.setDefaultY( MxNumberTenths( 297.4 ) );
	object.setRelativeX( MxNumberTenths( 297.4 ) );
	object.setRelativeY( MxNumberTenths( 297.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" default-x=\"297.4\" default-y=\"297.4\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 297.5 ) );
	object.setDefaultY( MxNumberTenths( 297.5 ) );
	object.setRelativeX( MxNumberTenths( 297.5 ) );
	object.setRelativeY( MxNumberTenths( 297.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard default-x=\"297.5\" default-y=\"297.5\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 297.6 ) );
	object.setDefaultY( MxNumberTenths( 297.6 ) );
	object.setRelativeX( MxNumberTenths( 297.6 ) );
	object.setRelativeY( MxNumberTenths( 297.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#242322" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" default-y=\"297.6\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
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
	object.setDefaultX( MxNumberTenths( 297.7 ) );
	object.setDefaultY( MxNumberTenths( 297.7 ) );
	object.setRelativeX( MxNumberTenths( 297.7 ) );
	object.setRelativeY( MxNumberTenths( 297.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 297.8 ) );
	object.setDefaultY( MxNumberTenths( 297.8 ) );
	object.setRelativeX( MxNumberTenths( 297.8 ) );
	object.setRelativeY( MxNumberTenths( 297.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#282726" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" default-x=\"297.8\" relative-x=\"297.8\" relative-y=\"297.8\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#282726\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 297.9 ) );
	object.setDefaultY( MxNumberTenths( 297.9 ) );
	object.setRelativeX( MxNumberTenths( 297.9 ) );
	object.setRelativeY( MxNumberTenths( 297.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet default-x=\"297.9\" relative-x=\"297.9\" relative-y=\"297.9\" font-family=\"ABC\" font-weight=\"bold\" color=\"#292A2928\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
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
	object.setDefaultX( MxNumberTenths( 298 ) );
	object.setDefaultY( MxNumberTenths( 298 ) );
	object.setRelativeX( MxNumberTenths( 298 ) );
	object.setRelativeY( MxNumberTenths( 298 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" default-y=\"298\" relative-x=\"298\" relative-y=\"298\" font-style=\"normal\" font-weight=\"normal\" color=\"#2C2B2A\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
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
	object.setDefaultX( MxNumberTenths( 298.1 ) );
	object.setDefaultY( MxNumberTenths( 298.1 ) );
	object.setRelativeX( MxNumberTenths( 298.1 ) );
	object.setRelativeY( MxNumberTenths( 298.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop default-y=\"298.1\" relative-x=\"298.1\" relative-y=\"298.1\" font-style=\"italic\" font-weight=\"bold\" color=\"#2D2E2D2C\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 298.2 ) );
	object.setDefaultY( MxNumberTenths( 298.2 ) );
	object.setRelativeX( MxNumberTenths( 298.2 ) );
	object.setRelativeY( MxNumberTenths( 298.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" default-x=\"298.2\" default-y=\"298.2\" relative-y=\"298.2\" font-style=\"normal\" font-weight=\"normal\" color=\"#302F2E\" placement=\"below\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
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
	object.setDefaultX( MxNumberTenths( 298.3 ) );
	object.setDefaultY( MxNumberTenths( 298.3 ) );
	object.setRelativeX( MxNumberTenths( 298.3 ) );
	object.setRelativeY( MxNumberTenths( 298.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart default-x=\"298.3\" font-style=\"italic\" color=\"#31323130\" placement=\"above\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
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
	object.setDefaultX( MxNumberTenths( 298.4 ) );
	object.setDefaultY( MxNumberTenths( 298.4 ) );
	object.setRelativeX( MxNumberTenths( 298.4 ) );
	object.setRelativeY( MxNumberTenths( 298.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#343332" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" font-style=\"normal\" color=\"#343332\" placement=\"below\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
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
	object.setDefaultX( MxNumberTenths( 298.5 ) );
	object.setDefaultY( MxNumberTenths( 298.5 ) );
	object.setRelativeX( MxNumberTenths( 298.5 ) );
	object.setRelativeY( MxNumberTenths( 298.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard font-style=\"italic\" color=\"#35363534\" placement=\"above\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 298.6 ) );
	object.setDefaultY( MxNumberTenths( 298.6 ) );
	object.setRelativeX( MxNumberTenths( 298.6 ) );
	object.setRelativeY( MxNumberTenths( 298.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#383736" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" default-x=\"298.6\" default-y=\"298.6\" relative-x=\"298.6\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#383736\" placement=\"below\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 298.7 ) );
	object.setDefaultY( MxNumberTenths( 298.7 ) );
	object.setRelativeX( MxNumberTenths( 298.7 ) );
	object.setRelativeY( MxNumberTenths( 298.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie default-x=\"298.7\" default-y=\"298.7\" relative-x=\"298.7\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#393A3938\" placement=\"above\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
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
	object.setDefaultX( MxNumberTenths( 298.8 ) );
	object.setDefaultY( MxNumberTenths( 298.8 ) );
	object.setRelativeX( MxNumberTenths( 298.8 ) );
	object.setRelativeY( MxNumberTenths( 298.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" default-y=\"298.8\" relative-x=\"298.8\" relative-y=\"298.8\" font-family=\"ABC\" font-size=\"large\" placement=\"below\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
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
	object.setDefaultX( MxNumberTenths( 298.9 ) );
	object.setDefaultY( MxNumberTenths( 298.9 ) );
	object.setRelativeX( MxNumberTenths( 298.9 ) );
	object.setRelativeY( MxNumberTenths( 298.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet relative-x=\"298.9\" relative-y=\"298.9\" font-family=\"DEF\" font-size=\"1.1\" placement=\"above\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 299 ) );
	object.setDefaultY( MxNumberTenths( 299 ) );
	object.setRelativeX( MxNumberTenths( 299 ) );
	object.setRelativeY( MxNumberTenths( 299 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"299\" relative-y=\"299\" font-family=\"XYZ\" font-size=\"large\" placement=\"below\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 299.1 ) );
	object.setDefaultY( MxNumberTenths( 299.1 ) );
	object.setRelativeX( MxNumberTenths( 299.1 ) );
	object.setRelativeY( MxNumberTenths( 299.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop default-x=\"299.1\" relative-y=\"299.1\" font-family=\"ABC\" font-size=\"1.1\" placement=\"above\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 299.2 ) );
	object.setDefaultY( MxNumberTenths( 299.2 ) );
	object.setRelativeX( MxNumberTenths( 299.2 ) );
	object.setRelativeY( MxNumberTenths( 299.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#444342" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" default-y=\"299.2\" relative-y=\"299.2\" font-size=\"large\" font-weight=\"normal\" placement=\"below\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 299.3 ) );
	object.setDefaultY( MxNumberTenths( 299.3 ) );
	object.setRelativeX( MxNumberTenths( 299.3 ) );
	object.setRelativeY( MxNumberTenths( 299.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart default-y=\"299.3\" font-size=\"1.1\" font-weight=\"bold\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 299.4 ) );
	object.setDefaultY( MxNumberTenths( 299.4 ) );
	object.setRelativeX( MxNumberTenths( 299.4 ) );
	object.setRelativeY( MxNumberTenths( 299.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#484746" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" default-x=\"299.4\" default-y=\"299.4\" relative-x=\"299.4\" font-style=\"normal\" font-weight=\"normal\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 299.5 ) );
	object.setDefaultY( MxNumberTenths( 299.5 ) );
	object.setRelativeX( MxNumberTenths( 299.5 ) );
	object.setRelativeY( MxNumberTenths( 299.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard default-x=\"299.5\" relative-x=\"299.5\" font-style=\"italic\" font-weight=\"bold\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 299.6 ) );
	object.setDefaultY( MxNumberTenths( 299.6 ) );
	object.setRelativeX( MxNumberTenths( 299.6 ) );
	object.setRelativeY( MxNumberTenths( 299.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" relative-x=\"299.6\" font-style=\"normal\" font-weight=\"normal\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 299.7 ) );
	object.setDefaultY( MxNumberTenths( 299.7 ) );
	object.setRelativeX( MxNumberTenths( 299.7 ) );
	object.setRelativeY( MxNumberTenths( 299.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie relative-x=\"299.7\" font-style=\"italic\" font-weight=\"bold\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 299.8 ) );
	object.setDefaultY( MxNumberTenths( 299.8 ) );
	object.setRelativeX( MxNumberTenths( 299.8 ) );
	object.setRelativeY( MxNumberTenths( 299.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" default-x=\"299.8\" default-y=\"299.8\" relative-y=\"299.8\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" color=\"#504F4E\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 299.9 ) );
	object.setDefaultY( MxNumberTenths( 299.9 ) );
	object.setRelativeX( MxNumberTenths( 299.9 ) );
	object.setRelativeY( MxNumberTenths( 299.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet default-x=\"299.9\" default-y=\"299.9\" relative-y=\"299.9\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" color=\"#51525150\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 300 ) );
	object.setDefaultY( MxNumberTenths( 300 ) );
	object.setRelativeX( MxNumberTenths( 300 ) );
	object.setRelativeY( MxNumberTenths( 300 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#545352" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" default-y=\"300\" relative-y=\"300\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" color=\"#545352\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 300.1 ) );
	object.setDefaultY( MxNumberTenths( 300.1 ) );
	object.setRelativeX( MxNumberTenths( 300.1 ) );
	object.setRelativeY( MxNumberTenths( 300.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop relative-y=\"300.1\" font-family=\"DEF\" color=\"#55565554\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 300.2 ) );
	object.setDefaultY( MxNumberTenths( 300.2 ) );
	object.setRelativeX( MxNumberTenths( 300.2 ) );
	object.setRelativeY( MxNumberTenths( 300.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#585756" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" default-x=\"300.2\" relative-x=\"300.2\" relative-y=\"300.2\" font-family=\"XYZ\" font-size=\"large\" color=\"#585756\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 300.3 ) );
	object.setDefaultY( MxNumberTenths( 300.3 ) );
	object.setRelativeX( MxNumberTenths( 300.3 ) );
	object.setRelativeY( MxNumberTenths( 300.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart default-x=\"300.3\" relative-x=\"300.3\" font-family=\"ABC\" font-size=\"1.1\" color=\"#595A5958\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 300.4 ) );
	object.setDefaultY( MxNumberTenths( 300.4 ) );
	object.setRelativeX( MxNumberTenths( 300.4 ) );
	object.setRelativeY( MxNumberTenths( 300.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" default-y=\"300.4\" relative-x=\"300.4\" font-size=\"large\" color=\"#5C5B5A\" placement=\"below\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 300.5 ) );
	object.setDefaultY( MxNumberTenths( 300.5 ) );
	object.setRelativeX( MxNumberTenths( 300.5 ) );
	object.setRelativeY( MxNumberTenths( 300.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard default-y=\"300.5\" relative-x=\"300.5\" font-size=\"1.1\" color=\"#5D5E5D5C\" placement=\"above\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 300.6 ) );
	object.setDefaultY( MxNumberTenths( 300.6 ) );
	object.setRelativeX( MxNumberTenths( 300.6 ) );
	object.setRelativeY( MxNumberTenths( 300.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" default-x=\"300.6\" default-y=\"300.6\" font-size=\"large\" color=\"#605F5E\" placement=\"below\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 300.7 ) );
	object.setDefaultY( MxNumberTenths( 300.7 ) );
	object.setRelativeX( MxNumberTenths( 300.7 ) );
	object.setRelativeY( MxNumberTenths( 300.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie default-x=\"300.7\" font-size=\"1.1\" color=\"#61626160\" placement=\"above\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 300.8 ) );
	object.setDefaultY( MxNumberTenths( 300.8 ) );
	object.setRelativeX( MxNumberTenths( 300.8 ) );
	object.setRelativeY( MxNumberTenths( 300.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" relative-y=\"300.8\" font-style=\"normal\" font-size=\"large\" placement=\"below\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 300.9 ) );
	object.setDefaultY( MxNumberTenths( 300.9 ) );
	object.setRelativeX( MxNumberTenths( 300.9 ) );
	object.setRelativeY( MxNumberTenths( 300.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet relative-y=\"300.9\" font-style=\"italic\" font-size=\"1.1\" placement=\"above\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 301 ) );
	object.setDefaultY( MxNumberTenths( 301 ) );
	object.setRelativeX( MxNumberTenths( 301 ) );
	object.setRelativeY( MxNumberTenths( 301 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"301\" default-y=\"301\" relative-x=\"301\" relative-y=\"301\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" placement=\"below\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 301.1 ) );
	object.setDefaultY( MxNumberTenths( 301.1 ) );
	object.setRelativeX( MxNumberTenths( 301.1 ) );
	object.setRelativeY( MxNumberTenths( 301.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop default-x=\"301.1\" default-y=\"301.1\" relative-x=\"301.1\" relative-y=\"301.1\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" placement=\"above\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 301.2 ) );
	object.setDefaultY( MxNumberTenths( 301.2 ) );
	object.setRelativeX( MxNumberTenths( 301.2 ) );
	object.setRelativeY( MxNumberTenths( 301.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" default-y=\"301.2\" relative-x=\"301.2\" relative-y=\"301.2\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" placement=\"below\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 301.3 ) );
	object.setDefaultY( MxNumberTenths( 301.3 ) );
	object.setRelativeX( MxNumberTenths( 301.3 ) );
	object.setRelativeY( MxNumberTenths( 301.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart relative-x=\"301.3\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" placement=\"above\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 301.4 ) );
	object.setDefaultY( MxNumberTenths( 301.4 ) );
	object.setRelativeX( MxNumberTenths( 301.4 ) );
	object.setRelativeY( MxNumberTenths( 301.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" default-x=\"301.4\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" placement=\"below\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 301.5 ) );
	object.setDefaultY( MxNumberTenths( 301.5 ) );
	object.setRelativeX( MxNumberTenths( 301.5 ) );
	object.setRelativeY( MxNumberTenths( 301.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard default-x=\"301.5\" font-family=\"ABC\" font-weight=\"bold\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 301.6 ) );
	object.setDefaultY( MxNumberTenths( 301.6 ) );
	object.setRelativeX( MxNumberTenths( 301.6 ) );
	object.setRelativeY( MxNumberTenths( 301.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" default-y=\"301.6\" font-weight=\"normal\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 301.7 ) );
	object.setDefaultY( MxNumberTenths( 301.7 ) );
	object.setRelativeX( MxNumberTenths( 301.7 ) );
	object.setRelativeY( MxNumberTenths( 301.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie default-y=\"301.7\" font-weight=\"bold\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 301.8 ) );
	object.setDefaultY( MxNumberTenths( 301.8 ) );
	object.setRelativeX( MxNumberTenths( 301.8 ) );
	object.setRelativeY( MxNumberTenths( 301.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" default-x=\"301.8\" default-y=\"301.8\" relative-x=\"301.8\" relative-y=\"301.8\" font-size=\"large\" font-weight=\"normal\" color=\"#787776\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 301.9 ) );
	object.setDefaultY( MxNumberTenths( 301.9 ) );
	object.setRelativeX( MxNumberTenths( 301.9 ) );
	object.setRelativeY( MxNumberTenths( 301.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet default-x=\"301.9\" relative-x=\"301.9\" relative-y=\"301.9\" font-size=\"1.1\" color=\"#797A7978\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 302 ) );
	object.setDefaultY( MxNumberTenths( 302 ) );
	object.setRelativeX( MxNumberTenths( 302 ) );
	object.setRelativeY( MxNumberTenths( 302 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" relative-x=\"302\" relative-y=\"302\" font-size=\"large\" color=\"#7C7B7A\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 302.1 ) );
	object.setDefaultY( MxNumberTenths( 302.1 ) );
	object.setRelativeX( MxNumberTenths( 302.1 ) );
	object.setRelativeY( MxNumberTenths( 302.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop relative-x=\"302.1\" relative-y=\"302.1\" font-size=\"1.1\" color=\"#7D7E7D7C\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 302.2 ) );
	object.setDefaultY( MxNumberTenths( 302.2 ) );
	object.setRelativeX( MxNumberTenths( 302.2 ) );
	object.setRelativeY( MxNumberTenths( 302.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" default-x=\"302.2\" default-y=\"302.2\" relative-y=\"302.2\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#807F7E\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 302.3 ) );
	object.setDefaultY( MxNumberTenths( 302.3 ) );
	object.setRelativeX( MxNumberTenths( 302.3 ) );
	object.setRelativeY( MxNumberTenths( 302.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart default-x=\"302.3\" default-y=\"302.3\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#81828180\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 302.4 ) );
	object.setDefaultY( MxNumberTenths( 302.4 ) );
	object.setRelativeX( MxNumberTenths( 302.4 ) );
	object.setRelativeY( MxNumberTenths( 302.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" default-y=\"302.4\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#848382\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 302.5 ) );
	object.setDefaultY( MxNumberTenths( 302.5 ) );
	object.setRelativeX( MxNumberTenths( 302.5 ) );
	object.setRelativeY( MxNumberTenths( 302.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#85868584\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 302.6 ) );
	object.setDefaultY( MxNumberTenths( 302.6 ) );
	object.setRelativeX( MxNumberTenths( 302.6 ) );
	object.setRelativeY( MxNumberTenths( 302.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" default-x=\"302.6\" relative-x=\"302.6\" font-family=\"XYZ\" font-style=\"normal\" color=\"#888786\" placement=\"below\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 302.7 ) );
	object.setDefaultY( MxNumberTenths( 302.7 ) );
	object.setRelativeX( MxNumberTenths( 302.7 ) );
	object.setRelativeY( MxNumberTenths( 302.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie default-x=\"302.7\" relative-x=\"302.7\" font-family=\"ABC\" font-style=\"italic\" color=\"#898A8988\" placement=\"above\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 302.8 ) );
	object.setDefaultY( MxNumberTenths( 302.8 ) );
	object.setRelativeX( MxNumberTenths( 302.8 ) );
	object.setRelativeY( MxNumberTenths( 302.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" default-y=\"302.8\" relative-x=\"302.8\" relative-y=\"302.8\" font-style=\"normal\" font-weight=\"normal\" placement=\"below\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 302.9 ) );
	object.setDefaultY( MxNumberTenths( 302.9 ) );
	object.setRelativeX( MxNumberTenths( 302.9 ) );
	object.setRelativeY( MxNumberTenths( 302.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet default-y=\"302.9\" relative-x=\"302.9\" relative-y=\"302.9\" font-weight=\"bold\" placement=\"above\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 303 ) );
	object.setDefaultY( MxNumberTenths( 303 ) );
	object.setRelativeX( MxNumberTenths( 303 ) );
	object.setRelativeY( MxNumberTenths( 303 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"303\" default-y=\"303\" relative-y=\"303\" font-weight=\"normal\" placement=\"below\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 303.1 ) );
	object.setDefaultY( MxNumberTenths( 303.1 ) );
	object.setRelativeX( MxNumberTenths( 303.1 ) );
	object.setRelativeY( MxNumberTenths( 303.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop default-x=\"303.1\" relative-y=\"303.1\" font-weight=\"bold\" placement=\"above\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 303.2 ) );
	object.setDefaultY( MxNumberTenths( 303.2 ) );
	object.setRelativeX( MxNumberTenths( 303.2 ) );
	object.setRelativeY( MxNumberTenths( 303.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" relative-y=\"303.2\" font-weight=\"normal\" placement=\"below\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 303.3 ) );
	object.setDefaultY( MxNumberTenths( 303.3 ) );
	object.setRelativeX( MxNumberTenths( 303.3 ) );
	object.setRelativeY( MxNumberTenths( 303.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart font-weight=\"bold\" placement=\"above\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "quiet", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 303.4 ) );
	object.setDefaultY( MxNumberTenths( 303.4 ) );
	object.setRelativeX( MxNumberTenths( 303.4 ) );
	object.setRelativeY( MxNumberTenths( 303.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" default-x=\"303.4\" default-y=\"303.4\" relative-x=\"303.4\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" placement=\"below\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "musicxmlishard", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 303.5 ) );
	object.setDefaultY( MxNumberTenths( 303.5 ) );
	object.setRelativeX( MxNumberTenths( 303.5 ) );
	object.setRelativeY( MxNumberTenths( 303.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard default-x=\"303.5\" default-y=\"303.5\" relative-x=\"303.5\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" placement=\"above\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "bishop", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 303.6 ) );
	object.setDefaultY( MxNumberTenths( 303.6 ) );
	object.setRelativeX( MxNumberTenths( 303.6 ) );
	object.setRelativeY( MxNumberTenths( 303.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" default-y=\"303.6\" relative-x=\"303.6\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" placement=\"below\">0</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "charlie", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStopSingle( lexicon::enums::StartStopSingle::start ) );
	object.setDefaultX( MxNumberTenths( 303.7 ) );
	object.setDefaultY( MxNumberTenths( 303.7 ) );
	object.setRelativeX( MxNumberTenths( 303.7 ) );
	object.setRelativeY( MxNumberTenths( 303.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie relative-x=\"303.7\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\">0</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxSmpTremolo )
{
	MxCxSmpTremolo object( "booksmart", MxNumberTremoloMarks( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
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
	object.setDefaultX( MxNumberTenths( 303.8 ) );
	object.setDefaultY( MxNumberTenths( 303.8 ) );
	object.setRelativeX( MxNumberTenths( 303.8 ) );
	object.setRelativeY( MxNumberTenths( 303.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart>0</booksmart>";
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

TEST( getIsTypeDefaultDefined, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = true;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementDefaultDefined, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	bool expected = false;
	bool actual = object.getIsPlacementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	MxEnumStartStopSingle expected( lexicon::enums::StartStopSingle::single );
	MxEnumStartStopSingle actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPlacementDefaultValue, MxCxSmpTremolo )
{
	MxCxSmpTremolo object;
	MxEnumAboveBelow expected;
	MxEnumAboveBelow actual = object.getPlacementDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


