/** *******************************************************
  * 
  * MxEsPrincipalVoiceTest.cpp
  * Created: 2014-12-05 20:57:53
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsPrincipalVoice.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	std::string expected = ( MxEnumStartStop(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	std::string expected = ( MxEnumPrincipalVoiceSymbol(  ) ).toString();
	std::string actual = object.getSymbol().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getHalign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	std::string expected = ( MxEnumValign(  ) ).toString();
	std::string actual = object.getValign().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "" ) );
	std::string expected;
	std::string actual;
	expected = "";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "A,B,C" ) ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "D,E,F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "WOOF" ) ) );
	expected = "WOOF";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "X,Y,Z" ) );
	std::string expected;
	std::string actual;
	expected = "X,Y,Z";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "A,B,C" ) ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "D,E,F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "WOOF" ) ) );
	expected = "WOOF";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "X,Y,Z" ) );
	std::string expected;
	std::string actual;
	expected = "X,Y,Z";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "A,B,C" ) ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	std::string expected = "MxEsPrincipalVoice";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	std::string expected = "principal-voice";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxEsPrincipalVoice )
{
	MxEnumStartStop value1( lexicon::enums::StartStop::stop );
	MxEnumStartStop value2( lexicon::enums::StartStop::start );
	CHECK( ( value1 != value2 ) )
	MxEsPrincipalVoice object;
	object.setType( value1 );
	MxEnumStartStop expected = value1;
	MxEnumStartStop actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setSymbol1, MxEsPrincipalVoice )
{
	MxEnumPrincipalVoiceSymbol value1( lexicon::enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol value2( lexicon::enums::PrincipalVoiceSymbol::plain );
	CHECK( ( value1 != value2 ) )
	MxEsPrincipalVoice object;
	object.setSymbol( value1 );
	MxEnumPrincipalVoiceSymbol expected = value1;
	MxEnumPrincipalVoiceSymbol actual = object.getSymbol();
	CHECK_EQUAL( expected, actual )
	object.setSymbol( value2 );
	expected = value2;
	actual = object.getSymbol();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX2, MxEsPrincipalVoice )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsPrincipalVoice object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY3, MxEsPrincipalVoice )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsPrincipalVoice object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX4, MxEsPrincipalVoice )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsPrincipalVoice object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY5, MxEsPrincipalVoice )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsPrincipalVoice object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily6, MxEsPrincipalVoice )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEsPrincipalVoice object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle7, MxEsPrincipalVoice )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEsPrincipalVoice object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize8, MxEsPrincipalVoice )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEsPrincipalVoice object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight9, MxEsPrincipalVoice )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEsPrincipalVoice object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor10, MxEsPrincipalVoice )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsPrincipalVoice object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setHalign11, MxEsPrincipalVoice )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxEsPrincipalVoice object;
	object.setHalign( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
	object.setHalign( value2 );
	expected = value2;
	actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
}
TEST( setValign12, MxEsPrincipalVoice )
{
	MxEnumValign value1( lexicon::enums::Valign::baseline );
	MxEnumValign value2( lexicon::enums::Valign::bottom );
	CHECK( ( value1 != value2 ) )
	MxEsPrincipalVoice object;
	object.setValign( value1 );
	MxEnumValign expected = value1;
	MxEnumValign actual = object.getValign();
	CHECK_EQUAL( expected, actual )
	object.setValign( value2 );
	expected = value2;
	actual = object.getValign();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsTypeRequired0, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSymbolRequired1, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = true;
	bool actual = object.getIsSymbolRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired2, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired3, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired4, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired5, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired6, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired7, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired8, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired9, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired10, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignRequired11, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsHalignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignRequired12, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsValignRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
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
TEST( getIsSymbolPresent1, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = true;
	bool actual = object.getIsSymbolPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsSymbolPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsSymbolPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXPresent2, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
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
TEST( getIsDefaultYPresent3, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
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
TEST( getIsRelativeXPresent4, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
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
TEST( getIsRelativeYPresent5, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
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
TEST( getIsFontFamilyPresent6, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
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
TEST( getIsFontStylePresent7, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
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
TEST( getIsFontSizePresent8, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
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
TEST( getIsFontWeightPresent9, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
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
TEST( getIsColorPresent10, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
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
TEST( getIsHalignPresent11, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsHalignPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsHalignPresent( true );
	expected = true;
	actual = object.getIsHalignPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsHalignPresent( false );
	expected = false;
	actual = object.getIsHalignPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignPresent12, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsValignPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsValignPresent( true );
	expected = true;
	actual = object.getIsValignPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsValignPresent( false );
	expected = false;
	actual = object.getIsValignPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsTypeDefaultDefined, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSymbolDefaultDefined, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsSymbolDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignDefaultDefined, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsHalignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignDefaultDefined, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsValignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	MxEnumStartStop expected;
	MxEnumStartStop actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSymbolDefaultValue, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	MxEnumPrincipalVoiceSymbol expected;
	MxEnumPrincipalVoiceSymbol actual = object.getSymbolDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getHalignDefaultValue, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getHalignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValignDefaultValue, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object;
	MxEnumValign expected;
	MxEnumValign actual = object.getValignDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 101.9 ) );
	object.setDefaultY( MxNumberTenths( 101.9 ) );
	object.setRelativeX( MxNumberTenths( 101.9 ) );
	object.setRelativeY( MxNumberTenths( 101.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"101.9\" default-y=\"101.9\" relative-x=\"101.9\" relative-y=\"101.9\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#E5E6E5E4\" halign=\"right\" valign=\"baseline\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 102 ) );
	object.setDefaultY( MxNumberTenths( 102 ) );
	object.setRelativeX( MxNumberTenths( 102 ) );
	object.setRelativeY( MxNumberTenths( 102 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"102\" default-y=\"102\" relative-x=\"102\" relative-y=\"102\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#E8E7E6\" halign=\"left\" valign=\"top\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 102.1 ) );
	object.setDefaultY( MxNumberTenths( 102.1 ) );
	object.setRelativeX( MxNumberTenths( 102.1 ) );
	object.setRelativeY( MxNumberTenths( 102.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"102.1\" default-y=\"102.1\" relative-x=\"102.1\" relative-y=\"102.1\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#E9EAE9E8\" halign=\"center\" valign=\"middle\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 102.2 ) );
	object.setDefaultY( MxNumberTenths( 102.2 ) );
	object.setRelativeX( MxNumberTenths( 102.2 ) );
	object.setRelativeY( MxNumberTenths( 102.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"102.2\" relative-x=\"102.2\" relative-y=\"102.2\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#ECEBEA\" halign=\"right\" valign=\"bottom\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 102.3 ) );
	object.setDefaultY( MxNumberTenths( 102.3 ) );
	object.setRelativeX( MxNumberTenths( 102.3 ) );
	object.setRelativeY( MxNumberTenths( 102.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" relative-x=\"102.3\" relative-y=\"102.3\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#EDEEEDEC\" halign=\"left\" valign=\"baseline\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 102.4 ) );
	object.setDefaultY( MxNumberTenths( 102.4 ) );
	object.setRelativeX( MxNumberTenths( 102.4 ) );
	object.setRelativeY( MxNumberTenths( 102.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" relative-y=\"102.4\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F0EFEE\" halign=\"center\" valign=\"top\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 102.5 ) );
	object.setDefaultY( MxNumberTenths( 102.5 ) );
	object.setRelativeX( MxNumberTenths( 102.5 ) );
	object.setRelativeY( MxNumberTenths( 102.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"102.5\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#F1F2F1F0\" halign=\"right\" valign=\"middle\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 102.6 ) );
	object.setDefaultY( MxNumberTenths( 102.6 ) );
	object.setRelativeX( MxNumberTenths( 102.6 ) );
	object.setRelativeY( MxNumberTenths( 102.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"102.6\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F4F3F2\" halign=\"left\" valign=\"bottom\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 102.7 ) );
	object.setDefaultY( MxNumberTenths( 102.7 ) );
	object.setRelativeX( MxNumberTenths( 102.7 ) );
	object.setRelativeY( MxNumberTenths( 102.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"102.7\" default-y=\"102.7\" font-size=\"large\" font-weight=\"normal\" color=\"#F5F6F5F4\" halign=\"center\" valign=\"baseline\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 102.8 ) );
	object.setDefaultY( MxNumberTenths( 102.8 ) );
	object.setRelativeX( MxNumberTenths( 102.8 ) );
	object.setRelativeY( MxNumberTenths( 102.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"102.8\" font-weight=\"bold\" color=\"#F8F7F6\" halign=\"right\" valign=\"top\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 102.9 ) );
	object.setDefaultY( MxNumberTenths( 102.9 ) );
	object.setRelativeX( MxNumberTenths( 102.9 ) );
	object.setRelativeY( MxNumberTenths( 102.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"102.9\" relative-x=\"102.9\" color=\"#F9FAF9F8\" halign=\"left\" valign=\"middle\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 103 ) );
	object.setDefaultY( MxNumberTenths( 103 ) );
	object.setRelativeX( MxNumberTenths( 103 ) );
	object.setRelativeY( MxNumberTenths( 103 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"103\" relative-x=\"103\" halign=\"center\" valign=\"bottom\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 103.1 ) );
	object.setDefaultY( MxNumberTenths( 103.1 ) );
	object.setRelativeX( MxNumberTenths( 103.1 ) );
	object.setRelativeY( MxNumberTenths( 103.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"103.1\" relative-x=\"103.1\" relative-y=\"103.1\" valign=\"baseline\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 103.2 ) );
	object.setDefaultY( MxNumberTenths( 103.2 ) );
	object.setRelativeX( MxNumberTenths( 103.2 ) );
	object.setRelativeY( MxNumberTenths( 103.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"103.2\" relative-x=\"103.2\" relative-y=\"103.2\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 103.3 ) );
	object.setDefaultY( MxNumberTenths( 103.3 ) );
	object.setRelativeX( MxNumberTenths( 103.3 ) );
	object.setRelativeY( MxNumberTenths( 103.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"103.3\" relative-x=\"103.3\" relative-y=\"103.3\" font-family=\"XYZ\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 103.4 ) );
	object.setDefaultY( MxNumberTenths( 103.4 ) );
	object.setRelativeX( MxNumberTenths( 103.4 ) );
	object.setRelativeY( MxNumberTenths( 103.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#040302" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" relative-y=\"103.4\" font-family=\"ABC\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 103.5 ) );
	object.setDefaultY( MxNumberTenths( 103.5 ) );
	object.setRelativeX( MxNumberTenths( 103.5 ) );
	object.setRelativeY( MxNumberTenths( 103.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"103.5\" relative-y=\"103.5\" font-family=\"DEF\" font-style=\"normal\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 103.6 ) );
	object.setDefaultY( MxNumberTenths( 103.6 ) );
	object.setRelativeX( MxNumberTenths( 103.6 ) );
	object.setRelativeY( MxNumberTenths( 103.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#080706" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"103.6\" relative-y=\"103.6\" font-family=\"XYZ\" font-style=\"italic\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 103.7 ) );
	object.setDefaultY( MxNumberTenths( 103.7 ) );
	object.setRelativeX( MxNumberTenths( 103.7 ) );
	object.setRelativeY( MxNumberTenths( 103.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"103.7\" default-y=\"103.7\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 103.8 ) );
	object.setDefaultY( MxNumberTenths( 103.8 ) );
	object.setRelativeX( MxNumberTenths( 103.8 ) );
	object.setRelativeY( MxNumberTenths( 103.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"103.8\" default-y=\"103.8\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 103.9 ) );
	object.setDefaultY( MxNumberTenths( 103.9 ) );
	object.setRelativeX( MxNumberTenths( 103.9 ) );
	object.setRelativeY( MxNumberTenths( 103.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"103.9\" relative-x=\"103.9\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 104 ) );
	object.setDefaultY( MxNumberTenths( 104 ) );
	object.setRelativeX( MxNumberTenths( 104 ) );
	object.setRelativeY( MxNumberTenths( 104 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" relative-x=\"104\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 104.1 ) );
	object.setDefaultY( MxNumberTenths( 104.1 ) );
	object.setRelativeX( MxNumberTenths( 104.1 ) );
	object.setRelativeY( MxNumberTenths( 104.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" relative-x=\"104.1\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#11121110\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 104.2 ) );
	object.setDefaultY( MxNumberTenths( 104.2 ) );
	object.setRelativeX( MxNumberTenths( 104.2 ) );
	object.setRelativeY( MxNumberTenths( 104.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#141312" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" relative-x=\"104.2\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#141312\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 104.3 ) );
	object.setDefaultY( MxNumberTenths( 104.3 ) );
	object.setRelativeX( MxNumberTenths( 104.3 ) );
	object.setRelativeY( MxNumberTenths( 104.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"104.3\" default-y=\"104.3\" relative-x=\"104.3\" relative-y=\"104.3\" font-size=\"large\" font-weight=\"normal\" color=\"#15161514\" halign=\"right\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 104.4 ) );
	object.setDefaultY( MxNumberTenths( 104.4 ) );
	object.setRelativeX( MxNumberTenths( 104.4 ) );
	object.setRelativeY( MxNumberTenths( 104.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"104.4\" default-y=\"104.4\" relative-y=\"104.4\" font-size=\"1.1\" font-weight=\"bold\" color=\"#181716\" halign=\"left\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 104.5 ) );
	object.setDefaultY( MxNumberTenths( 104.5 ) );
	object.setRelativeX( MxNumberTenths( 104.5 ) );
	object.setRelativeY( MxNumberTenths( 104.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"104.5\" default-y=\"104.5\" relative-y=\"104.5\" font-size=\"large\" font-weight=\"normal\" color=\"#191A1918\" halign=\"center\" valign=\"middle\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 104.6 ) );
	object.setDefaultY( MxNumberTenths( 104.6 ) );
	object.setRelativeX( MxNumberTenths( 104.6 ) );
	object.setRelativeY( MxNumberTenths( 104.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"104.6\" relative-y=\"104.6\" font-weight=\"bold\" color=\"#1C1B1A\" halign=\"right\" valign=\"bottom\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 104.7 ) );
	object.setDefaultY( MxNumberTenths( 104.7 ) );
	object.setRelativeX( MxNumberTenths( 104.7 ) );
	object.setRelativeY( MxNumberTenths( 104.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" relative-y=\"104.7\" font-family=\"DEF\" font-weight=\"normal\" color=\"#1D1E1D1C\" halign=\"left\" valign=\"baseline\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 104.8 ) );
	object.setDefaultY( MxNumberTenths( 104.8 ) );
	object.setRelativeX( MxNumberTenths( 104.8 ) );
	object.setRelativeY( MxNumberTenths( 104.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" relative-y=\"104.8\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#201F1E\" halign=\"center\" valign=\"top\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 104.9 ) );
	object.setDefaultY( MxNumberTenths( 104.9 ) );
	object.setRelativeX( MxNumberTenths( 104.9 ) );
	object.setRelativeY( MxNumberTenths( 104.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"104.9\" relative-x=\"104.9\" font-family=\"ABC\" color=\"#21222120\" halign=\"right\" valign=\"middle\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 105 ) );
	object.setDefaultY( MxNumberTenths( 105 ) );
	object.setRelativeX( MxNumberTenths( 105 ) );
	object.setRelativeY( MxNumberTenths( 105 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#242322" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"105\" relative-x=\"105\" font-family=\"DEF\" color=\"#242322\" halign=\"left\" valign=\"bottom\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 105.1 ) );
	object.setDefaultY( MxNumberTenths( 105.1 ) );
	object.setRelativeX( MxNumberTenths( 105.1 ) );
	object.setRelativeY( MxNumberTenths( 105.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"105.1\" default-y=\"105.1\" relative-x=\"105.1\" font-family=\"XYZ\" font-style=\"normal\" color=\"#25262524\" halign=\"center\" valign=\"baseline\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 105.2 ) );
	object.setDefaultY( MxNumberTenths( 105.2 ) );
	object.setRelativeX( MxNumberTenths( 105.2 ) );
	object.setRelativeY( MxNumberTenths( 105.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#282726" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"105.2\" relative-x=\"105.2\" font-family=\"ABC\" font-style=\"italic\" halign=\"right\" valign=\"top\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 105.3 ) );
	object.setDefaultY( MxNumberTenths( 105.3 ) );
	object.setRelativeX( MxNumberTenths( 105.3 ) );
	object.setRelativeY( MxNumberTenths( 105.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"105.3\" relative-x=\"105.3\" font-family=\"DEF\" font-style=\"normal\" halign=\"left\" valign=\"middle\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 105.4 ) );
	object.setDefaultY( MxNumberTenths( 105.4 ) );
	object.setRelativeX( MxNumberTenths( 105.4 ) );
	object.setRelativeY( MxNumberTenths( 105.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"105.4\" font-style=\"italic\" halign=\"center\" valign=\"bottom\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 105.5 ) );
	object.setDefaultY( MxNumberTenths( 105.5 ) );
	object.setRelativeX( MxNumberTenths( 105.5 ) );
	object.setRelativeY( MxNumberTenths( 105.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"105.5\" relative-y=\"105.5\" font-style=\"normal\" font-size=\"large\" valign=\"baseline\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 105.6 ) );
	object.setDefaultY( MxNumberTenths( 105.6 ) );
	object.setRelativeX( MxNumberTenths( 105.6 ) );
	object.setRelativeY( MxNumberTenths( 105.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"105.6\" relative-y=\"105.6\" font-style=\"italic\" font-size=\"1.1\" valign=\"top\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 105.7 ) );
	object.setDefaultY( MxNumberTenths( 105.7 ) );
	object.setRelativeX( MxNumberTenths( 105.7 ) );
	object.setRelativeY( MxNumberTenths( 105.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"105.7\" relative-y=\"105.7\" font-style=\"normal\" font-size=\"large\" valign=\"middle\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 105.8 ) );
	object.setDefaultY( MxNumberTenths( 105.8 ) );
	object.setRelativeX( MxNumberTenths( 105.8 ) );
	object.setRelativeY( MxNumberTenths( 105.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" relative-y=\"105.8\" font-style=\"italic\" font-size=\"1.1\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 105.9 ) );
	object.setDefaultY( MxNumberTenths( 105.9 ) );
	object.setRelativeX( MxNumberTenths( 105.9 ) );
	object.setRelativeY( MxNumberTenths( 105.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"105.9\" relative-x=\"105.9\" relative-y=\"105.9\" font-size=\"large\" font-weight=\"normal\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 106 ) );
	object.setDefaultY( MxNumberTenths( 106 ) );
	object.setRelativeX( MxNumberTenths( 106 ) );
	object.setRelativeY( MxNumberTenths( 106 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"106\" relative-x=\"106\" relative-y=\"106\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 106.1 ) );
	object.setDefaultY( MxNumberTenths( 106.1 ) );
	object.setRelativeX( MxNumberTenths( 106.1 ) );
	object.setRelativeY( MxNumberTenths( 106.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"106.1\" default-y=\"106.1\" relative-x=\"106.1\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 106.2 ) );
	object.setDefaultY( MxNumberTenths( 106.2 ) );
	object.setRelativeX( MxNumberTenths( 106.2 ) );
	object.setRelativeY( MxNumberTenths( 106.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"106.2\" default-y=\"106.2\" relative-x=\"106.2\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 106.3 ) );
	object.setDefaultY( MxNumberTenths( 106.3 ) );
	object.setRelativeX( MxNumberTenths( 106.3 ) );
	object.setRelativeY( MxNumberTenths( 106.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"106.3\" relative-x=\"106.3\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" color=\"#3D3E3D3C\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 106.4 ) );
	object.setDefaultY( MxNumberTenths( 106.4 ) );
	object.setRelativeX( MxNumberTenths( 106.4 ) );
	object.setRelativeY( MxNumberTenths( 106.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" font-family=\"ABC\" font-weight=\"bold\" color=\"#403F3E\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 106.5 ) );
	object.setDefaultY( MxNumberTenths( 106.5 ) );
	object.setRelativeX( MxNumberTenths( 106.5 ) );
	object.setRelativeY( MxNumberTenths( 106.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" font-family=\"DEF\" font-weight=\"normal\" color=\"#41424140\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 106.6 ) );
	object.setDefaultY( MxNumberTenths( 106.6 ) );
	object.setRelativeX( MxNumberTenths( 106.6 ) );
	object.setRelativeY( MxNumberTenths( 106.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#444342\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 106.7 ) );
	object.setDefaultY( MxNumberTenths( 106.7 ) );
	object.setRelativeX( MxNumberTenths( 106.7 ) );
	object.setRelativeY( MxNumberTenths( 106.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"106.7\" default-y=\"106.7\" relative-y=\"106.7\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" color=\"#45464544\" halign=\"right\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 106.8 ) );
	object.setDefaultY( MxNumberTenths( 106.8 ) );
	object.setRelativeX( MxNumberTenths( 106.8 ) );
	object.setRelativeY( MxNumberTenths( 106.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"106.8\" default-y=\"106.8\" relative-y=\"106.8\" font-style=\"italic\" font-weight=\"bold\" color=\"#484746\" halign=\"left\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 106.9 ) );
	object.setDefaultY( MxNumberTenths( 106.9 ) );
	object.setRelativeX( MxNumberTenths( 106.9 ) );
	object.setRelativeY( MxNumberTenths( 106.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"106.9\" default-y=\"106.9\" relative-x=\"106.9\" relative-y=\"106.9\" font-style=\"normal\" color=\"#494A4948\" halign=\"center\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 107 ) );
	object.setDefaultY( MxNumberTenths( 107 ) );
	object.setRelativeX( MxNumberTenths( 107 ) );
	object.setRelativeY( MxNumberTenths( 107 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"107\" relative-x=\"107\" relative-y=\"107\" font-style=\"italic\" color=\"#4C4B4A\" halign=\"right\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 107.1 ) );
	object.setDefaultY( MxNumberTenths( 107.1 ) );
	object.setRelativeX( MxNumberTenths( 107.1 ) );
	object.setRelativeY( MxNumberTenths( 107.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" relative-x=\"107.1\" relative-y=\"107.1\" font-style=\"normal\" color=\"#4D4E4D4C\" halign=\"left\" valign=\"baseline\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 107.2 ) );
	object.setDefaultY( MxNumberTenths( 107.2 ) );
	object.setRelativeX( MxNumberTenths( 107.2 ) );
	object.setRelativeY( MxNumberTenths( 107.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" relative-x=\"107.2\" relative-y=\"107.2\" font-style=\"italic\" color=\"#504F4E\" halign=\"center\" valign=\"top\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 107.3 ) );
	object.setDefaultY( MxNumberTenths( 107.3 ) );
	object.setRelativeX( MxNumberTenths( 107.3 ) );
	object.setRelativeY( MxNumberTenths( 107.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"107.3\" relative-x=\"107.3\" font-style=\"normal\" font-size=\"large\" color=\"#51525150\" halign=\"right\" valign=\"middle\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 107.4 ) );
	object.setDefaultY( MxNumberTenths( 107.4 ) );
	object.setRelativeX( MxNumberTenths( 107.4 ) );
	object.setRelativeY( MxNumberTenths( 107.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#545352" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"107.4\" font-style=\"italic\" font-size=\"1.1\" halign=\"left\" valign=\"bottom\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 107.5 ) );
	object.setDefaultY( MxNumberTenths( 107.5 ) );
	object.setRelativeX( MxNumberTenths( 107.5 ) );
	object.setRelativeY( MxNumberTenths( 107.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"107.5\" default-y=\"107.5\" font-family=\"XYZ\" font-size=\"large\" halign=\"center\" valign=\"baseline\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 107.6 ) );
	object.setDefaultY( MxNumberTenths( 107.6 ) );
	object.setRelativeX( MxNumberTenths( 107.6 ) );
	object.setRelativeY( MxNumberTenths( 107.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#585756" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"107.6\" font-family=\"ABC\" font-size=\"1.1\" halign=\"right\" valign=\"top\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 107.7 ) );
	object.setDefaultY( MxNumberTenths( 107.7 ) );
	object.setRelativeX( MxNumberTenths( 107.7 ) );
	object.setRelativeY( MxNumberTenths( 107.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"107.7\" font-family=\"DEF\" font-size=\"large\" halign=\"left\" valign=\"middle\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 107.8 ) );
	object.setDefaultY( MxNumberTenths( 107.8 ) );
	object.setRelativeX( MxNumberTenths( 107.8 ) );
	object.setRelativeY( MxNumberTenths( 107.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"107.8\" font-family=\"XYZ\" font-size=\"1.1\" halign=\"center\" valign=\"bottom\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 107.9 ) );
	object.setDefaultY( MxNumberTenths( 107.9 ) );
	object.setRelativeX( MxNumberTenths( 107.9 ) );
	object.setRelativeY( MxNumberTenths( 107.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"107.9\" relative-x=\"107.9\" relative-y=\"107.9\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" valign=\"baseline\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 108 ) );
	object.setDefaultY( MxNumberTenths( 108 ) );
	object.setRelativeX( MxNumberTenths( 108 ) );
	object.setRelativeY( MxNumberTenths( 108 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"108\" relative-x=\"108\" relative-y=\"108\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" valign=\"top\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 108.1 ) );
	object.setDefaultY( MxNumberTenths( 108.1 ) );
	object.setRelativeX( MxNumberTenths( 108.1 ) );
	object.setRelativeY( MxNumberTenths( 108.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"108.1\" relative-x=\"108.1\" relative-y=\"108.1\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" valign=\"middle\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 108.2 ) );
	object.setDefaultY( MxNumberTenths( 108.2 ) );
	object.setRelativeX( MxNumberTenths( 108.2 ) );
	object.setRelativeY( MxNumberTenths( 108.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#646362" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" relative-x=\"108.2\" relative-y=\"108.2\" font-weight=\"bold\" valign=\"bottom\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 108.3 ) );
	object.setDefaultY( MxNumberTenths( 108.3 ) );
	object.setRelativeX( MxNumberTenths( 108.3 ) );
	object.setRelativeY( MxNumberTenths( 108.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"108.3\" relative-x=\"108.3\" relative-y=\"108.3\" font-style=\"normal\" font-weight=\"normal\" valign=\"baseline\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 108.4 ) );
	object.setDefaultY( MxNumberTenths( 108.4 ) );
	object.setRelativeX( MxNumberTenths( 108.4 ) );
	object.setRelativeY( MxNumberTenths( 108.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#686766" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"108.4\" relative-y=\"108.4\" font-style=\"italic\" font-weight=\"bold\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 108.5 ) );
	object.setDefaultY( MxNumberTenths( 108.5 ) );
	object.setRelativeX( MxNumberTenths( 108.5 ) );
	object.setRelativeY( MxNumberTenths( 108.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"108.5\" default-y=\"108.5\" font-style=\"normal\" font-weight=\"normal\" color=\"#696A6968\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 108.6 ) );
	object.setDefaultY( MxNumberTenths( 108.6 ) );
	object.setRelativeX( MxNumberTenths( 108.6 ) );
	object.setRelativeY( MxNumberTenths( 108.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"108.6\" default-y=\"108.6\" font-style=\"italic\" font-weight=\"bold\" color=\"#6C6B6A\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 108.7 ) );
	object.setDefaultY( MxNumberTenths( 108.7 ) );
	object.setRelativeX( MxNumberTenths( 108.7 ) );
	object.setRelativeY( MxNumberTenths( 108.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"108.7\" font-style=\"normal\" font-weight=\"normal\" color=\"#6D6E6D6C\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 108.8 ) );
	object.setDefaultY( MxNumberTenths( 108.8 ) );
	object.setRelativeX( MxNumberTenths( 108.8 ) );
	object.setRelativeY( MxNumberTenths( 108.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" font-style=\"italic\" font-weight=\"bold\" color=\"#706F6E\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 108.9 ) );
	object.setDefaultY( MxNumberTenths( 108.9 ) );
	object.setRelativeX( MxNumberTenths( 108.9 ) );
	object.setRelativeY( MxNumberTenths( 108.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" relative-x=\"108.9\" font-family=\"DEF\" font-style=\"normal\" color=\"#71727170\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 109 ) );
	object.setDefaultY( MxNumberTenths( 109 ) );
	object.setRelativeX( MxNumberTenths( 109 ) );
	object.setRelativeY( MxNumberTenths( 109 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#747372" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" relative-x=\"109\" font-family=\"XYZ\" font-style=\"italic\" color=\"#747372\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 109.1 ) );
	object.setDefaultY( MxNumberTenths( 109.1 ) );
	object.setRelativeX( MxNumberTenths( 109.1 ) );
	object.setRelativeY( MxNumberTenths( 109.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"109.1\" default-y=\"109.1\" relative-x=\"109.1\" relative-y=\"109.1\" font-family=\"ABC\" font-size=\"large\" color=\"#75767574\" halign=\"right\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 109.2 ) );
	object.setDefaultY( MxNumberTenths( 109.2 ) );
	object.setRelativeX( MxNumberTenths( 109.2 ) );
	object.setRelativeY( MxNumberTenths( 109.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#787776" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"109.2\" default-y=\"109.2\" relative-x=\"109.2\" relative-y=\"109.2\" font-family=\"DEF\" font-size=\"1.1\" color=\"#787776\" halign=\"left\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 109.3 ) );
	object.setDefaultY( MxNumberTenths( 109.3 ) );
	object.setRelativeX( MxNumberTenths( 109.3 ) );
	object.setRelativeY( MxNumberTenths( 109.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"109.3\" default-y=\"109.3\" relative-x=\"109.3\" relative-y=\"109.3\" font-family=\"XYZ\" font-size=\"large\" color=\"#797A7978\" halign=\"center\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 109.4 ) );
	object.setDefaultY( MxNumberTenths( 109.4 ) );
	object.setRelativeX( MxNumberTenths( 109.4 ) );
	object.setRelativeY( MxNumberTenths( 109.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"109.4\" relative-y=\"109.4\" font-family=\"ABC\" font-size=\"1.1\" color=\"#7C7B7A\" halign=\"right\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 109.5 ) );
	object.setDefaultY( MxNumberTenths( 109.5 ) );
	object.setRelativeX( MxNumberTenths( 109.5 ) );
	object.setRelativeY( MxNumberTenths( 109.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" relative-y=\"109.5\" font-family=\"DEF\" font-size=\"large\" color=\"#7D7E7D7C\" halign=\"left\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 109.6 ) );
	object.setDefaultY( MxNumberTenths( 109.6 ) );
	object.setRelativeX( MxNumberTenths( 109.6 ) );
	object.setRelativeY( MxNumberTenths( 109.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" relative-y=\"109.6\" font-size=\"1.1\" halign=\"center\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 109.7 ) );
	object.setDefaultY( MxNumberTenths( 109.7 ) );
	object.setRelativeX( MxNumberTenths( 109.7 ) );
	object.setRelativeY( MxNumberTenths( 109.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"109.7\" font-size=\"large\" halign=\"right\" valign=\"middle\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 109.8 ) );
	object.setDefaultY( MxNumberTenths( 109.8 ) );
	object.setRelativeX( MxNumberTenths( 109.8 ) );
	object.setRelativeY( MxNumberTenths( 109.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"109.8\" font-size=\"1.1\" halign=\"left\" valign=\"bottom\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 109.9 ) );
	object.setDefaultY( MxNumberTenths( 109.9 ) );
	object.setRelativeX( MxNumberTenths( 109.9 ) );
	object.setRelativeY( MxNumberTenths( 109.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"109.9\" default-y=\"109.9\" relative-x=\"109.9\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" halign=\"center\" valign=\"baseline\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 110 ) );
	object.setDefaultY( MxNumberTenths( 110 ) );
	object.setRelativeX( MxNumberTenths( 110 ) );
	object.setRelativeY( MxNumberTenths( 110 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"110\" relative-x=\"110\" font-style=\"italic\" font-weight=\"bold\" halign=\"right\" valign=\"top\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 110.1 ) );
	object.setDefaultY( MxNumberTenths( 110.1 ) );
	object.setRelativeX( MxNumberTenths( 110.1 ) );
	object.setRelativeY( MxNumberTenths( 110.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"110.1\" relative-x=\"110.1\" font-style=\"normal\" font-weight=\"normal\" halign=\"left\" valign=\"middle\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 110.2 ) );
	object.setDefaultY( MxNumberTenths( 110.2 ) );
	object.setRelativeX( MxNumberTenths( 110.2 ) );
	object.setRelativeY( MxNumberTenths( 110.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"110.2\" relative-x=\"110.2\" font-style=\"italic\" font-weight=\"bold\" halign=\"center\" valign=\"bottom\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 110.3 ) );
	object.setDefaultY( MxNumberTenths( 110.3 ) );
	object.setRelativeX( MxNumberTenths( 110.3 ) );
	object.setRelativeY( MxNumberTenths( 110.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"110.3\" relative-x=\"110.3\" relative-y=\"110.3\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" valign=\"baseline\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 110.4 ) );
	object.setDefaultY( MxNumberTenths( 110.4 ) );
	object.setRelativeX( MxNumberTenths( 110.4 ) );
	object.setRelativeY( MxNumberTenths( 110.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"110.4\" relative-y=\"110.4\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" valign=\"top\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 110.5 ) );
	object.setDefaultY( MxNumberTenths( 110.5 ) );
	object.setRelativeX( MxNumberTenths( 110.5 ) );
	object.setRelativeY( MxNumberTenths( 110.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"110.5\" relative-y=\"110.5\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" valign=\"middle\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 110.6 ) );
	object.setDefaultY( MxNumberTenths( 110.6 ) );
	object.setRelativeX( MxNumberTenths( 110.6 ) );
	object.setRelativeY( MxNumberTenths( 110.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#949392" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" relative-y=\"110.6\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" valign=\"bottom\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 110.7 ) );
	object.setDefaultY( MxNumberTenths( 110.7 ) );
	object.setRelativeX( MxNumberTenths( 110.7 ) );
	object.setRelativeY( MxNumberTenths( 110.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"110.7\" relative-y=\"110.7\" font-family=\"DEF\" font-weight=\"normal\" color=\"#95969594\" valign=\"baseline\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 110.8 ) );
	object.setDefaultY( MxNumberTenths( 110.8 ) );
	object.setRelativeX( MxNumberTenths( 110.8 ) );
	object.setRelativeY( MxNumberTenths( 110.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#989796" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"110.8\" relative-y=\"110.8\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#989796\" valign=\"top\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 110.9 ) );
	object.setDefaultY( MxNumberTenths( 110.9 ) );
	object.setRelativeX( MxNumberTenths( 110.9 ) );
	object.setRelativeY( MxNumberTenths( 110.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"110.9\" default-y=\"110.9\" relative-x=\"110.9\" font-family=\"ABC\" font-size=\"large\" color=\"#999A9998\" valign=\"middle\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 111 ) );
	object.setDefaultY( MxNumberTenths( 111 ) );
	object.setRelativeX( MxNumberTenths( 111 ) );
	object.setRelativeY( MxNumberTenths( 111 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"111\" default-y=\"111\" relative-x=\"111\" font-size=\"1.1\" color=\"#9C9B9A\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 111.1 ) );
	object.setDefaultY( MxNumberTenths( 111.1 ) );
	object.setRelativeX( MxNumberTenths( 111.1 ) );
	object.setRelativeY( MxNumberTenths( 111.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"111.1\" relative-x=\"111.1\" font-size=\"large\" color=\"#9D9E9D9C\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 111.2 ) );
	object.setDefaultY( MxNumberTenths( 111.2 ) );
	object.setRelativeX( MxNumberTenths( 111.2 ) );
	object.setRelativeY( MxNumberTenths( 111.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" relative-x=\"111.2\" font-size=\"1.1\" color=\"#A09F9E\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 111.3 ) );
	object.setDefaultY( MxNumberTenths( 111.3 ) );
	object.setRelativeX( MxNumberTenths( 111.3 ) );
	object.setRelativeY( MxNumberTenths( 111.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" relative-x=\"111.3\" font-size=\"large\" color=\"#A1A2A1A0\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 111.4 ) );
	object.setDefaultY( MxNumberTenths( 111.4 ) );
	object.setRelativeX( MxNumberTenths( 111.4 ) );
	object.setRelativeY( MxNumberTenths( 111.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" font-size=\"1.1\" color=\"#A4A3A2\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 111.5 ) );
	object.setDefaultY( MxNumberTenths( 111.5 ) );
	object.setRelativeX( MxNumberTenths( 111.5 ) );
	object.setRelativeY( MxNumberTenths( 111.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"111.5\" default-y=\"111.5\" relative-y=\"111.5\" font-style=\"normal\" font-size=\"large\" color=\"#A5A6A5A4\" halign=\"right\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 111.6 ) );
	object.setDefaultY( MxNumberTenths( 111.6 ) );
	object.setRelativeX( MxNumberTenths( 111.6 ) );
	object.setRelativeY( MxNumberTenths( 111.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"111.6\" default-y=\"111.6\" relative-y=\"111.6\" font-style=\"italic\" font-size=\"1.1\" color=\"#A8A7A6\" halign=\"left\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 111.7 ) );
	object.setDefaultY( MxNumberTenths( 111.7 ) );
	object.setRelativeX( MxNumberTenths( 111.7 ) );
	object.setRelativeY( MxNumberTenths( 111.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-x=\"111.7\" default-y=\"111.7\" relative-y=\"111.7\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#A9AAA9A8\" halign=\"center\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 111.8 ) );
	object.setDefaultY( MxNumberTenths( 111.8 ) );
	object.setRelativeX( MxNumberTenths( 111.8 ) );
	object.setRelativeY( MxNumberTenths( 111.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\" default-y=\"111.8\" relative-y=\"111.8\" font-family=\"ABC\" font-style=\"italic\" halign=\"right\">D,E,F</principal-voice>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEsPrincipalVoice )
{
	MxEsPrincipalVoice object( XsString( "D,E,F" ) );
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 111.9 ) );
	object.setDefaultY( MxNumberTenths( 111.9 ) );
	object.setRelativeX( MxNumberTenths( 111.9 ) );
	object.setRelativeY( MxNumberTenths( 111.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<principal-voice type=\"start\" symbol=\"Hauptstimme\">D,E,F</principal-voice>";
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


