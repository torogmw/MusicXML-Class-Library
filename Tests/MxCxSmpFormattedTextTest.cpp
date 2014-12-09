/** *******************************************************
  * 
  * MxCxSmpFormattedTextTest.cpp
  * Created: 2014-12-02 17:31:50
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpFormattedText.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getJustify().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getHalign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxEnumValign(  ) ).toString();
	std::string actual = object.getValign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getUnderline().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getOverline().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues14, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getLineThrough().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues15, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxNumberRotationDegrees(  ) ).toString();
	std::string actual = object.getRotation().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues16, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxNumberOrNormal( "normal" ) ).toString();
	std::string actual = object.getLetterSpacing().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues17, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxNumberOrNormal(  ) ).toString();
	std::string actual = object.getLineHeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues18, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( XmlLang(  ) ).toString();
	std::string actual = object.getXmlLang().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues19, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( XmlSpace(  ) ).toString();
	std::string actual = object.getXmlSpace().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues20, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxEnumTextDirection(  ) ).toString();
	std::string actual = object.getDir().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues21, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = ( MxEnumEnclosureShape(  ) ).toString();
	std::string actual = object.getEnclosure().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "" ) );
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
TEST( ctorValueAndElementName2, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
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
TEST( ctorValueAndElementName4, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "X,Y,Z" ) );
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
TEST( ctorValueAndElementName6, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
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
TEST( ctorValueAndElementName8, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "X,Y,Z" ) );
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

TEST( getClassName, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = "MxCxSmpFormattedText";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = "formatted-text";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	std::string expected = "The formatted-text type represents a text element with text-formatting attributes.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setJustify0, MxCxSmpFormattedText )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setJustify( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getJustify();
	CHECK_EQUAL( expected, actual )
	object.setJustify( value2 );
	expected = value2;
	actual = object.getJustify();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX1, MxCxSmpFormattedText )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY2, MxCxSmpFormattedText )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX3, MxCxSmpFormattedText )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY4, MxCxSmpFormattedText )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily5, MxCxSmpFormattedText )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle6, MxCxSmpFormattedText )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize7, MxCxSmpFormattedText )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight8, MxCxSmpFormattedText )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor9, MxCxSmpFormattedText )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setHalign10, MxCxSmpFormattedText )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setHalign( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
	object.setHalign( value2 );
	expected = value2;
	actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
}
TEST( setValign11, MxCxSmpFormattedText )
{
	MxEnumValign value1( lexicon::enums::Valign::baseline );
	MxEnumValign value2( lexicon::enums::Valign::bottom );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setValign( value1 );
	MxEnumValign expected = value1;
	MxEnumValign actual = object.getValign();
	CHECK_EQUAL( expected, actual )
	object.setValign( value2 );
	expected = value2;
	actual = object.getValign();
	CHECK_EQUAL( expected, actual )
}
TEST( setUnderline12, MxCxSmpFormattedText )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setUnderline( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getUnderline();
	CHECK_EQUAL( expected, actual )
	object.setUnderline( value2 );
	expected = value2;
	actual = object.getUnderline();
	CHECK_EQUAL( expected, actual )
}
TEST( setOverline13, MxCxSmpFormattedText )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setOverline( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getOverline();
	CHECK_EQUAL( expected, actual )
	object.setOverline( value2 );
	expected = value2;
	actual = object.getOverline();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineThrough14, MxCxSmpFormattedText )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setLineThrough( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getLineThrough();
	CHECK_EQUAL( expected, actual )
	object.setLineThrough( value2 );
	expected = value2;
	actual = object.getLineThrough();
	CHECK_EQUAL( expected, actual )
}
TEST( setRotation15, MxCxSmpFormattedText )
{
	MxNumberRotationDegrees value1( -179.9 );
	MxNumberRotationDegrees value2( -179.8 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setRotation( value1 );
	MxNumberRotationDegrees expected = value1;
	MxNumberRotationDegrees actual = object.getRotation();
	CHECK_EQUAL( expected, actual )
	object.setRotation( value2 );
	expected = value2;
	actual = object.getRotation();
	CHECK_EQUAL( expected, actual )
}
TEST( setLetterSpacing16, MxCxSmpFormattedText )
{
	MxNumberOrNormal value1( 0.1 );
	MxNumberOrNormal value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setLetterSpacing( value1 );
	MxNumberOrNormal expected = value1;
	MxNumberOrNormal actual = object.getLetterSpacing();
	CHECK_EQUAL( expected, actual )
	object.setLetterSpacing( value2 );
	expected = value2;
	actual = object.getLetterSpacing();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineHeight17, MxCxSmpFormattedText )
{
	MxNumberOrNormal value1( 0.1 );
	MxNumberOrNormal value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setLineHeight( value1 );
	MxNumberOrNormal expected = value1;
	MxNumberOrNormal actual = object.getLineHeight();
	CHECK_EQUAL( expected, actual )
	object.setLineHeight( value2 );
	expected = value2;
	actual = object.getLineHeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setXmlLang18, MxCxSmpFormattedText )
{
	XmlLang value1( "en" );
	XmlLang value2( "fr" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setXmlLang( value1 );
	XmlLang expected = value1;
	XmlLang actual = object.getXmlLang();
	CHECK_EQUAL( expected, actual )
	object.setXmlLang( value2 );
	expected = value2;
	actual = object.getXmlLang();
	CHECK_EQUAL( expected, actual )
}
TEST( setXmlSpace19, MxCxSmpFormattedText )
{
	XmlSpace value1( lexicon::enums::XmlSpace::preserve );
	XmlSpace value2( lexicon::enums::XmlSpace::default_ );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setXmlSpace( value1 );
	XmlSpace expected = value1;
	XmlSpace actual = object.getXmlSpace();
	CHECK_EQUAL( expected, actual )
	object.setXmlSpace( value2 );
	expected = value2;
	actual = object.getXmlSpace();
	CHECK_EQUAL( expected, actual )
}
TEST( setDir20, MxCxSmpFormattedText )
{
	MxEnumTextDirection value1( lexicon::enums::TextDirection::rlo );
	MxEnumTextDirection value2( lexicon::enums::TextDirection::lro );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setDir( value1 );
	MxEnumTextDirection expected = value1;
	MxEnumTextDirection actual = object.getDir();
	CHECK_EQUAL( expected, actual )
	object.setDir( value2 );
	expected = value2;
	actual = object.getDir();
	CHECK_EQUAL( expected, actual )
}
TEST( setEnclosure21, MxCxSmpFormattedText )
{
	MxEnumEnclosureShape value1( lexicon::enums::EnclosureShape::none );
	MxEnumEnclosureShape value2( lexicon::enums::EnclosureShape::diamond );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFormattedText object;
	object.setEnclosure( value1 );
	MxEnumEnclosureShape expected = value1;
	MxEnumEnclosureShape actual = object.getEnclosure();
	CHECK_EQUAL( expected, actual )
	object.setEnclosure( value2 );
	expected = value2;
	actual = object.getEnclosure();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsJustifyRequired0, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsJustifyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired1, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired2, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired3, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired4, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired5, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired6, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired7, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired8, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired9, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignRequired10, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsHalignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignRequired11, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsValignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsUnderlineRequired12, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsUnderlineRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsOverlineRequired13, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsOverlineRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineThroughRequired14, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsLineThroughRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRotationRequired15, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsRotationRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLetterSpacingRequired16, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsLetterSpacingRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineHeightRequired17, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsLineHeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangRequired18, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsXmlLangRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlSpaceRequired19, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsXmlSpaceRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDirRequired20, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsDirRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEnclosureRequired21, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsEnclosureRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsJustifyPresent0, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
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
TEST( getIsDefaultXPresent1, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
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
TEST( getIsDefaultYPresent2, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
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
TEST( getIsRelativeXPresent3, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
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
TEST( getIsRelativeYPresent4, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
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
TEST( getIsFontFamilyPresent5, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
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
TEST( getIsFontStylePresent6, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
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
TEST( getIsFontSizePresent7, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
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
TEST( getIsFontWeightPresent8, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
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
TEST( getIsColorPresent9, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
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
TEST( getIsHalignPresent10, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
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
TEST( getIsValignPresent11, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
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
TEST( getIsUnderlinePresent12, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
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
TEST( getIsOverlinePresent13, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
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
TEST( getIsLineThroughPresent14, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
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
TEST( getIsRotationPresent15, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
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
TEST( getIsLetterSpacingPresent16, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
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
TEST( getIsLineHeightPresent17, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsLineHeightPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLineHeightPresent( true );
	expected = true;
	actual = object.getIsLineHeightPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLineHeightPresent( false );
	expected = false;
	actual = object.getIsLineHeightPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangPresent18, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
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
TEST( getIsXmlSpacePresent19, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsXmlSpacePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsXmlSpacePresent( true );
	expected = true;
	actual = object.getIsXmlSpacePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsXmlSpacePresent( false );
	expected = false;
	actual = object.getIsXmlSpacePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDirPresent20, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
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
TEST( getIsEnclosurePresent21, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsEnclosurePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsEnclosurePresent( true );
	expected = true;
	actual = object.getIsEnclosurePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsEnclosurePresent( false );
	expected = false;
	actual = object.getIsEnclosurePresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 31.4 ) );
	object.setDefaultY( MxNumberTenths( 31.4 ) );
	object.setRelativeX( MxNumberTenths( 31.4 ) );
	object.setRelativeY( MxNumberTenths( 31.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 11.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 10.2 ) );
	object.setLineHeight( MxNumberOrNormal( 10.2 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	object.setIsJustifyPresent( true );
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
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	expected = "<booksmart justify=\"left\" default-x=\"31.4\" default-y=\"31.4\" relative-x=\"31.4\" relative-y=\"31.4\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#605F5E\" halign=\"left\" valign=\"bottom\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"11.2\" letter-spacing=\"10.2\" line-height=\"10.2\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
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
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 31.5 ) );
	object.setDefaultY( MxNumberTenths( 31.5 ) );
	object.setRelativeX( MxNumberTenths( 31.5 ) );
	object.setRelativeY( MxNumberTenths( 31.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 11.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 10.3 ) );
	object.setLineHeight( MxNumberOrNormal( 10.3 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<quiet default-x=\"31.5\" default-y=\"31.5\" relative-x=\"31.5\" relative-y=\"31.5\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#61626160\" halign=\"center\" valign=\"baseline\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"11.3\" letter-spacing=\"10.3\" line-height=\"10.3\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
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
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 31.6 ) );
	object.setDefaultY( MxNumberTenths( 31.6 ) );
	object.setRelativeX( MxNumberTenths( 31.6 ) );
	object.setRelativeY( MxNumberTenths( 31.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 11.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 10.4 ) );
	object.setLineHeight( MxNumberOrNormal( 10.4 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<musicxmlishard justify=\"right\" default-y=\"31.6\" relative-x=\"31.6\" relative-y=\"31.6\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#646362\" halign=\"right\" valign=\"top\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"11.4\" letter-spacing=\"10.4\" line-height=\"10.4\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
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
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 31.7 ) );
	object.setDefaultY( MxNumberTenths( 31.7 ) );
	object.setRelativeX( MxNumberTenths( 31.7 ) );
	object.setRelativeY( MxNumberTenths( 31.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 11.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 10.5 ) );
	object.setLineHeight( MxNumberOrNormal( 10.5 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<bishop relative-x=\"31.7\" relative-y=\"31.7\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#65666564\" halign=\"left\" valign=\"middle\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"11.5\" letter-spacing=\"10.5\" line-height=\"10.5\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
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
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 31.8 ) );
	object.setDefaultY( MxNumberTenths( 31.8 ) );
	object.setRelativeX( MxNumberTenths( 31.8 ) );
	object.setRelativeY( MxNumberTenths( 31.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 11.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 10.6 ) );
	object.setLineHeight( MxNumberOrNormal( 10.6 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<charlie justify=\"center\" default-x=\"31.8\" relative-y=\"31.8\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#686766\" halign=\"center\" valign=\"bottom\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"11.6\" letter-spacing=\"10.6\" line-height=\"10.6\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
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
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 31.9 ) );
	object.setDefaultY( MxNumberTenths( 31.9 ) );
	object.setRelativeX( MxNumberTenths( 31.9 ) );
	object.setRelativeY( MxNumberTenths( 31.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 11.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 10.7 ) );
	object.setLineHeight( MxNumberOrNormal( 10.7 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<booksmart default-x=\"31.9\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#696A6968\" halign=\"right\" valign=\"baseline\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"11.7\" letter-spacing=\"10.7\" line-height=\"10.7\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 32 ) );
	object.setDefaultY( MxNumberTenths( 32 ) );
	object.setRelativeX( MxNumberTenths( 32 ) );
	object.setRelativeY( MxNumberTenths( 32 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 11.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 10.8 ) );
	object.setLineHeight( MxNumberOrNormal( 10.8 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<quiet justify=\"left\" default-y=\"32\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#6C6B6A\" halign=\"left\" valign=\"top\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"11.8\" letter-spacing=\"10.8\" line-height=\"10.8\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
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
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 32.1 ) );
	object.setDefaultY( MxNumberTenths( 32.1 ) );
	object.setRelativeX( MxNumberTenths( 32.1 ) );
	object.setRelativeY( MxNumberTenths( 32.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 11.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 10.9 ) );
	object.setLineHeight( MxNumberOrNormal( 10.9 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<musicxmlishard default-y=\"32.1\" font-size=\"1.1\" font-weight=\"bold\" color=\"#6D6E6D6C\" halign=\"center\" valign=\"middle\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"11.9\" letter-spacing=\"10.9\" line-height=\"10.9\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 32.2 ) );
	object.setDefaultY( MxNumberTenths( 32.2 ) );
	object.setRelativeX( MxNumberTenths( 32.2 ) );
	object.setRelativeY( MxNumberTenths( 32.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 12 ) );
	object.setLetterSpacing( MxNumberOrNormal( 11 ) );
	object.setLineHeight( MxNumberOrNormal( 11 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<bishop justify=\"right\" default-x=\"32.2\" default-y=\"32.2\" relative-x=\"32.2\" font-weight=\"normal\" color=\"#706F6E\" halign=\"right\" valign=\"bottom\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"12\" letter-spacing=\"11\" line-height=\"11\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 32.3 ) );
	object.setDefaultY( MxNumberTenths( 32.3 ) );
	object.setRelativeX( MxNumberTenths( 32.3 ) );
	object.setRelativeY( MxNumberTenths( 32.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 12.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 11.1 ) );
	object.setLineHeight( MxNumberOrNormal( 11.1 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<charlie default-x=\"32.3\" relative-x=\"32.3\" color=\"#71727170\" halign=\"left\" valign=\"baseline\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"12.1\" letter-spacing=\"11.1\" line-height=\"11.1\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 32.4 ) );
	object.setDefaultY( MxNumberTenths( 32.4 ) );
	object.setRelativeX( MxNumberTenths( 32.4 ) );
	object.setRelativeY( MxNumberTenths( 32.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 12.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 11.2 ) );
	object.setLineHeight( MxNumberOrNormal( 11.2 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<booksmart justify=\"center\" relative-x=\"32.4\" relative-y=\"32.4\" halign=\"center\" valign=\"top\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"12.2\" letter-spacing=\"11.2\" line-height=\"11.2\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
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
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 32.5 ) );
	object.setDefaultY( MxNumberTenths( 32.5 ) );
	object.setRelativeX( MxNumberTenths( 32.5 ) );
	object.setRelativeY( MxNumberTenths( 32.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 12.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 11.3 ) );
	object.setLineHeight( MxNumberOrNormal( 11.3 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<quiet relative-x=\"32.5\" relative-y=\"32.5\" valign=\"middle\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"12.3\" letter-spacing=\"11.3\" line-height=\"11.3\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 32.6 ) );
	object.setDefaultY( MxNumberTenths( 32.6 ) );
	object.setRelativeX( MxNumberTenths( 32.6 ) );
	object.setRelativeY( MxNumberTenths( 32.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 12.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 11.4 ) );
	object.setLineHeight( MxNumberOrNormal( 11.4 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<musicxmlishard justify=\"left\" default-x=\"32.6\" default-y=\"32.6\" relative-y=\"32.6\" font-family=\"ABC\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"12.4\" letter-spacing=\"11.4\" line-height=\"11.4\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 32.7 ) );
	object.setDefaultY( MxNumberTenths( 32.7 ) );
	object.setRelativeX( MxNumberTenths( 32.7 ) );
	object.setRelativeY( MxNumberTenths( 32.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 12.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 11.5 ) );
	object.setLineHeight( MxNumberOrNormal( 11.5 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<bishop default-x=\"32.7\" default-y=\"32.7\" relative-y=\"32.7\" font-family=\"DEF\" overline=\"2\" line-through=\"2\" rotation=\"12.5\" letter-spacing=\"11.5\" line-height=\"11.5\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
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
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 32.8 ) );
	object.setDefaultY( MxNumberTenths( 32.8 ) );
	object.setRelativeX( MxNumberTenths( 32.8 ) );
	object.setRelativeY( MxNumberTenths( 32.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 12.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 11.6 ) );
	object.setLineHeight( MxNumberOrNormal( 11.6 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<charlie justify=\"right\" default-y=\"32.8\" relative-y=\"32.8\" font-family=\"XYZ\" font-style=\"normal\" line-through=\"0\" rotation=\"12.6\" letter-spacing=\"11.6\" line-height=\"11.6\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 32.9 ) );
	object.setDefaultY( MxNumberTenths( 32.9 ) );
	object.setRelativeX( MxNumberTenths( 32.9 ) );
	object.setRelativeY( MxNumberTenths( 32.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 12.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 11.7 ) );
	object.setLineHeight( MxNumberOrNormal( 11.7 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<booksmart font-family=\"ABC\" font-style=\"italic\" rotation=\"12.7\" letter-spacing=\"11.7\" line-height=\"11.7\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 33 ) );
	object.setDefaultY( MxNumberTenths( 33 ) );
	object.setRelativeX( MxNumberTenths( 33 ) );
	object.setRelativeY( MxNumberTenths( 33 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 12.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 11.8 ) );
	object.setLineHeight( MxNumberOrNormal( 11.8 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<quiet justify=\"center\" default-x=\"33\" relative-x=\"33\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" letter-spacing=\"11.8\" line-height=\"11.8\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 33.1 ) );
	object.setDefaultY( MxNumberTenths( 33.1 ) );
	object.setRelativeX( MxNumberTenths( 33.1 ) );
	object.setRelativeY( MxNumberTenths( 33.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 12.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 11.9 ) );
	object.setLineHeight( MxNumberOrNormal( 11.9 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<musicxmlishard default-x=\"33.1\" relative-x=\"33.1\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" line-height=\"11.9\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 33.2 ) );
	object.setDefaultY( MxNumberTenths( 33.2 ) );
	object.setRelativeX( MxNumberTenths( 33.2 ) );
	object.setRelativeY( MxNumberTenths( 33.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 13 ) );
	object.setLetterSpacing( MxNumberOrNormal( 12 ) );
	object.setLineHeight( MxNumberOrNormal( 12 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<bishop justify=\"left\" default-y=\"33.2\" relative-x=\"33.2\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 33.3 ) );
	object.setDefaultY( MxNumberTenths( 33.3 ) );
	object.setRelativeX( MxNumberTenths( 33.3 ) );
	object.setRelativeY( MxNumberTenths( 33.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 13.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 12.1 ) );
	object.setLineHeight( MxNumberOrNormal( 12.1 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<charlie default-y=\"33.3\" relative-x=\"33.3\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 33.4 ) );
	object.setDefaultY( MxNumberTenths( 33.4 ) );
	object.setRelativeX( MxNumberTenths( 33.4 ) );
	object.setRelativeY( MxNumberTenths( 33.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 13.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 12.2 ) );
	object.setLineHeight( MxNumberOrNormal( 12.2 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<booksmart justify=\"right\" default-x=\"33.4\" default-y=\"33.4\" relative-y=\"33.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#888786\" dir=\"lro\" enclosure=\"oval\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 33.5 ) );
	object.setDefaultY( MxNumberTenths( 33.5 ) );
	object.setRelativeX( MxNumberTenths( 33.5 ) );
	object.setRelativeY( MxNumberTenths( 33.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 13.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 12.3 ) );
	object.setLineHeight( MxNumberOrNormal( 12.3 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<quiet default-x=\"33.5\" relative-y=\"33.5\" font-size=\"1.1\" font-weight=\"bold\" color=\"#898A8988\" enclosure=\"circle\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 33.6 ) );
	object.setDefaultY( MxNumberTenths( 33.6 ) );
	object.setRelativeX( MxNumberTenths( 33.6 ) );
	object.setRelativeY( MxNumberTenths( 33.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 13.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 12.4 ) );
	object.setLineHeight( MxNumberOrNormal( 12.4 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<musicxmlishard justify=\"center\" relative-y=\"33.6\" font-size=\"large\" font-weight=\"normal\" color=\"#8C8B8A\" halign=\"center\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 33.7 ) );
	object.setDefaultY( MxNumberTenths( 33.7 ) );
	object.setRelativeX( MxNumberTenths( 33.7 ) );
	object.setRelativeY( MxNumberTenths( 33.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 13.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 12.5 ) );
	object.setLineHeight( MxNumberOrNormal( 12.5 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<bishop relative-y=\"33.7\" font-size=\"1.1\" font-weight=\"bold\" color=\"#8D8E8D8C\" halign=\"right\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 33.8 ) );
	object.setDefaultY( MxNumberTenths( 33.8 ) );
	object.setRelativeX( MxNumberTenths( 33.8 ) );
	object.setRelativeY( MxNumberTenths( 33.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 13.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 12.6 ) );
	object.setLineHeight( MxNumberOrNormal( 12.6 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<charlie justify=\"left\" default-x=\"33.8\" default-y=\"33.8\" relative-x=\"33.8\" relative-y=\"33.8\" font-family=\"ABC\" font-weight=\"normal\" color=\"#908F8E\" halign=\"left\" valign=\"bottom\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 33.9 ) );
	object.setDefaultY( MxNumberTenths( 33.9 ) );
	object.setRelativeX( MxNumberTenths( 33.9 ) );
	object.setRelativeY( MxNumberTenths( 33.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 13.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 12.7 ) );
	object.setLineHeight( MxNumberOrNormal( 12.7 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<booksmart default-x=\"33.9\" default-y=\"33.9\" relative-x=\"33.9\" font-family=\"DEF\" font-weight=\"bold\" color=\"#91929190\" halign=\"center\" valign=\"baseline\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 34 ) );
	object.setDefaultY( MxNumberTenths( 34 ) );
	object.setRelativeX( MxNumberTenths( 34 ) );
	object.setRelativeY( MxNumberTenths( 34 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 13.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 12.8 ) );
	object.setLineHeight( MxNumberOrNormal( 12.8 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<quiet justify=\"right\" default-y=\"34\" relative-x=\"34\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#949392\" halign=\"right\" valign=\"top\" underline=\"0\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
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
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 34.1 ) );
	object.setDefaultY( MxNumberTenths( 34.1 ) );
	object.setRelativeX( MxNumberTenths( 34.1 ) );
	object.setRelativeY( MxNumberTenths( 34.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 13.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 12.9 ) );
	object.setLineHeight( MxNumberOrNormal( 12.9 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<musicxmlishard relative-x=\"34.1\" font-family=\"ABC\" color=\"#95969594\" halign=\"left\" valign=\"middle\" underline=\"1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 34.2 ) );
	object.setDefaultY( MxNumberTenths( 34.2 ) );
	object.setRelativeX( MxNumberTenths( 34.2 ) );
	object.setRelativeY( MxNumberTenths( 34.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 14 ) );
	object.setLetterSpacing( MxNumberOrNormal( 13 ) );
	object.setLineHeight( MxNumberOrNormal( 13 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<bishop justify=\"center\" default-x=\"34.2\" font-family=\"DEF\" font-style=\"normal\" color=\"#989796\" halign=\"center\" valign=\"bottom\" underline=\"2\" overline=\"2\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 34.3 ) );
	object.setDefaultY( MxNumberTenths( 34.3 ) );
	object.setRelativeX( MxNumberTenths( 34.3 ) );
	object.setRelativeY( MxNumberTenths( 34.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 14.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 13.1 ) );
	object.setLineHeight( MxNumberOrNormal( 13.1 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<charlie default-x=\"34.3\" font-family=\"XYZ\" font-style=\"italic\" color=\"#999A9998\" halign=\"right\" valign=\"baseline\" underline=\"0\" overline=\"0\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 34.4 ) );
	object.setDefaultY( MxNumberTenths( 34.4 ) );
	object.setRelativeX( MxNumberTenths( 34.4 ) );
	object.setRelativeY( MxNumberTenths( 34.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 14.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 13.2 ) );
	object.setLineHeight( MxNumberOrNormal( 13.2 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<booksmart justify=\"left\" default-y=\"34.4\" relative-y=\"34.4\" font-style=\"normal\" halign=\"left\" valign=\"top\" underline=\"1\" overline=\"1\" line-through=\"1\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 34.5 ) );
	object.setDefaultY( MxNumberTenths( 34.5 ) );
	object.setRelativeX( MxNumberTenths( 34.5 ) );
	object.setRelativeY( MxNumberTenths( 34.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 14.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 13.3 ) );
	object.setLineHeight( MxNumberOrNormal( 13.3 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<quiet default-y=\"34.5\" relative-y=\"34.5\" font-style=\"italic\" halign=\"center\" valign=\"middle\" underline=\"2\" overline=\"2\" line-through=\"2\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 34.6 ) );
	object.setDefaultY( MxNumberTenths( 34.6 ) );
	object.setRelativeX( MxNumberTenths( 34.6 ) );
	object.setRelativeY( MxNumberTenths( 34.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 14.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 13.4 ) );
	object.setLineHeight( MxNumberOrNormal( 13.4 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<musicxmlishard justify=\"right\" default-x=\"34.6\" default-y=\"34.6\" relative-x=\"34.6\" relative-y=\"34.6\" font-style=\"normal\" font-size=\"large\" halign=\"right\" valign=\"bottom\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"14.4\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 34.7 ) );
	object.setDefaultY( MxNumberTenths( 34.7 ) );
	object.setRelativeX( MxNumberTenths( 34.7 ) );
	object.setRelativeY( MxNumberTenths( 34.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 14.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 13.5 ) );
	object.setLineHeight( MxNumberOrNormal( 13.5 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<bishop default-x=\"34.7\" relative-x=\"34.7\" relative-y=\"34.7\" font-style=\"italic\" font-size=\"1.1\" valign=\"baseline\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"14.5\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 34.8 ) );
	object.setDefaultY( MxNumberTenths( 34.8 ) );
	object.setRelativeX( MxNumberTenths( 34.8 ) );
	object.setRelativeY( MxNumberTenths( 34.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 14.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 13.6 ) );
	object.setLineHeight( MxNumberOrNormal( 13.6 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<charlie justify=\"center\" relative-x=\"34.8\" relative-y=\"34.8\" font-style=\"normal\" font-size=\"large\" valign=\"top\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"14.6\" letter-spacing=\"13.6\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 34.9 ) );
	object.setDefaultY( MxNumberTenths( 34.9 ) );
	object.setRelativeX( MxNumberTenths( 34.9 ) );
	object.setRelativeY( MxNumberTenths( 34.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 14.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 13.7 ) );
	object.setLineHeight( MxNumberOrNormal( 13.7 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<booksmart relative-x=\"34.9\" font-size=\"1.1\" valign=\"middle\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"14.7\" letter-spacing=\"13.7\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 35 ) );
	object.setDefaultY( MxNumberTenths( 35 ) );
	object.setRelativeX( MxNumberTenths( 35 ) );
	object.setRelativeY( MxNumberTenths( 35 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 14.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 13.8 ) );
	object.setLineHeight( MxNumberOrNormal( 13.8 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<quiet justify=\"left\" default-x=\"35\" default-y=\"35\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"14.8\" letter-spacing=\"13.8\" line-height=\"13.8\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 35.1 ) );
	object.setDefaultY( MxNumberTenths( 35.1 ) );
	object.setRelativeX( MxNumberTenths( 35.1 ) );
	object.setRelativeY( MxNumberTenths( 35.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 14.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 13.9 ) );
	object.setLineHeight( MxNumberOrNormal( 13.9 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<musicxmlishard default-x=\"35.1\" default-y=\"35.1\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"14.9\" letter-spacing=\"13.9\" line-height=\"13.9\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 35.2 ) );
	object.setDefaultY( MxNumberTenths( 35.2 ) );
	object.setRelativeX( MxNumberTenths( 35.2 ) );
	object.setRelativeY( MxNumberTenths( 35.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 15 ) );
	object.setLetterSpacing( MxNumberOrNormal( 14 ) );
	object.setLineHeight( MxNumberOrNormal( 14 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<bishop justify=\"right\" default-y=\"35.2\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"15\" letter-spacing=\"14\" line-height=\"14\" xml:lang=\"DEF\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 35.3 ) );
	object.setDefaultY( MxNumberTenths( 35.3 ) );
	object.setRelativeX( MxNumberTenths( 35.3 ) );
	object.setRelativeY( MxNumberTenths( 35.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 15.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 14.1 ) );
	object.setLineHeight( MxNumberOrNormal( 14.1 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<charlie font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" overline=\"1\" line-through=\"1\" rotation=\"15.1\" letter-spacing=\"14.1\" line-height=\"14.1\" xml:lang=\"XYZ\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 35.4 ) );
	object.setDefaultY( MxNumberTenths( 35.4 ) );
	object.setRelativeX( MxNumberTenths( 35.4 ) );
	object.setRelativeY( MxNumberTenths( 35.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 15.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 14.2 ) );
	object.setLineHeight( MxNumberOrNormal( 14.2 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<booksmart justify=\"center\" default-x=\"35.4\" relative-x=\"35.4\" relative-y=\"35.4\" font-family=\"DEF\" font-weight=\"normal\" color=\"#B0AFAE\" overline=\"2\" line-through=\"2\" rotation=\"15.2\" letter-spacing=\"14.2\" line-height=\"14.2\" xml:lang=\"ABC\" xml:space=\"default\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 35.5 ) );
	object.setDefaultY( MxNumberTenths( 35.5 ) );
	object.setRelativeX( MxNumberTenths( 35.5 ) );
	object.setRelativeY( MxNumberTenths( 35.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 15.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 14.3 ) );
	object.setLineHeight( MxNumberOrNormal( 14.3 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<quiet default-x=\"35.5\" relative-x=\"35.5\" relative-y=\"35.5\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#B1B2B1B0\" overline=\"0\" line-through=\"0\" rotation=\"15.3\" letter-spacing=\"14.3\" line-height=\"14.3\" xml:lang=\"DEF\" xml:space=\"preserve\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 35.6 ) );
	object.setDefaultY( MxNumberTenths( 35.6 ) );
	object.setRelativeX( MxNumberTenths( 35.6 ) );
	object.setRelativeY( MxNumberTenths( 35.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 15.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 14.4 ) );
	object.setLineHeight( MxNumberOrNormal( 14.4 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<musicxmlishard justify=\"left\" default-y=\"35.6\" relative-x=\"35.6\" relative-y=\"35.6\" font-style=\"normal\" font-weight=\"normal\" color=\"#B4B3B2\" line-through=\"1\" rotation=\"15.4\" letter-spacing=\"14.4\" line-height=\"14.4\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"ltr\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 35.7 ) );
	object.setDefaultY( MxNumberTenths( 35.7 ) );
	object.setRelativeX( MxNumberTenths( 35.7 ) );
	object.setRelativeY( MxNumberTenths( 35.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 15.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 14.5 ) );
	object.setLineHeight( MxNumberOrNormal( 14.5 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<bishop default-y=\"35.7\" relative-x=\"35.7\" relative-y=\"35.7\" font-style=\"italic\" font-weight=\"bold\" color=\"#B5B6B5B4\" line-through=\"2\" rotation=\"15.5\" letter-spacing=\"14.5\" line-height=\"14.5\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
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
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 35.8 ) );
	object.setDefaultY( MxNumberTenths( 35.8 ) );
	object.setRelativeX( MxNumberTenths( 35.8 ) );
	object.setRelativeY( MxNumberTenths( 35.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 15.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 14.6 ) );
	object.setLineHeight( MxNumberOrNormal( 14.6 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<charlie justify=\"right\" default-x=\"35.8\" default-y=\"35.8\" relative-y=\"35.8\" font-style=\"normal\" font-weight=\"normal\" color=\"#B8B7B6\" halign=\"right\" line-through=\"0\" rotation=\"15.6\" letter-spacing=\"14.6\" line-height=\"14.6\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 35.9 ) );
	object.setDefaultY( MxNumberTenths( 35.9 ) );
	object.setRelativeX( MxNumberTenths( 35.9 ) );
	object.setRelativeY( MxNumberTenths( 35.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 15.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 14.7 ) );
	object.setLineHeight( MxNumberOrNormal( 14.7 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<booksmart default-x=\"35.9\" font-style=\"italic\" color=\"#B9BAB9B8\" halign=\"left\" rotation=\"15.7\" letter-spacing=\"14.7\" line-height=\"14.7\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 36 ) );
	object.setDefaultY( MxNumberTenths( 36 ) );
	object.setRelativeX( MxNumberTenths( 36 ) );
	object.setRelativeY( MxNumberTenths( 36 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 15.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 14.8 ) );
	object.setLineHeight( MxNumberOrNormal( 14.8 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<quiet justify=\"center\" font-style=\"normal\" color=\"#BCBBBA\" halign=\"center\" rotation=\"15.8\" letter-spacing=\"14.8\" line-height=\"14.8\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 36.1 ) );
	object.setDefaultY( MxNumberTenths( 36.1 ) );
	object.setRelativeX( MxNumberTenths( 36.1 ) );
	object.setRelativeY( MxNumberTenths( 36.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 15.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 14.9 ) );
	object.setLineHeight( MxNumberOrNormal( 14.9 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<musicxmlishard font-style=\"italic\" color=\"#BDBEBDBC\" halign=\"right\" rotation=\"15.9\" letter-spacing=\"14.9\" line-height=\"14.9\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 36.2 ) );
	object.setDefaultY( MxNumberTenths( 36.2 ) );
	object.setRelativeX( MxNumberTenths( 36.2 ) );
	object.setRelativeY( MxNumberTenths( 36.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 16 ) );
	object.setLetterSpacing( MxNumberOrNormal( 15 ) );
	object.setLineHeight( MxNumberOrNormal( 15 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<bishop justify=\"left\" default-x=\"36.2\" default-y=\"36.2\" relative-x=\"36.2\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#C0BFBE\" halign=\"left\" valign=\"bottom\" letter-spacing=\"15\" line-height=\"15\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 36.3 ) );
	object.setDefaultY( MxNumberTenths( 36.3 ) );
	object.setRelativeX( MxNumberTenths( 36.3 ) );
	object.setRelativeY( MxNumberTenths( 36.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 16.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 15.1 ) );
	object.setLineHeight( MxNumberOrNormal( 15.1 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<charlie default-x=\"36.3\" default-y=\"36.3\" relative-x=\"36.3\" font-family=\"DEF\" font-size=\"1.1\" color=\"#C1C2C1C0\" halign=\"center\" valign=\"baseline\" letter-spacing=\"15.1\" line-height=\"15.1\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 36.4 ) );
	object.setDefaultY( MxNumberTenths( 36.4 ) );
	object.setRelativeX( MxNumberTenths( 36.4 ) );
	object.setRelativeY( MxNumberTenths( 36.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 16.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 15.2 ) );
	object.setLineHeight( MxNumberOrNormal( 15.2 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<booksmart justify=\"right\" default-y=\"36.4\" relative-x=\"36.4\" relative-y=\"36.4\" font-family=\"XYZ\" font-size=\"large\" halign=\"right\" valign=\"top\" letter-spacing=\"15.2\" line-height=\"15.2\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 36.5 ) );
	object.setDefaultY( MxNumberTenths( 36.5 ) );
	object.setRelativeX( MxNumberTenths( 36.5 ) );
	object.setRelativeY( MxNumberTenths( 36.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 16.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 15.3 ) );
	object.setLineHeight( MxNumberOrNormal( 15.3 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<quiet relative-x=\"36.5\" relative-y=\"36.5\" font-family=\"ABC\" font-size=\"1.1\" halign=\"left\" valign=\"middle\" line-height=\"15.3\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 36.6 ) );
	object.setDefaultY( MxNumberTenths( 36.6 ) );
	object.setRelativeX( MxNumberTenths( 36.6 ) );
	object.setRelativeY( MxNumberTenths( 36.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 16.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 15.4 ) );
	object.setLineHeight( MxNumberOrNormal( 15.4 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<musicxmlishard justify=\"center\" default-x=\"36.6\" relative-y=\"36.6\" font-family=\"DEF\" font-size=\"large\" halign=\"center\" valign=\"bottom\" underline=\"2\" line-height=\"15.4\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 36.7 ) );
	object.setDefaultY( MxNumberTenths( 36.7 ) );
	object.setRelativeX( MxNumberTenths( 36.7 ) );
	object.setRelativeY( MxNumberTenths( 36.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 16.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 15.5 ) );
	object.setLineHeight( MxNumberOrNormal( 15.5 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<bishop default-x=\"36.7\" relative-y=\"36.7\" font-family=\"XYZ\" font-size=\"1.1\" halign=\"right\" valign=\"baseline\" underline=\"0\" line-height=\"15.5\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 36.8 ) );
	object.setDefaultY( MxNumberTenths( 36.8 ) );
	object.setRelativeX( MxNumberTenths( 36.8 ) );
	object.setRelativeY( MxNumberTenths( 36.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 16.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 15.6 ) );
	object.setLineHeight( MxNumberOrNormal( 15.6 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<charlie justify=\"left\" default-y=\"36.8\" relative-y=\"36.8\" font-size=\"large\" font-weight=\"normal\" halign=\"left\" valign=\"top\" underline=\"1\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 36.9 ) );
	object.setDefaultY( MxNumberTenths( 36.9 ) );
	object.setRelativeX( MxNumberTenths( 36.9 ) );
	object.setRelativeY( MxNumberTenths( 36.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 16.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 15.7 ) );
	object.setLineHeight( MxNumberOrNormal( 15.7 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<booksmart default-y=\"36.9\" font-size=\"1.1\" font-weight=\"bold\" valign=\"middle\" underline=\"2\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 37 ) );
	object.setDefaultY( MxNumberTenths( 37 ) );
	object.setRelativeX( MxNumberTenths( 37 ) );
	object.setRelativeY( MxNumberTenths( 37 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 16.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 15.8 ) );
	object.setLineHeight( MxNumberOrNormal( 15.8 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<quiet justify=\"right\" default-x=\"37\" default-y=\"37\" relative-x=\"37\" font-style=\"normal\" font-weight=\"normal\" valign=\"bottom\" underline=\"0\" overline=\"0\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 37.1 ) );
	object.setDefaultY( MxNumberTenths( 37.1 ) );
	object.setRelativeX( MxNumberTenths( 37.1 ) );
	object.setRelativeY( MxNumberTenths( 37.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 16.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 15.9 ) );
	object.setLineHeight( MxNumberOrNormal( 15.9 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<musicxmlishard default-x=\"37.1\" relative-x=\"37.1\" font-style=\"italic\" font-weight=\"bold\" valign=\"baseline\" underline=\"1\" overline=\"1\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 37.2 ) );
	object.setDefaultY( MxNumberTenths( 37.2 ) );
	object.setRelativeX( MxNumberTenths( 37.2 ) );
	object.setRelativeY( MxNumberTenths( 37.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 17 ) );
	object.setLetterSpacing( MxNumberOrNormal( 16 ) );
	object.setLineHeight( MxNumberOrNormal( 16 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<bishop justify=\"center\" relative-x=\"37.2\" font-style=\"normal\" font-weight=\"normal\" valign=\"top\" underline=\"2\" overline=\"2\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 37.3 ) );
	object.setDefaultY( MxNumberTenths( 37.3 ) );
	object.setRelativeX( MxNumberTenths( 37.3 ) );
	object.setRelativeY( MxNumberTenths( 37.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 17.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 16.1 ) );
	object.setLineHeight( MxNumberOrNormal( 16.1 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<charlie relative-x=\"37.3\" font-style=\"italic\" font-weight=\"bold\" valign=\"middle\" underline=\"0\" overline=\"0\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 37.4 ) );
	object.setDefaultY( MxNumberTenths( 37.4 ) );
	object.setRelativeX( MxNumberTenths( 37.4 ) );
	object.setRelativeY( MxNumberTenths( 37.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 17.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 16.2 ) );
	object.setLineHeight( MxNumberOrNormal( 16.2 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<booksmart justify=\"left\" default-x=\"37.4\" default-y=\"37.4\" relative-y=\"37.4\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" color=\"#D8D7D6\" underline=\"1\" overline=\"1\" line-through=\"1\" dir=\"lro\" enclosure=\"oval\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 37.5 ) );
	object.setDefaultY( MxNumberTenths( 37.5 ) );
	object.setRelativeX( MxNumberTenths( 37.5 ) );
	object.setRelativeY( MxNumberTenths( 37.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 17.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 16.3 ) );
	object.setLineHeight( MxNumberOrNormal( 16.3 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<quiet default-x=\"37.5\" default-y=\"37.5\" relative-y=\"37.5\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" color=\"#D9DAD9D8\" underline=\"2\" overline=\"2\" line-through=\"2\" dir=\"rlo\" enclosure=\"circle\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 37.6 ) );
	object.setDefaultY( MxNumberTenths( 37.6 ) );
	object.setRelativeX( MxNumberTenths( 37.6 ) );
	object.setRelativeY( MxNumberTenths( 37.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 17.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 16.4 ) );
	object.setLineHeight( MxNumberOrNormal( 16.4 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<musicxmlishard justify=\"right\" default-y=\"37.6\" relative-y=\"37.6\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" color=\"#DCDBDA\" underline=\"0\" overline=\"0\" line-through=\"0\" dir=\"ltr\" enclosure=\"bracket\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 37.7 ) );
	object.setDefaultY( MxNumberTenths( 37.7 ) );
	object.setRelativeX( MxNumberTenths( 37.7 ) );
	object.setRelativeY( MxNumberTenths( 37.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 17.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 16.5 ) );
	object.setLineHeight( MxNumberOrNormal( 16.5 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<bishop relative-y=\"37.7\" font-family=\"ABC\" color=\"#DDDEDDDC\" underline=\"1\" overline=\"1\" line-through=\"1\" enclosure=\"triangle\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 37.8 ) );
	object.setDefaultY( MxNumberTenths( 37.8 ) );
	object.setRelativeX( MxNumberTenths( 37.8 ) );
	object.setRelativeY( MxNumberTenths( 37.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 17.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 16.6 ) );
	object.setLineHeight( MxNumberOrNormal( 16.6 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<charlie justify=\"center\" default-x=\"37.8\" relative-x=\"37.8\" relative-y=\"37.8\" font-family=\"DEF\" font-size=\"large\" color=\"#E0DFDE\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"17.6\" enclosure=\"diamond\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 37.9 ) );
	object.setDefaultY( MxNumberTenths( 37.9 ) );
	object.setRelativeX( MxNumberTenths( 37.9 ) );
	object.setRelativeY( MxNumberTenths( 37.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 17.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 16.7 ) );
	object.setLineHeight( MxNumberOrNormal( 16.7 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<booksmart default-x=\"37.9\" relative-x=\"37.9\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#E1E2E1E0\" overline=\"0\" line-through=\"0\" rotation=\"17.7\" enclosure=\"none\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 38 ) );
	object.setDefaultY( MxNumberTenths( 38 ) );
	object.setRelativeX( MxNumberTenths( 38 ) );
	object.setRelativeY( MxNumberTenths( 38 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 17.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 16.8 ) );
	object.setLineHeight( MxNumberOrNormal( 16.8 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<quiet justify=\"left\" default-y=\"38\" relative-x=\"38\" font-size=\"large\" color=\"#E4E3E2\" halign=\"left\" overline=\"1\" line-through=\"1\" rotation=\"17.8\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 38.1 ) );
	object.setDefaultY( MxNumberTenths( 38.1 ) );
	object.setRelativeX( MxNumberTenths( 38.1 ) );
	object.setRelativeY( MxNumberTenths( 38.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 17.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 16.9 ) );
	object.setLineHeight( MxNumberOrNormal( 16.9 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<musicxmlishard default-y=\"38.1\" relative-x=\"38.1\" font-size=\"1.1\" color=\"#E5E6E5E4\" halign=\"center\" overline=\"2\" line-through=\"2\" rotation=\"17.9\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 38.2 ) );
	object.setDefaultY( MxNumberTenths( 38.2 ) );
	object.setRelativeX( MxNumberTenths( 38.2 ) );
	object.setRelativeY( MxNumberTenths( 38.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 18 ) );
	object.setLetterSpacing( MxNumberOrNormal( 17 ) );
	object.setLineHeight( MxNumberOrNormal( 17 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<bishop justify=\"right\" default-x=\"38.2\" default-y=\"38.2\" font-size=\"large\" color=\"#E8E7E6\" halign=\"right\" overline=\"0\" line-through=\"0\" rotation=\"18\" letter-spacing=\"17\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 38.3 ) );
	object.setDefaultY( MxNumberTenths( 38.3 ) );
	object.setRelativeX( MxNumberTenths( 38.3 ) );
	object.setRelativeY( MxNumberTenths( 38.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 18.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 17.1 ) );
	object.setLineHeight( MxNumberOrNormal( 17.1 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<charlie default-x=\"38.3\" font-size=\"1.1\" color=\"#E9EAE9E8\" halign=\"left\" overline=\"1\" line-through=\"1\" rotation=\"18.1\" letter-spacing=\"17.1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 38.4 ) );
	object.setDefaultY( MxNumberTenths( 38.4 ) );
	object.setRelativeX( MxNumberTenths( 38.4 ) );
	object.setRelativeY( MxNumberTenths( 38.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 18.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 17.2 ) );
	object.setLineHeight( MxNumberOrNormal( 17.2 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<booksmart justify=\"center\" relative-y=\"38.4\" font-style=\"normal\" font-size=\"large\" halign=\"center\" line-through=\"2\" rotation=\"18.2\" letter-spacing=\"17.2\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 38.5 ) );
	object.setDefaultY( MxNumberTenths( 38.5 ) );
	object.setRelativeX( MxNumberTenths( 38.5 ) );
	object.setRelativeY( MxNumberTenths( 38.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 18.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 17.3 ) );
	object.setLineHeight( MxNumberOrNormal( 17.3 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<quiet relative-y=\"38.5\" font-style=\"italic\" font-size=\"1.1\" halign=\"right\" line-through=\"0\" rotation=\"18.3\" letter-spacing=\"17.3\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 38.6 ) );
	object.setDefaultY( MxNumberTenths( 38.6 ) );
	object.setRelativeX( MxNumberTenths( 38.6 ) );
	object.setRelativeY( MxNumberTenths( 38.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 18.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 17.4 ) );
	object.setLineHeight( MxNumberOrNormal( 17.4 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<musicxmlishard justify=\"left\" default-x=\"38.6\" default-y=\"38.6\" relative-x=\"38.6\" relative-y=\"38.6\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" halign=\"left\" valign=\"bottom\" line-through=\"1\" rotation=\"18.4\" letter-spacing=\"17.4\" line-height=\"17.4\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 38.7 ) );
	object.setDefaultY( MxNumberTenths( 38.7 ) );
	object.setRelativeX( MxNumberTenths( 38.7 ) );
	object.setRelativeY( MxNumberTenths( 38.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 18.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 17.5 ) );
	object.setLineHeight( MxNumberOrNormal( 17.5 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<bishop default-x=\"38.7\" default-y=\"38.7\" relative-x=\"38.7\" relative-y=\"38.7\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" halign=\"center\" valign=\"baseline\" line-through=\"2\" rotation=\"18.5\" letter-spacing=\"17.5\" line-height=\"17.5\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 38.8 ) );
	object.setDefaultY( MxNumberTenths( 38.8 ) );
	object.setRelativeX( MxNumberTenths( 38.8 ) );
	object.setRelativeY( MxNumberTenths( 38.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 18.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 17.6 ) );
	object.setLineHeight( MxNumberOrNormal( 17.6 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<charlie justify=\"right\" default-y=\"38.8\" relative-x=\"38.8\" relative-y=\"38.8\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" halign=\"right\" valign=\"top\" line-through=\"0\" rotation=\"18.6\" letter-spacing=\"17.6\" line-height=\"17.6\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 38.9 ) );
	object.setDefaultY( MxNumberTenths( 38.9 ) );
	object.setRelativeX( MxNumberTenths( 38.9 ) );
	object.setRelativeY( MxNumberTenths( 38.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 18.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 17.7 ) );
	object.setLineHeight( MxNumberOrNormal( 17.7 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<booksmart relative-x=\"38.9\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" halign=\"left\" valign=\"middle\" rotation=\"18.7\" letter-spacing=\"17.7\" line-height=\"17.7\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 39 ) );
	object.setDefaultY( MxNumberTenths( 39 ) );
	object.setRelativeX( MxNumberTenths( 39 ) );
	object.setRelativeY( MxNumberTenths( 39 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 18.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 17.8 ) );
	object.setLineHeight( MxNumberOrNormal( 17.8 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<quiet justify=\"center\" default-x=\"39\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" halign=\"center\" valign=\"bottom\" rotation=\"18.8\" letter-spacing=\"17.8\" line-height=\"17.8\" xml:lang=\"ABC\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 39.1 ) );
	object.setDefaultY( MxNumberTenths( 39.1 ) );
	object.setRelativeX( MxNumberTenths( 39.1 ) );
	object.setRelativeY( MxNumberTenths( 39.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 18.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 17.9 ) );
	object.setLineHeight( MxNumberOrNormal( 17.9 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<musicxmlishard default-x=\"39.1\" font-family=\"XYZ\" font-weight=\"bold\" valign=\"baseline\" rotation=\"18.9\" letter-spacing=\"17.9\" line-height=\"17.9\" xml:lang=\"DEF\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 39.2 ) );
	object.setDefaultY( MxNumberTenths( 39.2 ) );
	object.setRelativeX( MxNumberTenths( 39.2 ) );
	object.setRelativeY( MxNumberTenths( 39.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 19 ) );
	object.setLetterSpacing( MxNumberOrNormal( 18 ) );
	object.setLineHeight( MxNumberOrNormal( 18 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<bishop justify=\"left\" default-y=\"39.2\" font-weight=\"normal\" valign=\"top\" underline=\"1\" rotation=\"19\" letter-spacing=\"18\" line-height=\"18\" xml:lang=\"XYZ\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 39.3 ) );
	object.setDefaultY( MxNumberTenths( 39.3 ) );
	object.setRelativeX( MxNumberTenths( 39.3 ) );
	object.setRelativeY( MxNumberTenths( 39.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 19.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 18.1 ) );
	object.setLineHeight( MxNumberOrNormal( 18.1 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<charlie default-y=\"39.3\" font-weight=\"bold\" valign=\"middle\" underline=\"2\" rotation=\"19.1\" letter-spacing=\"18.1\" line-height=\"18.1\" xml:lang=\"ABC\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 39.4 ) );
	object.setDefaultY( MxNumberTenths( 39.4 ) );
	object.setRelativeX( MxNumberTenths( 39.4 ) );
	object.setRelativeY( MxNumberTenths( 39.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 19.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 18.2 ) );
	object.setLineHeight( MxNumberOrNormal( 18.2 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<booksmart justify=\"right\" default-x=\"39.4\" default-y=\"39.4\" relative-x=\"39.4\" relative-y=\"39.4\" font-size=\"large\" font-weight=\"normal\" color=\"#00FFFE\" valign=\"bottom\" underline=\"0\" letter-spacing=\"18.2\" line-height=\"18.2\" xml:lang=\"DEF\" xml:space=\"default\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 39.5 ) );
	object.setDefaultY( MxNumberTenths( 39.5 ) );
	object.setRelativeX( MxNumberTenths( 39.5 ) );
	object.setRelativeY( MxNumberTenths( 39.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 19.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 18.3 ) );
	object.setLineHeight( MxNumberOrNormal( 18.3 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<quiet default-x=\"39.5\" relative-x=\"39.5\" relative-y=\"39.5\" font-size=\"1.1\" color=\"#01020100\" valign=\"baseline\" underline=\"1\" letter-spacing=\"18.3\" line-height=\"18.3\" xml:lang=\"XYZ\" xml:space=\"preserve\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 39.6 ) );
	object.setDefaultY( MxNumberTenths( 39.6 ) );
	object.setRelativeX( MxNumberTenths( 39.6 ) );
	object.setRelativeY( MxNumberTenths( 39.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#040302" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 19.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 18.4 ) );
	object.setLineHeight( MxNumberOrNormal( 18.4 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<musicxmlishard justify=\"center\" relative-x=\"39.6\" relative-y=\"39.6\" font-size=\"large\" color=\"#040302\" valign=\"top\" underline=\"2\" letter-spacing=\"18.4\" line-height=\"18.4\" xml:lang=\"ABC\" xml:space=\"default\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 39.7 ) );
	object.setDefaultY( MxNumberTenths( 39.7 ) );
	object.setRelativeX( MxNumberTenths( 39.7 ) );
	object.setRelativeY( MxNumberTenths( 39.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 19.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 18.5 ) );
	object.setLineHeight( MxNumberOrNormal( 18.5 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<bishop relative-x=\"39.7\" relative-y=\"39.7\" font-size=\"1.1\" color=\"#05060504\" valign=\"middle\" underline=\"0\" letter-spacing=\"18.5\" line-height=\"18.5\" xml:lang=\"DEF\" xml:space=\"preserve\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( true );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 39.8 ) );
	object.setDefaultY( MxNumberTenths( 39.8 ) );
	object.setRelativeX( MxNumberTenths( 39.8 ) );
	object.setRelativeY( MxNumberTenths( 39.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#080706" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 19.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 18.6 ) );
	object.setLineHeight( MxNumberOrNormal( 18.6 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<charlie justify=\"left\" default-x=\"39.8\" default-y=\"39.8\" relative-y=\"39.8\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#080706\" underline=\"1\" overline=\"1\" letter-spacing=\"18.6\" line-height=\"18.6\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"lro\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 39.9 ) );
	object.setDefaultY( MxNumberTenths( 39.9 ) );
	object.setRelativeX( MxNumberTenths( 39.9 ) );
	object.setRelativeY( MxNumberTenths( 39.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 19.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 18.7 ) );
	object.setLineHeight( MxNumberOrNormal( 18.7 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<booksmart default-x=\"39.9\" default-y=\"39.9\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#090A0908\" underline=\"2\" overline=\"2\" line-height=\"18.7\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 40 ) );
	object.setDefaultY( MxNumberTenths( 40 ) );
	object.setRelativeX( MxNumberTenths( 40 ) );
	object.setRelativeY( MxNumberTenths( 40 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 19.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 18.8 ) );
	object.setLineHeight( MxNumberOrNormal( 18.8 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<quiet justify=\"right\" default-y=\"40\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#0C0B0A\" underline=\"0\" overline=\"0\" line-height=\"18.8\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 40.1 ) );
	object.setDefaultY( MxNumberTenths( 40.1 ) );
	object.setRelativeX( MxNumberTenths( 40.1 ) );
	object.setRelativeY( MxNumberTenths( 40.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 19.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 18.9 ) );
	object.setLineHeight( MxNumberOrNormal( 18.9 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<musicxmlishard font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#0D0E0D0C\" underline=\"1\" overline=\"1\" line-height=\"18.9\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 40.2 ) );
	object.setDefaultY( MxNumberTenths( 40.2 ) );
	object.setRelativeX( MxNumberTenths( 40.2 ) );
	object.setRelativeY( MxNumberTenths( 40.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 20 ) );
	object.setLetterSpacing( MxNumberOrNormal( 19 ) );
	object.setLineHeight( MxNumberOrNormal( 19 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<bishop justify=\"center\" default-x=\"40.2\" relative-x=\"40.2\" font-family=\"DEF\" font-style=\"normal\" color=\"#100F0E\" halign=\"center\" underline=\"2\" overline=\"2\" line-height=\"19\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( true );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 40.3 ) );
	object.setDefaultY( MxNumberTenths( 40.3 ) );
	object.setRelativeX( MxNumberTenths( 40.3 ) );
	object.setRelativeY( MxNumberTenths( 40.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 20.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 19.1 ) );
	object.setLineHeight( MxNumberOrNormal( 19.1 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<charlie default-x=\"40.3\" relative-x=\"40.3\" font-family=\"XYZ\" font-style=\"italic\" color=\"#11121110\" halign=\"right\" underline=\"0\" overline=\"0\" line-height=\"19.1\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( true );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 40.4 ) );
	object.setDefaultY( MxNumberTenths( 40.4 ) );
	object.setRelativeX( MxNumberTenths( 40.4 ) );
	object.setRelativeY( MxNumberTenths( 40.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#141312" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 20.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 19.2 ) );
	object.setLineHeight( MxNumberOrNormal( 19.2 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<booksmart justify=\"left\" default-y=\"40.4\" relative-x=\"40.4\" relative-y=\"40.4\" font-style=\"normal\" font-weight=\"normal\" halign=\"left\" underline=\"1\" overline=\"1\" line-through=\"1\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 40.5 ) );
	object.setDefaultY( MxNumberTenths( 40.5 ) );
	object.setRelativeX( MxNumberTenths( 40.5 ) );
	object.setRelativeY( MxNumberTenths( 40.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 20.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 19.3 ) );
	object.setLineHeight( MxNumberOrNormal( 19.3 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<quiet default-y=\"40.5\" relative-x=\"40.5\" relative-y=\"40.5\" font-weight=\"bold\" halign=\"center\" overline=\"2\" line-through=\"2\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 40.6 ) );
	object.setDefaultY( MxNumberTenths( 40.6 ) );
	object.setRelativeX( MxNumberTenths( 40.6 ) );
	object.setRelativeY( MxNumberTenths( 40.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#181716" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 20.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 19.4 ) );
	object.setLineHeight( MxNumberOrNormal( 19.4 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<musicxmlishard justify=\"right\" default-x=\"40.6\" default-y=\"40.6\" relative-y=\"40.6\" font-weight=\"normal\" halign=\"right\" overline=\"0\" line-through=\"0\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 40.7 ) );
	object.setDefaultY( MxNumberTenths( 40.7 ) );
	object.setRelativeX( MxNumberTenths( 40.7 ) );
	object.setRelativeY( MxNumberTenths( 40.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 20.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 19.5 ) );
	object.setLineHeight( MxNumberOrNormal( 19.5 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<bishop default-x=\"40.7\" relative-y=\"40.7\" font-weight=\"bold\" halign=\"left\" overline=\"1\" line-through=\"1\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( true );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 40.8 ) );
	object.setDefaultY( MxNumberTenths( 40.8 ) );
	object.setRelativeX( MxNumberTenths( 40.8 ) );
	object.setRelativeY( MxNumberTenths( 40.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 20.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 19.6 ) );
	object.setLineHeight( MxNumberOrNormal( 19.6 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<charlie justify=\"center\" relative-y=\"40.8\" font-weight=\"normal\" halign=\"center\" overline=\"2\" line-through=\"2\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 40.9 ) );
	object.setDefaultY( MxNumberTenths( 40.9 ) );
	object.setRelativeX( MxNumberTenths( 40.9 ) );
	object.setRelativeY( MxNumberTenths( 40.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 20.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 19.7 ) );
	object.setLineHeight( MxNumberOrNormal( 19.7 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<booksmart font-weight=\"bold\" halign=\"right\" overline=\"0\" line-through=\"0\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 41 ) );
	object.setDefaultY( MxNumberTenths( 41 ) );
	object.setRelativeX( MxNumberTenths( 41 ) );
	object.setRelativeY( MxNumberTenths( 41 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 20.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 19.8 ) );
	object.setLineHeight( MxNumberOrNormal( 19.8 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<quiet justify=\"left\" default-x=\"41\" default-y=\"41\" relative-x=\"41\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" halign=\"left\" valign=\"bottom\" overline=\"1\" line-through=\"1\" rotation=\"20.8\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( true );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 41.1 ) );
	object.setDefaultY( MxNumberTenths( 41.1 ) );
	object.setRelativeX( MxNumberTenths( 41.1 ) );
	object.setRelativeY( MxNumberTenths( 41.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 20.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 19.9 ) );
	object.setLineHeight( MxNumberOrNormal( 19.9 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<musicxmlishard default-x=\"41.1\" default-y=\"41.1\" relative-x=\"41.1\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" halign=\"center\" valign=\"baseline\" overline=\"2\" line-through=\"2\" rotation=\"20.9\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 41.2 ) );
	object.setDefaultY( MxNumberTenths( 41.2 ) );
	object.setRelativeX( MxNumberTenths( 41.2 ) );
	object.setRelativeY( MxNumberTenths( 41.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#242322" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 21 ) );
	object.setLetterSpacing( MxNumberOrNormal( 20 ) );
	object.setLineHeight( MxNumberOrNormal( 20 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<bishop justify=\"right\" default-y=\"41.2\" relative-x=\"41.2\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" halign=\"right\" valign=\"top\" line-through=\"0\" rotation=\"21\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( true );
	object.setIsRotationPresent( true );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( true );
	object.setIsDirPresent( true );
	object.setIsEnclosurePresent( true );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 41.3 ) );
	object.setDefaultY( MxNumberTenths( 41.3 ) );
	object.setRelativeX( MxNumberTenths( 41.3 ) );
	object.setRelativeY( MxNumberTenths( 41.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 21.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 20.1 ) );
	object.setLineHeight( MxNumberOrNormal( 20.1 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<charlie relative-x=\"41.3\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" valign=\"middle\" line-through=\"1\" rotation=\"21.1\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
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
	object.setIsUnderlinePresent( false );
	object.setIsOverlinePresent( false );
	object.setIsLineThroughPresent( false );
	object.setIsRotationPresent( false );
	object.setIsLetterSpacingPresent( false );
	object.setIsLineHeightPresent( false );
	object.setIsXmlLangPresent( false );
	object.setIsXmlSpacePresent( false );
	object.setIsDirPresent( false );
	object.setIsEnclosurePresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 41.4 ) );
	object.setDefaultY( MxNumberTenths( 41.4 ) );
	object.setRelativeX( MxNumberTenths( 41.4 ) );
	object.setRelativeY( MxNumberTenths( 41.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#282726" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 21.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 20.2 ) );
	object.setLineHeight( MxNumberOrNormal( 20.2 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
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

TEST( getIsJustifyDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsJustifyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsHalignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsValignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsUnderlineDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsUnderlineDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsOverlineDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsOverlineDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineThroughDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsLineThroughDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRotationDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsRotationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLetterSpacingDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = true;
	bool actual = object.getIsLetterSpacingDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineHeightDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsLineHeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsXmlLangDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlSpaceDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsXmlSpaceDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDirDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsDirDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEnclosureDefaultDefined, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	bool expected = false;
	bool actual = object.getIsEnclosureDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getJustifyDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getJustifyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getHalignDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getHalignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValignDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxEnumValign expected;
	MxEnumValign actual = object.getValignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getUnderlineDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getUnderlineDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getOverlineDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getOverlineDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineThroughDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getLineThroughDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRotationDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxNumberRotationDegrees expected;
	MxNumberRotationDegrees actual = object.getRotationDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLetterSpacingDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxNumberOrNormal expected( "normal" );
	MxNumberOrNormal actual = object.getLetterSpacingDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineHeightDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxNumberOrNormal expected;
	MxNumberOrNormal actual = object.getLineHeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlLangDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	XmlLang expected;
	XmlLang actual = object.getXmlLangDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlSpaceDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	XmlSpace expected;
	XmlSpace actual = object.getXmlSpaceDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDirDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxEnumTextDirection expected;
	MxEnumTextDirection actual = object.getDirDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getEnclosureDefaultValue, MxCxSmpFormattedText )
{
	MxCxSmpFormattedText object;
	MxEnumEnclosureShape expected;
	MxEnumEnclosureShape actual = object.getEnclosureDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


