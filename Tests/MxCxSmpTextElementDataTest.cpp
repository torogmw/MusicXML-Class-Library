/** *******************************************************
  * 
  * MxCxSmpTextElementDataTest.cpp
  * Created: 2014-12-02 17:31:54
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpTextElementData.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getUnderline().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getOverline().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getLineThrough().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	std::string expected = ( MxNumberRotationDegrees(  ) ).toString();
	std::string actual = object.getRotation().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	std::string expected = ( MxNumberOrNormal( "normal" ) ).toString();
	std::string actual = object.getLetterSpacing().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	std::string expected = ( XmlLang(  ) ).toString();
	std::string actual = object.getXmlLang().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	std::string expected = ( MxEnumTextDirection(  ) ).toString();
	std::string actual = object.getDir().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "" ) );
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
TEST( ctorValueAndElementName2, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
TEST( ctorValueAndElementName4, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "X,Y,Z" ) );
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
TEST( ctorValueAndElementName6, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
TEST( ctorValueAndElementName8, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "X,Y,Z" ) );
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

TEST( getClassName, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	std::string expected = "MxCxSmpTextElementData";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	std::string expected = "text-element-data";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	std::string expected = "The text-element-data type represents a syllable or portion of a syllable for lyric text underlay. A hyphen in the string content should only be used for an actual hyphenated word. Language names for text elements come from ISO 639, with optional country subcodes from ISO 3166.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setFontFamily0, MxCxSmpTextElementData )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextElementData object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle1, MxCxSmpTextElementData )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextElementData object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize2, MxCxSmpTextElementData )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextElementData object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight3, MxCxSmpTextElementData )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextElementData object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor4, MxCxSmpTextElementData )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextElementData object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setUnderline5, MxCxSmpTextElementData )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextElementData object;
	object.setUnderline( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getUnderline();
	CHECK_EQUAL( expected, actual )
	object.setUnderline( value2 );
	expected = value2;
	actual = object.getUnderline();
	CHECK_EQUAL( expected, actual )
}
TEST( setOverline6, MxCxSmpTextElementData )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextElementData object;
	object.setOverline( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getOverline();
	CHECK_EQUAL( expected, actual )
	object.setOverline( value2 );
	expected = value2;
	actual = object.getOverline();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineThrough7, MxCxSmpTextElementData )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextElementData object;
	object.setLineThrough( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getLineThrough();
	CHECK_EQUAL( expected, actual )
	object.setLineThrough( value2 );
	expected = value2;
	actual = object.getLineThrough();
	CHECK_EQUAL( expected, actual )
}
TEST( setRotation8, MxCxSmpTextElementData )
{
	MxNumberRotationDegrees value1( -179.9 );
	MxNumberRotationDegrees value2( -179.8 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextElementData object;
	object.setRotation( value1 );
	MxNumberRotationDegrees expected = value1;
	MxNumberRotationDegrees actual = object.getRotation();
	CHECK_EQUAL( expected, actual )
	object.setRotation( value2 );
	expected = value2;
	actual = object.getRotation();
	CHECK_EQUAL( expected, actual )
}
TEST( setLetterSpacing9, MxCxSmpTextElementData )
{
	MxNumberOrNormal value1( 0.1 );
	MxNumberOrNormal value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextElementData object;
	object.setLetterSpacing( value1 );
	MxNumberOrNormal expected = value1;
	MxNumberOrNormal actual = object.getLetterSpacing();
	CHECK_EQUAL( expected, actual )
	object.setLetterSpacing( value2 );
	expected = value2;
	actual = object.getLetterSpacing();
	CHECK_EQUAL( expected, actual )
}
TEST( setXmlLang10, MxCxSmpTextElementData )
{
	XmlLang value1( "en" );
	XmlLang value2( "fr" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextElementData object;
	object.setXmlLang( value1 );
	XmlLang expected = value1;
	XmlLang actual = object.getXmlLang();
	CHECK_EQUAL( expected, actual )
	object.setXmlLang( value2 );
	expected = value2;
	actual = object.getXmlLang();
	CHECK_EQUAL( expected, actual )
}
TEST( setDir11, MxCxSmpTextElementData )
{
	MxEnumTextDirection value1( lexicon::enums::TextDirection::rlo );
	MxEnumTextDirection value2( lexicon::enums::TextDirection::lro );
	CHECK( ( value1 != value2 ) )
	MxCxSmpTextElementData object;
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

TEST( getIsFontFamilyRequired0, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired1, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired2, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired3, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired4, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsUnderlineRequired5, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsUnderlineRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsOverlineRequired6, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsOverlineRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineThroughRequired7, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsLineThroughRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRotationRequired8, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsRotationRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLetterSpacingRequired9, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsLetterSpacingRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangRequired10, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsXmlLangRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDirRequired11, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsDirRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsFontFamilyPresent0, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
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
TEST( getIsFontStylePresent1, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
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
TEST( getIsFontSizePresent2, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
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
TEST( getIsFontWeightPresent3, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
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
TEST( getIsColorPresent4, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
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
TEST( getIsUnderlinePresent5, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
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
TEST( getIsOverlinePresent6, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
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
TEST( getIsLineThroughPresent7, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
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
TEST( getIsRotationPresent8, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
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
TEST( getIsLetterSpacingPresent9, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
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
TEST( getIsXmlLangPresent10, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
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
TEST( getIsDirPresent11, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
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

TEST( toString0, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#444342" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 21.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 20.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
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
	expected = "<booksmart font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#444342\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"21.3\" letter-spacing=\"20.3\" xml:lang=\"\" dir=\"rlo\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 21.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 20.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<quiet font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#45464544\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"21.4\" letter-spacing=\"20.4\" xml:lang=\"\" dir=\"ltr\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#484746" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 21.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 20.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<musicxmlishard font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" color=\"#484746\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"21.5\" letter-spacing=\"20.5\" xml:lang=\"\" dir=\"rtl\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 21.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 20.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<bishop font-weight=\"bold\" color=\"#494A4948\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"21.6\" letter-spacing=\"20.6\" xml:lang=\"\" dir=\"lro\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 21.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 20.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<charlie font-family=\"DEF\" font-style=\"normal\" color=\"#4C4B4A\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"21.7\" letter-spacing=\"20.7\" xml:lang=\"\" dir=\"rlo\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 21.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 20.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<booksmart font-style=\"italic\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"21.8\" letter-spacing=\"20.8\" xml:lang=\"\" dir=\"ltr\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 21.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 20.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<quiet font-family=\"ABC\" font-size=\"large\" overline=\"0\" line-through=\"0\" rotation=\"21.9\" letter-spacing=\"20.9\" xml:lang=\"\" dir=\"rtl\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 22 ) );
	object.setLetterSpacing( MxNumberOrNormal( 21 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<musicxmlishard font-size=\"1.1\" line-through=\"1\" rotation=\"22\" letter-spacing=\"21\" xml:lang=\"\" dir=\"lro\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#545352" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 22.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 21.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<bishop font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" rotation=\"22.1\" letter-spacing=\"21.1\" xml:lang=\"\" dir=\"rlo\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 22.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 21.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<charlie font-style=\"italic\" font-weight=\"bold\" letter-spacing=\"21.2\" xml:lang=\"\" dir=\"ltr\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#585756" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 22.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 21.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<booksmart font-family=\"DEF\" font-weight=\"normal\" color=\"#585756\" xml:lang=\"\" dir=\"rtl\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 22.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 21.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<quiet font-weight=\"bold\" color=\"#595A5958\" dir=\"lro\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 22.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 21.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<musicxmlishard font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#5C5B5A\" underline=\"0\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 22.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 21.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<bishop font-style=\"italic\" font-size=\"1.1\" color=\"#5D5E5D5C\" underline=\"1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 22.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 21.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<charlie font-family=\"XYZ\" font-size=\"large\" color=\"#605F5E\" underline=\"2\" overline=\"2\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 22.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 21.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<booksmart underline=\"0\" overline=\"0\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 22.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 21.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<quiet font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" underline=\"1\" overline=\"1\" line-through=\"1\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 23 ) );
	object.setLetterSpacing( MxNumberOrNormal( 22 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<musicxmlishard font-style=\"italic\" font-weight=\"bold\" underline=\"2\" overline=\"2\" line-through=\"2\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 23.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 22.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<bishop font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" overline=\"0\" line-through=\"0\" rotation=\"23.1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 23.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 22.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<charlie font-size=\"1.1\" font-weight=\"bold\" overline=\"1\" line-through=\"1\" rotation=\"23.2\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 23.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 22.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<booksmart font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#6C6B6A\" overline=\"2\" line-through=\"2\" rotation=\"23.3\" letter-spacing=\"22.3\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 23.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 22.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<quiet font-style=\"italic\" color=\"#6D6E6D6C\" line-through=\"0\" rotation=\"23.4\" letter-spacing=\"22.4\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 23.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 22.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<musicxmlishard font-family=\"DEF\" color=\"#706F6E\" line-through=\"1\" rotation=\"23.5\" letter-spacing=\"22.5\" xml:lang=\"\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 23.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 22.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<bishop color=\"#71727170\" line-through=\"2\" rotation=\"23.6\" letter-spacing=\"22.6\" xml:lang=\"\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 23.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 22.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<charlie font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#747372\" underline=\"0\" rotation=\"23.7\" letter-spacing=\"22.7\" xml:lang=\"\" dir=\"rlo\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 23.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 22.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<booksmart font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" underline=\"1\" rotation=\"23.8\" letter-spacing=\"22.8\" xml:lang=\"\" dir=\"ltr\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 23.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 22.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<quiet font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" underline=\"2\" rotation=\"23.9\" letter-spacing=\"22.9\" xml:lang=\"\" dir=\"rtl\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 24 ) );
	object.setLetterSpacing( MxNumberOrNormal( 23 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<musicxmlishard font-weight=\"bold\" underline=\"0\" letter-spacing=\"23\" xml:lang=\"\" dir=\"lro\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 24.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 23.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<bishop font-family=\"DEF\" font-style=\"normal\" underline=\"1\" overline=\"1\" letter-spacing=\"23.1\" xml:lang=\"\" dir=\"rlo\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 24.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 23.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<charlie font-style=\"italic\" underline=\"2\" overline=\"2\" letter-spacing=\"23.2\" xml:lang=\"\" dir=\"ltr\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 24.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 23.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<booksmart font-family=\"ABC\" font-size=\"large\" color=\"#807F7E\" overline=\"0\" xml:lang=\"\" dir=\"rtl\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 24.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 23.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<quiet font-size=\"1.1\" color=\"#81828180\" overline=\"1\" xml:lang=\"\" dir=\"lro\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 24.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 23.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<musicxmlishard font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#848382\" overline=\"2\" line-through=\"2\" xml:lang=\"\" dir=\"rlo\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 24.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 23.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<bishop font-style=\"italic\" font-weight=\"bold\" color=\"#85868584\" overline=\"0\" line-through=\"0\" dir=\"ltr\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 24.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 23.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<charlie font-family=\"DEF\" font-weight=\"normal\" color=\"#888786\" overline=\"1\" line-through=\"1\" dir=\"rtl\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 24.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 23.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<booksmart font-weight=\"bold\" line-through=\"2\" dir=\"lro\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 24.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 23.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<quiet font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" underline=\"0\" line-through=\"0\" rotation=\"24.9\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 25 ) );
	object.setLetterSpacing( MxNumberOrNormal( 24 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<musicxmlishard font-style=\"italic\" font-size=\"1.1\" underline=\"1\" line-through=\"1\" rotation=\"25\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 25.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 24.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<bishop font-family=\"XYZ\" font-size=\"large\" underline=\"2\" line-through=\"2\" rotation=\"25.1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 25.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 24.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<charlie underline=\"0\" line-through=\"0\" rotation=\"25.2\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 25.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 24.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<booksmart font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" color=\"#949392\" underline=\"1\" rotation=\"25.3\" letter-spacing=\"24.3\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 25.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 24.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<quiet font-style=\"italic\" font-weight=\"bold\" color=\"#95969594\" underline=\"2\" rotation=\"25.4\" letter-spacing=\"24.4\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 25.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 24.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<musicxmlishard font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" color=\"#989796\" overline=\"0\" rotation=\"25.5\" letter-spacing=\"24.5\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 25.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 24.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<bishop font-size=\"1.1\" font-weight=\"bold\" color=\"#999A9998\" overline=\"1\" rotation=\"25.6\" letter-spacing=\"24.6\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 25.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 24.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<charlie font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#9C9B9A\" overline=\"2\" rotation=\"25.7\" letter-spacing=\"24.7\" xml:lang=\"\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 25.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 24.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<booksmart font-style=\"italic\" overline=\"0\" letter-spacing=\"24.8\" xml:lang=\"\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 25.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 24.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<quiet font-family=\"DEF\" overline=\"1\" letter-spacing=\"24.9\" xml:lang=\"\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 26 ) );
	object.setLetterSpacing( MxNumberOrNormal( 25 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<musicxmlishard overline=\"2\" letter-spacing=\"25\" xml:lang=\"\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 26.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 25.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<bishop font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" underline=\"0\" overline=\"0\" line-through=\"0\" letter-spacing=\"25.1\" xml:lang=\"\" dir=\"rlo\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 26.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 25.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<charlie font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" underline=\"1\" line-through=\"1\" letter-spacing=\"25.2\" xml:lang=\"\" dir=\"ltr\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 26.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 25.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<booksmart font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" color=\"#A8A7A6\" underline=\"2\" line-through=\"2\" xml:lang=\"\" dir=\"rtl\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 26.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 25.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<quiet font-weight=\"bold\" color=\"#A9AAA9A8\" underline=\"0\" line-through=\"0\" xml:lang=\"\" dir=\"lro\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 26.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 25.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<musicxmlishard font-family=\"DEF\" font-style=\"normal\" color=\"#ACABAA\" underline=\"1\" line-through=\"1\" xml:lang=\"\" dir=\"rlo\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 26.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 25.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<bishop font-style=\"italic\" color=\"#ADAEADAC\" underline=\"2\" line-through=\"2\" xml:lang=\"\" dir=\"ltr\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 26.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 25.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<charlie font-family=\"ABC\" font-size=\"large\" color=\"#B0AFAE\" line-through=\"0\" rotation=\"26.7\" xml:lang=\"\" dir=\"rtl\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 26.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 25.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<booksmart font-size=\"1.1\" line-through=\"1\" rotation=\"26.8\" dir=\"lro\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 26.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 25.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<quiet font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" overline=\"2\" rotation=\"26.9\" dir=\"rlo\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 27 ) );
	object.setLetterSpacing( MxNumberOrNormal( 26 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<musicxmlishard font-style=\"italic\" font-weight=\"bold\" overline=\"0\" rotation=\"27\" dir=\"ltr\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 27.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 26.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<bishop font-family=\"DEF\" font-weight=\"normal\" overline=\"1\" rotation=\"27.1\" dir=\"rtl\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 27.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 26.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<charlie font-weight=\"bold\" overline=\"2\" rotation=\"27.2\" dir=\"lro\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 27.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 26.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<booksmart font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#BCBBBA\" underline=\"0\" overline=\"0\" rotation=\"27.3\" letter-spacing=\"26.3\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 27.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 26.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<quiet font-style=\"italic\" font-size=\"1.1\" color=\"#BDBEBDBC\" underline=\"1\" overline=\"1\" rotation=\"27.4\" letter-spacing=\"26.4\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 27.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 26.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<musicxmlishard font-family=\"XYZ\" font-size=\"large\" color=\"#C0BFBE\" underline=\"2\" overline=\"2\" rotation=\"27.5\" letter-spacing=\"26.5\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 27.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 26.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<bishop color=\"#C1C2C1C0\" underline=\"0\" letter-spacing=\"26.6\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 27.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 26.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<charlie font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" color=\"#C4C3C2\" underline=\"1\" line-through=\"1\" letter-spacing=\"26.7\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 27.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 26.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<booksmart font-style=\"italic\" font-weight=\"bold\" underline=\"2\" line-through=\"2\" letter-spacing=\"26.8\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 27.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 26.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<quiet font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" line-through=\"0\" letter-spacing=\"26.9\" xml:lang=\"\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 28 ) );
	object.setLetterSpacing( MxNumberOrNormal( 27 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<musicxmlishard font-size=\"1.1\" font-weight=\"bold\" line-through=\"1\" letter-spacing=\"27\" xml:lang=\"\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 28.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 27.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<bishop font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" line-through=\"2\" letter-spacing=\"27.1\" xml:lang=\"\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 28.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 27.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<charlie font-style=\"italic\" line-through=\"0\" letter-spacing=\"27.2\" xml:lang=\"\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 28.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 27.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<booksmart font-family=\"DEF\" color=\"#D0CFCE\" overline=\"1\" line-through=\"1\" xml:lang=\"\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 28.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 27.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<quiet color=\"#D1D2D1D0\" overline=\"2\" line-through=\"2\" xml:lang=\"\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 28.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 27.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<musicxmlishard font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#D4D3D2\" underline=\"0\" overline=\"0\" rotation=\"28.5\" xml:lang=\"\" dir=\"rlo\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 28.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 27.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<bishop font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#D5D6D5D4\" underline=\"1\" overline=\"1\" rotation=\"28.6\" xml:lang=\"\" dir=\"ltr\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 28.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 27.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<charlie font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" color=\"#D8D7D6\" underline=\"2\" overline=\"2\" rotation=\"28.7\" xml:lang=\"\" dir=\"rtl\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 28.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 27.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<booksmart font-weight=\"bold\" underline=\"0\" overline=\"0\" rotation=\"28.8\" xml:lang=\"\" dir=\"lro\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 28.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 27.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<quiet font-family=\"DEF\" font-style=\"normal\" underline=\"1\" overline=\"1\" rotation=\"28.9\" xml:lang=\"\" dir=\"rlo\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 29 ) );
	object.setLetterSpacing( MxNumberOrNormal( 28 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<musicxmlishard font-style=\"italic\" underline=\"2\" rotation=\"29\" dir=\"ltr\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 29.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 28.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<bishop font-family=\"ABC\" font-size=\"large\" rotation=\"29.1\" dir=\"rtl\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 29.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 28.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<charlie font-size=\"1.1\" rotation=\"29.2\" dir=\"lro\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 29.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 28.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<booksmart font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#E4E3E2\" line-through=\"2\" rotation=\"29.3\" letter-spacing=\"28.3\" dir=\"rlo\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 29.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 28.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<quiet font-style=\"italic\" font-weight=\"bold\" color=\"#E5E6E5E4\" line-through=\"0\" letter-spacing=\"28.4\" dir=\"ltr\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 29.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 28.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<musicxmlishard font-family=\"DEF\" font-weight=\"normal\" color=\"#E8E7E6\" line-through=\"1\" letter-spacing=\"28.5\" dir=\"rtl\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 29.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 28.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<bishop font-weight=\"bold\" color=\"#E9EAE9E8\" line-through=\"2\" letter-spacing=\"28.6\" dir=\"lro\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 29.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 28.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<charlie font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#ECEBEA\" underline=\"0\" overline=\"0\" line-through=\"0\" letter-spacing=\"28.7\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 29.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 28.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<booksmart font-style=\"italic\" font-size=\"1.1\" underline=\"1\" overline=\"1\" line-through=\"1\" letter-spacing=\"28.8\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 29.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 28.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<quiet font-family=\"XYZ\" font-size=\"large\" underline=\"2\" overline=\"2\" line-through=\"2\" letter-spacing=\"28.9\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 30 ) );
	object.setLetterSpacing( MxNumberOrNormal( 29 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<musicxmlishard underline=\"0\" overline=\"0\" line-through=\"0\" letter-spacing=\"29\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 30.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 29.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<bishop font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" underline=\"1\" overline=\"1\" letter-spacing=\"29.1\" xml:lang=\"\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 30.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 29.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<charlie font-style=\"italic\" font-weight=\"bold\" underline=\"2\" overline=\"2\" letter-spacing=\"29.2\" xml:lang=\"\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 30.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 29.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<booksmart font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" color=\"#F8F7F6\" overline=\"0\" rotation=\"30.3\" xml:lang=\"\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 30.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 29.4 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<quiet font-size=\"1.1\" font-weight=\"bold\" color=\"#F9FAF9F8\" rotation=\"30.4\" xml:lang=\"\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 30.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 29.5 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<musicxmlishard font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#FCFBFA\" rotation=\"30.5\" xml:lang=\"\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 30.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 29.6 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<bishop font-style=\"italic\" color=\"#FDFEFDFC\" rotation=\"30.6\" xml:lang=\"\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 30.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 29.7 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<charlie font-family=\"DEF\" color=\"#00FFFE\" rotation=\"30.7\" xml:lang=\"\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 30.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 29.8 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<booksmart rotation=\"30.8\" xml:lang=\"\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "quiet", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#040302" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 30.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 29.9 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	expected = "<quiet font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" underline=\"0\" line-through=\"0\" rotation=\"30.9\" xml:lang=\"\" dir=\"rlo\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 31 ) );
	object.setLetterSpacing( MxNumberOrNormal( 30 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	expected = "<musicxmlishard font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" underline=\"1\" line-through=\"1\" rotation=\"31\" xml:lang=\"\" dir=\"ltr\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "bishop", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#080706" ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 31.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 30.1 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	expected = "<bishop font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"31.1\" xml:lang=\"\" dir=\"rtl\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "charlie", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 31.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 30.2 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	expected = "<charlie font-weight=\"bold\" underline=\"0\" overline=\"0\" line-through=\"0\" dir=\"lro\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object( "booksmart", XsString( "D,E,F" ) );
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
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 31.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 30.3 ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
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

TEST( getIsFontFamilyDefaultDefined, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsUnderlineDefaultDefined, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsUnderlineDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsOverlineDefaultDefined, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsOverlineDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineThroughDefaultDefined, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsLineThroughDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRotationDefaultDefined, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsRotationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLetterSpacingDefaultDefined, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = true;
	bool actual = object.getIsLetterSpacingDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangDefaultDefined, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsXmlLangDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDirDefaultDefined, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	bool expected = false;
	bool actual = object.getIsDirDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getFontFamilyDefaultValue, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getUnderlineDefaultValue, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getUnderlineDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getOverlineDefaultValue, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getOverlineDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineThroughDefaultValue, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getLineThroughDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRotationDefaultValue, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	MxNumberRotationDegrees expected;
	MxNumberRotationDegrees actual = object.getRotationDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLetterSpacingDefaultValue, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	MxNumberOrNormal expected( "normal" );
	MxNumberOrNormal actual = object.getLetterSpacingDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlLangDefaultValue, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	XmlLang expected;
	XmlLang actual = object.getXmlLangDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDirDefaultValue, MxCxSmpTextElementData )
{
	MxCxSmpTextElementData object;
	MxEnumTextDirection expected;
	MxEnumTextDirection actual = object.getDirDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


