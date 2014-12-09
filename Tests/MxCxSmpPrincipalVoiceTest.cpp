/** *******************************************************
  * 
  * MxCxSmpPrincipalVoiceTest.cpp
  * Created: 2014-12-02 17:31:52
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpPrincipalVoice.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	std::string expected = ( MxEnumStartStop(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	std::string expected = ( MxEnumPrincipalVoiceSymbol(  ) ).toString();
	std::string actual = object.getSymbol().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getHalign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	std::string expected = ( MxEnumValign(  ) ).toString();
	std::string actual = object.getValign().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "" ) );
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
TEST( ctorValueAndElementName2, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
TEST( ctorValueAndElementName4, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "X,Y,Z" ) );
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
TEST( ctorValueAndElementName6, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
TEST( ctorValueAndElementName8, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "X,Y,Z" ) );
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

TEST( getClassName, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	std::string expected = "MxCxSmpPrincipalVoice";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	std::string expected = "principal-voice";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	std::string expected = "The principal-voice element represents principal and secondary voices in a score, either for analysis or for square bracket symbols that appear in a score. The symbol attribute indicates the type of symbol used at the start of the principal-voice. The content of the principal-voice element is used for analysis and may be any text value. When used for analysis separate from any printed score markings, the symbol attribute should be set to 'none'.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxSmpPrincipalVoice )
{
	MxEnumStartStop value1( lexicon::enums::StartStop::stop );
	MxEnumStartStop value2( lexicon::enums::StartStop::start );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPrincipalVoice object;
	object.setType( value1 );
	MxEnumStartStop expected = value1;
	MxEnumStartStop actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setSymbol1, MxCxSmpPrincipalVoice )
{
	MxEnumPrincipalVoiceSymbol value1( lexicon::enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol value2( lexicon::enums::PrincipalVoiceSymbol::plain );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPrincipalVoice object;
	object.setSymbol( value1 );
	MxEnumPrincipalVoiceSymbol expected = value1;
	MxEnumPrincipalVoiceSymbol actual = object.getSymbol();
	CHECK_EQUAL( expected, actual )
	object.setSymbol( value2 );
	expected = value2;
	actual = object.getSymbol();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX2, MxCxSmpPrincipalVoice )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPrincipalVoice object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY3, MxCxSmpPrincipalVoice )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPrincipalVoice object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX4, MxCxSmpPrincipalVoice )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPrincipalVoice object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY5, MxCxSmpPrincipalVoice )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPrincipalVoice object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily6, MxCxSmpPrincipalVoice )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPrincipalVoice object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle7, MxCxSmpPrincipalVoice )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPrincipalVoice object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize8, MxCxSmpPrincipalVoice )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPrincipalVoice object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight9, MxCxSmpPrincipalVoice )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPrincipalVoice object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor10, MxCxSmpPrincipalVoice )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPrincipalVoice object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setHalign11, MxCxSmpPrincipalVoice )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPrincipalVoice object;
	object.setHalign( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
	object.setHalign( value2 );
	expected = value2;
	actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
}
TEST( setValign12, MxCxSmpPrincipalVoice )
{
	MxEnumValign value1( lexicon::enums::Valign::baseline );
	MxEnumValign value2( lexicon::enums::Valign::bottom );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPrincipalVoice object;
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

TEST( getIsTypeRequired0, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSymbolRequired1, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = true;
	bool actual = object.getIsSymbolRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired2, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired3, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired4, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired5, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired6, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired7, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired8, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired9, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired10, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignRequired11, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsHalignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignRequired12, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsValignRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
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
TEST( getIsSymbolPresent1, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
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
TEST( getIsDefaultXPresent2, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
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
TEST( getIsDefaultYPresent3, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
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
TEST( getIsRelativeXPresent4, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
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
TEST( getIsRelativeYPresent5, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
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
TEST( getIsFontFamilyPresent6, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
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
TEST( getIsFontStylePresent7, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
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
TEST( getIsFontSizePresent8, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
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
TEST( getIsFontWeightPresent9, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
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
TEST( getIsColorPresent10, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
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
TEST( getIsHalignPresent11, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
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
TEST( getIsValignPresent12, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
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


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSymbol( MxEnumPrincipalVoiceSymbol( lexicon::enums::PrincipalVoiceSymbol::hauptstimme ) );
	object.setDefaultX( MxNumberTenths( 162.5 ) );
	object.setDefaultY( MxNumberTenths( 162.5 ) );
	object.setRelativeX( MxNumberTenths( 162.5 ) );
	object.setRelativeY( MxNumberTenths( 162.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
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
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" default-x=\"162.5\" default-y=\"162.5\" relative-x=\"162.5\" relative-y=\"162.5\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#E0DFDE\" halign=\"right\" valign=\"bottom\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 162.6 ) );
	object.setDefaultY( MxNumberTenths( 162.6 ) );
	object.setRelativeX( MxNumberTenths( 162.6 ) );
	object.setRelativeY( MxNumberTenths( 162.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" default-x=\"162.6\" default-y=\"162.6\" relative-x=\"162.6\" relative-y=\"162.6\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#E1E2E1E0\" halign=\"left\" valign=\"baseline\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 162.7 ) );
	object.setDefaultY( MxNumberTenths( 162.7 ) );
	object.setRelativeX( MxNumberTenths( 162.7 ) );
	object.setRelativeY( MxNumberTenths( 162.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" default-x=\"162.7\" default-y=\"162.7\" relative-x=\"162.7\" relative-y=\"162.7\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#E4E3E2\" halign=\"center\" valign=\"top\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 162.8 ) );
	object.setDefaultY( MxNumberTenths( 162.8 ) );
	object.setRelativeX( MxNumberTenths( 162.8 ) );
	object.setRelativeY( MxNumberTenths( 162.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" default-y=\"162.8\" relative-x=\"162.8\" relative-y=\"162.8\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#E5E6E5E4\" halign=\"right\" valign=\"middle\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 162.9 ) );
	object.setDefaultY( MxNumberTenths( 162.9 ) );
	object.setRelativeX( MxNumberTenths( 162.9 ) );
	object.setRelativeY( MxNumberTenths( 162.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" relative-x=\"162.9\" relative-y=\"162.9\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#E8E7E6\" halign=\"left\" valign=\"bottom\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 163 ) );
	object.setDefaultY( MxNumberTenths( 163 ) );
	object.setRelativeX( MxNumberTenths( 163 ) );
	object.setRelativeY( MxNumberTenths( 163 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" relative-y=\"163\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#E9EAE9E8\" halign=\"center\" valign=\"baseline\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 163.1 ) );
	object.setDefaultY( MxNumberTenths( 163.1 ) );
	object.setRelativeX( MxNumberTenths( 163.1 ) );
	object.setRelativeY( MxNumberTenths( 163.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" default-x=\"163.1\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#ECEBEA\" halign=\"right\" valign=\"top\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 163.2 ) );
	object.setDefaultY( MxNumberTenths( 163.2 ) );
	object.setRelativeX( MxNumberTenths( 163.2 ) );
	object.setRelativeY( MxNumberTenths( 163.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" default-x=\"163.2\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#EDEEEDEC\" halign=\"left\" valign=\"middle\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 163.3 ) );
	object.setDefaultY( MxNumberTenths( 163.3 ) );
	object.setRelativeX( MxNumberTenths( 163.3 ) );
	object.setRelativeY( MxNumberTenths( 163.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" default-x=\"163.3\" default-y=\"163.3\" font-size=\"large\" font-weight=\"normal\" color=\"#F0EFEE\" halign=\"center\" valign=\"bottom\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 163.4 ) );
	object.setDefaultY( MxNumberTenths( 163.4 ) );
	object.setRelativeX( MxNumberTenths( 163.4 ) );
	object.setRelativeY( MxNumberTenths( 163.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" default-y=\"163.4\" font-weight=\"bold\" color=\"#F1F2F1F0\" halign=\"right\" valign=\"baseline\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 163.5 ) );
	object.setDefaultY( MxNumberTenths( 163.5 ) );
	object.setRelativeX( MxNumberTenths( 163.5 ) );
	object.setRelativeY( MxNumberTenths( 163.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" default-y=\"163.5\" relative-x=\"163.5\" color=\"#F4F3F2\" halign=\"left\" valign=\"top\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 163.6 ) );
	object.setDefaultY( MxNumberTenths( 163.6 ) );
	object.setRelativeX( MxNumberTenths( 163.6 ) );
	object.setRelativeY( MxNumberTenths( 163.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" default-y=\"163.6\" relative-x=\"163.6\" halign=\"center\" valign=\"middle\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 163.7 ) );
	object.setDefaultY( MxNumberTenths( 163.7 ) );
	object.setRelativeX( MxNumberTenths( 163.7 ) );
	object.setRelativeY( MxNumberTenths( 163.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" default-x=\"163.7\" relative-x=\"163.7\" relative-y=\"163.7\" valign=\"bottom\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 163.8 ) );
	object.setDefaultY( MxNumberTenths( 163.8 ) );
	object.setRelativeX( MxNumberTenths( 163.8 ) );
	object.setRelativeY( MxNumberTenths( 163.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" default-x=\"163.8\" relative-x=\"163.8\" relative-y=\"163.8\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 163.9 ) );
	object.setDefaultY( MxNumberTenths( 163.9 ) );
	object.setRelativeX( MxNumberTenths( 163.9 ) );
	object.setRelativeY( MxNumberTenths( 163.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" default-x=\"163.9\" relative-x=\"163.9\" relative-y=\"163.9\" font-family=\"ABC\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 164 ) );
	object.setDefaultY( MxNumberTenths( 164 ) );
	object.setRelativeX( MxNumberTenths( 164 ) );
	object.setRelativeY( MxNumberTenths( 164 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" relative-y=\"164\" font-family=\"DEF\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 164.1 ) );
	object.setDefaultY( MxNumberTenths( 164.1 ) );
	object.setRelativeX( MxNumberTenths( 164.1 ) );
	object.setRelativeY( MxNumberTenths( 164.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" default-y=\"164.1\" relative-y=\"164.1\" font-family=\"XYZ\" font-style=\"normal\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 164.2 ) );
	object.setDefaultY( MxNumberTenths( 164.2 ) );
	object.setRelativeX( MxNumberTenths( 164.2 ) );
	object.setRelativeY( MxNumberTenths( 164.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" default-y=\"164.2\" relative-y=\"164.2\" font-family=\"ABC\" font-style=\"italic\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 164.3 ) );
	object.setDefaultY( MxNumberTenths( 164.3 ) );
	object.setRelativeX( MxNumberTenths( 164.3 ) );
	object.setRelativeY( MxNumberTenths( 164.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#040302" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" default-x=\"164.3\" default-y=\"164.3\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 164.4 ) );
	object.setDefaultY( MxNumberTenths( 164.4 ) );
	object.setRelativeX( MxNumberTenths( 164.4 ) );
	object.setRelativeY( MxNumberTenths( 164.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" default-x=\"164.4\" default-y=\"164.4\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 164.5 ) );
	object.setDefaultY( MxNumberTenths( 164.5 ) );
	object.setRelativeX( MxNumberTenths( 164.5 ) );
	object.setRelativeY( MxNumberTenths( 164.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#080706" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" default-x=\"164.5\" relative-x=\"164.5\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 164.6 ) );
	object.setDefaultY( MxNumberTenths( 164.6 ) );
	object.setRelativeX( MxNumberTenths( 164.6 ) );
	object.setRelativeY( MxNumberTenths( 164.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" relative-x=\"164.6\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 164.7 ) );
	object.setDefaultY( MxNumberTenths( 164.7 ) );
	object.setRelativeX( MxNumberTenths( 164.7 ) );
	object.setRelativeY( MxNumberTenths( 164.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" relative-x=\"164.7\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#0C0B0A\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 164.8 ) );
	object.setDefaultY( MxNumberTenths( 164.8 ) );
	object.setRelativeX( MxNumberTenths( 164.8 ) );
	object.setRelativeY( MxNumberTenths( 164.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" relative-x=\"164.8\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#0D0E0D0C\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 164.9 ) );
	object.setDefaultY( MxNumberTenths( 164.9 ) );
	object.setRelativeX( MxNumberTenths( 164.9 ) );
	object.setRelativeY( MxNumberTenths( 164.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" default-x=\"164.9\" default-y=\"164.9\" relative-x=\"164.9\" relative-y=\"164.9\" font-size=\"large\" font-weight=\"normal\" color=\"#100F0E\" halign=\"right\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 165 ) );
	object.setDefaultY( MxNumberTenths( 165 ) );
	object.setRelativeX( MxNumberTenths( 165 ) );
	object.setRelativeY( MxNumberTenths( 165 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" default-x=\"165\" default-y=\"165\" relative-y=\"165\" font-size=\"1.1\" font-weight=\"bold\" color=\"#11121110\" halign=\"left\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 165.1 ) );
	object.setDefaultY( MxNumberTenths( 165.1 ) );
	object.setRelativeX( MxNumberTenths( 165.1 ) );
	object.setRelativeY( MxNumberTenths( 165.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#141312" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" default-x=\"165.1\" default-y=\"165.1\" relative-y=\"165.1\" font-size=\"large\" font-weight=\"normal\" color=\"#141312\" halign=\"center\" valign=\"top\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 165.2 ) );
	object.setDefaultY( MxNumberTenths( 165.2 ) );
	object.setRelativeX( MxNumberTenths( 165.2 ) );
	object.setRelativeY( MxNumberTenths( 165.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" default-y=\"165.2\" relative-y=\"165.2\" font-weight=\"bold\" color=\"#15161514\" halign=\"right\" valign=\"middle\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 165.3 ) );
	object.setDefaultY( MxNumberTenths( 165.3 ) );
	object.setRelativeX( MxNumberTenths( 165.3 ) );
	object.setRelativeY( MxNumberTenths( 165.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#181716" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" relative-y=\"165.3\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#181716\" halign=\"left\" valign=\"bottom\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 165.4 ) );
	object.setDefaultY( MxNumberTenths( 165.4 ) );
	object.setRelativeX( MxNumberTenths( 165.4 ) );
	object.setRelativeY( MxNumberTenths( 165.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" relative-y=\"165.4\" font-family=\"ABC\" font-weight=\"bold\" color=\"#191A1918\" halign=\"center\" valign=\"baseline\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 165.5 ) );
	object.setDefaultY( MxNumberTenths( 165.5 ) );
	object.setRelativeX( MxNumberTenths( 165.5 ) );
	object.setRelativeY( MxNumberTenths( 165.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" default-x=\"165.5\" relative-x=\"165.5\" font-family=\"DEF\" color=\"#1C1B1A\" halign=\"right\" valign=\"top\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 165.6 ) );
	object.setDefaultY( MxNumberTenths( 165.6 ) );
	object.setRelativeX( MxNumberTenths( 165.6 ) );
	object.setRelativeY( MxNumberTenths( 165.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" default-x=\"165.6\" relative-x=\"165.6\" font-family=\"XYZ\" color=\"#1D1E1D1C\" halign=\"left\" valign=\"middle\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 165.7 ) );
	object.setDefaultY( MxNumberTenths( 165.7 ) );
	object.setRelativeX( MxNumberTenths( 165.7 ) );
	object.setRelativeY( MxNumberTenths( 165.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" default-x=\"165.7\" default-y=\"165.7\" relative-x=\"165.7\" font-family=\"ABC\" font-style=\"normal\" color=\"#201F1E\" halign=\"center\" valign=\"bottom\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 165.8 ) );
	object.setDefaultY( MxNumberTenths( 165.8 ) );
	object.setRelativeX( MxNumberTenths( 165.8 ) );
	object.setRelativeY( MxNumberTenths( 165.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" default-y=\"165.8\" relative-x=\"165.8\" font-family=\"DEF\" font-style=\"italic\" halign=\"right\" valign=\"baseline\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 165.9 ) );
	object.setDefaultY( MxNumberTenths( 165.9 ) );
	object.setRelativeX( MxNumberTenths( 165.9 ) );
	object.setRelativeY( MxNumberTenths( 165.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#242322" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" default-y=\"165.9\" relative-x=\"165.9\" font-family=\"XYZ\" font-style=\"normal\" halign=\"left\" valign=\"top\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 166 ) );
	object.setDefaultY( MxNumberTenths( 166 ) );
	object.setRelativeX( MxNumberTenths( 166 ) );
	object.setRelativeY( MxNumberTenths( 166 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" default-y=\"166\" font-style=\"italic\" halign=\"center\" valign=\"middle\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 166.1 ) );
	object.setDefaultY( MxNumberTenths( 166.1 ) );
	object.setRelativeX( MxNumberTenths( 166.1 ) );
	object.setRelativeY( MxNumberTenths( 166.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#282726" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" default-x=\"166.1\" relative-y=\"166.1\" font-style=\"normal\" font-size=\"large\" valign=\"bottom\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 166.2 ) );
	object.setDefaultY( MxNumberTenths( 166.2 ) );
	object.setRelativeX( MxNumberTenths( 166.2 ) );
	object.setRelativeY( MxNumberTenths( 166.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" default-x=\"166.2\" relative-y=\"166.2\" font-style=\"italic\" font-size=\"1.1\" valign=\"baseline\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 166.3 ) );
	object.setDefaultY( MxNumberTenths( 166.3 ) );
	object.setRelativeX( MxNumberTenths( 166.3 ) );
	object.setRelativeY( MxNumberTenths( 166.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" default-x=\"166.3\" relative-y=\"166.3\" font-style=\"normal\" font-size=\"large\" valign=\"top\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 166.4 ) );
	object.setDefaultY( MxNumberTenths( 166.4 ) );
	object.setRelativeX( MxNumberTenths( 166.4 ) );
	object.setRelativeY( MxNumberTenths( 166.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" relative-y=\"166.4\" font-style=\"italic\" font-size=\"1.1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 166.5 ) );
	object.setDefaultY( MxNumberTenths( 166.5 ) );
	object.setRelativeX( MxNumberTenths( 166.5 ) );
	object.setRelativeY( MxNumberTenths( 166.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" default-y=\"166.5\" relative-x=\"166.5\" relative-y=\"166.5\" font-size=\"large\" font-weight=\"normal\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 166.6 ) );
	object.setDefaultY( MxNumberTenths( 166.6 ) );
	object.setRelativeX( MxNumberTenths( 166.6 ) );
	object.setRelativeY( MxNumberTenths( 166.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" default-y=\"166.6\" relative-x=\"166.6\" relative-y=\"166.6\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 166.7 ) );
	object.setDefaultY( MxNumberTenths( 166.7 ) );
	object.setRelativeX( MxNumberTenths( 166.7 ) );
	object.setRelativeY( MxNumberTenths( 166.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#343332" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" default-x=\"166.7\" default-y=\"166.7\" relative-x=\"166.7\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 166.8 ) );
	object.setDefaultY( MxNumberTenths( 166.8 ) );
	object.setRelativeX( MxNumberTenths( 166.8 ) );
	object.setRelativeY( MxNumberTenths( 166.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" default-x=\"166.8\" default-y=\"166.8\" relative-x=\"166.8\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 166.9 ) );
	object.setDefaultY( MxNumberTenths( 166.9 ) );
	object.setRelativeX( MxNumberTenths( 166.9 ) );
	object.setRelativeY( MxNumberTenths( 166.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#383736" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" default-x=\"166.9\" relative-x=\"166.9\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" color=\"#383736\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 167 ) );
	object.setDefaultY( MxNumberTenths( 167 ) );
	object.setRelativeX( MxNumberTenths( 167 ) );
	object.setRelativeY( MxNumberTenths( 167 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" font-family=\"DEF\" font-weight=\"bold\" color=\"#393A3938\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 167.1 ) );
	object.setDefaultY( MxNumberTenths( 167.1 ) );
	object.setRelativeX( MxNumberTenths( 167.1 ) );
	object.setRelativeY( MxNumberTenths( 167.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#3C3B3A\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 167.2 ) );
	object.setDefaultY( MxNumberTenths( 167.2 ) );
	object.setRelativeX( MxNumberTenths( 167.2 ) );
	object.setRelativeY( MxNumberTenths( 167.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" font-family=\"ABC\" font-weight=\"bold\" color=\"#3D3E3D3C\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 167.3 ) );
	object.setDefaultY( MxNumberTenths( 167.3 ) );
	object.setRelativeX( MxNumberTenths( 167.3 ) );
	object.setRelativeY( MxNumberTenths( 167.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" default-x=\"167.3\" default-y=\"167.3\" relative-y=\"167.3\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" color=\"#403F3E\" halign=\"right\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 167.4 ) );
	object.setDefaultY( MxNumberTenths( 167.4 ) );
	object.setRelativeX( MxNumberTenths( 167.4 ) );
	object.setRelativeY( MxNumberTenths( 167.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" default-x=\"167.4\" default-y=\"167.4\" relative-y=\"167.4\" font-style=\"italic\" font-weight=\"bold\" color=\"#41424140\" halign=\"left\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 167.5 ) );
	object.setDefaultY( MxNumberTenths( 167.5 ) );
	object.setRelativeX( MxNumberTenths( 167.5 ) );
	object.setRelativeY( MxNumberTenths( 167.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#444342" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" default-x=\"167.5\" default-y=\"167.5\" relative-x=\"167.5\" relative-y=\"167.5\" font-style=\"normal\" color=\"#444342\" halign=\"center\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 167.6 ) );
	object.setDefaultY( MxNumberTenths( 167.6 ) );
	object.setRelativeX( MxNumberTenths( 167.6 ) );
	object.setRelativeY( MxNumberTenths( 167.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" default-y=\"167.6\" relative-x=\"167.6\" relative-y=\"167.6\" font-style=\"italic\" color=\"#45464544\" halign=\"right\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 167.7 ) );
	object.setDefaultY( MxNumberTenths( 167.7 ) );
	object.setRelativeX( MxNumberTenths( 167.7 ) );
	object.setRelativeY( MxNumberTenths( 167.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#484746" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" relative-x=\"167.7\" relative-y=\"167.7\" font-style=\"normal\" color=\"#484746\" halign=\"left\" valign=\"bottom\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 167.8 ) );
	object.setDefaultY( MxNumberTenths( 167.8 ) );
	object.setRelativeX( MxNumberTenths( 167.8 ) );
	object.setRelativeY( MxNumberTenths( 167.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" relative-x=\"167.8\" relative-y=\"167.8\" font-style=\"italic\" color=\"#494A4948\" halign=\"center\" valign=\"baseline\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 167.9 ) );
	object.setDefaultY( MxNumberTenths( 167.9 ) );
	object.setRelativeX( MxNumberTenths( 167.9 ) );
	object.setRelativeY( MxNumberTenths( 167.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" default-x=\"167.9\" relative-x=\"167.9\" font-style=\"normal\" font-size=\"large\" color=\"#4C4B4A\" halign=\"right\" valign=\"top\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 168 ) );
	object.setDefaultY( MxNumberTenths( 168 ) );
	object.setRelativeX( MxNumberTenths( 168 ) );
	object.setRelativeY( MxNumberTenths( 168 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" default-x=\"168\" font-style=\"italic\" font-size=\"1.1\" halign=\"left\" valign=\"middle\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 168.1 ) );
	object.setDefaultY( MxNumberTenths( 168.1 ) );
	object.setRelativeX( MxNumberTenths( 168.1 ) );
	object.setRelativeY( MxNumberTenths( 168.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" default-x=\"168.1\" default-y=\"168.1\" font-family=\"ABC\" font-size=\"large\" halign=\"center\" valign=\"bottom\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 168.2 ) );
	object.setDefaultY( MxNumberTenths( 168.2 ) );
	object.setRelativeX( MxNumberTenths( 168.2 ) );
	object.setRelativeY( MxNumberTenths( 168.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" default-y=\"168.2\" font-family=\"DEF\" font-size=\"1.1\" halign=\"right\" valign=\"baseline\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 168.3 ) );
	object.setDefaultY( MxNumberTenths( 168.3 ) );
	object.setRelativeX( MxNumberTenths( 168.3 ) );
	object.setRelativeY( MxNumberTenths( 168.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#545352" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" default-y=\"168.3\" font-family=\"XYZ\" font-size=\"large\" halign=\"left\" valign=\"top\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 168.4 ) );
	object.setDefaultY( MxNumberTenths( 168.4 ) );
	object.setRelativeX( MxNumberTenths( 168.4 ) );
	object.setRelativeY( MxNumberTenths( 168.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" default-y=\"168.4\" font-family=\"ABC\" font-size=\"1.1\" halign=\"center\" valign=\"middle\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 168.5 ) );
	object.setDefaultY( MxNumberTenths( 168.5 ) );
	object.setRelativeX( MxNumberTenths( 168.5 ) );
	object.setRelativeY( MxNumberTenths( 168.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#585756" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" default-x=\"168.5\" relative-x=\"168.5\" relative-y=\"168.5\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" valign=\"bottom\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 168.6 ) );
	object.setDefaultY( MxNumberTenths( 168.6 ) );
	object.setRelativeX( MxNumberTenths( 168.6 ) );
	object.setRelativeY( MxNumberTenths( 168.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" default-x=\"168.6\" relative-x=\"168.6\" relative-y=\"168.6\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" valign=\"baseline\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 168.7 ) );
	object.setDefaultY( MxNumberTenths( 168.7 ) );
	object.setRelativeX( MxNumberTenths( 168.7 ) );
	object.setRelativeY( MxNumberTenths( 168.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" default-x=\"168.7\" relative-x=\"168.7\" relative-y=\"168.7\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" valign=\"top\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 168.8 ) );
	object.setDefaultY( MxNumberTenths( 168.8 ) );
	object.setRelativeX( MxNumberTenths( 168.8 ) );
	object.setRelativeY( MxNumberTenths( 168.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" relative-x=\"168.8\" relative-y=\"168.8\" font-weight=\"bold\" valign=\"middle\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 168.9 ) );
	object.setDefaultY( MxNumberTenths( 168.9 ) );
	object.setRelativeX( MxNumberTenths( 168.9 ) );
	object.setRelativeY( MxNumberTenths( 168.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" default-y=\"168.9\" relative-x=\"168.9\" relative-y=\"168.9\" font-style=\"normal\" font-weight=\"normal\" valign=\"bottom\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 169 ) );
	object.setDefaultY( MxNumberTenths( 169 ) );
	object.setRelativeX( MxNumberTenths( 169 ) );
	object.setRelativeY( MxNumberTenths( 169 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" default-y=\"169\" relative-y=\"169\" font-style=\"italic\" font-weight=\"bold\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 169.1 ) );
	object.setDefaultY( MxNumberTenths( 169.1 ) );
	object.setRelativeX( MxNumberTenths( 169.1 ) );
	object.setRelativeY( MxNumberTenths( 169.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" default-x=\"169.1\" default-y=\"169.1\" font-style=\"normal\" font-weight=\"normal\" color=\"#646362\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 169.2 ) );
	object.setDefaultY( MxNumberTenths( 169.2 ) );
	object.setRelativeX( MxNumberTenths( 169.2 ) );
	object.setRelativeY( MxNumberTenths( 169.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" default-x=\"169.2\" default-y=\"169.2\" font-style=\"italic\" font-weight=\"bold\" color=\"#65666564\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 169.3 ) );
	object.setDefaultY( MxNumberTenths( 169.3 ) );
	object.setRelativeX( MxNumberTenths( 169.3 ) );
	object.setRelativeY( MxNumberTenths( 169.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" default-x=\"169.3\" font-style=\"normal\" font-weight=\"normal\" color=\"#686766\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 169.4 ) );
	object.setDefaultY( MxNumberTenths( 169.4 ) );
	object.setRelativeX( MxNumberTenths( 169.4 ) );
	object.setRelativeY( MxNumberTenths( 169.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" font-style=\"italic\" font-weight=\"bold\" color=\"#696A6968\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 169.5 ) );
	object.setDefaultY( MxNumberTenths( 169.5 ) );
	object.setRelativeX( MxNumberTenths( 169.5 ) );
	object.setRelativeY( MxNumberTenths( 169.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" relative-x=\"169.5\" font-family=\"XYZ\" font-style=\"normal\" color=\"#6C6B6A\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 169.6 ) );
	object.setDefaultY( MxNumberTenths( 169.6 ) );
	object.setRelativeX( MxNumberTenths( 169.6 ) );
	object.setRelativeY( MxNumberTenths( 169.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" relative-x=\"169.6\" font-family=\"ABC\" font-style=\"italic\" color=\"#6D6E6D6C\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 169.7 ) );
	object.setDefaultY( MxNumberTenths( 169.7 ) );
	object.setRelativeX( MxNumberTenths( 169.7 ) );
	object.setRelativeY( MxNumberTenths( 169.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" default-x=\"169.7\" default-y=\"169.7\" relative-x=\"169.7\" relative-y=\"169.7\" font-family=\"DEF\" font-size=\"large\" color=\"#706F6E\" halign=\"right\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 169.8 ) );
	object.setDefaultY( MxNumberTenths( 169.8 ) );
	object.setRelativeX( MxNumberTenths( 169.8 ) );
	object.setRelativeY( MxNumberTenths( 169.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" default-x=\"169.8\" default-y=\"169.8\" relative-x=\"169.8\" relative-y=\"169.8\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#71727170\" halign=\"left\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 169.9 ) );
	object.setDefaultY( MxNumberTenths( 169.9 ) );
	object.setRelativeX( MxNumberTenths( 169.9 ) );
	object.setRelativeY( MxNumberTenths( 169.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" default-x=\"169.9\" default-y=\"169.9\" relative-x=\"169.9\" relative-y=\"169.9\" font-family=\"ABC\" font-size=\"large\" color=\"#747372\" halign=\"center\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 170 ) );
	object.setDefaultY( MxNumberTenths( 170 ) );
	object.setRelativeX( MxNumberTenths( 170 ) );
	object.setRelativeY( MxNumberTenths( 170 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" default-y=\"170\" relative-y=\"170\" font-family=\"DEF\" font-size=\"1.1\" color=\"#75767574\" halign=\"right\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 170.1 ) );
	object.setDefaultY( MxNumberTenths( 170.1 ) );
	object.setRelativeX( MxNumberTenths( 170.1 ) );
	object.setRelativeY( MxNumberTenths( 170.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" relative-y=\"170.1\" font-family=\"XYZ\" font-size=\"large\" color=\"#787776\" halign=\"left\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 170.2 ) );
	object.setDefaultY( MxNumberTenths( 170.2 ) );
	object.setRelativeX( MxNumberTenths( 170.2 ) );
	object.setRelativeY( MxNumberTenths( 170.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" relative-y=\"170.2\" font-size=\"1.1\" halign=\"center\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 170.3 ) );
	object.setDefaultY( MxNumberTenths( 170.3 ) );
	object.setRelativeX( MxNumberTenths( 170.3 ) );
	object.setRelativeY( MxNumberTenths( 170.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" default-x=\"170.3\" font-size=\"large\" halign=\"right\" valign=\"top\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 170.4 ) );
	object.setDefaultY( MxNumberTenths( 170.4 ) );
	object.setRelativeX( MxNumberTenths( 170.4 ) );
	object.setRelativeY( MxNumberTenths( 170.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" default-x=\"170.4\" font-size=\"1.1\" halign=\"left\" valign=\"middle\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 170.5 ) );
	object.setDefaultY( MxNumberTenths( 170.5 ) );
	object.setRelativeX( MxNumberTenths( 170.5 ) );
	object.setRelativeY( MxNumberTenths( 170.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" default-x=\"170.5\" default-y=\"170.5\" relative-x=\"170.5\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" halign=\"center\" valign=\"bottom\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 170.6 ) );
	object.setDefaultY( MxNumberTenths( 170.6 ) );
	object.setRelativeX( MxNumberTenths( 170.6 ) );
	object.setRelativeY( MxNumberTenths( 170.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" default-y=\"170.6\" relative-x=\"170.6\" font-style=\"italic\" font-weight=\"bold\" halign=\"right\" valign=\"baseline\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 170.7 ) );
	object.setDefaultY( MxNumberTenths( 170.7 ) );
	object.setRelativeX( MxNumberTenths( 170.7 ) );
	object.setRelativeY( MxNumberTenths( 170.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" default-y=\"170.7\" relative-x=\"170.7\" font-style=\"normal\" font-weight=\"normal\" halign=\"left\" valign=\"top\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 170.8 ) );
	object.setDefaultY( MxNumberTenths( 170.8 ) );
	object.setRelativeX( MxNumberTenths( 170.8 ) );
	object.setRelativeY( MxNumberTenths( 170.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" default-y=\"170.8\" relative-x=\"170.8\" font-style=\"italic\" font-weight=\"bold\" halign=\"center\" valign=\"middle\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 170.9 ) );
	object.setDefaultY( MxNumberTenths( 170.9 ) );
	object.setRelativeX( MxNumberTenths( 170.9 ) );
	object.setRelativeY( MxNumberTenths( 170.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" default-x=\"170.9\" relative-x=\"170.9\" relative-y=\"170.9\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" valign=\"bottom\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 171 ) );
	object.setDefaultY( MxNumberTenths( 171 ) );
	object.setRelativeX( MxNumberTenths( 171 ) );
	object.setRelativeY( MxNumberTenths( 171 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" default-x=\"171\" relative-y=\"171\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" valign=\"baseline\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 171.1 ) );
	object.setDefaultY( MxNumberTenths( 171.1 ) );
	object.setRelativeX( MxNumberTenths( 171.1 ) );
	object.setRelativeY( MxNumberTenths( 171.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" default-x=\"171.1\" relative-y=\"171.1\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" valign=\"top\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 171.2 ) );
	object.setDefaultY( MxNumberTenths( 171.2 ) );
	object.setRelativeX( MxNumberTenths( 171.2 ) );
	object.setRelativeY( MxNumberTenths( 171.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" relative-y=\"171.2\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" valign=\"middle\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 171.3 ) );
	object.setDefaultY( MxNumberTenths( 171.3 ) );
	object.setRelativeX( MxNumberTenths( 171.3 ) );
	object.setRelativeY( MxNumberTenths( 171.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" default-y=\"171.3\" relative-y=\"171.3\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#908F8E\" valign=\"bottom\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 171.4 ) );
	object.setDefaultY( MxNumberTenths( 171.4 ) );
	object.setRelativeX( MxNumberTenths( 171.4 ) );
	object.setRelativeY( MxNumberTenths( 171.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" default-y=\"171.4\" relative-y=\"171.4\" font-family=\"ABC\" font-weight=\"bold\" color=\"#91929190\" valign=\"baseline\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 171.5 ) );
	object.setDefaultY( MxNumberTenths( 171.5 ) );
	object.setRelativeX( MxNumberTenths( 171.5 ) );
	object.setRelativeY( MxNumberTenths( 171.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" default-x=\"171.5\" default-y=\"171.5\" relative-x=\"171.5\" font-family=\"DEF\" font-size=\"large\" color=\"#949392\" valign=\"top\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 171.6 ) );
	object.setDefaultY( MxNumberTenths( 171.6 ) );
	object.setRelativeX( MxNumberTenths( 171.6 ) );
	object.setRelativeY( MxNumberTenths( 171.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" default-x=\"171.6\" default-y=\"171.6\" relative-x=\"171.6\" font-size=\"1.1\" color=\"#95969594\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 171.7 ) );
	object.setDefaultY( MxNumberTenths( 171.7 ) );
	object.setRelativeX( MxNumberTenths( 171.7 ) );
	object.setRelativeY( MxNumberTenths( 171.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" default-x=\"171.7\" relative-x=\"171.7\" font-size=\"large\" color=\"#989796\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 171.8 ) );
	object.setDefaultY( MxNumberTenths( 171.8 ) );
	object.setRelativeX( MxNumberTenths( 171.8 ) );
	object.setRelativeY( MxNumberTenths( 171.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" relative-x=\"171.8\" font-size=\"1.1\" color=\"#999A9998\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 171.9 ) );
	object.setDefaultY( MxNumberTenths( 171.9 ) );
	object.setRelativeX( MxNumberTenths( 171.9 ) );
	object.setRelativeY( MxNumberTenths( 171.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" relative-x=\"171.9\" font-size=\"large\" color=\"#9C9B9A\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 172 ) );
	object.setDefaultY( MxNumberTenths( 172 ) );
	object.setRelativeX( MxNumberTenths( 172 ) );
	object.setRelativeY( MxNumberTenths( 172 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\" font-size=\"1.1\" color=\"#9D9E9D9C\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 172.1 ) );
	object.setDefaultY( MxNumberTenths( 172.1 ) );
	object.setRelativeX( MxNumberTenths( 172.1 ) );
	object.setRelativeY( MxNumberTenths( 172.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<quiet type=\"start\" symbol=\"Hauptstimme\" default-x=\"172.1\" default-y=\"172.1\" relative-y=\"172.1\" font-style=\"normal\" font-size=\"large\" color=\"#A09F9E\" halign=\"right\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 172.2 ) );
	object.setDefaultY( MxNumberTenths( 172.2 ) );
	object.setRelativeX( MxNumberTenths( 172.2 ) );
	object.setRelativeY( MxNumberTenths( 172.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<musicxmlishard type=\"start\" symbol=\"Hauptstimme\" default-x=\"172.2\" default-y=\"172.2\" relative-y=\"172.2\" font-style=\"italic\" font-size=\"1.1\" color=\"#A1A2A1A0\" halign=\"left\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 172.3 ) );
	object.setDefaultY( MxNumberTenths( 172.3 ) );
	object.setRelativeX( MxNumberTenths( 172.3 ) );
	object.setRelativeY( MxNumberTenths( 172.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<bishop type=\"start\" symbol=\"Hauptstimme\" default-x=\"172.3\" default-y=\"172.3\" relative-y=\"172.3\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#A4A3A2\" halign=\"center\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 172.4 ) );
	object.setDefaultY( MxNumberTenths( 172.4 ) );
	object.setRelativeX( MxNumberTenths( 172.4 ) );
	object.setRelativeY( MxNumberTenths( 172.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<charlie type=\"start\" symbol=\"Hauptstimme\" default-y=\"172.4\" relative-y=\"172.4\" font-family=\"DEF\" font-style=\"italic\" halign=\"right\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 172.5 ) );
	object.setDefaultY( MxNumberTenths( 172.5 ) );
	object.setRelativeX( MxNumberTenths( 172.5 ) );
	object.setRelativeY( MxNumberTenths( 172.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<booksmart type=\"start\" symbol=\"Hauptstimme\">D,E,F</booksmart>";
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

TEST( getIsTypeDefaultDefined, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSymbolDefaultDefined, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsSymbolDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignDefaultDefined, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsHalignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignDefaultDefined, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	bool expected = false;
	bool actual = object.getIsValignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	MxEnumStartStop expected;
	MxEnumStartStop actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSymbolDefaultValue, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	MxEnumPrincipalVoiceSymbol expected;
	MxEnumPrincipalVoiceSymbol actual = object.getSymbolDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getHalignDefaultValue, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getHalignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValignDefaultValue, MxCxSmpPrincipalVoice )
{
	MxCxSmpPrincipalVoice object;
	MxEnumValign expected;
	MxEnumValign actual = object.getValignDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


