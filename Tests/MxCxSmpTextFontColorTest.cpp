/** *******************************************************
  * 
  * MxCxSmpTextFontColorTest.cpp
  * Created: 2014-12-02 17:31:55
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpTextFontColor.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getUnderline().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getOverline().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getLineThrough().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	std::string expected = ( MxNumberRotationDegrees(  ) ).toString();
	std::string actual = object.getRotation().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	std::string expected = ( MxNumberOrNormal( "normal" ) ).toString();
	std::string actual = object.getLetterSpacing().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	std::string expected = ( XmlLang(  ) ).toString();
	std::string actual = object.getXmlLang().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	std::string expected = ( MxEnumTextDirection(  ) ).toString();
	std::string actual = object.getDir().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "" ) );
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
TEST( ctorValueAndElementName2, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
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
TEST( ctorValueAndElementName4, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "X,Y,Z" ) );
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
TEST( ctorValueAndElementName6, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
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
TEST( ctorValueAndElementName8, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "X,Y,Z" ) );
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

TEST( getClassName, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	std::string expected = "MxCxSmpTextFontColor";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	std::string expected = "text-font-color";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	std::string expected = "The text-font-color type represents text with optional font and color information. It is used for the elision element.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setFontFamily0, MxCxSmpTextFontColor )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextFontColor object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle1, MxCxSmpTextFontColor )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextFontColor object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize2, MxCxSmpTextFontColor )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextFontColor object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight3, MxCxSmpTextFontColor )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextFontColor object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor4, MxCxSmpTextFontColor )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextFontColor object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setUnderline5, MxCxSmpTextFontColor )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextFontColor object;
	object.setUnderline( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getUnderline();
	CHECK_EQUAL( expected, actual )
	object.setUnderline( value2 );
	expected = value2;
	actual = object.getUnderline();
	CHECK_EQUAL( expected, actual )
}
TEST( setOverline6, MxCxSmpTextFontColor )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextFontColor object;
	object.setOverline( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getOverline();
	CHECK_EQUAL( expected, actual )
	object.setOverline( value2 );
	expected = value2;
	actual = object.getOverline();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineThrough7, MxCxSmpTextFontColor )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextFontColor object;
	object.setLineThrough( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getLineThrough();
	CHECK_EQUAL( expected, actual )
	object.setLineThrough( value2 );
	expected = value2;
	actual = object.getLineThrough();
	CHECK_EQUAL( expected, actual )
}
TEST( setRotation8, MxCxSmpTextFontColor )
{
	MxNumberRotationDegrees value1( -179.9 );
	MxNumberRotationDegrees value2( -179.8 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextFontColor object;
	object.setRotation( value1 );
	MxNumberRotationDegrees expected = value1;
	MxNumberRotationDegrees actual = object.getRotation();
	CHECK_EQUAL( expected, actual )
	object.setRotation( value2 );
	expected = value2;
	actual = object.getRotation();
	CHECK_EQUAL( expected, actual )
}
TEST( setLetterSpacing9, MxCxSmpTextFontColor )
{
	MxNumberOrNormal value1( 0.1 );
	MxNumberOrNormal value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextFontColor object;
	object.setLetterSpacing( value1 );
	MxNumberOrNormal expected = value1;
	MxNumberOrNormal actual = object.getLetterSpacing();
	CHECK_EQUAL( expected, actual )
	object.setLetterSpacing( value2 );
	expected = value2;
	actual = object.getLetterSpacing();
	CHECK_EQUAL( expected, actual )
}
TEST( setXmlLang10, MxCxSmpTextFontColor )
{
	XmlLang value1( "en" );
	XmlLang value2( "fr" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextFontColor object;
	object.setXmlLang( value1 );
	XmlLang expected = value1;
	XmlLang actual = object.getXmlLang();
	CHECK_EQUAL( expected, actual )
	object.setXmlLang( value2 );
	expected = value2;
	actual = object.getXmlLang();
	CHECK_EQUAL( expected, actual )
}
TEST( setDir11, MxCxSmpTextFontColor )
{
	MxEnumTextDirection value1( lexicon::enums::TextDirection::rlo );
	MxEnumTextDirection value2( lexicon::enums::TextDirection::lro );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextFontColor object;
	object.setDir( value1 );
	MxEnumTextDirection expected = value1;
	MxEnumTextDirection actual = object.getDir();
	CHECK_EQUAL( expected, actual )
	object.setDir( value2 );
	expected = value2;
	actual = object.getDir();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsFontFamilyRequired0, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired1, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired2, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired3, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired4, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsUnderlineRequired5, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsUnderlineRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsOverlineRequired6, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsOverlineRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineThroughRequired7, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsLineThroughRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRotationRequired8, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsRotationRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLetterSpacingRequired9, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsLetterSpacingRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangRequired10, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsXmlLangRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDirRequired11, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsDirRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsFontFamilyPresent0, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
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
TEST( getIsFontStylePresent1, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
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
TEST( getIsFontSizePresent2, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
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
TEST( getIsFontWeightPresent3, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
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
TEST( getIsColorPresent4, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
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
TEST( getIsUnderlinePresent5, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsUnderlinePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsUnderlinePresent( true );
	expected = true;
	actual = object.getIsUnderlinePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsUnderlinePresent( false );
	expected = false;
	actual = object.getIsUnderlinePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsOverlinePresent6, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsOverlinePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsOverlinePresent( true );
	expected = true;
	actual = object.getIsOverlinePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsOverlinePresent( false );
	expected = false;
	actual = object.getIsOverlinePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineThroughPresent7, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsLineThroughPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLineThroughPresent( true );
	expected = true;
	actual = object.getIsLineThroughPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLineThroughPresent( false );
	expected = false;
	actual = object.getIsLineThroughPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRotationPresent8, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsRotationPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsRotationPresent( true );
	expected = true;
	actual = object.getIsRotationPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsRotationPresent( false );
	expected = false;
	actual = object.getIsRotationPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLetterSpacingPresent9, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsLetterSpacingPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLetterSpacingPresent( true );
	expected = true;
	actual = object.getIsLetterSpacingPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLetterSpacingPresent( false );
	expected = false;
	actual = object.getIsLetterSpacingPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangPresent10, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsXmlLangPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsXmlLangPresent( true );
	expected = true;
	actual = object.getIsXmlLangPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsXmlLangPresent( false );
	expected = false;
	actual = object.getIsXmlLangPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDirPresent11, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsDirPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDirPresent( true );
	expected = true;
	actual = object.getIsDirPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDirPresent( false );
	expected = false;
	actual = object.getIsDirPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 31.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 30.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	expected = "<booksmart font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#0D0E0D0C\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"31.4\" letter-spacing=\"30.4\" xml:lang=\"\" dir=\"ltr\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 31.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 30.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<quiet font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#100F0E\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"31.5\" letter-spacing=\"30.5\" xml:lang=\"\" dir=\"rtl\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 31.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 30.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<musicxmlishard font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" color=\"#11121110\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"31.6\" letter-spacing=\"30.6\" xml:lang=\"\" dir=\"lro\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#141312" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 31.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 30.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<bishop font-weight=\"normal\" color=\"#141312\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"31.7\" letter-spacing=\"30.7\" xml:lang=\"\" dir=\"rlo\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 31.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 30.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<charlie font-family=\"ABC\" font-style=\"italic\" color=\"#15161514\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"31.8\" letter-spacing=\"30.8\" xml:lang=\"\" dir=\"ltr\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#181716" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 31.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 30.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<booksmart font-style=\"normal\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"31.9\" letter-spacing=\"30.9\" xml:lang=\"\" dir=\"rtl\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 32 ) );
	object.setLetterSpacing( MxNumberOrNormal( 31 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<quiet font-family=\"XYZ\" font-size=\"1.1\" overline=\"2\" line-through=\"2\" rotation=\"32\" letter-spacing=\"31\" xml:lang=\"\" dir=\"lro\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 32.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 31.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<musicxmlishard font-size=\"large\" line-through=\"0\" rotation=\"32.1\" letter-spacing=\"31.1\" xml:lang=\"\" dir=\"rlo\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 32.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 31.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<bishop font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" rotation=\"32.2\" letter-spacing=\"31.2\" xml:lang=\"\" dir=\"ltr\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 32.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 31.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<charlie font-style=\"normal\" font-weight=\"normal\" letter-spacing=\"31.3\" xml:lang=\"\" dir=\"rtl\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 32.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 31.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<booksmart font-family=\"ABC\" font-weight=\"bold\" color=\"#21222120\" xml:lang=\"\" dir=\"lro\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#242322" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 32.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 31.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<quiet font-weight=\"normal\" color=\"#242322\" dir=\"rlo\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 32.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 31.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<musicxmlishard font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#25262524\" underline=\"2\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#282726" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 32.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 31.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<bishop font-style=\"normal\" font-size=\"large\" color=\"#282726\" underline=\"0\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 32.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 31.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<charlie font-family=\"DEF\" font-size=\"1.1\" color=\"#292A2928\" underline=\"1\" overline=\"1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 32.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 31.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<booksmart underline=\"2\" overline=\"2\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 33 ) );
	object.setLetterSpacing( MxNumberOrNormal( 32 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<quiet font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" underline=\"0\" overline=\"0\" line-through=\"0\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 33.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 32.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<musicxmlishard font-style=\"normal\" font-weight=\"normal\" underline=\"1\" overline=\"1\" line-through=\"1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 33.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 32.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<bishop font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" overline=\"2\" line-through=\"2\" rotation=\"33.2\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#343332" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 33.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 32.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<charlie font-size=\"large\" font-weight=\"normal\" overline=\"0\" line-through=\"0\" rotation=\"33.3\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 33.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 32.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<booksmart font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#35363534\" overline=\"1\" line-through=\"1\" rotation=\"33.4\" letter-spacing=\"32.4\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#383736" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 33.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 32.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<quiet font-style=\"normal\" color=\"#383736\" line-through=\"2\" rotation=\"33.5\" letter-spacing=\"32.5\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 33.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 32.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<musicxmlishard font-family=\"ABC\" color=\"#393A3938\" line-through=\"0\" rotation=\"33.6\" letter-spacing=\"32.6\" xml:lang=\"\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 33.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 32.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<bishop color=\"#3C3B3A\" line-through=\"1\" rotation=\"33.7\" letter-spacing=\"32.7\" xml:lang=\"\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 33.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 32.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<charlie font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#3D3E3D3C\" underline=\"2\" rotation=\"33.8\" letter-spacing=\"32.8\" xml:lang=\"\" dir=\"ltr\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 33.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 32.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<booksmart font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" underline=\"0\" rotation=\"33.9\" letter-spacing=\"32.9\" xml:lang=\"\" dir=\"rtl\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 34 ) );
	object.setLetterSpacing( MxNumberOrNormal( 33 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<quiet font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" underline=\"1\" rotation=\"34\" letter-spacing=\"33\" xml:lang=\"\" dir=\"lro\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#444342" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 34.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 33.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<musicxmlishard font-weight=\"normal\" underline=\"2\" letter-spacing=\"33.1\" xml:lang=\"\" dir=\"rlo\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 34.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 33.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<bishop font-family=\"ABC\" font-style=\"italic\" underline=\"0\" overline=\"0\" letter-spacing=\"33.2\" xml:lang=\"\" dir=\"ltr\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#484746" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 34.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 33.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<charlie font-style=\"normal\" underline=\"1\" overline=\"1\" letter-spacing=\"33.3\" xml:lang=\"\" dir=\"rtl\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 34.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 33.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<booksmart font-family=\"XYZ\" font-size=\"1.1\" color=\"#494A4948\" overline=\"2\" xml:lang=\"\" dir=\"lro\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 34.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 33.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<quiet font-size=\"large\" color=\"#4C4B4A\" overline=\"0\" xml:lang=\"\" dir=\"rlo\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 34.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 33.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<musicxmlishard font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#4D4E4D4C\" overline=\"1\" line-through=\"1\" xml:lang=\"\" dir=\"ltr\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 34.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 33.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<bishop font-style=\"normal\" font-weight=\"normal\" color=\"#504F4E\" overline=\"2\" line-through=\"2\" dir=\"rtl\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 34.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 33.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<charlie font-family=\"ABC\" font-weight=\"bold\" color=\"#51525150\" overline=\"0\" line-through=\"0\" dir=\"lro\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#545352" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 34.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 33.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<booksmart font-weight=\"normal\" line-through=\"1\" dir=\"rlo\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 35 ) );
	object.setLetterSpacing( MxNumberOrNormal( 34 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<quiet font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" underline=\"2\" line-through=\"2\" rotation=\"35\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#585756" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 35.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 34.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<musicxmlishard font-style=\"normal\" font-size=\"large\" underline=\"0\" line-through=\"0\" rotation=\"35.1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 35.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 34.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<bishop font-family=\"DEF\" font-size=\"1.1\" underline=\"1\" line-through=\"1\" rotation=\"35.2\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 35.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 34.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<charlie underline=\"2\" line-through=\"2\" rotation=\"35.3\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 35.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 34.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<booksmart font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" color=\"#5D5E5D5C\" underline=\"0\" rotation=\"35.4\" letter-spacing=\"34.4\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 35.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 34.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<quiet font-style=\"normal\" font-weight=\"normal\" color=\"#605F5E\" underline=\"1\" rotation=\"35.5\" letter-spacing=\"34.5\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 35.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 34.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<musicxmlishard font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" color=\"#61626160\" overline=\"2\" rotation=\"35.6\" letter-spacing=\"34.6\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 35.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 34.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<bishop font-size=\"large\" font-weight=\"normal\" color=\"#646362\" overline=\"0\" rotation=\"35.7\" letter-spacing=\"34.7\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 35.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 34.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<charlie font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#65666564\" overline=\"1\" rotation=\"35.8\" letter-spacing=\"34.8\" xml:lang=\"\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 35.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 34.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<booksmart font-style=\"normal\" overline=\"2\" letter-spacing=\"34.9\" xml:lang=\"\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 36 ) );
	object.setLetterSpacing( MxNumberOrNormal( 35 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<quiet font-family=\"ABC\" overline=\"0\" letter-spacing=\"35\" xml:lang=\"\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 36.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 35.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<musicxmlishard overline=\"1\" letter-spacing=\"35.1\" xml:lang=\"\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 36.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 35.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<bishop font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" underline=\"2\" overline=\"2\" line-through=\"2\" letter-spacing=\"35.2\" xml:lang=\"\" dir=\"ltr\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 36.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 35.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<charlie font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" underline=\"0\" line-through=\"0\" letter-spacing=\"35.3\" xml:lang=\"\" dir=\"rtl\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 36.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 35.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<booksmart font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" color=\"#71727170\" underline=\"1\" line-through=\"1\" xml:lang=\"\" dir=\"lro\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 36.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 35.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<quiet font-weight=\"normal\" color=\"#747372\" underline=\"2\" line-through=\"2\" xml:lang=\"\" dir=\"rlo\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 36.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 35.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<musicxmlishard font-family=\"ABC\" font-style=\"italic\" color=\"#75767574\" underline=\"0\" line-through=\"0\" xml:lang=\"\" dir=\"ltr\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 36.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 35.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<bishop font-style=\"normal\" color=\"#787776\" underline=\"1\" line-through=\"1\" xml:lang=\"\" dir=\"rtl\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 36.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 35.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<charlie font-family=\"XYZ\" font-size=\"1.1\" color=\"#797A7978\" line-through=\"2\" rotation=\"36.8\" xml:lang=\"\" dir=\"lro\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 36.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 35.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<booksmart font-size=\"large\" line-through=\"0\" rotation=\"36.9\" dir=\"rlo\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 37 ) );
	object.setLetterSpacing( MxNumberOrNormal( 36 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<quiet font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" overline=\"1\" rotation=\"37\" dir=\"ltr\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 37.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 36.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<musicxmlishard font-style=\"normal\" font-weight=\"normal\" overline=\"2\" rotation=\"37.1\" dir=\"rtl\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 37.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 36.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<bishop font-family=\"ABC\" font-weight=\"bold\" overline=\"0\" rotation=\"37.2\" dir=\"lro\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 37.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 36.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<charlie font-weight=\"normal\" overline=\"1\" rotation=\"37.3\" dir=\"rlo\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 37.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 36.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<booksmart font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#85868584\" underline=\"2\" overline=\"2\" rotation=\"37.4\" letter-spacing=\"36.4\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 37.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 36.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<quiet font-style=\"normal\" font-size=\"large\" color=\"#888786\" underline=\"0\" overline=\"0\" rotation=\"37.5\" letter-spacing=\"36.5\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 37.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 36.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<musicxmlishard font-family=\"DEF\" font-size=\"1.1\" color=\"#898A8988\" underline=\"1\" overline=\"1\" rotation=\"37.6\" letter-spacing=\"36.6\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 37.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 36.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<bishop color=\"#8C8B8A\" underline=\"2\" letter-spacing=\"36.7\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 37.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 36.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<charlie font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" color=\"#8D8E8D8C\" underline=\"0\" line-through=\"0\" letter-spacing=\"36.8\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 37.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 36.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<booksmart font-style=\"normal\" font-weight=\"normal\" underline=\"1\" line-through=\"1\" letter-spacing=\"36.9\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 38 ) );
	object.setLetterSpacing( MxNumberOrNormal( 37 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<quiet font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" line-through=\"2\" letter-spacing=\"37\" xml:lang=\"\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 38.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 37.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<musicxmlishard font-size=\"large\" font-weight=\"normal\" line-through=\"0\" letter-spacing=\"37.1\" xml:lang=\"\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 38.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 37.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<bishop font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" line-through=\"1\" letter-spacing=\"37.2\" xml:lang=\"\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 38.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 37.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<charlie font-style=\"normal\" line-through=\"2\" letter-spacing=\"37.3\" xml:lang=\"\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 38.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 37.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<booksmart font-family=\"ABC\" color=\"#999A9998\" overline=\"0\" line-through=\"0\" xml:lang=\"\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 38.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 37.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<quiet color=\"#9C9B9A\" overline=\"1\" line-through=\"1\" xml:lang=\"\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 38.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 37.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<musicxmlishard font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#9D9E9D9C\" underline=\"2\" overline=\"2\" rotation=\"38.6\" xml:lang=\"\" dir=\"ltr\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 38.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 37.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<bishop font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#A09F9E\" underline=\"0\" overline=\"0\" rotation=\"38.7\" xml:lang=\"\" dir=\"rtl\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 38.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 37.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<charlie font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" color=\"#A1A2A1A0\" underline=\"1\" overline=\"1\" rotation=\"38.8\" xml:lang=\"\" dir=\"lro\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 38.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 37.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<booksmart font-weight=\"normal\" underline=\"2\" overline=\"2\" rotation=\"38.9\" xml:lang=\"\" dir=\"rlo\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 39 ) );
	object.setLetterSpacing( MxNumberOrNormal( 38 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<quiet font-family=\"ABC\" font-style=\"italic\" underline=\"0\" overline=\"0\" rotation=\"39\" xml:lang=\"\" dir=\"ltr\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 39.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 38.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<musicxmlishard font-style=\"normal\" underline=\"1\" rotation=\"39.1\" dir=\"rtl\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 39.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 38.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<bishop font-family=\"XYZ\" font-size=\"1.1\" rotation=\"39.2\" dir=\"lro\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 39.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 38.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<charlie font-size=\"large\" rotation=\"39.3\" dir=\"rlo\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 39.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 38.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<booksmart font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#ADAEADAC\" line-through=\"1\" rotation=\"39.4\" letter-spacing=\"38.4\" dir=\"ltr\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 39.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 38.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<quiet font-style=\"normal\" font-weight=\"normal\" color=\"#B0AFAE\" line-through=\"2\" letter-spacing=\"38.5\" dir=\"rtl\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 39.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 38.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<musicxmlishard font-family=\"ABC\" font-weight=\"bold\" color=\"#B1B2B1B0\" line-through=\"0\" letter-spacing=\"38.6\" dir=\"lro\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 39.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 38.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<bishop font-weight=\"normal\" color=\"#B4B3B2\" line-through=\"1\" letter-spacing=\"38.7\" dir=\"rlo\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 39.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 38.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<charlie font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#B5B6B5B4\" underline=\"2\" overline=\"2\" line-through=\"2\" letter-spacing=\"38.8\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 39.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 38.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<booksmart font-style=\"normal\" font-size=\"large\" underline=\"0\" overline=\"0\" line-through=\"0\" letter-spacing=\"38.9\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 40 ) );
	object.setLetterSpacing( MxNumberOrNormal( 39 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<quiet font-family=\"DEF\" font-size=\"1.1\" underline=\"1\" overline=\"1\" line-through=\"1\" letter-spacing=\"39\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 40.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 39.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<musicxmlishard underline=\"2\" overline=\"2\" line-through=\"2\" letter-spacing=\"39.1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 40.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 39.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<bishop font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" underline=\"0\" overline=\"0\" letter-spacing=\"39.2\" xml:lang=\"\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 40.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 39.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<charlie font-style=\"normal\" font-weight=\"normal\" underline=\"1\" overline=\"1\" letter-spacing=\"39.3\" xml:lang=\"\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 40.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 39.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<booksmart font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" color=\"#C1C2C1C0\" overline=\"2\" rotation=\"40.4\" xml:lang=\"\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 40.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 39.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<quiet font-size=\"large\" font-weight=\"normal\" color=\"#C4C3C2\" rotation=\"40.5\" xml:lang=\"\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 40.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 39.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<musicxmlishard font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#C5C6C5C4\" rotation=\"40.6\" xml:lang=\"\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 40.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 39.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<bishop font-style=\"normal\" color=\"#C8C7C6\" rotation=\"40.7\" xml:lang=\"\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 40.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 39.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<charlie font-family=\"ABC\" color=\"#C9CAC9C8\" rotation=\"40.8\" xml:lang=\"\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 40.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 39.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<booksmart rotation=\"40.9\" xml:lang=\"\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 41 ) );
	object.setLetterSpacing( MxNumberOrNormal( 40 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<quiet font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" underline=\"2\" line-through=\"2\" rotation=\"41\" xml:lang=\"\" dir=\"ltr\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 41.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 40.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<musicxmlishard font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" underline=\"0\" line-through=\"0\" rotation=\"41.1\" xml:lang=\"\" dir=\"rtl\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 41.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 40.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<bishop font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"41.2\" xml:lang=\"\" dir=\"lro\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 41.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 40.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<charlie font-weight=\"normal\" underline=\"2\" overline=\"2\" line-through=\"2\" dir=\"rlo\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsDirPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 41.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 40.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<booksmart>D,E,F</booksmart>";
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

TEST( getIsFontFamilyDefaultDefined, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsUnderlineDefaultDefined, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsUnderlineDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsOverlineDefaultDefined, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsOverlineDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineThroughDefaultDefined, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsLineThroughDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRotationDefaultDefined, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsRotationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLetterSpacingDefaultDefined, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = true;
	bool actual = object.getIsLetterSpacingDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangDefaultDefined, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsXmlLangDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDirDefaultDefined, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	bool expected = false;
	bool actual = object.getIsDirDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getFontFamilyDefaultValue, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getUnderlineDefaultValue, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getUnderlineDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getOverlineDefaultValue, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getOverlineDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineThroughDefaultValue, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getLineThroughDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRotationDefaultValue, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	MxNumberRotationDegrees expected;
	MxNumberRotationDegrees actual = object.getRotationDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLetterSpacingDefaultValue, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	MxNumberOrNormal expected( "normal" );
	MxNumberOrNormal actual = object.getLetterSpacingDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlLangDefaultValue, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	XmlLang expected;
	XmlLang actual = object.getXmlLangDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDirDefaultValue, MxCxSmpTextFontColor )
{
	MxCxSmpTextFontColor object;
	MxEnumTextDirection expected;
	MxEnumTextDirection actual = object.getDirDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


