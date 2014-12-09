/** *******************************************************
  * 
  * MxCxSmpHammerOnPullOffTest.cpp
  * Created: 2014-12-02 17:31:53
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpHammerOnPullOff.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	std::string expected = ( MxEnumStartStop(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	std::string expected = ( MxNumberNumberLevel( 1 ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	std::string expected = ( MxEnumAboveBelow(  ) ).toString();
	std::string actual = object.getPlacement().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "" ) );
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
TEST( ctorValueAndElementName2, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
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
TEST( ctorValueAndElementName4, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "X,Y,Z" ) );
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
TEST( ctorValueAndElementName6, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
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
TEST( ctorValueAndElementName8, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "X,Y,Z" ) );
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

TEST( getClassName, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	std::string expected = "MxCxSmpHammerOnPullOff";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	std::string expected = "hammer-on-pull-off";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	std::string expected = "The hammer-on and pull-off elements are used in guitar and fretted instrument notation. Since a single slur can be marked over many notes, the hammer-on and pull-off elements are separate so the individual pair of notes can be specified. The element content can be used to specify how the hammer-on or pull-off should be notated. An empty element leaves this choice up to the application.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxSmpHammerOnPullOff )
{
	MxEnumStartStop value1( lexicon::enums::StartStop::stop );
	MxEnumStartStop value2( lexicon::enums::StartStop::start );
	CHECK( ( value1 != value2 ) )
	MxCxSmpHammerOnPullOff object;
	object.setType( value1 );
	MxEnumStartStop expected = value1;
	MxEnumStartStop actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setNumber1, MxCxSmpHammerOnPullOff )
{
	MxNumberNumberLevel value1( 1 );
	MxNumberNumberLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpHammerOnPullOff object;
	object.setNumber( value1 );
	MxNumberNumberLevel expected = value1;
	MxNumberNumberLevel actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX2, MxCxSmpHammerOnPullOff )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpHammerOnPullOff object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY3, MxCxSmpHammerOnPullOff )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpHammerOnPullOff object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX4, MxCxSmpHammerOnPullOff )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpHammerOnPullOff object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY5, MxCxSmpHammerOnPullOff )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpHammerOnPullOff object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily6, MxCxSmpHammerOnPullOff )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpHammerOnPullOff object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle7, MxCxSmpHammerOnPullOff )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpHammerOnPullOff object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize8, MxCxSmpHammerOnPullOff )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpHammerOnPullOff object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight9, MxCxSmpHammerOnPullOff )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpHammerOnPullOff object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor10, MxCxSmpHammerOnPullOff )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpHammerOnPullOff object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setPlacement11, MxCxSmpHammerOnPullOff )
{
	MxEnumAboveBelow value1( lexicon::enums::AboveBelow::below );
	MxEnumAboveBelow value2( lexicon::enums::AboveBelow::above );
	CHECK( ( value1 != value2 ) )
	MxCxSmpHammerOnPullOff object;
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

TEST( getIsTypeRequired0, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberRequired1, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired2, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired3, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired4, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired5, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired6, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired7, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired8, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired9, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired10, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementRequired11, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsPlacementRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
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
TEST( getIsNumberPresent1, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
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
TEST( getIsDefaultXPresent2, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
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
TEST( getIsDefaultYPresent3, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
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
TEST( getIsRelativeXPresent4, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
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
TEST( getIsRelativeYPresent5, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
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
TEST( getIsFontFamilyPresent6, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
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
TEST( getIsFontStylePresent7, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
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
TEST( getIsFontSizePresent8, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
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
TEST( getIsFontWeightPresent9, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
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
TEST( getIsColorPresent10, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
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
TEST( getIsPlacementPresent11, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
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

TEST( toString0, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 233.2 ) );
	object.setDefaultY( MxNumberTenths( 233.2 ) );
	object.setRelativeX( MxNumberTenths( 233.2 ) );
	object.setRelativeY( MxNumberTenths( 233.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setIsNumberPresent( true );
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
	expected = "<booksmart type=\"start\" number=\"1\" default-x=\"233.2\" default-y=\"233.2\" relative-x=\"233.2\" relative-y=\"233.2\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#848382\" placement=\"below\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
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
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 233.3 ) );
	object.setDefaultY( MxNumberTenths( 233.3 ) );
	object.setRelativeX( MxNumberTenths( 233.3 ) );
	object.setRelativeY( MxNumberTenths( 233.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" number=\"1\" default-x=\"233.3\" default-y=\"233.3\" relative-x=\"233.3\" relative-y=\"233.3\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#85868584\" placement=\"above\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
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
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 233.4 ) );
	object.setDefaultY( MxNumberTenths( 233.4 ) );
	object.setRelativeX( MxNumberTenths( 233.4 ) );
	object.setRelativeY( MxNumberTenths( 233.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"233.4\" default-y=\"233.4\" relative-x=\"233.4\" relative-y=\"233.4\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#888786\" placement=\"below\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
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
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 233.5 ) );
	object.setDefaultY( MxNumberTenths( 233.5 ) );
	object.setRelativeX( MxNumberTenths( 233.5 ) );
	object.setRelativeY( MxNumberTenths( 233.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" default-y=\"233.5\" relative-x=\"233.5\" relative-y=\"233.5\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#898A8988\" placement=\"above\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
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
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 233.6 ) );
	object.setDefaultY( MxNumberTenths( 233.6 ) );
	object.setRelativeX( MxNumberTenths( 233.6 ) );
	object.setRelativeY( MxNumberTenths( 233.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" number=\"1\" relative-x=\"233.6\" relative-y=\"233.6\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#8C8B8A\" placement=\"below\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
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
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 233.7 ) );
	object.setDefaultY( MxNumberTenths( 233.7 ) );
	object.setRelativeX( MxNumberTenths( 233.7 ) );
	object.setRelativeY( MxNumberTenths( 233.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" number=\"1\" relative-y=\"233.7\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#8D8E8D8C\" placement=\"above\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
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
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 233.8 ) );
	object.setDefaultY( MxNumberTenths( 233.8 ) );
	object.setRelativeX( MxNumberTenths( 233.8 ) );
	object.setRelativeY( MxNumberTenths( 233.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" default-x=\"233.8\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#908F8E\" placement=\"below\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
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
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 233.9 ) );
	object.setDefaultY( MxNumberTenths( 233.9 ) );
	object.setRelativeX( MxNumberTenths( 233.9 ) );
	object.setRelativeY( MxNumberTenths( 233.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"233.9\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#91929190\" placement=\"above\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 234 ) );
	object.setDefaultY( MxNumberTenths( 234 ) );
	object.setRelativeX( MxNumberTenths( 234 ) );
	object.setRelativeY( MxNumberTenths( 234 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#949392" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" number=\"1\" default-x=\"234\" default-y=\"234\" font-size=\"1.1\" font-weight=\"bold\" color=\"#949392\" placement=\"below\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 234.1 ) );
	object.setDefaultY( MxNumberTenths( 234.1 ) );
	object.setRelativeX( MxNumberTenths( 234.1 ) );
	object.setRelativeY( MxNumberTenths( 234.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" number=\"1\" default-y=\"234.1\" font-weight=\"normal\" color=\"#95969594\" placement=\"above\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 234.2 ) );
	object.setDefaultY( MxNumberTenths( 234.2 ) );
	object.setRelativeX( MxNumberTenths( 234.2 ) );
	object.setRelativeY( MxNumberTenths( 234.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#989796" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" default-y=\"234.2\" relative-x=\"234.2\" color=\"#989796\" placement=\"below\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
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
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 234.3 ) );
	object.setDefaultY( MxNumberTenths( 234.3 ) );
	object.setRelativeX( MxNumberTenths( 234.3 ) );
	object.setRelativeY( MxNumberTenths( 234.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" default-y=\"234.3\" relative-x=\"234.3\" placement=\"above\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 234.4 ) );
	object.setDefaultY( MxNumberTenths( 234.4 ) );
	object.setRelativeX( MxNumberTenths( 234.4 ) );
	object.setRelativeY( MxNumberTenths( 234.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-x=\"234.4\" relative-x=\"234.4\" relative-y=\"234.4\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 234.5 ) );
	object.setDefaultY( MxNumberTenths( 234.5 ) );
	object.setRelativeX( MxNumberTenths( 234.5 ) );
	object.setRelativeY( MxNumberTenths( 234.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" number=\"1\" default-x=\"234.5\" relative-x=\"234.5\" relative-y=\"234.5\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
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
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 234.6 ) );
	object.setDefaultY( MxNumberTenths( 234.6 ) );
	object.setRelativeX( MxNumberTenths( 234.6 ) );
	object.setRelativeY( MxNumberTenths( 234.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" default-x=\"234.6\" relative-x=\"234.6\" relative-y=\"234.6\" font-family=\"XYZ\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 234.7 ) );
	object.setDefaultY( MxNumberTenths( 234.7 ) );
	object.setRelativeX( MxNumberTenths( 234.7 ) );
	object.setRelativeY( MxNumberTenths( 234.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" relative-y=\"234.7\" font-family=\"ABC\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
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
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 234.8 ) );
	object.setDefaultY( MxNumberTenths( 234.8 ) );
	object.setRelativeX( MxNumberTenths( 234.8 ) );
	object.setRelativeY( MxNumberTenths( 234.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" number=\"1\" default-y=\"234.8\" relative-y=\"234.8\" font-family=\"DEF\" font-style=\"italic\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
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
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 234.9 ) );
	object.setDefaultY( MxNumberTenths( 234.9 ) );
	object.setRelativeX( MxNumberTenths( 234.9 ) );
	object.setRelativeY( MxNumberTenths( 234.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-y=\"234.9\" relative-y=\"234.9\" font-family=\"XYZ\" font-style=\"normal\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 235 ) );
	object.setDefaultY( MxNumberTenths( 235 ) );
	object.setRelativeX( MxNumberTenths( 235 ) );
	object.setRelativeY( MxNumberTenths( 235 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" default-x=\"235\" default-y=\"235\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 235.1 ) );
	object.setDefaultY( MxNumberTenths( 235.1 ) );
	object.setRelativeX( MxNumberTenths( 235.1 ) );
	object.setRelativeY( MxNumberTenths( 235.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" default-x=\"235.1\" default-y=\"235.1\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 235.2 ) );
	object.setDefaultY( MxNumberTenths( 235.2 ) );
	object.setRelativeX( MxNumberTenths( 235.2 ) );
	object.setRelativeY( MxNumberTenths( 235.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-x=\"235.2\" relative-x=\"235.2\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 235.3 ) );
	object.setDefaultY( MxNumberTenths( 235.3 ) );
	object.setRelativeX( MxNumberTenths( 235.3 ) );
	object.setRelativeY( MxNumberTenths( 235.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" number=\"1\" relative-x=\"235.3\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 235.4 ) );
	object.setDefaultY( MxNumberTenths( 235.4 ) );
	object.setRelativeX( MxNumberTenths( 235.4 ) );
	object.setRelativeY( MxNumberTenths( 235.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" relative-x=\"235.4\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#B0AFAE\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 235.5 ) );
	object.setDefaultY( MxNumberTenths( 235.5 ) );
	object.setRelativeX( MxNumberTenths( 235.5 ) );
	object.setRelativeY( MxNumberTenths( 235.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" relative-x=\"235.5\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#B1B2B1B0\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 235.6 ) );
	object.setDefaultY( MxNumberTenths( 235.6 ) );
	object.setRelativeX( MxNumberTenths( 235.6 ) );
	object.setRelativeY( MxNumberTenths( 235.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" number=\"1\" default-x=\"235.6\" default-y=\"235.6\" relative-x=\"235.6\" relative-y=\"235.6\" font-size=\"1.1\" font-weight=\"bold\" color=\"#B4B3B2\" placement=\"below\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 235.7 ) );
	object.setDefaultY( MxNumberTenths( 235.7 ) );
	object.setRelativeX( MxNumberTenths( 235.7 ) );
	object.setRelativeY( MxNumberTenths( 235.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-x=\"235.7\" default-y=\"235.7\" relative-y=\"235.7\" font-size=\"large\" font-weight=\"normal\" color=\"#B5B6B5B4\" placement=\"above\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 235.8 ) );
	object.setDefaultY( MxNumberTenths( 235.8 ) );
	object.setRelativeX( MxNumberTenths( 235.8 ) );
	object.setRelativeY( MxNumberTenths( 235.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" default-x=\"235.8\" default-y=\"235.8\" relative-y=\"235.8\" font-size=\"1.1\" font-weight=\"bold\" color=\"#B8B7B6\" placement=\"below\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
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
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 235.9 ) );
	object.setDefaultY( MxNumberTenths( 235.9 ) );
	object.setRelativeX( MxNumberTenths( 235.9 ) );
	object.setRelativeY( MxNumberTenths( 235.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" default-y=\"235.9\" relative-y=\"235.9\" font-weight=\"normal\" color=\"#B9BAB9B8\" placement=\"above\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 236 ) );
	object.setDefaultY( MxNumberTenths( 236 ) );
	object.setRelativeX( MxNumberTenths( 236 ) );
	object.setRelativeY( MxNumberTenths( 236 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" number=\"1\" relative-y=\"236\" font-family=\"DEF\" font-weight=\"bold\" color=\"#BCBBBA\" placement=\"below\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 236.1 ) );
	object.setDefaultY( MxNumberTenths( 236.1 ) );
	object.setRelativeX( MxNumberTenths( 236.1 ) );
	object.setRelativeY( MxNumberTenths( 236.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" number=\"1\" relative-y=\"236.1\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#BDBEBDBC\" placement=\"above\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 236.2 ) );
	object.setDefaultY( MxNumberTenths( 236.2 ) );
	object.setRelativeX( MxNumberTenths( 236.2 ) );
	object.setRelativeY( MxNumberTenths( 236.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" default-x=\"236.2\" relative-x=\"236.2\" font-family=\"ABC\" color=\"#C0BFBE\" placement=\"below\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 236.3 ) );
	object.setDefaultY( MxNumberTenths( 236.3 ) );
	object.setRelativeX( MxNumberTenths( 236.3 ) );
	object.setRelativeY( MxNumberTenths( 236.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" default-x=\"236.3\" relative-x=\"236.3\" font-family=\"DEF\" color=\"#C1C2C1C0\" placement=\"above\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 236.4 ) );
	object.setDefaultY( MxNumberTenths( 236.4 ) );
	object.setRelativeX( MxNumberTenths( 236.4 ) );
	object.setRelativeY( MxNumberTenths( 236.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-x=\"236.4\" default-y=\"236.4\" relative-x=\"236.4\" font-family=\"XYZ\" font-style=\"italic\" color=\"#C4C3C2\" placement=\"below\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 236.5 ) );
	object.setDefaultY( MxNumberTenths( 236.5 ) );
	object.setRelativeX( MxNumberTenths( 236.5 ) );
	object.setRelativeY( MxNumberTenths( 236.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" number=\"1\" default-y=\"236.5\" relative-x=\"236.5\" font-family=\"ABC\" font-style=\"normal\" placement=\"above\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 236.6 ) );
	object.setDefaultY( MxNumberTenths( 236.6 ) );
	object.setRelativeX( MxNumberTenths( 236.6 ) );
	object.setRelativeY( MxNumberTenths( 236.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" default-y=\"236.6\" relative-x=\"236.6\" font-family=\"DEF\" font-style=\"italic\" placement=\"below\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 236.7 ) );
	object.setDefaultY( MxNumberTenths( 236.7 ) );
	object.setRelativeX( MxNumberTenths( 236.7 ) );
	object.setRelativeY( MxNumberTenths( 236.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" default-y=\"236.7\" font-style=\"normal\" placement=\"above\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 236.8 ) );
	object.setDefaultY( MxNumberTenths( 236.8 ) );
	object.setRelativeX( MxNumberTenths( 236.8 ) );
	object.setRelativeY( MxNumberTenths( 236.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" number=\"1\" default-x=\"236.8\" relative-y=\"236.8\" font-style=\"italic\" font-size=\"1.1\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 236.9 ) );
	object.setDefaultY( MxNumberTenths( 236.9 ) );
	object.setRelativeX( MxNumberTenths( 236.9 ) );
	object.setRelativeY( MxNumberTenths( 236.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-x=\"236.9\" relative-y=\"236.9\" font-style=\"normal\" font-size=\"large\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 237 ) );
	object.setDefaultY( MxNumberTenths( 237 ) );
	object.setRelativeX( MxNumberTenths( 237 ) );
	object.setRelativeY( MxNumberTenths( 237 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" default-x=\"237\" relative-y=\"237\" font-style=\"italic\" font-size=\"1.1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 237.1 ) );
	object.setDefaultY( MxNumberTenths( 237.1 ) );
	object.setRelativeX( MxNumberTenths( 237.1 ) );
	object.setRelativeY( MxNumberTenths( 237.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" relative-y=\"237.1\" font-style=\"normal\" font-size=\"large\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 237.2 ) );
	object.setDefaultY( MxNumberTenths( 237.2 ) );
	object.setRelativeX( MxNumberTenths( 237.2 ) );
	object.setRelativeY( MxNumberTenths( 237.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-y=\"237.2\" relative-x=\"237.2\" relative-y=\"237.2\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 237.3 ) );
	object.setDefaultY( MxNumberTenths( 237.3 ) );
	object.setRelativeX( MxNumberTenths( 237.3 ) );
	object.setRelativeY( MxNumberTenths( 237.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" number=\"1\" default-y=\"237.3\" relative-x=\"237.3\" relative-y=\"237.3\" font-size=\"large\" font-weight=\"normal\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 237.4 ) );
	object.setDefaultY( MxNumberTenths( 237.4 ) );
	object.setRelativeX( MxNumberTenths( 237.4 ) );
	object.setRelativeY( MxNumberTenths( 237.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"237.4\" default-y=\"237.4\" relative-x=\"237.4\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 237.5 ) );
	object.setDefaultY( MxNumberTenths( 237.5 ) );
	object.setRelativeX( MxNumberTenths( 237.5 ) );
	object.setRelativeY( MxNumberTenths( 237.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" default-x=\"237.5\" default-y=\"237.5\" relative-x=\"237.5\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
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
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 237.6 ) );
	object.setDefaultY( MxNumberTenths( 237.6 ) );
	object.setRelativeX( MxNumberTenths( 237.6 ) );
	object.setRelativeY( MxNumberTenths( 237.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" number=\"1\" default-x=\"237.6\" relative-x=\"237.6\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" color=\"#DCDBDA\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 237.7 ) );
	object.setDefaultY( MxNumberTenths( 237.7 ) );
	object.setRelativeX( MxNumberTenths( 237.7 ) );
	object.setRelativeY( MxNumberTenths( 237.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" number=\"1\" font-family=\"ABC\" font-weight=\"normal\" color=\"#DDDEDDDC\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 237.8 ) );
	object.setDefaultY( MxNumberTenths( 237.8 ) );
	object.setRelativeX( MxNumberTenths( 237.8 ) );
	object.setRelativeY( MxNumberTenths( 237.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" font-family=\"DEF\" font-weight=\"bold\" color=\"#E0DFDE\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 237.9 ) );
	object.setDefaultY( MxNumberTenths( 237.9 ) );
	object.setRelativeX( MxNumberTenths( 237.9 ) );
	object.setRelativeY( MxNumberTenths( 237.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#E1E2E1E0\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 238 ) );
	object.setDefaultY( MxNumberTenths( 238 ) );
	object.setRelativeX( MxNumberTenths( 238 ) );
	object.setRelativeY( MxNumberTenths( 238 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" number=\"1\" default-x=\"238\" default-y=\"238\" relative-y=\"238\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" color=\"#E4E3E2\" placement=\"below\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
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
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 238.1 ) );
	object.setDefaultY( MxNumberTenths( 238.1 ) );
	object.setRelativeX( MxNumberTenths( 238.1 ) );
	object.setRelativeY( MxNumberTenths( 238.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" number=\"1\" default-x=\"238.1\" default-y=\"238.1\" relative-y=\"238.1\" font-style=\"normal\" font-weight=\"normal\" color=\"#E5E6E5E4\" placement=\"above\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 238.2 ) );
	object.setDefaultY( MxNumberTenths( 238.2 ) );
	object.setRelativeX( MxNumberTenths( 238.2 ) );
	object.setRelativeY( MxNumberTenths( 238.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" default-x=\"238.2\" default-y=\"238.2\" relative-x=\"238.2\" relative-y=\"238.2\" font-style=\"italic\" color=\"#E8E7E6\" placement=\"below\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 238.3 ) );
	object.setDefaultY( MxNumberTenths( 238.3 ) );
	object.setRelativeX( MxNumberTenths( 238.3 ) );
	object.setRelativeY( MxNumberTenths( 238.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" default-y=\"238.3\" relative-x=\"238.3\" relative-y=\"238.3\" font-style=\"normal\" color=\"#E9EAE9E8\" placement=\"above\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 238.4 ) );
	object.setDefaultY( MxNumberTenths( 238.4 ) );
	object.setRelativeX( MxNumberTenths( 238.4 ) );
	object.setRelativeY( MxNumberTenths( 238.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" relative-x=\"238.4\" relative-y=\"238.4\" font-style=\"italic\" color=\"#ECEBEA\" placement=\"below\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 238.5 ) );
	object.setDefaultY( MxNumberTenths( 238.5 ) );
	object.setRelativeX( MxNumberTenths( 238.5 ) );
	object.setRelativeY( MxNumberTenths( 238.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" number=\"1\" relative-x=\"238.5\" relative-y=\"238.5\" font-style=\"normal\" color=\"#EDEEEDEC\" placement=\"above\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 238.6 ) );
	object.setDefaultY( MxNumberTenths( 238.6 ) );
	object.setRelativeX( MxNumberTenths( 238.6 ) );
	object.setRelativeY( MxNumberTenths( 238.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" default-x=\"238.6\" relative-x=\"238.6\" font-style=\"italic\" font-size=\"1.1\" color=\"#F0EFEE\" placement=\"below\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 238.7 ) );
	object.setDefaultY( MxNumberTenths( 238.7 ) );
	object.setRelativeX( MxNumberTenths( 238.7 ) );
	object.setRelativeY( MxNumberTenths( 238.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" default-x=\"238.7\" font-style=\"normal\" font-size=\"large\" placement=\"above\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 238.8 ) );
	object.setDefaultY( MxNumberTenths( 238.8 ) );
	object.setRelativeX( MxNumberTenths( 238.8 ) );
	object.setRelativeY( MxNumberTenths( 238.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" number=\"1\" default-x=\"238.8\" default-y=\"238.8\" font-family=\"XYZ\" font-size=\"1.1\" placement=\"below\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 238.9 ) );
	object.setDefaultY( MxNumberTenths( 238.9 ) );
	object.setRelativeX( MxNumberTenths( 238.9 ) );
	object.setRelativeY( MxNumberTenths( 238.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-y=\"238.9\" font-family=\"ABC\" font-size=\"large\" placement=\"above\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 239 ) );
	object.setDefaultY( MxNumberTenths( 239 ) );
	object.setRelativeX( MxNumberTenths( 239 ) );
	object.setRelativeY( MxNumberTenths( 239 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" default-y=\"239\" font-family=\"DEF\" font-size=\"1.1\" placement=\"below\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 239.1 ) );
	object.setDefaultY( MxNumberTenths( 239.1 ) );
	object.setRelativeX( MxNumberTenths( 239.1 ) );
	object.setRelativeY( MxNumberTenths( 239.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" default-y=\"239.1\" font-family=\"XYZ\" font-size=\"large\" placement=\"above\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 239.2 ) );
	object.setDefaultY( MxNumberTenths( 239.2 ) );
	object.setRelativeX( MxNumberTenths( 239.2 ) );
	object.setRelativeY( MxNumberTenths( 239.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-x=\"239.2\" relative-x=\"239.2\" relative-y=\"239.2\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 239.3 ) );
	object.setDefaultY( MxNumberTenths( 239.3 ) );
	object.setRelativeX( MxNumberTenths( 239.3 ) );
	object.setRelativeY( MxNumberTenths( 239.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" number=\"1\" default-x=\"239.3\" relative-x=\"239.3\" relative-y=\"239.3\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 239.4 ) );
	object.setDefaultY( MxNumberTenths( 239.4 ) );
	object.setRelativeX( MxNumberTenths( 239.4 ) );
	object.setRelativeY( MxNumberTenths( 239.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"239.4\" relative-x=\"239.4\" relative-y=\"239.4\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 239.5 ) );
	object.setDefaultY( MxNumberTenths( 239.5 ) );
	object.setRelativeX( MxNumberTenths( 239.5 ) );
	object.setRelativeY( MxNumberTenths( 239.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" relative-x=\"239.5\" relative-y=\"239.5\" font-weight=\"normal\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 239.6 ) );
	object.setDefaultY( MxNumberTenths( 239.6 ) );
	object.setRelativeX( MxNumberTenths( 239.6 ) );
	object.setRelativeY( MxNumberTenths( 239.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#040302" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" number=\"1\" default-y=\"239.6\" relative-x=\"239.6\" relative-y=\"239.6\" font-style=\"italic\" font-weight=\"bold\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 239.7 ) );
	object.setDefaultY( MxNumberTenths( 239.7 ) );
	object.setRelativeX( MxNumberTenths( 239.7 ) );
	object.setRelativeY( MxNumberTenths( 239.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-y=\"239.7\" relative-y=\"239.7\" font-style=\"normal\" font-weight=\"normal\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 239.8 ) );
	object.setDefaultY( MxNumberTenths( 239.8 ) );
	object.setRelativeX( MxNumberTenths( 239.8 ) );
	object.setRelativeY( MxNumberTenths( 239.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#080706" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" default-x=\"239.8\" default-y=\"239.8\" font-style=\"italic\" font-weight=\"bold\" color=\"#080706\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 239.9 ) );
	object.setDefaultY( MxNumberTenths( 239.9 ) );
	object.setRelativeX( MxNumberTenths( 239.9 ) );
	object.setRelativeY( MxNumberTenths( 239.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"239.9\" default-y=\"239.9\" font-style=\"normal\" font-weight=\"normal\" color=\"#090A0908\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 240 ) );
	object.setDefaultY( MxNumberTenths( 240 ) );
	object.setRelativeX( MxNumberTenths( 240 ) );
	object.setRelativeY( MxNumberTenths( 240 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" number=\"1\" default-x=\"240\" font-style=\"italic\" font-weight=\"bold\" color=\"#0C0B0A\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 240.1 ) );
	object.setDefaultY( MxNumberTenths( 240.1 ) );
	object.setRelativeX( MxNumberTenths( 240.1 ) );
	object.setRelativeY( MxNumberTenths( 240.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" number=\"1\" font-style=\"normal\" font-weight=\"normal\" color=\"#0D0E0D0C\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 240.2 ) );
	object.setDefaultY( MxNumberTenths( 240.2 ) );
	object.setRelativeX( MxNumberTenths( 240.2 ) );
	object.setRelativeY( MxNumberTenths( 240.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" relative-x=\"240.2\" font-family=\"DEF\" font-style=\"italic\" color=\"#100F0E\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 240.3 ) );
	object.setDefaultY( MxNumberTenths( 240.3 ) );
	object.setRelativeX( MxNumberTenths( 240.3 ) );
	object.setRelativeY( MxNumberTenths( 240.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" relative-x=\"240.3\" font-family=\"XYZ\" font-style=\"normal\" color=\"#11121110\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 240.4 ) );
	object.setDefaultY( MxNumberTenths( 240.4 ) );
	object.setRelativeX( MxNumberTenths( 240.4 ) );
	object.setRelativeY( MxNumberTenths( 240.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#141312" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-x=\"240.4\" default-y=\"240.4\" relative-x=\"240.4\" relative-y=\"240.4\" font-family=\"ABC\" font-size=\"1.1\" color=\"#141312\" placement=\"below\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 240.5 ) );
	object.setDefaultY( MxNumberTenths( 240.5 ) );
	object.setRelativeX( MxNumberTenths( 240.5 ) );
	object.setRelativeY( MxNumberTenths( 240.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" number=\"1\" default-x=\"240.5\" default-y=\"240.5\" relative-x=\"240.5\" relative-y=\"240.5\" font-family=\"DEF\" font-size=\"large\" color=\"#15161514\" placement=\"above\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 240.6 ) );
	object.setDefaultY( MxNumberTenths( 240.6 ) );
	object.setRelativeX( MxNumberTenths( 240.6 ) );
	object.setRelativeY( MxNumberTenths( 240.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" default-x=\"240.6\" default-y=\"240.6\" relative-x=\"240.6\" relative-y=\"240.6\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#181716\" placement=\"below\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 240.7 ) );
	object.setDefaultY( MxNumberTenths( 240.7 ) );
	object.setRelativeX( MxNumberTenths( 240.7 ) );
	object.setRelativeY( MxNumberTenths( 240.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" default-y=\"240.7\" relative-y=\"240.7\" font-family=\"ABC\" font-size=\"large\" color=\"#191A1918\" placement=\"above\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 240.8 ) );
	object.setDefaultY( MxNumberTenths( 240.8 ) );
	object.setRelativeX( MxNumberTenths( 240.8 ) );
	object.setRelativeY( MxNumberTenths( 240.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" number=\"1\" relative-y=\"240.8\" font-family=\"DEF\" font-size=\"1.1\" color=\"#1C1B1A\" placement=\"below\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 240.9 ) );
	object.setDefaultY( MxNumberTenths( 240.9 ) );
	object.setRelativeX( MxNumberTenths( 240.9 ) );
	object.setRelativeY( MxNumberTenths( 240.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" relative-y=\"240.9\" font-size=\"large\" placement=\"above\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 241 ) );
	object.setDefaultY( MxNumberTenths( 241 ) );
	object.setRelativeX( MxNumberTenths( 241 ) );
	object.setRelativeY( MxNumberTenths( 241 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" default-x=\"241\" font-size=\"1.1\" placement=\"below\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 241.1 ) );
	object.setDefaultY( MxNumberTenths( 241.1 ) );
	object.setRelativeX( MxNumberTenths( 241.1 ) );
	object.setRelativeY( MxNumberTenths( 241.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" default-x=\"241.1\" font-size=\"large\" placement=\"above\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 241.2 ) );
	object.setDefaultY( MxNumberTenths( 241.2 ) );
	object.setRelativeX( MxNumberTenths( 241.2 ) );
	object.setRelativeY( MxNumberTenths( 241.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#242322" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-x=\"241.2\" default-y=\"241.2\" relative-x=\"241.2\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" placement=\"below\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 241.3 ) );
	object.setDefaultY( MxNumberTenths( 241.3 ) );
	object.setRelativeX( MxNumberTenths( 241.3 ) );
	object.setRelativeY( MxNumberTenths( 241.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" number=\"1\" default-y=\"241.3\" relative-x=\"241.3\" font-style=\"normal\" font-weight=\"normal\" placement=\"above\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 241.4 ) );
	object.setDefaultY( MxNumberTenths( 241.4 ) );
	object.setRelativeX( MxNumberTenths( 241.4 ) );
	object.setRelativeY( MxNumberTenths( 241.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#282726" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" default-y=\"241.4\" relative-x=\"241.4\" font-style=\"italic\" font-weight=\"bold\" placement=\"below\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 241.5 ) );
	object.setDefaultY( MxNumberTenths( 241.5 ) );
	object.setRelativeX( MxNumberTenths( 241.5 ) );
	object.setRelativeY( MxNumberTenths( 241.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" default-y=\"241.5\" relative-x=\"241.5\" font-style=\"normal\" font-weight=\"normal\" placement=\"above\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 241.6 ) );
	object.setDefaultY( MxNumberTenths( 241.6 ) );
	object.setRelativeX( MxNumberTenths( 241.6 ) );
	object.setRelativeY( MxNumberTenths( 241.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" number=\"1\" default-x=\"241.6\" relative-x=\"241.6\" relative-y=\"241.6\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 241.7 ) );
	object.setDefaultY( MxNumberTenths( 241.7 ) );
	object.setRelativeX( MxNumberTenths( 241.7 ) );
	object.setRelativeY( MxNumberTenths( 241.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-x=\"241.7\" relative-y=\"241.7\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 241.8 ) );
	object.setDefaultY( MxNumberTenths( 241.8 ) );
	object.setRelativeX( MxNumberTenths( 241.8 ) );
	object.setRelativeY( MxNumberTenths( 241.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" default-x=\"241.8\" relative-y=\"241.8\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 241.9 ) );
	object.setDefaultY( MxNumberTenths( 241.9 ) );
	object.setRelativeX( MxNumberTenths( 241.9 ) );
	object.setRelativeY( MxNumberTenths( 241.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" relative-y=\"241.9\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 242 ) );
	object.setDefaultY( MxNumberTenths( 242 ) );
	object.setRelativeX( MxNumberTenths( 242 ) );
	object.setRelativeY( MxNumberTenths( 242 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" number=\"1\" default-y=\"242\" relative-y=\"242\" font-family=\"DEF\" font-weight=\"bold\" color=\"#343332\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 242.1 ) );
	object.setDefaultY( MxNumberTenths( 242.1 ) );
	object.setRelativeX( MxNumberTenths( 242.1 ) );
	object.setRelativeY( MxNumberTenths( 242.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" number=\"1\" default-y=\"242.1\" relative-y=\"242.1\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#35363534\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 242.2 ) );
	object.setDefaultY( MxNumberTenths( 242.2 ) );
	object.setRelativeX( MxNumberTenths( 242.2 ) );
	object.setRelativeY( MxNumberTenths( 242.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<booksmart type=\"start\" default-x=\"242.2\" default-y=\"242.2\" relative-x=\"242.2\" font-family=\"ABC\" font-size=\"1.1\" color=\"#383736\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 242.3 ) );
	object.setDefaultY( MxNumberTenths( 242.3 ) );
	object.setRelativeX( MxNumberTenths( 242.3 ) );
	object.setRelativeY( MxNumberTenths( 242.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<quiet type=\"start\" default-x=\"242.3\" default-y=\"242.3\" relative-x=\"242.3\" font-size=\"large\" color=\"#393A3938\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 242.4 ) );
	object.setDefaultY( MxNumberTenths( 242.4 ) );
	object.setRelativeX( MxNumberTenths( 242.4 ) );
	object.setRelativeY( MxNumberTenths( 242.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-x=\"242.4\" relative-x=\"242.4\" font-size=\"1.1\" color=\"#3C3B3A\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 242.5 ) );
	object.setDefaultY( MxNumberTenths( 242.5 ) );
	object.setRelativeX( MxNumberTenths( 242.5 ) );
	object.setRelativeY( MxNumberTenths( 242.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<bishop type=\"start\" number=\"1\" relative-x=\"242.5\" font-size=\"large\" color=\"#3D3E3D3C\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 242.6 ) );
	object.setDefaultY( MxNumberTenths( 242.6 ) );
	object.setRelativeX( MxNumberTenths( 242.6 ) );
	object.setRelativeY( MxNumberTenths( 242.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<charlie type=\"start\" relative-x=\"242.6\" font-size=\"1.1\" color=\"#403F3E\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 242.7 ) );
	object.setDefaultY( MxNumberTenths( 242.7 ) );
	object.setRelativeX( MxNumberTenths( 242.7 ) );
	object.setRelativeY( MxNumberTenths( 242.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<booksmart type=\"start\" font-size=\"large\" color=\"#41424140\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 242.8 ) );
	object.setDefaultY( MxNumberTenths( 242.8 ) );
	object.setRelativeX( MxNumberTenths( 242.8 ) );
	object.setRelativeY( MxNumberTenths( 242.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<quiet type=\"start\" number=\"1\" default-x=\"242.8\" default-y=\"242.8\" relative-y=\"242.8\" font-style=\"italic\" font-size=\"1.1\" color=\"#444342\" placement=\"below\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 242.9 ) );
	object.setDefaultY( MxNumberTenths( 242.9 ) );
	object.setRelativeX( MxNumberTenths( 242.9 ) );
	object.setRelativeY( MxNumberTenths( 242.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-x=\"242.9\" default-y=\"242.9\" relative-y=\"242.9\" font-style=\"normal\" font-size=\"large\" color=\"#45464544\" placement=\"above\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 243 ) );
	object.setDefaultY( MxNumberTenths( 243 ) );
	object.setRelativeX( MxNumberTenths( 243 ) );
	object.setRelativeY( MxNumberTenths( 243 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<bishop type=\"start\" default-x=\"243\" default-y=\"243\" relative-y=\"243\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#484746\" placement=\"below\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 243.1 ) );
	object.setDefaultY( MxNumberTenths( 243.1 ) );
	object.setRelativeX( MxNumberTenths( 243.1 ) );
	object.setRelativeY( MxNumberTenths( 243.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<charlie type=\"start\" default-y=\"243.1\" relative-y=\"243.1\" font-family=\"ABC\" font-style=\"normal\" placement=\"above\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
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
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 243.2 ) );
	object.setDefaultY( MxNumberTenths( 243.2 ) );
	object.setRelativeX( MxNumberTenths( 243.2 ) );
	object.setRelativeY( MxNumberTenths( 243.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4C4B4A" ) );
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

TEST( getIsTypeDefaultDefined, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberDefaultDefined, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = true;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementDefaultDefined, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	bool expected = false;
	bool actual = object.getIsPlacementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	MxEnumStartStop expected;
	MxEnumStartStop actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNumberDefaultValue, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	MxNumberNumberLevel expected( 1 );
	MxNumberNumberLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPlacementDefaultValue, MxCxSmpHammerOnPullOff )
{
	MxCxSmpHammerOnPullOff object;
	MxEnumAboveBelow expected;
	MxEnumAboveBelow actual = object.getPlacementDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


