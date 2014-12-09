/** *******************************************************
  * 
  * MxEsCreditWordsTest.cpp
  * Created: 2014-12-05 20:57:57
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsCreditWords.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsCreditWords )
{
	MxEsCreditWords object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getJustify().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getHalign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxEnumValign(  ) ).toString();
	std::string actual = object.getValign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getUnderline().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getOverline().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues14, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getLineThrough().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues15, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxNumberRotationDegrees(  ) ).toString();
	std::string actual = object.getRotation().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues16, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxNumberOrNormal( "normal" ) ).toString();
	std::string actual = object.getLetterSpacing().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues17, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxNumberOrNormal(  ) ).toString();
	std::string actual = object.getLineHeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues18, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( XmlLang(  ) ).toString();
	std::string actual = object.getXmlLang().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues19, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( XmlSpace(  ) ).toString();
	std::string actual = object.getXmlSpace().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues20, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxEnumTextDirection(  ) ).toString();
	std::string actual = object.getDir().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues21, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = ( MxEnumEnclosureShape(  ) ).toString();
	std::string actual = object.getEnclosure().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsCreditWords )
{
	MxEsCreditWords object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsCreditWords )
{
	MxEsCreditWords object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "" ) );
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
TEST( ctorValue2, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
TEST( ctorValue4, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "X,Y,Z" ) );
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
TEST( ctorValue6, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
TEST( ctorValue8, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "X,Y,Z" ) );
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

TEST( getClassName, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = "MxEsCreditWords";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = "credit-words";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsCreditWords )
{
	MxEsCreditWords object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setJustify0, MxEsCreditWords )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setJustify( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getJustify();
	CHECK_EQUAL( expected, actual )
	object.setJustify( value2 );
	expected = value2;
	actual = object.getJustify();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX1, MxEsCreditWords )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY2, MxEsCreditWords )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX3, MxEsCreditWords )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY4, MxEsCreditWords )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily5, MxEsCreditWords )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle6, MxEsCreditWords )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize7, MxEsCreditWords )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight8, MxEsCreditWords )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor9, MxEsCreditWords )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setHalign10, MxEsCreditWords )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setHalign( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
	object.setHalign( value2 );
	expected = value2;
	actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
}
TEST( setValign11, MxEsCreditWords )
{
	MxEnumValign value1( lexicon::enums::Valign::baseline );
	MxEnumValign value2( lexicon::enums::Valign::bottom );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setValign( value1 );
	MxEnumValign expected = value1;
	MxEnumValign actual = object.getValign();
	CHECK_EQUAL( expected, actual )
	object.setValign( value2 );
	expected = value2;
	actual = object.getValign();
	CHECK_EQUAL( expected, actual )
}
TEST( setUnderline12, MxEsCreditWords )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setUnderline( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getUnderline();
	CHECK_EQUAL( expected, actual )
	object.setUnderline( value2 );
	expected = value2;
	actual = object.getUnderline();
	CHECK_EQUAL( expected, actual )
}
TEST( setOverline13, MxEsCreditWords )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setOverline( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getOverline();
	CHECK_EQUAL( expected, actual )
	object.setOverline( value2 );
	expected = value2;
	actual = object.getOverline();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineThrough14, MxEsCreditWords )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setLineThrough( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getLineThrough();
	CHECK_EQUAL( expected, actual )
	object.setLineThrough( value2 );
	expected = value2;
	actual = object.getLineThrough();
	CHECK_EQUAL( expected, actual )
}
TEST( setRotation15, MxEsCreditWords )
{
	MxNumberRotationDegrees value1( -179.9 );
	MxNumberRotationDegrees value2( -179.8 );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setRotation( value1 );
	MxNumberRotationDegrees expected = value1;
	MxNumberRotationDegrees actual = object.getRotation();
	CHECK_EQUAL( expected, actual )
	object.setRotation( value2 );
	expected = value2;
	actual = object.getRotation();
	CHECK_EQUAL( expected, actual )
}
TEST( setLetterSpacing16, MxEsCreditWords )
{
	MxNumberOrNormal value1( 0.1 );
	MxNumberOrNormal value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setLetterSpacing( value1 );
	MxNumberOrNormal expected = value1;
	MxNumberOrNormal actual = object.getLetterSpacing();
	CHECK_EQUAL( expected, actual )
	object.setLetterSpacing( value2 );
	expected = value2;
	actual = object.getLetterSpacing();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineHeight17, MxEsCreditWords )
{
	MxNumberOrNormal value1( 0.1 );
	MxNumberOrNormal value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setLineHeight( value1 );
	MxNumberOrNormal expected = value1;
	MxNumberOrNormal actual = object.getLineHeight();
	CHECK_EQUAL( expected, actual )
	object.setLineHeight( value2 );
	expected = value2;
	actual = object.getLineHeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setXmlLang18, MxEsCreditWords )
{
	XmlLang value1( "en" );
	XmlLang value2( "fr" );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setXmlLang( value1 );
	XmlLang expected = value1;
	XmlLang actual = object.getXmlLang();
	CHECK_EQUAL( expected, actual )
	object.setXmlLang( value2 );
	expected = value2;
	actual = object.getXmlLang();
	CHECK_EQUAL( expected, actual )
}
TEST( setXmlSpace19, MxEsCreditWords )
{
	XmlSpace value1( lexicon::enums::XmlSpace::preserve );
	XmlSpace value2( lexicon::enums::XmlSpace::default_ );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setXmlSpace( value1 );
	XmlSpace expected = value1;
	XmlSpace actual = object.getXmlSpace();
	CHECK_EQUAL( expected, actual )
	object.setXmlSpace( value2 );
	expected = value2;
	actual = object.getXmlSpace();
	CHECK_EQUAL( expected, actual )
}
TEST( setDir20, MxEsCreditWords )
{
	MxEnumTextDirection value1( lexicon::enums::TextDirection::rlo );
	MxEnumTextDirection value2( lexicon::enums::TextDirection::lro );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
	object.setDir( value1 );
	MxEnumTextDirection expected = value1;
	MxEnumTextDirection actual = object.getDir();
	CHECK_EQUAL( expected, actual )
	object.setDir( value2 );
	expected = value2;
	actual = object.getDir();
	CHECK_EQUAL( expected, actual )
}
TEST( setEnclosure21, MxEsCreditWords )
{
	MxEnumEnclosureShape value1( lexicon::enums::EnclosureShape::none );
	MxEnumEnclosureShape value2( lexicon::enums::EnclosureShape::diamond );
	CHECK( ( value1 != value2 ) )
	MxEsCreditWords object;
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

TEST( getIsJustifyRequired0, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsJustifyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired1, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired2, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired3, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired4, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired5, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired6, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired7, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired8, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired9, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignRequired10, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsHalignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignRequired11, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsValignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsUnderlineRequired12, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsUnderlineRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsOverlineRequired13, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsOverlineRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineThroughRequired14, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsLineThroughRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRotationRequired15, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsRotationRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLetterSpacingRequired16, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsLetterSpacingRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineHeightRequired17, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsLineHeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangRequired18, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsXmlLangRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlSpaceRequired19, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsXmlSpaceRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDirRequired20, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsDirRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEnclosureRequired21, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsEnclosureRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsJustifyPresent0, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsDefaultXPresent1, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsDefaultYPresent2, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsRelativeXPresent3, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsRelativeYPresent4, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsFontFamilyPresent5, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsFontStylePresent6, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsFontSizePresent7, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsFontWeightPresent8, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsColorPresent9, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsHalignPresent10, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsValignPresent11, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsUnderlinePresent12, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsOverlinePresent13, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsLineThroughPresent14, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsRotationPresent15, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsLetterSpacingPresent16, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsLineHeightPresent17, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsXmlLangPresent18, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsXmlSpacePresent19, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsDirPresent20, MxEsCreditWords )
{
	MxEsCreditWords object;
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
TEST( getIsEnclosurePresent21, MxEsCreditWords )
{
	MxEsCreditWords object;
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


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsJustifyDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsJustifyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsHalignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsValignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsUnderlineDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsUnderlineDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsOverlineDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsOverlineDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineThroughDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsLineThroughDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRotationDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsRotationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLetterSpacingDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = true;
	bool actual = object.getIsLetterSpacingDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineHeightDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsLineHeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsXmlLangDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlSpaceDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsXmlSpaceDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDirDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsDirDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEnclosureDefaultDefined, MxEsCreditWords )
{
	MxEsCreditWords object;
	bool expected = false;
	bool actual = object.getIsEnclosureDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getJustifyDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getJustifyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getHalignDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getHalignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValignDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxEnumValign expected;
	MxEnumValign actual = object.getValignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getUnderlineDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getUnderlineDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getOverlineDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getOverlineDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineThroughDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getLineThroughDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRotationDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxNumberRotationDegrees expected;
	MxNumberRotationDegrees actual = object.getRotationDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLetterSpacingDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxNumberOrNormal expected( "normal" );
	MxNumberOrNormal actual = object.getLetterSpacingDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineHeightDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxNumberOrNormal expected;
	MxNumberOrNormal actual = object.getLineHeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlLangDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	XmlLang expected;
	XmlLang actual = object.getXmlLangDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlSpaceDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	XmlSpace expected;
	XmlSpace actual = object.getXmlSpaceDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDirDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxEnumTextDirection expected;
	MxEnumTextDirection actual = object.getDirDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getEnclosureDefaultValue, MxEsCreditWords )
{
	MxEsCreditWords object;
	MxEnumEnclosureShape expected;
	MxEnumEnclosureShape actual = object.getEnclosureDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 334.2 ) );
	object.setDefaultY( MxNumberTenths( 334.2 ) );
	object.setRelativeX( MxNumberTenths( 334.2 ) );
	object.setRelativeY( MxNumberTenths( 334.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 41.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 40.5 ) );
	object.setLineHeight( MxNumberOrNormal( 20.3 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
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
	expected = "<credit-words justify=\"right\" default-x=\"334.2\" default-y=\"334.2\" relative-x=\"334.2\" relative-y=\"334.2\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#B9BAB9B8\" halign=\"right\" valign=\"bottom\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"41.5\" letter-spacing=\"40.5\" line-height=\"20.3\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"circle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 334.3 ) );
	object.setDefaultY( MxNumberTenths( 334.3 ) );
	object.setRelativeX( MxNumberTenths( 334.3 ) );
	object.setRelativeY( MxNumberTenths( 334.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 41.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 40.6 ) );
	object.setLineHeight( MxNumberOrNormal( 20.4 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<credit-words default-x=\"334.3\" default-y=\"334.3\" relative-x=\"334.3\" relative-y=\"334.3\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#BCBBBA\" halign=\"left\" valign=\"baseline\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"41.6\" letter-spacing=\"40.6\" line-height=\"20.4\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"lro\" enclosure=\"bracket\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 334.4 ) );
	object.setDefaultY( MxNumberTenths( 334.4 ) );
	object.setRelativeX( MxNumberTenths( 334.4 ) );
	object.setRelativeY( MxNumberTenths( 334.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 41.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 40.7 ) );
	object.setLineHeight( MxNumberOrNormal( 20.5 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<credit-words justify=\"center\" default-y=\"334.4\" relative-x=\"334.4\" relative-y=\"334.4\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#BDBEBDBC\" halign=\"center\" valign=\"top\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"41.7\" letter-spacing=\"40.7\" line-height=\"20.5\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"triangle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 334.5 ) );
	object.setDefaultY( MxNumberTenths( 334.5 ) );
	object.setRelativeX( MxNumberTenths( 334.5 ) );
	object.setRelativeY( MxNumberTenths( 334.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 41.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 40.8 ) );
	object.setLineHeight( MxNumberOrNormal( 20.6 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<credit-words relative-x=\"334.5\" relative-y=\"334.5\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#C0BFBE\" halign=\"right\" valign=\"middle\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"41.8\" letter-spacing=\"40.8\" line-height=\"20.6\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\" enclosure=\"diamond\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 334.6 ) );
	object.setDefaultY( MxNumberTenths( 334.6 ) );
	object.setRelativeX( MxNumberTenths( 334.6 ) );
	object.setRelativeY( MxNumberTenths( 334.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 41.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 40.9 ) );
	object.setLineHeight( MxNumberOrNormal( 20.7 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<credit-words justify=\"left\" default-x=\"334.6\" relative-y=\"334.6\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#C1C2C1C0\" halign=\"left\" valign=\"bottom\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"41.9\" letter-spacing=\"40.9\" line-height=\"20.7\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"none\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 334.7 ) );
	object.setDefaultY( MxNumberTenths( 334.7 ) );
	object.setRelativeX( MxNumberTenths( 334.7 ) );
	object.setRelativeY( MxNumberTenths( 334.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 42 ) );
	object.setLetterSpacing( MxNumberOrNormal( 41 ) );
	object.setLineHeight( MxNumberOrNormal( 20.8 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<credit-words default-x=\"334.7\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#C4C3C2\" halign=\"center\" valign=\"baseline\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"42\" letter-spacing=\"41\" line-height=\"20.8\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"lro\" enclosure=\"rectangle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 334.8 ) );
	object.setDefaultY( MxNumberTenths( 334.8 ) );
	object.setRelativeX( MxNumberTenths( 334.8 ) );
	object.setRelativeY( MxNumberTenths( 334.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 42.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 41.1 ) );
	object.setLineHeight( MxNumberOrNormal( 20.9 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<credit-words justify=\"right\" default-y=\"334.8\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#C5C6C5C4\" halign=\"right\" valign=\"top\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"42.1\" letter-spacing=\"41.1\" line-height=\"20.9\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"square\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 334.9 ) );
	object.setDefaultY( MxNumberTenths( 334.9 ) );
	object.setRelativeX( MxNumberTenths( 334.9 ) );
	object.setRelativeY( MxNumberTenths( 334.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 42.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 41.2 ) );
	object.setLineHeight( MxNumberOrNormal( 21 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<credit-words default-y=\"334.9\" font-size=\"large\" font-weight=\"normal\" color=\"#C8C7C6\" halign=\"left\" valign=\"middle\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"42.2\" letter-spacing=\"41.2\" line-height=\"21\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"ltr\" enclosure=\"oval\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 335 ) );
	object.setDefaultY( MxNumberTenths( 335 ) );
	object.setRelativeX( MxNumberTenths( 335 ) );
	object.setRelativeY( MxNumberTenths( 335 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 42.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 41.3 ) );
	object.setLineHeight( MxNumberOrNormal( 21.1 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<credit-words justify=\"center\" default-x=\"335\" default-y=\"335\" relative-x=\"335\" font-weight=\"bold\" color=\"#C9CAC9C8\" halign=\"center\" valign=\"bottom\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"42.3\" letter-spacing=\"41.3\" line-height=\"21.1\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"circle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 335.1 ) );
	object.setDefaultY( MxNumberTenths( 335.1 ) );
	object.setRelativeX( MxNumberTenths( 335.1 ) );
	object.setRelativeY( MxNumberTenths( 335.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 42.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 41.4 ) );
	object.setLineHeight( MxNumberOrNormal( 21.2 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<credit-words default-x=\"335.1\" relative-x=\"335.1\" color=\"#CCCBCA\" halign=\"right\" valign=\"baseline\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"42.4\" letter-spacing=\"41.4\" line-height=\"21.2\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"lro\" enclosure=\"bracket\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 335.2 ) );
	object.setDefaultY( MxNumberTenths( 335.2 ) );
	object.setRelativeX( MxNumberTenths( 335.2 ) );
	object.setRelativeY( MxNumberTenths( 335.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 42.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 41.5 ) );
	object.setLineHeight( MxNumberOrNormal( 21.3 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<credit-words justify=\"left\" relative-x=\"335.2\" relative-y=\"335.2\" halign=\"left\" valign=\"top\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"42.5\" letter-spacing=\"41.5\" line-height=\"21.3\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"triangle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 335.3 ) );
	object.setDefaultY( MxNumberTenths( 335.3 ) );
	object.setRelativeX( MxNumberTenths( 335.3 ) );
	object.setRelativeY( MxNumberTenths( 335.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 42.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 41.6 ) );
	object.setLineHeight( MxNumberOrNormal( 21.4 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<credit-words relative-x=\"335.3\" relative-y=\"335.3\" valign=\"middle\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"42.6\" letter-spacing=\"41.6\" line-height=\"21.4\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"ltr\" enclosure=\"diamond\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 335.4 ) );
	object.setDefaultY( MxNumberTenths( 335.4 ) );
	object.setRelativeX( MxNumberTenths( 335.4 ) );
	object.setRelativeY( MxNumberTenths( 335.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 42.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 41.7 ) );
	object.setLineHeight( MxNumberOrNormal( 21.5 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<credit-words justify=\"right\" default-x=\"335.4\" default-y=\"335.4\" relative-y=\"335.4\" font-family=\"ABC\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"42.7\" letter-spacing=\"41.7\" line-height=\"21.5\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"none\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 335.5 ) );
	object.setDefaultY( MxNumberTenths( 335.5 ) );
	object.setRelativeX( MxNumberTenths( 335.5 ) );
	object.setRelativeY( MxNumberTenths( 335.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 42.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 41.8 ) );
	object.setLineHeight( MxNumberOrNormal( 21.6 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<credit-words default-x=\"335.5\" default-y=\"335.5\" relative-y=\"335.5\" font-family=\"DEF\" overline=\"2\" line-through=\"2\" rotation=\"42.8\" letter-spacing=\"41.8\" line-height=\"21.6\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"lro\" enclosure=\"rectangle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 335.6 ) );
	object.setDefaultY( MxNumberTenths( 335.6 ) );
	object.setRelativeX( MxNumberTenths( 335.6 ) );
	object.setRelativeY( MxNumberTenths( 335.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 42.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 41.9 ) );
	object.setLineHeight( MxNumberOrNormal( 21.7 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<credit-words justify=\"center\" default-y=\"335.6\" relative-y=\"335.6\" font-family=\"XYZ\" font-style=\"italic\" line-through=\"0\" rotation=\"42.9\" letter-spacing=\"41.9\" line-height=\"21.7\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"square\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 335.7 ) );
	object.setDefaultY( MxNumberTenths( 335.7 ) );
	object.setRelativeX( MxNumberTenths( 335.7 ) );
	object.setRelativeY( MxNumberTenths( 335.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 43 ) );
	object.setLetterSpacing( MxNumberOrNormal( 42 ) );
	object.setLineHeight( MxNumberOrNormal( 21.8 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<credit-words font-family=\"ABC\" font-style=\"normal\" rotation=\"43\" letter-spacing=\"42\" line-height=\"21.8\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\" enclosure=\"oval\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 335.8 ) );
	object.setDefaultY( MxNumberTenths( 335.8 ) );
	object.setRelativeX( MxNumberTenths( 335.8 ) );
	object.setRelativeY( MxNumberTenths( 335.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 43.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 42.1 ) );
	object.setLineHeight( MxNumberOrNormal( 21.9 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<credit-words justify=\"left\" default-x=\"335.8\" relative-x=\"335.8\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" letter-spacing=\"42.1\" line-height=\"21.9\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"circle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 335.9 ) );
	object.setDefaultY( MxNumberTenths( 335.9 ) );
	object.setRelativeX( MxNumberTenths( 335.9 ) );
	object.setRelativeY( MxNumberTenths( 335.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 43.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 42.2 ) );
	object.setLineHeight( MxNumberOrNormal( 22 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<credit-words default-x=\"335.9\" relative-x=\"335.9\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" line-height=\"22\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"lro\" enclosure=\"bracket\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 336 ) );
	object.setDefaultY( MxNumberTenths( 336 ) );
	object.setRelativeX( MxNumberTenths( 336 ) );
	object.setRelativeY( MxNumberTenths( 336 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 43.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 42.3 ) );
	object.setLineHeight( MxNumberOrNormal( 22.1 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<credit-words justify=\"right\" default-y=\"336\" relative-x=\"336\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"triangle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 336.1 ) );
	object.setDefaultY( MxNumberTenths( 336.1 ) );
	object.setRelativeX( MxNumberTenths( 336.1 ) );
	object.setRelativeY( MxNumberTenths( 336.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 43.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 42.4 ) );
	object.setLineHeight( MxNumberOrNormal( 22.2 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<credit-words default-y=\"336.1\" relative-x=\"336.1\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" xml:space=\"default\" dir=\"ltr\" enclosure=\"diamond\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 336.2 ) );
	object.setDefaultY( MxNumberTenths( 336.2 ) );
	object.setRelativeX( MxNumberTenths( 336.2 ) );
	object.setRelativeY( MxNumberTenths( 336.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 43.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 42.5 ) );
	object.setLineHeight( MxNumberOrNormal( 22.3 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<credit-words justify=\"center\" default-x=\"336.2\" default-y=\"336.2\" relative-y=\"336.2\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#E1E2E1E0\" dir=\"rtl\" enclosure=\"none\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 336.3 ) );
	object.setDefaultY( MxNumberTenths( 336.3 ) );
	object.setRelativeX( MxNumberTenths( 336.3 ) );
	object.setRelativeY( MxNumberTenths( 336.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 43.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 42.6 ) );
	object.setLineHeight( MxNumberOrNormal( 22.4 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<credit-words default-x=\"336.3\" relative-y=\"336.3\" font-size=\"large\" font-weight=\"normal\" color=\"#E4E3E2\" enclosure=\"rectangle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 336.4 ) );
	object.setDefaultY( MxNumberTenths( 336.4 ) );
	object.setRelativeX( MxNumberTenths( 336.4 ) );
	object.setRelativeY( MxNumberTenths( 336.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 43.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 42.7 ) );
	object.setLineHeight( MxNumberOrNormal( 22.5 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<credit-words justify=\"left\" relative-y=\"336.4\" font-size=\"1.1\" font-weight=\"bold\" color=\"#E5E6E5E4\" halign=\"left\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 336.5 ) );
	object.setDefaultY( MxNumberTenths( 336.5 ) );
	object.setRelativeX( MxNumberTenths( 336.5 ) );
	object.setRelativeY( MxNumberTenths( 336.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 43.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 42.8 ) );
	object.setLineHeight( MxNumberOrNormal( 22.6 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<credit-words relative-y=\"336.5\" font-size=\"large\" font-weight=\"normal\" color=\"#E8E7E6\" halign=\"center\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 336.6 ) );
	object.setDefaultY( MxNumberTenths( 336.6 ) );
	object.setRelativeX( MxNumberTenths( 336.6 ) );
	object.setRelativeY( MxNumberTenths( 336.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 43.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 42.9 ) );
	object.setLineHeight( MxNumberOrNormal( 22.7 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<credit-words justify=\"right\" default-x=\"336.6\" default-y=\"336.6\" relative-x=\"336.6\" relative-y=\"336.6\" font-family=\"ABC\" font-weight=\"bold\" color=\"#E9EAE9E8\" halign=\"right\" valign=\"bottom\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 336.7 ) );
	object.setDefaultY( MxNumberTenths( 336.7 ) );
	object.setRelativeX( MxNumberTenths( 336.7 ) );
	object.setRelativeY( MxNumberTenths( 336.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 44 ) );
	object.setLetterSpacing( MxNumberOrNormal( 43 ) );
	object.setLineHeight( MxNumberOrNormal( 22.8 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<credit-words default-x=\"336.7\" default-y=\"336.7\" relative-x=\"336.7\" font-family=\"DEF\" font-weight=\"normal\" color=\"#ECEBEA\" halign=\"left\" valign=\"baseline\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 336.8 ) );
	object.setDefaultY( MxNumberTenths( 336.8 ) );
	object.setRelativeX( MxNumberTenths( 336.8 ) );
	object.setRelativeY( MxNumberTenths( 336.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 44.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 43.1 ) );
	object.setLineHeight( MxNumberOrNormal( 22.9 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<credit-words justify=\"center\" default-y=\"336.8\" relative-x=\"336.8\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#EDEEEDEC\" halign=\"center\" valign=\"top\" underline=\"0\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 336.9 ) );
	object.setDefaultY( MxNumberTenths( 336.9 ) );
	object.setRelativeX( MxNumberTenths( 336.9 ) );
	object.setRelativeY( MxNumberTenths( 336.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 44.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 43.2 ) );
	object.setLineHeight( MxNumberOrNormal( 23 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<credit-words relative-x=\"336.9\" font-family=\"ABC\" color=\"#F0EFEE\" halign=\"right\" valign=\"middle\" underline=\"1\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 337 ) );
	object.setDefaultY( MxNumberTenths( 337 ) );
	object.setRelativeX( MxNumberTenths( 337 ) );
	object.setRelativeY( MxNumberTenths( 337 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 44.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 43.3 ) );
	object.setLineHeight( MxNumberOrNormal( 23.1 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<credit-words justify=\"left\" default-x=\"337\" font-family=\"DEF\" font-style=\"italic\" color=\"#F1F2F1F0\" halign=\"left\" valign=\"bottom\" underline=\"2\" overline=\"2\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 337.1 ) );
	object.setDefaultY( MxNumberTenths( 337.1 ) );
	object.setRelativeX( MxNumberTenths( 337.1 ) );
	object.setRelativeY( MxNumberTenths( 337.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 44.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 43.4 ) );
	object.setLineHeight( MxNumberOrNormal( 23.2 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<credit-words default-x=\"337.1\" font-family=\"XYZ\" font-style=\"normal\" color=\"#F4F3F2\" halign=\"center\" valign=\"baseline\" underline=\"0\" overline=\"0\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 337.2 ) );
	object.setDefaultY( MxNumberTenths( 337.2 ) );
	object.setRelativeX( MxNumberTenths( 337.2 ) );
	object.setRelativeY( MxNumberTenths( 337.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 44.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 43.5 ) );
	object.setLineHeight( MxNumberOrNormal( 23.3 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<credit-words justify=\"right\" default-y=\"337.2\" relative-y=\"337.2\" font-style=\"italic\" halign=\"right\" valign=\"top\" underline=\"1\" overline=\"1\" line-through=\"1\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 337.3 ) );
	object.setDefaultY( MxNumberTenths( 337.3 ) );
	object.setRelativeX( MxNumberTenths( 337.3 ) );
	object.setRelativeY( MxNumberTenths( 337.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 44.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 43.6 ) );
	object.setLineHeight( MxNumberOrNormal( 23.4 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<credit-words default-y=\"337.3\" relative-y=\"337.3\" font-style=\"normal\" halign=\"left\" valign=\"middle\" underline=\"2\" overline=\"2\" line-through=\"2\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 337.4 ) );
	object.setDefaultY( MxNumberTenths( 337.4 ) );
	object.setRelativeX( MxNumberTenths( 337.4 ) );
	object.setRelativeY( MxNumberTenths( 337.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 44.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 43.7 ) );
	object.setLineHeight( MxNumberOrNormal( 23.5 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<credit-words justify=\"center\" default-x=\"337.4\" default-y=\"337.4\" relative-x=\"337.4\" relative-y=\"337.4\" font-style=\"italic\" font-size=\"1.1\" halign=\"center\" valign=\"bottom\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"44.7\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 337.5 ) );
	object.setDefaultY( MxNumberTenths( 337.5 ) );
	object.setRelativeX( MxNumberTenths( 337.5 ) );
	object.setRelativeY( MxNumberTenths( 337.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 44.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 43.8 ) );
	object.setLineHeight( MxNumberOrNormal( 23.6 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<credit-words default-x=\"337.5\" relative-x=\"337.5\" relative-y=\"337.5\" font-style=\"normal\" font-size=\"large\" valign=\"baseline\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"44.8\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 337.6 ) );
	object.setDefaultY( MxNumberTenths( 337.6 ) );
	object.setRelativeX( MxNumberTenths( 337.6 ) );
	object.setRelativeY( MxNumberTenths( 337.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 44.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 43.9 ) );
	object.setLineHeight( MxNumberOrNormal( 23.7 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<credit-words justify=\"left\" relative-x=\"337.6\" relative-y=\"337.6\" font-style=\"italic\" font-size=\"1.1\" valign=\"top\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"44.9\" letter-spacing=\"43.9\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 337.7 ) );
	object.setDefaultY( MxNumberTenths( 337.7 ) );
	object.setRelativeX( MxNumberTenths( 337.7 ) );
	object.setRelativeY( MxNumberTenths( 337.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 45 ) );
	object.setLetterSpacing( MxNumberOrNormal( 44 ) );
	object.setLineHeight( MxNumberOrNormal( 23.8 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<credit-words relative-x=\"337.7\" font-size=\"large\" valign=\"middle\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"45\" letter-spacing=\"44\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 337.8 ) );
	object.setDefaultY( MxNumberTenths( 337.8 ) );
	object.setRelativeX( MxNumberTenths( 337.8 ) );
	object.setRelativeY( MxNumberTenths( 337.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 45.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 44.1 ) );
	object.setLineHeight( MxNumberOrNormal( 23.9 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<credit-words justify=\"right\" default-x=\"337.8\" default-y=\"337.8\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"45.1\" letter-spacing=\"44.1\" line-height=\"23.9\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 337.9 ) );
	object.setDefaultY( MxNumberTenths( 337.9 ) );
	object.setRelativeX( MxNumberTenths( 337.9 ) );
	object.setRelativeY( MxNumberTenths( 337.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#040302" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 45.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 44.2 ) );
	object.setLineHeight( MxNumberOrNormal( 24 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<credit-words default-x=\"337.9\" default-y=\"337.9\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"45.2\" letter-spacing=\"44.2\" line-height=\"24\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 338 ) );
	object.setDefaultY( MxNumberTenths( 338 ) );
	object.setRelativeX( MxNumberTenths( 338 ) );
	object.setRelativeY( MxNumberTenths( 338 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 45.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 44.3 ) );
	object.setLineHeight( MxNumberOrNormal( 24.1 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<credit-words justify=\"center\" default-y=\"338\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"45.3\" letter-spacing=\"44.3\" line-height=\"24.1\" xml:lang=\"ABC\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 338.1 ) );
	object.setDefaultY( MxNumberTenths( 338.1 ) );
	object.setRelativeX( MxNumberTenths( 338.1 ) );
	object.setRelativeY( MxNumberTenths( 338.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#080706" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 45.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 44.4 ) );
	object.setLineHeight( MxNumberOrNormal( 24.2 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<credit-words font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" overline=\"1\" line-through=\"1\" rotation=\"45.4\" letter-spacing=\"44.4\" line-height=\"24.2\" xml:lang=\"DEF\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 338.2 ) );
	object.setDefaultY( MxNumberTenths( 338.2 ) );
	object.setRelativeX( MxNumberTenths( 338.2 ) );
	object.setRelativeY( MxNumberTenths( 338.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 45.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 44.5 ) );
	object.setLineHeight( MxNumberOrNormal( 24.3 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<credit-words justify=\"left\" default-x=\"338.2\" relative-x=\"338.2\" relative-y=\"338.2\" font-family=\"DEF\" font-weight=\"bold\" color=\"#090A0908\" overline=\"2\" line-through=\"2\" rotation=\"45.5\" letter-spacing=\"44.5\" line-height=\"24.3\" xml:lang=\"XYZ\" xml:space=\"preserve\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 338.3 ) );
	object.setDefaultY( MxNumberTenths( 338.3 ) );
	object.setRelativeX( MxNumberTenths( 338.3 ) );
	object.setRelativeY( MxNumberTenths( 338.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 45.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 44.6 ) );
	object.setLineHeight( MxNumberOrNormal( 24.4 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<credit-words default-x=\"338.3\" relative-x=\"338.3\" relative-y=\"338.3\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#0C0B0A\" overline=\"0\" line-through=\"0\" rotation=\"45.6\" letter-spacing=\"44.6\" line-height=\"24.4\" xml:lang=\"ABC\" xml:space=\"default\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 338.4 ) );
	object.setDefaultY( MxNumberTenths( 338.4 ) );
	object.setRelativeX( MxNumberTenths( 338.4 ) );
	object.setRelativeY( MxNumberTenths( 338.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 45.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 44.7 ) );
	object.setLineHeight( MxNumberOrNormal( 24.5 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<credit-words justify=\"right\" default-y=\"338.4\" relative-x=\"338.4\" relative-y=\"338.4\" font-style=\"italic\" font-weight=\"bold\" color=\"#0D0E0D0C\" line-through=\"1\" rotation=\"45.7\" letter-spacing=\"44.7\" line-height=\"24.5\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rlo\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 338.5 ) );
	object.setDefaultY( MxNumberTenths( 338.5 ) );
	object.setRelativeX( MxNumberTenths( 338.5 ) );
	object.setRelativeY( MxNumberTenths( 338.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 45.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 44.8 ) );
	object.setLineHeight( MxNumberOrNormal( 24.6 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<credit-words default-y=\"338.5\" relative-x=\"338.5\" relative-y=\"338.5\" font-style=\"normal\" font-weight=\"normal\" color=\"#100F0E\" line-through=\"2\" rotation=\"45.8\" letter-spacing=\"44.8\" line-height=\"24.6\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"ltr\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 338.6 ) );
	object.setDefaultY( MxNumberTenths( 338.6 ) );
	object.setRelativeX( MxNumberTenths( 338.6 ) );
	object.setRelativeY( MxNumberTenths( 338.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 45.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 44.9 ) );
	object.setLineHeight( MxNumberOrNormal( 24.7 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<credit-words justify=\"center\" default-x=\"338.6\" default-y=\"338.6\" relative-y=\"338.6\" font-style=\"italic\" font-weight=\"bold\" color=\"#11121110\" halign=\"center\" line-through=\"0\" rotation=\"45.9\" letter-spacing=\"44.9\" line-height=\"24.7\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"none\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 338.7 ) );
	object.setDefaultY( MxNumberTenths( 338.7 ) );
	object.setRelativeX( MxNumberTenths( 338.7 ) );
	object.setRelativeY( MxNumberTenths( 338.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#141312" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 46 ) );
	object.setLetterSpacing( MxNumberOrNormal( 45 ) );
	object.setLineHeight( MxNumberOrNormal( 24.8 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<credit-words default-x=\"338.7\" font-style=\"normal\" color=\"#141312\" halign=\"right\" rotation=\"46\" letter-spacing=\"45\" line-height=\"24.8\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"lro\" enclosure=\"rectangle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 338.8 ) );
	object.setDefaultY( MxNumberTenths( 338.8 ) );
	object.setRelativeX( MxNumberTenths( 338.8 ) );
	object.setRelativeY( MxNumberTenths( 338.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 46.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 45.1 ) );
	object.setLineHeight( MxNumberOrNormal( 24.9 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<credit-words justify=\"left\" font-style=\"italic\" color=\"#15161514\" halign=\"left\" rotation=\"46.1\" letter-spacing=\"45.1\" line-height=\"24.9\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"square\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 338.9 ) );
	object.setDefaultY( MxNumberTenths( 338.9 ) );
	object.setRelativeX( MxNumberTenths( 338.9 ) );
	object.setRelativeY( MxNumberTenths( 338.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#181716" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 46.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 45.2 ) );
	object.setLineHeight( MxNumberOrNormal( 25 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<credit-words font-style=\"normal\" color=\"#181716\" halign=\"center\" rotation=\"46.2\" letter-spacing=\"45.2\" line-height=\"25\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"ltr\" enclosure=\"oval\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 339 ) );
	object.setDefaultY( MxNumberTenths( 339 ) );
	object.setRelativeX( MxNumberTenths( 339 ) );
	object.setRelativeY( MxNumberTenths( 339 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 46.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 45.3 ) );
	object.setLineHeight( MxNumberOrNormal( 25.1 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<credit-words justify=\"right\" default-x=\"339\" default-y=\"339\" relative-x=\"339\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#191A1918\" halign=\"right\" valign=\"bottom\" letter-spacing=\"45.3\" line-height=\"25.1\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"circle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 339.1 ) );
	object.setDefaultY( MxNumberTenths( 339.1 ) );
	object.setRelativeX( MxNumberTenths( 339.1 ) );
	object.setRelativeY( MxNumberTenths( 339.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 46.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 45.4 ) );
	object.setLineHeight( MxNumberOrNormal( 25.2 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<credit-words default-x=\"339.1\" default-y=\"339.1\" relative-x=\"339.1\" font-family=\"DEF\" font-size=\"large\" color=\"#1C1B1A\" halign=\"left\" valign=\"baseline\" letter-spacing=\"45.4\" line-height=\"25.2\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"lro\" enclosure=\"bracket\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 339.2 ) );
	object.setDefaultY( MxNumberTenths( 339.2 ) );
	object.setRelativeX( MxNumberTenths( 339.2 ) );
	object.setRelativeY( MxNumberTenths( 339.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 46.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 45.5 ) );
	object.setLineHeight( MxNumberOrNormal( 25.3 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<credit-words justify=\"center\" default-y=\"339.2\" relative-x=\"339.2\" relative-y=\"339.2\" font-family=\"XYZ\" font-size=\"1.1\" halign=\"center\" valign=\"top\" letter-spacing=\"45.5\" line-height=\"25.3\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"triangle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 339.3 ) );
	object.setDefaultY( MxNumberTenths( 339.3 ) );
	object.setRelativeX( MxNumberTenths( 339.3 ) );
	object.setRelativeY( MxNumberTenths( 339.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 46.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 45.6 ) );
	object.setLineHeight( MxNumberOrNormal( 25.4 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<credit-words relative-x=\"339.3\" relative-y=\"339.3\" font-family=\"ABC\" font-size=\"large\" halign=\"right\" valign=\"middle\" line-height=\"25.4\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\" enclosure=\"diamond\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 339.4 ) );
	object.setDefaultY( MxNumberTenths( 339.4 ) );
	object.setRelativeX( MxNumberTenths( 339.4 ) );
	object.setRelativeY( MxNumberTenths( 339.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 46.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 45.7 ) );
	object.setLineHeight( MxNumberOrNormal( 25.5 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<credit-words justify=\"left\" default-x=\"339.4\" relative-y=\"339.4\" font-family=\"DEF\" font-size=\"1.1\" halign=\"left\" valign=\"bottom\" underline=\"2\" line-height=\"25.5\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"none\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 339.5 ) );
	object.setDefaultY( MxNumberTenths( 339.5 ) );
	object.setRelativeX( MxNumberTenths( 339.5 ) );
	object.setRelativeY( MxNumberTenths( 339.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#242322" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 46.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 45.8 ) );
	object.setLineHeight( MxNumberOrNormal( 25.6 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<credit-words default-x=\"339.5\" relative-y=\"339.5\" font-family=\"XYZ\" font-size=\"large\" halign=\"center\" valign=\"baseline\" underline=\"0\" line-height=\"25.6\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"lro\" enclosure=\"rectangle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 339.6 ) );
	object.setDefaultY( MxNumberTenths( 339.6 ) );
	object.setRelativeX( MxNumberTenths( 339.6 ) );
	object.setRelativeY( MxNumberTenths( 339.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 46.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 45.9 ) );
	object.setLineHeight( MxNumberOrNormal( 25.7 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<credit-words justify=\"right\" default-y=\"339.6\" relative-y=\"339.6\" font-size=\"1.1\" font-weight=\"bold\" halign=\"right\" valign=\"top\" underline=\"1\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"square\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 339.7 ) );
	object.setDefaultY( MxNumberTenths( 339.7 ) );
	object.setRelativeX( MxNumberTenths( 339.7 ) );
	object.setRelativeY( MxNumberTenths( 339.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#282726" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 47 ) );
	object.setLetterSpacing( MxNumberOrNormal( 46 ) );
	object.setLineHeight( MxNumberOrNormal( 25.8 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<credit-words default-y=\"339.7\" font-size=\"large\" font-weight=\"normal\" valign=\"middle\" underline=\"2\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"ltr\" enclosure=\"oval\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 339.8 ) );
	object.setDefaultY( MxNumberTenths( 339.8 ) );
	object.setRelativeX( MxNumberTenths( 339.8 ) );
	object.setRelativeY( MxNumberTenths( 339.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 47.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 46.1 ) );
	object.setLineHeight( MxNumberOrNormal( 25.9 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<credit-words justify=\"center\" default-x=\"339.8\" default-y=\"339.8\" relative-x=\"339.8\" font-style=\"italic\" font-weight=\"bold\" valign=\"bottom\" underline=\"0\" overline=\"0\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"circle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 339.9 ) );
	object.setDefaultY( MxNumberTenths( 339.9 ) );
	object.setRelativeX( MxNumberTenths( 339.9 ) );
	object.setRelativeY( MxNumberTenths( 339.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 47.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 46.2 ) );
	object.setLineHeight( MxNumberOrNormal( 26 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<credit-words default-x=\"339.9\" relative-x=\"339.9\" font-style=\"normal\" font-weight=\"normal\" valign=\"baseline\" underline=\"1\" overline=\"1\" xml:space=\"default\" dir=\"lro\" enclosure=\"bracket\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 340 ) );
	object.setDefaultY( MxNumberTenths( 340 ) );
	object.setRelativeX( MxNumberTenths( 340 ) );
	object.setRelativeY( MxNumberTenths( 340 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 47.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 46.3 ) );
	object.setLineHeight( MxNumberOrNormal( 26.1 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<credit-words justify=\"left\" relative-x=\"340\" font-style=\"italic\" font-weight=\"bold\" valign=\"top\" underline=\"2\" overline=\"2\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"triangle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 340.1 ) );
	object.setDefaultY( MxNumberTenths( 340.1 ) );
	object.setRelativeX( MxNumberTenths( 340.1 ) );
	object.setRelativeY( MxNumberTenths( 340.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 47.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 46.4 ) );
	object.setLineHeight( MxNumberOrNormal( 26.2 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<credit-words relative-x=\"340.1\" font-style=\"normal\" font-weight=\"normal\" valign=\"middle\" underline=\"0\" overline=\"0\" xml:space=\"default\" dir=\"ltr\" enclosure=\"diamond\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 340.2 ) );
	object.setDefaultY( MxNumberTenths( 340.2 ) );
	object.setRelativeX( MxNumberTenths( 340.2 ) );
	object.setRelativeY( MxNumberTenths( 340.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 47.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 46.5 ) );
	object.setLineHeight( MxNumberOrNormal( 26.3 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<credit-words justify=\"right\" default-x=\"340.2\" default-y=\"340.2\" relative-y=\"340.2\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" color=\"#31323130\" underline=\"1\" overline=\"1\" line-through=\"1\" dir=\"rtl\" enclosure=\"none\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 340.3 ) );
	object.setDefaultY( MxNumberTenths( 340.3 ) );
	object.setRelativeX( MxNumberTenths( 340.3 ) );
	object.setRelativeY( MxNumberTenths( 340.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#343332" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 47.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 46.6 ) );
	object.setLineHeight( MxNumberOrNormal( 26.4 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<credit-words default-x=\"340.3\" default-y=\"340.3\" relative-y=\"340.3\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" color=\"#343332\" underline=\"2\" overline=\"2\" line-through=\"2\" dir=\"lro\" enclosure=\"rectangle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 340.4 ) );
	object.setDefaultY( MxNumberTenths( 340.4 ) );
	object.setRelativeX( MxNumberTenths( 340.4 ) );
	object.setRelativeY( MxNumberTenths( 340.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 47.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 46.7 ) );
	object.setLineHeight( MxNumberOrNormal( 26.5 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<credit-words justify=\"center\" default-y=\"340.4\" relative-y=\"340.4\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" color=\"#35363534\" underline=\"0\" overline=\"0\" line-through=\"0\" dir=\"rlo\" enclosure=\"square\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 340.5 ) );
	object.setDefaultY( MxNumberTenths( 340.5 ) );
	object.setRelativeX( MxNumberTenths( 340.5 ) );
	object.setRelativeY( MxNumberTenths( 340.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#383736" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 47.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 46.8 ) );
	object.setLineHeight( MxNumberOrNormal( 26.6 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<credit-words relative-y=\"340.5\" font-family=\"ABC\" color=\"#383736\" underline=\"1\" overline=\"1\" line-through=\"1\" enclosure=\"oval\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 340.6 ) );
	object.setDefaultY( MxNumberTenths( 340.6 ) );
	object.setRelativeX( MxNumberTenths( 340.6 ) );
	object.setRelativeY( MxNumberTenths( 340.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 47.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 46.9 ) );
	object.setLineHeight( MxNumberOrNormal( 26.7 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<credit-words justify=\"left\" default-x=\"340.6\" relative-x=\"340.6\" relative-y=\"340.6\" font-family=\"DEF\" font-size=\"1.1\" color=\"#393A3938\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"47.9\" enclosure=\"circle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 340.7 ) );
	object.setDefaultY( MxNumberTenths( 340.7 ) );
	object.setRelativeX( MxNumberTenths( 340.7 ) );
	object.setRelativeY( MxNumberTenths( 340.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 48 ) );
	object.setLetterSpacing( MxNumberOrNormal( 47 ) );
	object.setLineHeight( MxNumberOrNormal( 26.8 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<credit-words default-x=\"340.7\" relative-x=\"340.7\" font-family=\"XYZ\" font-size=\"large\" color=\"#3C3B3A\" overline=\"0\" line-through=\"0\" rotation=\"48\" enclosure=\"bracket\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 340.8 ) );
	object.setDefaultY( MxNumberTenths( 340.8 ) );
	object.setRelativeX( MxNumberTenths( 340.8 ) );
	object.setRelativeY( MxNumberTenths( 340.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 48.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 47.1 ) );
	object.setLineHeight( MxNumberOrNormal( 26.9 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<credit-words justify=\"right\" default-y=\"340.8\" relative-x=\"340.8\" font-size=\"1.1\" color=\"#3D3E3D3C\" halign=\"right\" overline=\"1\" line-through=\"1\" rotation=\"48.1\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 340.9 ) );
	object.setDefaultY( MxNumberTenths( 340.9 ) );
	object.setRelativeX( MxNumberTenths( 340.9 ) );
	object.setRelativeY( MxNumberTenths( 340.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 48.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 47.2 ) );
	object.setLineHeight( MxNumberOrNormal( 27 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<credit-words default-y=\"340.9\" relative-x=\"340.9\" font-size=\"large\" color=\"#403F3E\" halign=\"left\" overline=\"2\" line-through=\"2\" rotation=\"48.2\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 341 ) );
	object.setDefaultY( MxNumberTenths( 341 ) );
	object.setRelativeX( MxNumberTenths( 341 ) );
	object.setRelativeY( MxNumberTenths( 341 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 48.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 47.3 ) );
	object.setLineHeight( MxNumberOrNormal( 27.1 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<credit-words justify=\"center\" default-x=\"341\" default-y=\"341\" font-size=\"1.1\" color=\"#41424140\" halign=\"center\" overline=\"0\" line-through=\"0\" rotation=\"48.3\" letter-spacing=\"47.3\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 341.1 ) );
	object.setDefaultY( MxNumberTenths( 341.1 ) );
	object.setRelativeX( MxNumberTenths( 341.1 ) );
	object.setRelativeY( MxNumberTenths( 341.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#444342" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 48.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 47.4 ) );
	object.setLineHeight( MxNumberOrNormal( 27.2 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<credit-words default-x=\"341.1\" font-size=\"large\" color=\"#444342\" halign=\"right\" overline=\"1\" line-through=\"1\" rotation=\"48.4\" letter-spacing=\"47.4\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 341.2 ) );
	object.setDefaultY( MxNumberTenths( 341.2 ) );
	object.setRelativeX( MxNumberTenths( 341.2 ) );
	object.setRelativeY( MxNumberTenths( 341.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 48.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 47.5 ) );
	object.setLineHeight( MxNumberOrNormal( 27.3 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<credit-words justify=\"left\" relative-y=\"341.2\" font-style=\"italic\" font-size=\"1.1\" halign=\"left\" line-through=\"2\" rotation=\"48.5\" letter-spacing=\"47.5\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 341.3 ) );
	object.setDefaultY( MxNumberTenths( 341.3 ) );
	object.setRelativeX( MxNumberTenths( 341.3 ) );
	object.setRelativeY( MxNumberTenths( 341.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#484746" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 48.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 47.6 ) );
	object.setLineHeight( MxNumberOrNormal( 27.4 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<credit-words relative-y=\"341.3\" font-style=\"normal\" font-size=\"large\" halign=\"center\" line-through=\"0\" rotation=\"48.6\" letter-spacing=\"47.6\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 341.4 ) );
	object.setDefaultY( MxNumberTenths( 341.4 ) );
	object.setRelativeX( MxNumberTenths( 341.4 ) );
	object.setRelativeY( MxNumberTenths( 341.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 48.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 47.7 ) );
	object.setLineHeight( MxNumberOrNormal( 27.5 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<credit-words justify=\"right\" default-x=\"341.4\" default-y=\"341.4\" relative-x=\"341.4\" relative-y=\"341.4\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" halign=\"right\" valign=\"bottom\" line-through=\"1\" rotation=\"48.7\" letter-spacing=\"47.7\" line-height=\"27.5\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 341.5 ) );
	object.setDefaultY( MxNumberTenths( 341.5 ) );
	object.setRelativeX( MxNumberTenths( 341.5 ) );
	object.setRelativeY( MxNumberTenths( 341.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 48.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 47.8 ) );
	object.setLineHeight( MxNumberOrNormal( 27.6 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<credit-words default-x=\"341.5\" default-y=\"341.5\" relative-x=\"341.5\" relative-y=\"341.5\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" halign=\"left\" valign=\"baseline\" line-through=\"2\" rotation=\"48.8\" letter-spacing=\"47.8\" line-height=\"27.6\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 341.6 ) );
	object.setDefaultY( MxNumberTenths( 341.6 ) );
	object.setRelativeX( MxNumberTenths( 341.6 ) );
	object.setRelativeY( MxNumberTenths( 341.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 48.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 47.9 ) );
	object.setLineHeight( MxNumberOrNormal( 27.7 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<credit-words justify=\"center\" default-y=\"341.6\" relative-x=\"341.6\" relative-y=\"341.6\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" halign=\"center\" valign=\"top\" line-through=\"0\" rotation=\"48.9\" letter-spacing=\"47.9\" line-height=\"27.7\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 341.7 ) );
	object.setDefaultY( MxNumberTenths( 341.7 ) );
	object.setRelativeX( MxNumberTenths( 341.7 ) );
	object.setRelativeY( MxNumberTenths( 341.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 49 ) );
	object.setLetterSpacing( MxNumberOrNormal( 48 ) );
	object.setLineHeight( MxNumberOrNormal( 27.8 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<credit-words relative-x=\"341.7\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" halign=\"right\" valign=\"middle\" rotation=\"49\" letter-spacing=\"48\" line-height=\"27.8\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 341.8 ) );
	object.setDefaultY( MxNumberTenths( 341.8 ) );
	object.setRelativeX( MxNumberTenths( 341.8 ) );
	object.setRelativeY( MxNumberTenths( 341.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 49.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 48.1 ) );
	object.setLineHeight( MxNumberOrNormal( 27.9 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<credit-words justify=\"left\" default-x=\"341.8\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" halign=\"left\" valign=\"bottom\" rotation=\"49.1\" letter-spacing=\"48.1\" line-height=\"27.9\" xml:lang=\"XYZ\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 341.9 ) );
	object.setDefaultY( MxNumberTenths( 341.9 ) );
	object.setRelativeX( MxNumberTenths( 341.9 ) );
	object.setRelativeY( MxNumberTenths( 341.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#545352" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 49.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 48.2 ) );
	object.setLineHeight( MxNumberOrNormal( 28 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<credit-words default-x=\"341.9\" font-family=\"XYZ\" font-weight=\"normal\" valign=\"baseline\" rotation=\"49.2\" letter-spacing=\"48.2\" line-height=\"28\" xml:lang=\"ABC\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 342 ) );
	object.setDefaultY( MxNumberTenths( 342 ) );
	object.setRelativeX( MxNumberTenths( 342 ) );
	object.setRelativeY( MxNumberTenths( 342 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 49.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 48.3 ) );
	object.setLineHeight( MxNumberOrNormal( 28.1 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<credit-words justify=\"right\" default-y=\"342\" font-weight=\"bold\" valign=\"top\" underline=\"1\" rotation=\"49.3\" letter-spacing=\"48.3\" line-height=\"28.1\" xml:lang=\"DEF\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 342.1 ) );
	object.setDefaultY( MxNumberTenths( 342.1 ) );
	object.setRelativeX( MxNumberTenths( 342.1 ) );
	object.setRelativeY( MxNumberTenths( 342.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#585756" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 49.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 48.4 ) );
	object.setLineHeight( MxNumberOrNormal( 28.2 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<credit-words default-y=\"342.1\" font-weight=\"normal\" valign=\"middle\" underline=\"2\" rotation=\"49.4\" letter-spacing=\"48.4\" line-height=\"28.2\" xml:lang=\"XYZ\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 342.2 ) );
	object.setDefaultY( MxNumberTenths( 342.2 ) );
	object.setRelativeX( MxNumberTenths( 342.2 ) );
	object.setRelativeY( MxNumberTenths( 342.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 49.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 48.5 ) );
	object.setLineHeight( MxNumberOrNormal( 28.3 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<credit-words justify=\"center\" default-x=\"342.2\" default-y=\"342.2\" relative-x=\"342.2\" relative-y=\"342.2\" font-size=\"1.1\" font-weight=\"bold\" color=\"#595A5958\" valign=\"bottom\" underline=\"0\" letter-spacing=\"48.5\" line-height=\"28.3\" xml:lang=\"ABC\" xml:space=\"preserve\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 342.3 ) );
	object.setDefaultY( MxNumberTenths( 342.3 ) );
	object.setRelativeX( MxNumberTenths( 342.3 ) );
	object.setRelativeY( MxNumberTenths( 342.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 49.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 48.6 ) );
	object.setLineHeight( MxNumberOrNormal( 28.4 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<credit-words default-x=\"342.3\" relative-x=\"342.3\" relative-y=\"342.3\" font-size=\"large\" color=\"#5C5B5A\" valign=\"baseline\" underline=\"1\" letter-spacing=\"48.6\" line-height=\"28.4\" xml:lang=\"DEF\" xml:space=\"default\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 342.4 ) );
	object.setDefaultY( MxNumberTenths( 342.4 ) );
	object.setRelativeX( MxNumberTenths( 342.4 ) );
	object.setRelativeY( MxNumberTenths( 342.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 49.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 48.7 ) );
	object.setLineHeight( MxNumberOrNormal( 28.5 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<credit-words justify=\"left\" relative-x=\"342.4\" relative-y=\"342.4\" font-size=\"1.1\" color=\"#5D5E5D5C\" valign=\"top\" underline=\"2\" letter-spacing=\"48.7\" line-height=\"28.5\" xml:lang=\"XYZ\" xml:space=\"preserve\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 342.5 ) );
	object.setDefaultY( MxNumberTenths( 342.5 ) );
	object.setRelativeX( MxNumberTenths( 342.5 ) );
	object.setRelativeY( MxNumberTenths( 342.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 49.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 48.8 ) );
	object.setLineHeight( MxNumberOrNormal( 28.6 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<credit-words relative-x=\"342.5\" relative-y=\"342.5\" font-size=\"large\" color=\"#605F5E\" valign=\"middle\" underline=\"0\" letter-spacing=\"48.8\" line-height=\"28.6\" xml:lang=\"ABC\" xml:space=\"default\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 342.6 ) );
	object.setDefaultY( MxNumberTenths( 342.6 ) );
	object.setRelativeX( MxNumberTenths( 342.6 ) );
	object.setRelativeY( MxNumberTenths( 342.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 49.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 48.9 ) );
	object.setLineHeight( MxNumberOrNormal( 28.7 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<credit-words justify=\"right\" default-x=\"342.6\" default-y=\"342.6\" relative-y=\"342.6\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#61626160\" underline=\"1\" overline=\"1\" letter-spacing=\"48.9\" line-height=\"28.7\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rtl\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 342.7 ) );
	object.setDefaultY( MxNumberTenths( 342.7 ) );
	object.setRelativeX( MxNumberTenths( 342.7 ) );
	object.setRelativeY( MxNumberTenths( 342.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 50 ) );
	object.setLetterSpacing( MxNumberOrNormal( 49 ) );
	object.setLineHeight( MxNumberOrNormal( 28.8 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<credit-words default-x=\"342.7\" default-y=\"342.7\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#646362\" underline=\"2\" overline=\"2\" line-height=\"28.8\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"lro\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 342.8 ) );
	object.setDefaultY( MxNumberTenths( 342.8 ) );
	object.setRelativeX( MxNumberTenths( 342.8 ) );
	object.setRelativeY( MxNumberTenths( 342.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 50.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 49.1 ) );
	object.setLineHeight( MxNumberOrNormal( 28.9 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<credit-words justify=\"center\" default-y=\"342.8\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#65666564\" underline=\"0\" overline=\"0\" line-height=\"28.9\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 342.9 ) );
	object.setDefaultY( MxNumberTenths( 342.9 ) );
	object.setRelativeX( MxNumberTenths( 342.9 ) );
	object.setRelativeY( MxNumberTenths( 342.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 50.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 49.2 ) );
	object.setLineHeight( MxNumberOrNormal( 29 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<credit-words font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#686766\" underline=\"1\" overline=\"1\" line-height=\"29\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 343 ) );
	object.setDefaultY( MxNumberTenths( 343 ) );
	object.setRelativeX( MxNumberTenths( 343 ) );
	object.setRelativeY( MxNumberTenths( 343 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 50.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 49.3 ) );
	object.setLineHeight( MxNumberOrNormal( 29.1 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<credit-words justify=\"left\" default-x=\"343\" relative-x=\"343\" font-family=\"DEF\" font-style=\"italic\" color=\"#696A6968\" halign=\"left\" underline=\"2\" overline=\"2\" line-height=\"29.1\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"circle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 343.1 ) );
	object.setDefaultY( MxNumberTenths( 343.1 ) );
	object.setRelativeX( MxNumberTenths( 343.1 ) );
	object.setRelativeY( MxNumberTenths( 343.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 50.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 49.4 ) );
	object.setLineHeight( MxNumberOrNormal( 29.2 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<credit-words default-x=\"343.1\" relative-x=\"343.1\" font-family=\"XYZ\" font-style=\"normal\" color=\"#6C6B6A\" halign=\"center\" underline=\"0\" overline=\"0\" line-height=\"29.2\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"lro\" enclosure=\"bracket\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 343.2 ) );
	object.setDefaultY( MxNumberTenths( 343.2 ) );
	object.setRelativeX( MxNumberTenths( 343.2 ) );
	object.setRelativeY( MxNumberTenths( 343.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 50.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 49.5 ) );
	object.setLineHeight( MxNumberOrNormal( 29.3 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<credit-words justify=\"right\" default-y=\"343.2\" relative-x=\"343.2\" relative-y=\"343.2\" font-style=\"italic\" font-weight=\"bold\" halign=\"right\" underline=\"1\" overline=\"1\" line-through=\"1\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"triangle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 343.3 ) );
	object.setDefaultY( MxNumberTenths( 343.3 ) );
	object.setRelativeX( MxNumberTenths( 343.3 ) );
	object.setRelativeY( MxNumberTenths( 343.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 50.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 49.6 ) );
	object.setLineHeight( MxNumberOrNormal( 29.4 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<credit-words default-y=\"343.3\" relative-x=\"343.3\" relative-y=\"343.3\" font-weight=\"normal\" halign=\"left\" overline=\"2\" line-through=\"2\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"ltr\" enclosure=\"diamond\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 343.4 ) );
	object.setDefaultY( MxNumberTenths( 343.4 ) );
	object.setRelativeX( MxNumberTenths( 343.4 ) );
	object.setRelativeY( MxNumberTenths( 343.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 50.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 49.7 ) );
	object.setLineHeight( MxNumberOrNormal( 29.5 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<credit-words justify=\"center\" default-x=\"343.4\" default-y=\"343.4\" relative-y=\"343.4\" font-weight=\"bold\" halign=\"center\" overline=\"0\" line-through=\"0\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"none\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 343.5 ) );
	object.setDefaultY( MxNumberTenths( 343.5 ) );
	object.setRelativeX( MxNumberTenths( 343.5 ) );
	object.setRelativeY( MxNumberTenths( 343.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 50.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 49.8 ) );
	object.setLineHeight( MxNumberOrNormal( 29.6 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<credit-words default-x=\"343.5\" relative-y=\"343.5\" font-weight=\"normal\" halign=\"right\" overline=\"1\" line-through=\"1\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"lro\" enclosure=\"rectangle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 343.6 ) );
	object.setDefaultY( MxNumberTenths( 343.6 ) );
	object.setRelativeX( MxNumberTenths( 343.6 ) );
	object.setRelativeY( MxNumberTenths( 343.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 50.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 49.9 ) );
	object.setLineHeight( MxNumberOrNormal( 29.7 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<credit-words justify=\"left\" relative-y=\"343.6\" font-weight=\"bold\" halign=\"left\" overline=\"2\" line-through=\"2\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"square\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 343.7 ) );
	object.setDefaultY( MxNumberTenths( 343.7 ) );
	object.setRelativeX( MxNumberTenths( 343.7 ) );
	object.setRelativeY( MxNumberTenths( 343.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 51 ) );
	object.setLetterSpacing( MxNumberOrNormal( 50 ) );
	object.setLineHeight( MxNumberOrNormal( 29.8 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<credit-words font-weight=\"normal\" halign=\"center\" overline=\"0\" line-through=\"0\" xml:space=\"default\" dir=\"ltr\" enclosure=\"oval\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 343.8 ) );
	object.setDefaultY( MxNumberTenths( 343.8 ) );
	object.setRelativeX( MxNumberTenths( 343.8 ) );
	object.setRelativeY( MxNumberTenths( 343.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 51.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 50.1 ) );
	object.setLineHeight( MxNumberOrNormal( 29.9 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<credit-words justify=\"right\" default-x=\"343.8\" default-y=\"343.8\" relative-x=\"343.8\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" halign=\"right\" valign=\"bottom\" overline=\"1\" line-through=\"1\" rotation=\"51.1\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"circle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 343.9 ) );
	object.setDefaultY( MxNumberTenths( 343.9 ) );
	object.setRelativeX( MxNumberTenths( 343.9 ) );
	object.setRelativeY( MxNumberTenths( 343.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 51.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 50.2 ) );
	object.setLineHeight( MxNumberOrNormal( 30 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<credit-words default-x=\"343.9\" default-y=\"343.9\" relative-x=\"343.9\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" halign=\"left\" valign=\"baseline\" overline=\"2\" line-through=\"2\" rotation=\"51.2\" xml:space=\"default\" dir=\"lro\" enclosure=\"bracket\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 344 ) );
	object.setDefaultY( MxNumberTenths( 344 ) );
	object.setRelativeX( MxNumberTenths( 344 ) );
	object.setRelativeY( MxNumberTenths( 344 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 51.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 50.3 ) );
	object.setLineHeight( MxNumberOrNormal( 30.1 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<credit-words justify=\"center\" default-y=\"344\" relative-x=\"344\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" halign=\"center\" valign=\"top\" line-through=\"0\" rotation=\"51.3\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"triangle\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 344.1 ) );
	object.setDefaultY( MxNumberTenths( 344.1 ) );
	object.setRelativeX( MxNumberTenths( 344.1 ) );
	object.setRelativeY( MxNumberTenths( 344.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 51.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 50.4 ) );
	object.setLineHeight( MxNumberOrNormal( 30.2 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<credit-words relative-x=\"344.1\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" valign=\"middle\" line-through=\"1\" rotation=\"51.4\" xml:space=\"default\" dir=\"ltr\" enclosure=\"diamond\">D,E,F</credit-words>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEsCreditWords )
{
	MxEsCreditWords object( XsString( "D,E,F" ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 344.2 ) );
	object.setDefaultY( MxNumberTenths( 344.2 ) );
	object.setRelativeX( MxNumberTenths( 344.2 ) );
	object.setRelativeY( MxNumberTenths( 344.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 51.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 50.5 ) );
	object.setLineHeight( MxNumberOrNormal( 30.3 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<credit-words>D,E,F</credit-words>";
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


