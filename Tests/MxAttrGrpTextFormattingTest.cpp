/** *******************************************************
  * 
  * MxAttrGrpTextFormattingTest.cpp
  * Created: 2014-11-28 19:17:15
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpTextFormatting.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getJustify().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues1, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues2, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues3, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues4, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues5, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues6, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues7, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues8, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues9, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues10, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getHalign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues11, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxEnumValign(  ) ).toString();
	std::string actual = object.getValign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues12, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getUnderline().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues13, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getOverline().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues14, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getLineThrough().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues15, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxNumberRotationDegrees(  ) ).toString();
	std::string actual = object.getRotation().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues16, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxNumberOrNormal( "normal" ) ).toString();
	std::string actual = object.getLetterSpacing().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues17, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxNumberOrNormal(  ) ).toString();
	std::string actual = object.getLineHeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues18, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( XmlLang(  ) ).toString();
	std::string actual = object.getXmlLang().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues19, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( XmlSpace(  ) ).toString();
	std::string actual = object.getXmlSpace().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues20, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxEnumTextDirection(  ) ).toString();
	std::string actual = object.getDir().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues21, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = ( MxEnumEnclosureShape(  ) ).toString();
	std::string actual = object.getEnclosure().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = "MxAttrGrpTextFormatting";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = "text-formatting";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected = "The text-formatting attribute group collects the common formatting attributes for text elements. Default values may differ across the elements that use this group.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setJustify0, MxAttrGrpTextFormatting )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setJustify( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getJustify();
	CHECK_EQUAL( expected, actual )
	object.setJustify( value2 );
	expected = value2;
	actual = object.getJustify();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX1, MxAttrGrpTextFormatting )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY2, MxAttrGrpTextFormatting )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX3, MxAttrGrpTextFormatting )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY4, MxAttrGrpTextFormatting )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily5, MxAttrGrpTextFormatting )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle6, MxAttrGrpTextFormatting )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize7, MxAttrGrpTextFormatting )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight8, MxAttrGrpTextFormatting )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor9, MxAttrGrpTextFormatting )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setHalign10, MxAttrGrpTextFormatting )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setHalign( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
	object.setHalign( value2 );
	expected = value2;
	actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
}
TEST( setValign11, MxAttrGrpTextFormatting )
{
	MxEnumValign value1( lexicon::enums::Valign::baseline );
	MxEnumValign value2( lexicon::enums::Valign::bottom );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setValign( value1 );
	MxEnumValign expected = value1;
	MxEnumValign actual = object.getValign();
	CHECK_EQUAL( expected, actual )
	object.setValign( value2 );
	expected = value2;
	actual = object.getValign();
	CHECK_EQUAL( expected, actual )
}
TEST( setUnderline12, MxAttrGrpTextFormatting )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setUnderline( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getUnderline();
	CHECK_EQUAL( expected, actual )
	object.setUnderline( value2 );
	expected = value2;
	actual = object.getUnderline();
	CHECK_EQUAL( expected, actual )
}
TEST( setOverline13, MxAttrGrpTextFormatting )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setOverline( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getOverline();
	CHECK_EQUAL( expected, actual )
	object.setOverline( value2 );
	expected = value2;
	actual = object.getOverline();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineThrough14, MxAttrGrpTextFormatting )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setLineThrough( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getLineThrough();
	CHECK_EQUAL( expected, actual )
	object.setLineThrough( value2 );
	expected = value2;
	actual = object.getLineThrough();
	CHECK_EQUAL( expected, actual )
}
TEST( setRotation15, MxAttrGrpTextFormatting )
{
	MxNumberRotationDegrees value1( -179.9 );
	MxNumberRotationDegrees value2( -179.8 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setRotation( value1 );
	MxNumberRotationDegrees expected = value1;
	MxNumberRotationDegrees actual = object.getRotation();
	CHECK_EQUAL( expected, actual )
	object.setRotation( value2 );
	expected = value2;
	actual = object.getRotation();
	CHECK_EQUAL( expected, actual )
}
TEST( setLetterSpacing16, MxAttrGrpTextFormatting )
{
	MxNumberOrNormal value1( 0.1 );
	MxNumberOrNormal value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setLetterSpacing( value1 );
	MxNumberOrNormal expected = value1;
	MxNumberOrNormal actual = object.getLetterSpacing();
	CHECK_EQUAL( expected, actual )
	object.setLetterSpacing( value2 );
	expected = value2;
	actual = object.getLetterSpacing();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineHeight17, MxAttrGrpTextFormatting )
{
	MxNumberOrNormal value1( 0.1 );
	MxNumberOrNormal value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setLineHeight( value1 );
	MxNumberOrNormal expected = value1;
	MxNumberOrNormal actual = object.getLineHeight();
	CHECK_EQUAL( expected, actual )
	object.setLineHeight( value2 );
	expected = value2;
	actual = object.getLineHeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setXmlLang18, MxAttrGrpTextFormatting )
{
	XmlLang value1( "en" );
	XmlLang value2( "fr" );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setXmlLang( value1 );
	XmlLang expected = value1;
	XmlLang actual = object.getXmlLang();
	CHECK_EQUAL( expected, actual )
	object.setXmlLang( value2 );
	expected = value2;
	actual = object.getXmlLang();
	CHECK_EQUAL( expected, actual )
}
TEST( setXmlSpace19, MxAttrGrpTextFormatting )
{
	XmlSpace value1( lexicon::enums::XmlSpace::preserve );
	XmlSpace value2( lexicon::enums::XmlSpace::default_ );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setXmlSpace( value1 );
	XmlSpace expected = value1;
	XmlSpace actual = object.getXmlSpace();
	CHECK_EQUAL( expected, actual )
	object.setXmlSpace( value2 );
	expected = value2;
	actual = object.getXmlSpace();
	CHECK_EQUAL( expected, actual )
}
TEST( setDir20, MxAttrGrpTextFormatting )
{
	MxEnumTextDirection value1( lexicon::enums::TextDirection::rlo );
	MxEnumTextDirection value2( lexicon::enums::TextDirection::lro );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
	object.setDir( value1 );
	MxEnumTextDirection expected = value1;
	MxEnumTextDirection actual = object.getDir();
	CHECK_EQUAL( expected, actual )
	object.setDir( value2 );
	expected = value2;
	actual = object.getDir();
	CHECK_EQUAL( expected, actual )
}
TEST( setEnclosure21, MxAttrGrpTextFormatting )
{
	MxEnumEnclosureShape value1( lexicon::enums::EnclosureShape::none );
	MxEnumEnclosureShape value2( lexicon::enums::EnclosureShape::diamond );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextFormatting object;
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

TEST( getIsJustifyRequired0, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsJustifyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired1, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired2, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired3, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired4, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired5, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired6, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired7, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired8, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired9, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignRequired10, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsHalignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignRequired11, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsValignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsUnderlineRequired12, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsUnderlineRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsOverlineRequired13, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsOverlineRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineThroughRequired14, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsLineThroughRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRotationRequired15, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsRotationRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLetterSpacingRequired16, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsLetterSpacingRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineHeightRequired17, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsLineHeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangRequired18, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsXmlLangRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlSpaceRequired19, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsXmlSpaceRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDirRequired20, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsDirRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEnclosureRequired21, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsEnclosureRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsJustifyPresent0, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsDefaultXPresent1, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsDefaultYPresent2, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsRelativeXPresent3, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsRelativeYPresent4, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsFontFamilyPresent5, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsFontStylePresent6, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsFontSizePresent7, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsFontWeightPresent8, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsColorPresent9, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsHalignPresent10, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsValignPresent11, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsUnderlinePresent12, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsOverlinePresent13, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsLineThroughPresent14, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsRotationPresent15, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsLetterSpacingPresent16, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsLineHeightPresent17, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsXmlLangPresent18, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsXmlSpacePresent19, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsDirPresent20, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
TEST( getIsEnclosurePresent21, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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

TEST( toString0, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	std::string expected;
	std::string actual;
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 22.8 ) );
	object.setDefaultY( MxNumberTenths( 22.8 ) );
	object.setRelativeX( MxNumberTenths( 22.8 ) );
	object.setRelativeY( MxNumberTenths( 22.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 1.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 0.3 ) );
	object.setLineHeight( MxNumberOrNormal( 0.3 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
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
	expected = "justify=\"left\" default-x=\"22.8\" default-y=\"22.8\" relative-x=\"22.8\" relative-y=\"22.8\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#999A9998\" halign=\"right\" valign=\"bottom\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"1.1\" letter-spacing=\"0.3\" line-height=\"0.3\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 22.9 ) );
	object.setDefaultY( MxNumberTenths( 22.9 ) );
	object.setRelativeX( MxNumberTenths( 22.9 ) );
	object.setRelativeY( MxNumberTenths( 22.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 1.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 0.4 ) );
	object.setLineHeight( MxNumberOrNormal( 0.4 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "default-x=\"22.9\" default-y=\"22.9\" relative-x=\"22.9\" relative-y=\"22.9\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#9C9B9A\" halign=\"left\" valign=\"baseline\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"1.2\" letter-spacing=\"0.4\" line-height=\"0.4\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 23 ) );
	object.setDefaultY( MxNumberTenths( 23 ) );
	object.setRelativeX( MxNumberTenths( 23 ) );
	object.setRelativeY( MxNumberTenths( 23 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 1.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 0.5 ) );
	object.setLineHeight( MxNumberOrNormal( 0.5 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "justify=\"right\" default-y=\"23\" relative-x=\"23\" relative-y=\"23\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#9D9E9D9C\" halign=\"center\" valign=\"top\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"1.3\" letter-spacing=\"0.5\" line-height=\"0.5\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 23.1 ) );
	object.setDefaultY( MxNumberTenths( 23.1 ) );
	object.setRelativeX( MxNumberTenths( 23.1 ) );
	object.setRelativeY( MxNumberTenths( 23.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 1.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 0.6 ) );
	object.setLineHeight( MxNumberOrNormal( 0.6 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "relative-x=\"23.1\" relative-y=\"23.1\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#A09F9E\" halign=\"right\" valign=\"middle\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"1.4\" letter-spacing=\"0.6\" line-height=\"0.6\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 23.2 ) );
	object.setDefaultY( MxNumberTenths( 23.2 ) );
	object.setRelativeX( MxNumberTenths( 23.2 ) );
	object.setRelativeY( MxNumberTenths( 23.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 1.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 0.7 ) );
	object.setLineHeight( MxNumberOrNormal( 0.7 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "justify=\"center\" default-x=\"23.2\" relative-y=\"23.2\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#A1A2A1A0\" halign=\"left\" valign=\"bottom\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"1.5\" letter-spacing=\"0.7\" line-height=\"0.7\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 23.3 ) );
	object.setDefaultY( MxNumberTenths( 23.3 ) );
	object.setRelativeX( MxNumberTenths( 23.3 ) );
	object.setRelativeY( MxNumberTenths( 23.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 1.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 0.8 ) );
	object.setLineHeight( MxNumberOrNormal( 0.8 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "default-x=\"23.3\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#A4A3A2\" halign=\"center\" valign=\"baseline\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"1.6\" letter-spacing=\"0.8\" line-height=\"0.8\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 23.4 ) );
	object.setDefaultY( MxNumberTenths( 23.4 ) );
	object.setRelativeX( MxNumberTenths( 23.4 ) );
	object.setRelativeY( MxNumberTenths( 23.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 1.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 0.9 ) );
	object.setLineHeight( MxNumberOrNormal( 0.9 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "justify=\"left\" default-y=\"23.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#A5A6A5A4\" halign=\"right\" valign=\"top\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"1.7\" letter-spacing=\"0.9\" line-height=\"0.9\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 23.5 ) );
	object.setDefaultY( MxNumberTenths( 23.5 ) );
	object.setRelativeX( MxNumberTenths( 23.5 ) );
	object.setRelativeY( MxNumberTenths( 23.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 1.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1 ) );
	object.setLineHeight( MxNumberOrNormal( 1 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "default-y=\"23.5\" font-size=\"1.1\" font-weight=\"bold\" color=\"#A8A7A6\" halign=\"left\" valign=\"middle\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"1.8\" letter-spacing=\"1\" line-height=\"1\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 23.6 ) );
	object.setDefaultY( MxNumberTenths( 23.6 ) );
	object.setRelativeX( MxNumberTenths( 23.6 ) );
	object.setRelativeY( MxNumberTenths( 23.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 1.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1.1 ) );
	object.setLineHeight( MxNumberOrNormal( 1.1 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "justify=\"right\" default-x=\"23.6\" default-y=\"23.6\" relative-x=\"23.6\" font-weight=\"normal\" color=\"#A9AAA9A8\" halign=\"center\" valign=\"bottom\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"1.9\" letter-spacing=\"1.1\" line-height=\"1.1\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 23.7 ) );
	object.setDefaultY( MxNumberTenths( 23.7 ) );
	object.setRelativeX( MxNumberTenths( 23.7 ) );
	object.setRelativeY( MxNumberTenths( 23.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1.2 ) );
	object.setLineHeight( MxNumberOrNormal( 1.2 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "default-x=\"23.7\" relative-x=\"23.7\" color=\"#ACABAA\" halign=\"right\" valign=\"baseline\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"2\" letter-spacing=\"1.2\" line-height=\"1.2\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 23.8 ) );
	object.setDefaultY( MxNumberTenths( 23.8 ) );
	object.setRelativeX( MxNumberTenths( 23.8 ) );
	object.setRelativeY( MxNumberTenths( 23.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 2.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1.3 ) );
	object.setLineHeight( MxNumberOrNormal( 1.3 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "justify=\"center\" relative-x=\"23.8\" relative-y=\"23.8\" halign=\"left\" valign=\"top\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"2.1\" letter-spacing=\"1.3\" line-height=\"1.3\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 23.9 ) );
	object.setDefaultY( MxNumberTenths( 23.9 ) );
	object.setRelativeX( MxNumberTenths( 23.9 ) );
	object.setRelativeY( MxNumberTenths( 23.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 2.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1.4 ) );
	object.setLineHeight( MxNumberOrNormal( 1.4 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "relative-x=\"23.9\" relative-y=\"23.9\" valign=\"middle\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"2.2\" letter-spacing=\"1.4\" line-height=\"1.4\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 24 ) );
	object.setDefaultY( MxNumberTenths( 24 ) );
	object.setRelativeX( MxNumberTenths( 24 ) );
	object.setRelativeY( MxNumberTenths( 24 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 2.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1.5 ) );
	object.setLineHeight( MxNumberOrNormal( 1.5 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "justify=\"left\" default-x=\"24\" default-y=\"24\" relative-y=\"24\" font-family=\"DEF\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"2.3\" letter-spacing=\"1.5\" line-height=\"1.5\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 24.1 ) );
	object.setDefaultY( MxNumberTenths( 24.1 ) );
	object.setRelativeX( MxNumberTenths( 24.1 ) );
	object.setRelativeY( MxNumberTenths( 24.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 2.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1.6 ) );
	object.setLineHeight( MxNumberOrNormal( 1.6 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "default-x=\"24.1\" default-y=\"24.1\" relative-y=\"24.1\" font-family=\"XYZ\" overline=\"2\" line-through=\"2\" rotation=\"2.4\" letter-spacing=\"1.6\" line-height=\"1.6\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 24.2 ) );
	object.setDefaultY( MxNumberTenths( 24.2 ) );
	object.setRelativeX( MxNumberTenths( 24.2 ) );
	object.setRelativeY( MxNumberTenths( 24.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 2.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1.7 ) );
	object.setLineHeight( MxNumberOrNormal( 1.7 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "justify=\"right\" default-y=\"24.2\" relative-y=\"24.2\" font-family=\"ABC\" font-style=\"normal\" line-through=\"0\" rotation=\"2.5\" letter-spacing=\"1.7\" line-height=\"1.7\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 24.3 ) );
	object.setDefaultY( MxNumberTenths( 24.3 ) );
	object.setRelativeX( MxNumberTenths( 24.3 ) );
	object.setRelativeY( MxNumberTenths( 24.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 2.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1.8 ) );
	object.setLineHeight( MxNumberOrNormal( 1.8 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "font-family=\"DEF\" font-style=\"italic\" rotation=\"2.6\" letter-spacing=\"1.8\" line-height=\"1.8\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 24.4 ) );
	object.setDefaultY( MxNumberTenths( 24.4 ) );
	object.setRelativeX( MxNumberTenths( 24.4 ) );
	object.setRelativeY( MxNumberTenths( 24.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 2.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1.9 ) );
	object.setLineHeight( MxNumberOrNormal( 1.9 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "justify=\"center\" default-x=\"24.4\" relative-x=\"24.4\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" letter-spacing=\"1.9\" line-height=\"1.9\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 24.5 ) );
	object.setDefaultY( MxNumberTenths( 24.5 ) );
	object.setRelativeX( MxNumberTenths( 24.5 ) );
	object.setRelativeY( MxNumberTenths( 24.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 2.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2 ) );
	object.setLineHeight( MxNumberOrNormal( 2 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "default-x=\"24.5\" relative-x=\"24.5\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" line-height=\"2\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 24.6 ) );
	object.setDefaultY( MxNumberTenths( 24.6 ) );
	object.setRelativeX( MxNumberTenths( 24.6 ) );
	object.setRelativeY( MxNumberTenths( 24.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 2.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2.1 ) );
	object.setLineHeight( MxNumberOrNormal( 2.1 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "justify=\"left\" default-y=\"24.6\" relative-x=\"24.6\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 24.7 ) );
	object.setDefaultY( MxNumberTenths( 24.7 ) );
	object.setRelativeX( MxNumberTenths( 24.7 ) );
	object.setRelativeY( MxNumberTenths( 24.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2.2 ) );
	object.setLineHeight( MxNumberOrNormal( 2.2 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "default-y=\"24.7\" relative-x=\"24.7\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 24.8 ) );
	object.setDefaultY( MxNumberTenths( 24.8 ) );
	object.setRelativeX( MxNumberTenths( 24.8 ) );
	object.setRelativeY( MxNumberTenths( 24.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 3.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2.3 ) );
	object.setLineHeight( MxNumberOrNormal( 2.3 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "justify=\"right\" default-x=\"24.8\" default-y=\"24.8\" relative-y=\"24.8\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#C1C2C1C0\" dir=\"rlo\" enclosure=\"none\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 24.9 ) );
	object.setDefaultY( MxNumberTenths( 24.9 ) );
	object.setRelativeX( MxNumberTenths( 24.9 ) );
	object.setRelativeY( MxNumberTenths( 24.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 3.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2.4 ) );
	object.setLineHeight( MxNumberOrNormal( 2.4 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "default-x=\"24.9\" relative-y=\"24.9\" font-size=\"1.1\" font-weight=\"bold\" color=\"#C4C3C2\" enclosure=\"rectangle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 25 ) );
	object.setDefaultY( MxNumberTenths( 25 ) );
	object.setRelativeX( MxNumberTenths( 25 ) );
	object.setRelativeY( MxNumberTenths( 25 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 3.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2.5 ) );
	object.setLineHeight( MxNumberOrNormal( 2.5 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "justify=\"center\" relative-y=\"25\" font-size=\"large\" font-weight=\"normal\" color=\"#C5C6C5C4\" halign=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 25.1 ) );
	object.setDefaultY( MxNumberTenths( 25.1 ) );
	object.setRelativeX( MxNumberTenths( 25.1 ) );
	object.setRelativeY( MxNumberTenths( 25.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 3.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2.6 ) );
	object.setLineHeight( MxNumberOrNormal( 2.6 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "relative-y=\"25.1\" font-size=\"1.1\" font-weight=\"bold\" color=\"#C8C7C6\" halign=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 25.2 ) );
	object.setDefaultY( MxNumberTenths( 25.2 ) );
	object.setRelativeX( MxNumberTenths( 25.2 ) );
	object.setRelativeY( MxNumberTenths( 25.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 3.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2.7 ) );
	object.setLineHeight( MxNumberOrNormal( 2.7 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "justify=\"left\" default-x=\"25.2\" default-y=\"25.2\" relative-x=\"25.2\" relative-y=\"25.2\" font-family=\"DEF\" font-weight=\"normal\" color=\"#C9CAC9C8\" halign=\"right\" valign=\"bottom\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 25.3 ) );
	object.setDefaultY( MxNumberTenths( 25.3 ) );
	object.setRelativeX( MxNumberTenths( 25.3 ) );
	object.setRelativeY( MxNumberTenths( 25.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 3.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2.8 ) );
	object.setLineHeight( MxNumberOrNormal( 2.8 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "default-x=\"25.3\" default-y=\"25.3\" relative-x=\"25.3\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#CCCBCA\" halign=\"left\" valign=\"baseline\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 25.4 ) );
	object.setDefaultY( MxNumberTenths( 25.4 ) );
	object.setRelativeX( MxNumberTenths( 25.4 ) );
	object.setRelativeY( MxNumberTenths( 25.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 3.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2.9 ) );
	object.setLineHeight( MxNumberOrNormal( 2.9 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "justify=\"right\" default-y=\"25.4\" relative-x=\"25.4\" font-family=\"ABC\" font-weight=\"normal\" color=\"#CDCECDCC\" halign=\"center\" valign=\"top\" underline=\"0\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 25.5 ) );
	object.setDefaultY( MxNumberTenths( 25.5 ) );
	object.setRelativeX( MxNumberTenths( 25.5 ) );
	object.setRelativeY( MxNumberTenths( 25.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 3.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3 ) );
	object.setLineHeight( MxNumberOrNormal( 3 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "relative-x=\"25.5\" font-family=\"DEF\" color=\"#D0CFCE\" halign=\"right\" valign=\"middle\" underline=\"1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 25.6 ) );
	object.setDefaultY( MxNumberTenths( 25.6 ) );
	object.setRelativeX( MxNumberTenths( 25.6 ) );
	object.setRelativeY( MxNumberTenths( 25.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 3.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3.1 ) );
	object.setLineHeight( MxNumberOrNormal( 3.1 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "justify=\"center\" default-x=\"25.6\" font-family=\"XYZ\" font-style=\"normal\" color=\"#D1D2D1D0\" halign=\"left\" valign=\"bottom\" underline=\"2\" overline=\"2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 25.7 ) );
	object.setDefaultY( MxNumberTenths( 25.7 ) );
	object.setRelativeX( MxNumberTenths( 25.7 ) );
	object.setRelativeY( MxNumberTenths( 25.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3.2 ) );
	object.setLineHeight( MxNumberOrNormal( 3.2 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "default-x=\"25.7\" font-family=\"ABC\" font-style=\"italic\" color=\"#D4D3D2\" halign=\"center\" valign=\"baseline\" underline=\"0\" overline=\"0\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 25.8 ) );
	object.setDefaultY( MxNumberTenths( 25.8 ) );
	object.setRelativeX( MxNumberTenths( 25.8 ) );
	object.setRelativeY( MxNumberTenths( 25.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 4.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3.3 ) );
	object.setLineHeight( MxNumberOrNormal( 3.3 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "justify=\"left\" default-y=\"25.8\" relative-y=\"25.8\" font-style=\"normal\" halign=\"right\" valign=\"top\" underline=\"1\" overline=\"1\" line-through=\"1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 25.9 ) );
	object.setDefaultY( MxNumberTenths( 25.9 ) );
	object.setRelativeX( MxNumberTenths( 25.9 ) );
	object.setRelativeY( MxNumberTenths( 25.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 4.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3.4 ) );
	object.setLineHeight( MxNumberOrNormal( 3.4 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "default-y=\"25.9\" relative-y=\"25.9\" font-style=\"italic\" halign=\"left\" valign=\"middle\" underline=\"2\" overline=\"2\" line-through=\"2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 26 ) );
	object.setDefaultY( MxNumberTenths( 26 ) );
	object.setRelativeX( MxNumberTenths( 26 ) );
	object.setRelativeY( MxNumberTenths( 26 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 4.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3.5 ) );
	object.setLineHeight( MxNumberOrNormal( 3.5 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "justify=\"right\" default-x=\"26\" default-y=\"26\" relative-x=\"26\" relative-y=\"26\" font-style=\"normal\" font-size=\"large\" halign=\"center\" valign=\"bottom\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"4.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 26.1 ) );
	object.setDefaultY( MxNumberTenths( 26.1 ) );
	object.setRelativeX( MxNumberTenths( 26.1 ) );
	object.setRelativeY( MxNumberTenths( 26.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 4.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3.6 ) );
	object.setLineHeight( MxNumberOrNormal( 3.6 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "default-x=\"26.1\" relative-x=\"26.1\" relative-y=\"26.1\" font-style=\"italic\" font-size=\"1.1\" valign=\"baseline\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"4.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 26.2 ) );
	object.setDefaultY( MxNumberTenths( 26.2 ) );
	object.setRelativeX( MxNumberTenths( 26.2 ) );
	object.setRelativeY( MxNumberTenths( 26.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 4.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3.7 ) );
	object.setLineHeight( MxNumberOrNormal( 3.7 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "justify=\"center\" relative-x=\"26.2\" relative-y=\"26.2\" font-style=\"normal\" font-size=\"large\" valign=\"top\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"4.5\" letter-spacing=\"3.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 26.3 ) );
	object.setDefaultY( MxNumberTenths( 26.3 ) );
	object.setRelativeX( MxNumberTenths( 26.3 ) );
	object.setRelativeY( MxNumberTenths( 26.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 4.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3.8 ) );
	object.setLineHeight( MxNumberOrNormal( 3.8 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "relative-x=\"26.3\" font-size=\"1.1\" valign=\"middle\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"4.6\" letter-spacing=\"3.8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 26.4 ) );
	object.setDefaultY( MxNumberTenths( 26.4 ) );
	object.setRelativeX( MxNumberTenths( 26.4 ) );
	object.setRelativeY( MxNumberTenths( 26.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 4.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3.9 ) );
	object.setLineHeight( MxNumberOrNormal( 3.9 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "justify=\"left\" default-x=\"26.4\" default-y=\"26.4\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"4.7\" letter-spacing=\"3.9\" line-height=\"3.9\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 26.5 ) );
	object.setDefaultY( MxNumberTenths( 26.5 ) );
	object.setRelativeX( MxNumberTenths( 26.5 ) );
	object.setRelativeY( MxNumberTenths( 26.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 4.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4 ) );
	object.setLineHeight( MxNumberOrNormal( 4 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "default-x=\"26.5\" default-y=\"26.5\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"4.8\" letter-spacing=\"4\" line-height=\"4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 26.6 ) );
	object.setDefaultY( MxNumberTenths( 26.6 ) );
	object.setRelativeX( MxNumberTenths( 26.6 ) );
	object.setRelativeY( MxNumberTenths( 26.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 4.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4.1 ) );
	object.setLineHeight( MxNumberOrNormal( 4.1 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "justify=\"right\" default-y=\"26.6\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"4.9\" letter-spacing=\"4.1\" line-height=\"4.1\" xml:lang=\"XYZ\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 26.7 ) );
	object.setDefaultY( MxNumberTenths( 26.7 ) );
	object.setRelativeX( MxNumberTenths( 26.7 ) );
	object.setRelativeY( MxNumberTenths( 26.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4.2 ) );
	object.setLineHeight( MxNumberOrNormal( 4.2 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" overline=\"1\" line-through=\"1\" rotation=\"5\" letter-spacing=\"4.2\" line-height=\"4.2\" xml:lang=\"ABC\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 26.8 ) );
	object.setDefaultY( MxNumberTenths( 26.8 ) );
	object.setRelativeX( MxNumberTenths( 26.8 ) );
	object.setRelativeY( MxNumberTenths( 26.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 5.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4.3 ) );
	object.setLineHeight( MxNumberOrNormal( 4.3 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "justify=\"center\" default-x=\"26.8\" relative-x=\"26.8\" relative-y=\"26.8\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#E9EAE9E8\" overline=\"2\" line-through=\"2\" rotation=\"5.1\" letter-spacing=\"4.3\" line-height=\"4.3\" xml:lang=\"DEF\" xml:space=\"preserve\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 26.9 ) );
	object.setDefaultY( MxNumberTenths( 26.9 ) );
	object.setRelativeX( MxNumberTenths( 26.9 ) );
	object.setRelativeY( MxNumberTenths( 26.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 5.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4.4 ) );
	object.setLineHeight( MxNumberOrNormal( 4.4 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "default-x=\"26.9\" relative-x=\"26.9\" relative-y=\"26.9\" font-family=\"ABC\" font-weight=\"bold\" color=\"#ECEBEA\" overline=\"0\" line-through=\"0\" rotation=\"5.2\" letter-spacing=\"4.4\" line-height=\"4.4\" xml:lang=\"XYZ\" xml:space=\"default\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 27 ) );
	object.setDefaultY( MxNumberTenths( 27 ) );
	object.setRelativeX( MxNumberTenths( 27 ) );
	object.setRelativeY( MxNumberTenths( 27 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 5.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4.5 ) );
	object.setLineHeight( MxNumberOrNormal( 4.5 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "justify=\"left\" default-y=\"27\" relative-x=\"27\" relative-y=\"27\" font-style=\"normal\" font-weight=\"normal\" color=\"#EDEEEDEC\" line-through=\"1\" rotation=\"5.3\" letter-spacing=\"4.5\" line-height=\"4.5\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 27.1 ) );
	object.setDefaultY( MxNumberTenths( 27.1 ) );
	object.setRelativeX( MxNumberTenths( 27.1 ) );
	object.setRelativeY( MxNumberTenths( 27.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 5.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4.6 ) );
	object.setLineHeight( MxNumberOrNormal( 4.6 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "default-y=\"27.1\" relative-x=\"27.1\" relative-y=\"27.1\" font-style=\"italic\" font-weight=\"bold\" color=\"#F0EFEE\" line-through=\"2\" rotation=\"5.4\" letter-spacing=\"4.6\" line-height=\"4.6\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"lro\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 27.2 ) );
	object.setDefaultY( MxNumberTenths( 27.2 ) );
	object.setRelativeX( MxNumberTenths( 27.2 ) );
	object.setRelativeY( MxNumberTenths( 27.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 5.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4.7 ) );
	object.setLineHeight( MxNumberOrNormal( 4.7 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "justify=\"right\" default-x=\"27.2\" default-y=\"27.2\" relative-y=\"27.2\" font-style=\"normal\" font-weight=\"normal\" color=\"#F1F2F1F0\" halign=\"center\" line-through=\"0\" rotation=\"5.5\" letter-spacing=\"4.7\" line-height=\"4.7\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 27.3 ) );
	object.setDefaultY( MxNumberTenths( 27.3 ) );
	object.setRelativeX( MxNumberTenths( 27.3 ) );
	object.setRelativeY( MxNumberTenths( 27.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 5.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4.8 ) );
	object.setLineHeight( MxNumberOrNormal( 4.8 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "default-x=\"27.3\" font-style=\"italic\" color=\"#F4F3F2\" halign=\"right\" rotation=\"5.6\" letter-spacing=\"4.8\" line-height=\"4.8\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 27.4 ) );
	object.setDefaultY( MxNumberTenths( 27.4 ) );
	object.setRelativeX( MxNumberTenths( 27.4 ) );
	object.setRelativeY( MxNumberTenths( 27.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 5.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4.9 ) );
	object.setLineHeight( MxNumberOrNormal( 4.9 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "justify=\"center\" font-style=\"normal\" color=\"#F5F6F5F4\" halign=\"left\" rotation=\"5.7\" letter-spacing=\"4.9\" line-height=\"4.9\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 27.5 ) );
	object.setDefaultY( MxNumberTenths( 27.5 ) );
	object.setRelativeX( MxNumberTenths( 27.5 ) );
	object.setRelativeY( MxNumberTenths( 27.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 5.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5 ) );
	object.setLineHeight( MxNumberOrNormal( 5 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "font-style=\"italic\" color=\"#F8F7F6\" halign=\"center\" rotation=\"5.8\" letter-spacing=\"5\" line-height=\"5\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 27.6 ) );
	object.setDefaultY( MxNumberTenths( 27.6 ) );
	object.setRelativeX( MxNumberTenths( 27.6 ) );
	object.setRelativeY( MxNumberTenths( 27.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 5.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5.1 ) );
	object.setLineHeight( MxNumberOrNormal( 5.1 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "justify=\"left\" default-x=\"27.6\" default-y=\"27.6\" relative-x=\"27.6\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#F9FAF9F8\" halign=\"right\" valign=\"bottom\" letter-spacing=\"5.1\" line-height=\"5.1\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 27.7 ) );
	object.setDefaultY( MxNumberTenths( 27.7 ) );
	object.setRelativeX( MxNumberTenths( 27.7 ) );
	object.setRelativeY( MxNumberTenths( 27.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5.2 ) );
	object.setLineHeight( MxNumberOrNormal( 5.2 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "default-x=\"27.7\" default-y=\"27.7\" relative-x=\"27.7\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#FCFBFA\" halign=\"left\" valign=\"baseline\" letter-spacing=\"5.2\" line-height=\"5.2\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 27.8 ) );
	object.setDefaultY( MxNumberTenths( 27.8 ) );
	object.setRelativeX( MxNumberTenths( 27.8 ) );
	object.setRelativeY( MxNumberTenths( 27.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 6.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5.3 ) );
	object.setLineHeight( MxNumberOrNormal( 5.3 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "justify=\"right\" default-y=\"27.8\" relative-x=\"27.8\" relative-y=\"27.8\" font-family=\"ABC\" font-size=\"large\" halign=\"center\" valign=\"top\" letter-spacing=\"5.3\" line-height=\"5.3\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 27.9 ) );
	object.setDefaultY( MxNumberTenths( 27.9 ) );
	object.setRelativeX( MxNumberTenths( 27.9 ) );
	object.setRelativeY( MxNumberTenths( 27.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 6.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5.4 ) );
	object.setLineHeight( MxNumberOrNormal( 5.4 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "relative-x=\"27.9\" relative-y=\"27.9\" font-family=\"DEF\" font-size=\"1.1\" halign=\"right\" valign=\"middle\" line-height=\"5.4\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 28 ) );
	object.setDefaultY( MxNumberTenths( 28 ) );
	object.setRelativeX( MxNumberTenths( 28 ) );
	object.setRelativeY( MxNumberTenths( 28 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 6.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5.5 ) );
	object.setLineHeight( MxNumberOrNormal( 5.5 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "justify=\"center\" default-x=\"28\" relative-y=\"28\" font-family=\"XYZ\" font-size=\"large\" halign=\"left\" valign=\"bottom\" underline=\"2\" line-height=\"5.5\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 28.1 ) );
	object.setDefaultY( MxNumberTenths( 28.1 ) );
	object.setRelativeX( MxNumberTenths( 28.1 ) );
	object.setRelativeY( MxNumberTenths( 28.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#040302" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 6.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5.6 ) );
	object.setLineHeight( MxNumberOrNormal( 5.6 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "default-x=\"28.1\" relative-y=\"28.1\" font-family=\"ABC\" font-size=\"1.1\" halign=\"center\" valign=\"baseline\" underline=\"0\" line-height=\"5.6\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 28.2 ) );
	object.setDefaultY( MxNumberTenths( 28.2 ) );
	object.setRelativeX( MxNumberTenths( 28.2 ) );
	object.setRelativeY( MxNumberTenths( 28.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 6.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5.7 ) );
	object.setLineHeight( MxNumberOrNormal( 5.7 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "justify=\"left\" default-y=\"28.2\" relative-y=\"28.2\" font-size=\"large\" font-weight=\"normal\" halign=\"right\" valign=\"top\" underline=\"1\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 28.3 ) );
	object.setDefaultY( MxNumberTenths( 28.3 ) );
	object.setRelativeX( MxNumberTenths( 28.3 ) );
	object.setRelativeY( MxNumberTenths( 28.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#080706" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 6.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5.8 ) );
	object.setLineHeight( MxNumberOrNormal( 5.8 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "default-y=\"28.3\" font-size=\"1.1\" font-weight=\"bold\" valign=\"middle\" underline=\"2\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 28.4 ) );
	object.setDefaultY( MxNumberTenths( 28.4 ) );
	object.setRelativeX( MxNumberTenths( 28.4 ) );
	object.setRelativeY( MxNumberTenths( 28.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 6.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5.9 ) );
	object.setLineHeight( MxNumberOrNormal( 5.9 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "justify=\"right\" default-x=\"28.4\" default-y=\"28.4\" relative-x=\"28.4\" font-style=\"normal\" font-weight=\"normal\" valign=\"bottom\" underline=\"0\" overline=\"0\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 28.5 ) );
	object.setDefaultY( MxNumberTenths( 28.5 ) );
	object.setRelativeX( MxNumberTenths( 28.5 ) );
	object.setRelativeY( MxNumberTenths( 28.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 6.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6 ) );
	object.setLineHeight( MxNumberOrNormal( 6 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "default-x=\"28.5\" relative-x=\"28.5\" font-style=\"italic\" font-weight=\"bold\" valign=\"baseline\" underline=\"1\" overline=\"1\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 28.6 ) );
	object.setDefaultY( MxNumberTenths( 28.6 ) );
	object.setRelativeX( MxNumberTenths( 28.6 ) );
	object.setRelativeY( MxNumberTenths( 28.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 6.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6.1 ) );
	object.setLineHeight( MxNumberOrNormal( 6.1 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "justify=\"center\" relative-x=\"28.6\" font-style=\"normal\" font-weight=\"normal\" valign=\"top\" underline=\"2\" overline=\"2\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 28.7 ) );
	object.setDefaultY( MxNumberTenths( 28.7 ) );
	object.setRelativeX( MxNumberTenths( 28.7 ) );
	object.setRelativeY( MxNumberTenths( 28.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6.2 ) );
	object.setLineHeight( MxNumberOrNormal( 6.2 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "relative-x=\"28.7\" font-style=\"italic\" font-weight=\"bold\" valign=\"middle\" underline=\"0\" overline=\"0\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 28.8 ) );
	object.setDefaultY( MxNumberTenths( 28.8 ) );
	object.setRelativeX( MxNumberTenths( 28.8 ) );
	object.setRelativeY( MxNumberTenths( 28.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 7.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6.3 ) );
	object.setLineHeight( MxNumberOrNormal( 6.3 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "justify=\"left\" default-x=\"28.8\" default-y=\"28.8\" relative-y=\"28.8\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" color=\"#11121110\" underline=\"1\" overline=\"1\" line-through=\"1\" dir=\"rlo\" enclosure=\"none\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 28.9 ) );
	object.setDefaultY( MxNumberTenths( 28.9 ) );
	object.setRelativeX( MxNumberTenths( 28.9 ) );
	object.setRelativeY( MxNumberTenths( 28.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#141312" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 7.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6.4 ) );
	object.setLineHeight( MxNumberOrNormal( 6.4 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "default-x=\"28.9\" default-y=\"28.9\" relative-y=\"28.9\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" color=\"#141312\" underline=\"2\" overline=\"2\" line-through=\"2\" dir=\"ltr\" enclosure=\"rectangle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 29 ) );
	object.setDefaultY( MxNumberTenths( 29 ) );
	object.setRelativeX( MxNumberTenths( 29 ) );
	object.setRelativeY( MxNumberTenths( 29 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 7.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6.5 ) );
	object.setLineHeight( MxNumberOrNormal( 6.5 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "justify=\"right\" default-y=\"29\" relative-y=\"29\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" color=\"#15161514\" underline=\"0\" overline=\"0\" line-through=\"0\" dir=\"rtl\" enclosure=\"square\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 29.1 ) );
	object.setDefaultY( MxNumberTenths( 29.1 ) );
	object.setRelativeX( MxNumberTenths( 29.1 ) );
	object.setRelativeY( MxNumberTenths( 29.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 7.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6.6 ) );
	object.setLineHeight( MxNumberOrNormal( 6.6 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "relative-y=\"29.1\" font-family=\"DEF\" color=\"#181716\" underline=\"1\" overline=\"1\" line-through=\"1\" enclosure=\"oval\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 29.2 ) );
	object.setDefaultY( MxNumberTenths( 29.2 ) );
	object.setRelativeX( MxNumberTenths( 29.2 ) );
	object.setRelativeY( MxNumberTenths( 29.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 7.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6.7 ) );
	object.setLineHeight( MxNumberOrNormal( 6.7 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "justify=\"center\" default-x=\"29.2\" relative-x=\"29.2\" relative-y=\"29.2\" font-family=\"XYZ\" font-size=\"large\" color=\"#191A1918\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"7.5\" enclosure=\"circle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 29.3 ) );
	object.setDefaultY( MxNumberTenths( 29.3 ) );
	object.setRelativeX( MxNumberTenths( 29.3 ) );
	object.setRelativeY( MxNumberTenths( 29.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 7.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6.8 ) );
	object.setLineHeight( MxNumberOrNormal( 6.8 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "default-x=\"29.3\" relative-x=\"29.3\" font-family=\"ABC\" font-size=\"1.1\" color=\"#1C1B1A\" overline=\"0\" line-through=\"0\" rotation=\"7.6\" enclosure=\"bracket\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 29.4 ) );
	object.setDefaultY( MxNumberTenths( 29.4 ) );
	object.setRelativeX( MxNumberTenths( 29.4 ) );
	object.setRelativeY( MxNumberTenths( 29.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 7.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6.9 ) );
	object.setLineHeight( MxNumberOrNormal( 6.9 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "justify=\"left\" default-y=\"29.4\" relative-x=\"29.4\" font-size=\"large\" color=\"#1D1E1D1C\" halign=\"right\" overline=\"1\" line-through=\"1\" rotation=\"7.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 29.5 ) );
	object.setDefaultY( MxNumberTenths( 29.5 ) );
	object.setRelativeX( MxNumberTenths( 29.5 ) );
	object.setRelativeY( MxNumberTenths( 29.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 7.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7 ) );
	object.setLineHeight( MxNumberOrNormal( 7 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "default-y=\"29.5\" relative-x=\"29.5\" font-size=\"1.1\" color=\"#201F1E\" halign=\"left\" overline=\"2\" line-through=\"2\" rotation=\"7.8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 29.6 ) );
	object.setDefaultY( MxNumberTenths( 29.6 ) );
	object.setRelativeX( MxNumberTenths( 29.6 ) );
	object.setRelativeY( MxNumberTenths( 29.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 7.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7.1 ) );
	object.setLineHeight( MxNumberOrNormal( 7.1 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "justify=\"right\" default-x=\"29.6\" default-y=\"29.6\" font-size=\"large\" color=\"#21222120\" halign=\"center\" overline=\"0\" line-through=\"0\" rotation=\"7.9\" letter-spacing=\"7.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 29.7 ) );
	object.setDefaultY( MxNumberTenths( 29.7 ) );
	object.setRelativeX( MxNumberTenths( 29.7 ) );
	object.setRelativeY( MxNumberTenths( 29.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#242322" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7.2 ) );
	object.setLineHeight( MxNumberOrNormal( 7.2 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "default-x=\"29.7\" font-size=\"1.1\" color=\"#242322\" halign=\"right\" overline=\"1\" line-through=\"1\" rotation=\"8\" letter-spacing=\"7.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 29.8 ) );
	object.setDefaultY( MxNumberTenths( 29.8 ) );
	object.setRelativeX( MxNumberTenths( 29.8 ) );
	object.setRelativeY( MxNumberTenths( 29.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 8.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7.3 ) );
	object.setLineHeight( MxNumberOrNormal( 7.3 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "justify=\"center\" relative-y=\"29.8\" font-style=\"normal\" font-size=\"large\" halign=\"left\" line-through=\"2\" rotation=\"8.1\" letter-spacing=\"7.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 29.9 ) );
	object.setDefaultY( MxNumberTenths( 29.9 ) );
	object.setRelativeX( MxNumberTenths( 29.9 ) );
	object.setRelativeY( MxNumberTenths( 29.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#282726" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 8.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7.4 ) );
	object.setLineHeight( MxNumberOrNormal( 7.4 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "relative-y=\"29.9\" font-style=\"italic\" font-size=\"1.1\" halign=\"center\" line-through=\"0\" rotation=\"8.2\" letter-spacing=\"7.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 30 ) );
	object.setDefaultY( MxNumberTenths( 30 ) );
	object.setRelativeX( MxNumberTenths( 30 ) );
	object.setRelativeY( MxNumberTenths( 30 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 8.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7.5 ) );
	object.setLineHeight( MxNumberOrNormal( 7.5 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "justify=\"left\" default-x=\"30\" default-y=\"30\" relative-x=\"30\" relative-y=\"30\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" halign=\"right\" valign=\"bottom\" line-through=\"1\" rotation=\"8.3\" letter-spacing=\"7.5\" line-height=\"7.5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 30.1 ) );
	object.setDefaultY( MxNumberTenths( 30.1 ) );
	object.setRelativeX( MxNumberTenths( 30.1 ) );
	object.setRelativeY( MxNumberTenths( 30.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 8.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7.6 ) );
	object.setLineHeight( MxNumberOrNormal( 7.6 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "default-x=\"30.1\" default-y=\"30.1\" relative-x=\"30.1\" relative-y=\"30.1\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" halign=\"left\" valign=\"baseline\" line-through=\"2\" rotation=\"8.4\" letter-spacing=\"7.6\" line-height=\"7.6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 30.2 ) );
	object.setDefaultY( MxNumberTenths( 30.2 ) );
	object.setRelativeX( MxNumberTenths( 30.2 ) );
	object.setRelativeY( MxNumberTenths( 30.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 8.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7.7 ) );
	object.setLineHeight( MxNumberOrNormal( 7.7 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "justify=\"right\" default-y=\"30.2\" relative-x=\"30.2\" relative-y=\"30.2\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" halign=\"center\" valign=\"top\" line-through=\"0\" rotation=\"8.5\" letter-spacing=\"7.7\" line-height=\"7.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 30.3 ) );
	object.setDefaultY( MxNumberTenths( 30.3 ) );
	object.setRelativeX( MxNumberTenths( 30.3 ) );
	object.setRelativeY( MxNumberTenths( 30.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 8.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7.8 ) );
	object.setLineHeight( MxNumberOrNormal( 7.8 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "relative-x=\"30.3\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" halign=\"right\" valign=\"middle\" rotation=\"8.6\" letter-spacing=\"7.8\" line-height=\"7.8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 30.4 ) );
	object.setDefaultY( MxNumberTenths( 30.4 ) );
	object.setRelativeX( MxNumberTenths( 30.4 ) );
	object.setRelativeY( MxNumberTenths( 30.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 8.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7.9 ) );
	object.setLineHeight( MxNumberOrNormal( 7.9 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "justify=\"center\" default-x=\"30.4\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" halign=\"left\" valign=\"bottom\" rotation=\"8.7\" letter-spacing=\"7.9\" line-height=\"7.9\" xml:lang=\"DEF\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 30.5 ) );
	object.setDefaultY( MxNumberTenths( 30.5 ) );
	object.setRelativeX( MxNumberTenths( 30.5 ) );
	object.setRelativeY( MxNumberTenths( 30.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 8.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8 ) );
	object.setLineHeight( MxNumberOrNormal( 8 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "default-x=\"30.5\" font-family=\"ABC\" font-weight=\"bold\" valign=\"baseline\" rotation=\"8.8\" letter-spacing=\"8\" line-height=\"8\" xml:lang=\"XYZ\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 30.6 ) );
	object.setDefaultY( MxNumberTenths( 30.6 ) );
	object.setRelativeX( MxNumberTenths( 30.6 ) );
	object.setRelativeY( MxNumberTenths( 30.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 8.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8.1 ) );
	object.setLineHeight( MxNumberOrNormal( 8.1 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "justify=\"left\" default-y=\"30.6\" font-weight=\"normal\" valign=\"top\" underline=\"1\" rotation=\"8.9\" letter-spacing=\"8.1\" line-height=\"8.1\" xml:lang=\"ABC\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 30.7 ) );
	object.setDefaultY( MxNumberTenths( 30.7 ) );
	object.setRelativeX( MxNumberTenths( 30.7 ) );
	object.setRelativeY( MxNumberTenths( 30.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8.2 ) );
	object.setLineHeight( MxNumberOrNormal( 8.2 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "default-y=\"30.7\" font-weight=\"bold\" valign=\"middle\" underline=\"2\" rotation=\"9\" letter-spacing=\"8.2\" line-height=\"8.2\" xml:lang=\"DEF\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 30.8 ) );
	object.setDefaultY( MxNumberTenths( 30.8 ) );
	object.setRelativeX( MxNumberTenths( 30.8 ) );
	object.setRelativeY( MxNumberTenths( 30.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 9.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8.3 ) );
	object.setLineHeight( MxNumberOrNormal( 8.3 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "justify=\"right\" default-x=\"30.8\" default-y=\"30.8\" relative-x=\"30.8\" relative-y=\"30.8\" font-size=\"large\" font-weight=\"normal\" color=\"#393A3938\" valign=\"bottom\" underline=\"0\" letter-spacing=\"8.3\" line-height=\"8.3\" xml:lang=\"XYZ\" xml:space=\"preserve\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 30.9 ) );
	object.setDefaultY( MxNumberTenths( 30.9 ) );
	object.setRelativeX( MxNumberTenths( 30.9 ) );
	object.setRelativeY( MxNumberTenths( 30.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 9.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8.4 ) );
	object.setLineHeight( MxNumberOrNormal( 8.4 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "default-x=\"30.9\" relative-x=\"30.9\" relative-y=\"30.9\" font-size=\"1.1\" color=\"#3C3B3A\" valign=\"baseline\" underline=\"1\" letter-spacing=\"8.4\" line-height=\"8.4\" xml:lang=\"ABC\" xml:space=\"default\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 31 ) );
	object.setDefaultY( MxNumberTenths( 31 ) );
	object.setRelativeX( MxNumberTenths( 31 ) );
	object.setRelativeY( MxNumberTenths( 31 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 9.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8.5 ) );
	object.setLineHeight( MxNumberOrNormal( 8.5 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "justify=\"center\" relative-x=\"31\" relative-y=\"31\" font-size=\"large\" color=\"#3D3E3D3C\" valign=\"top\" underline=\"2\" letter-spacing=\"8.5\" line-height=\"8.5\" xml:lang=\"DEF\" xml:space=\"preserve\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 31.1 ) );
	object.setDefaultY( MxNumberTenths( 31.1 ) );
	object.setRelativeX( MxNumberTenths( 31.1 ) );
	object.setRelativeY( MxNumberTenths( 31.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 9.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8.6 ) );
	object.setLineHeight( MxNumberOrNormal( 8.6 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "relative-x=\"31.1\" relative-y=\"31.1\" font-size=\"1.1\" color=\"#403F3E\" valign=\"middle\" underline=\"0\" letter-spacing=\"8.6\" line-height=\"8.6\" xml:lang=\"XYZ\" xml:space=\"default\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 31.2 ) );
	object.setDefaultY( MxNumberTenths( 31.2 ) );
	object.setRelativeX( MxNumberTenths( 31.2 ) );
	object.setRelativeY( MxNumberTenths( 31.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 9.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8.7 ) );
	object.setLineHeight( MxNumberOrNormal( 8.7 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "justify=\"left\" default-x=\"31.2\" default-y=\"31.2\" relative-y=\"31.2\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#41424140\" underline=\"1\" overline=\"1\" letter-spacing=\"8.7\" line-height=\"8.7\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 31.3 ) );
	object.setDefaultY( MxNumberTenths( 31.3 ) );
	object.setRelativeX( MxNumberTenths( 31.3 ) );
	object.setRelativeY( MxNumberTenths( 31.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 9.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8.8 ) );
	object.setLineHeight( MxNumberOrNormal( 8.8 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "default-x=\"31.3\" default-y=\"31.3\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#444342\" underline=\"2\" overline=\"2\" line-height=\"8.8\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 31.4 ) );
	object.setDefaultY( MxNumberTenths( 31.4 ) );
	object.setRelativeX( MxNumberTenths( 31.4 ) );
	object.setRelativeY( MxNumberTenths( 31.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 9.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8.9 ) );
	object.setLineHeight( MxNumberOrNormal( 8.9 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "justify=\"right\" default-y=\"31.4\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#45464544\" underline=\"0\" overline=\"0\" line-height=\"8.9\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 31.5 ) );
	object.setDefaultY( MxNumberTenths( 31.5 ) );
	object.setRelativeX( MxNumberTenths( 31.5 ) );
	object.setRelativeY( MxNumberTenths( 31.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 9.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9 ) );
	object.setLineHeight( MxNumberOrNormal( 9 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#484746\" underline=\"1\" overline=\"1\" line-height=\"9\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"lro\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 31.6 ) );
	object.setDefaultY( MxNumberTenths( 31.6 ) );
	object.setRelativeX( MxNumberTenths( 31.6 ) );
	object.setRelativeY( MxNumberTenths( 31.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 9.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9.1 ) );
	object.setLineHeight( MxNumberOrNormal( 9.1 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "justify=\"center\" default-x=\"31.6\" relative-x=\"31.6\" font-family=\"XYZ\" font-style=\"normal\" color=\"#494A4948\" halign=\"left\" underline=\"2\" overline=\"2\" line-height=\"9.1\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 31.7 ) );
	object.setDefaultY( MxNumberTenths( 31.7 ) );
	object.setRelativeX( MxNumberTenths( 31.7 ) );
	object.setRelativeY( MxNumberTenths( 31.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 10 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9.2 ) );
	object.setLineHeight( MxNumberOrNormal( 9.2 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "default-x=\"31.7\" relative-x=\"31.7\" font-family=\"ABC\" font-style=\"italic\" color=\"#4C4B4A\" halign=\"center\" underline=\"0\" overline=\"0\" line-height=\"9.2\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 31.8 ) );
	object.setDefaultY( MxNumberTenths( 31.8 ) );
	object.setRelativeX( MxNumberTenths( 31.8 ) );
	object.setRelativeY( MxNumberTenths( 31.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 10.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9.3 ) );
	object.setLineHeight( MxNumberOrNormal( 9.3 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "justify=\"left\" default-y=\"31.8\" relative-x=\"31.8\" relative-y=\"31.8\" font-style=\"normal\" font-weight=\"normal\" halign=\"right\" underline=\"1\" overline=\"1\" line-through=\"1\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 31.9 ) );
	object.setDefaultY( MxNumberTenths( 31.9 ) );
	object.setRelativeX( MxNumberTenths( 31.9 ) );
	object.setRelativeY( MxNumberTenths( 31.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 10.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9.4 ) );
	object.setLineHeight( MxNumberOrNormal( 9.4 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "default-y=\"31.9\" relative-x=\"31.9\" relative-y=\"31.9\" font-weight=\"bold\" halign=\"left\" overline=\"2\" line-through=\"2\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 32 ) );
	object.setDefaultY( MxNumberTenths( 32 ) );
	object.setRelativeX( MxNumberTenths( 32 ) );
	object.setRelativeY( MxNumberTenths( 32 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 10.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9.5 ) );
	object.setLineHeight( MxNumberOrNormal( 9.5 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "justify=\"right\" default-x=\"32\" default-y=\"32\" relative-y=\"32\" font-weight=\"normal\" halign=\"center\" overline=\"0\" line-through=\"0\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 32.1 ) );
	object.setDefaultY( MxNumberTenths( 32.1 ) );
	object.setRelativeX( MxNumberTenths( 32.1 ) );
	object.setRelativeY( MxNumberTenths( 32.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#545352" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 10.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9.6 ) );
	object.setLineHeight( MxNumberOrNormal( 9.6 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "default-x=\"32.1\" relative-y=\"32.1\" font-weight=\"bold\" halign=\"right\" overline=\"1\" line-through=\"1\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 32.2 ) );
	object.setDefaultY( MxNumberTenths( 32.2 ) );
	object.setRelativeX( MxNumberTenths( 32.2 ) );
	object.setRelativeY( MxNumberTenths( 32.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 10.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9.7 ) );
	object.setLineHeight( MxNumberOrNormal( 9.7 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "justify=\"center\" relative-y=\"32.2\" font-weight=\"normal\" halign=\"left\" overline=\"2\" line-through=\"2\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 32.3 ) );
	object.setDefaultY( MxNumberTenths( 32.3 ) );
	object.setRelativeX( MxNumberTenths( 32.3 ) );
	object.setRelativeY( MxNumberTenths( 32.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#585756" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 10.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9.8 ) );
	object.setLineHeight( MxNumberOrNormal( 9.8 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "font-weight=\"bold\" halign=\"center\" overline=\"0\" line-through=\"0\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 32.4 ) );
	object.setDefaultY( MxNumberTenths( 32.4 ) );
	object.setRelativeX( MxNumberTenths( 32.4 ) );
	object.setRelativeY( MxNumberTenths( 32.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 10.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9.9 ) );
	object.setLineHeight( MxNumberOrNormal( 9.9 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "justify=\"left\" default-x=\"32.4\" default-y=\"32.4\" relative-x=\"32.4\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" halign=\"right\" valign=\"bottom\" overline=\"1\" line-through=\"1\" rotation=\"10.7\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 32.5 ) );
	object.setDefaultY( MxNumberTenths( 32.5 ) );
	object.setRelativeX( MxNumberTenths( 32.5 ) );
	object.setRelativeY( MxNumberTenths( 32.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 10.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 10 ) );
	object.setLineHeight( MxNumberOrNormal( 10 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "default-x=\"32.5\" default-y=\"32.5\" relative-x=\"32.5\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" halign=\"left\" valign=\"baseline\" overline=\"2\" line-through=\"2\" rotation=\"10.8\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 32.6 ) );
	object.setDefaultY( MxNumberTenths( 32.6 ) );
	object.setRelativeX( MxNumberTenths( 32.6 ) );
	object.setRelativeY( MxNumberTenths( 32.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 10.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 10.1 ) );
	object.setLineHeight( MxNumberOrNormal( 10.1 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "justify=\"right\" default-y=\"32.6\" relative-x=\"32.6\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" halign=\"center\" valign=\"top\" line-through=\"0\" rotation=\"10.9\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 32.7 ) );
	object.setDefaultY( MxNumberTenths( 32.7 ) );
	object.setRelativeX( MxNumberTenths( 32.7 ) );
	object.setRelativeY( MxNumberTenths( 32.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 11 ) );
	object.setLetterSpacing( MxNumberOrNormal( 10.2 ) );
	object.setLineHeight( MxNumberOrNormal( 10.2 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "relative-x=\"32.7\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" valign=\"middle\" line-through=\"1\" rotation=\"11\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
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
	object.setDefaultX( MxNumberTenths( 32.8 ) );
	object.setDefaultY( MxNumberTenths( 32.8 ) );
	object.setRelativeX( MxNumberTenths( 32.8 ) );
	object.setRelativeY( MxNumberTenths( 32.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 11.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 10.3 ) );
	object.setLineHeight( MxNumberOrNormal( 10.3 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
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

TEST( getIsJustifyDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsJustifyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsHalignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsValignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsUnderlineDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsUnderlineDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsOverlineDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsOverlineDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineThroughDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsLineThroughDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRotationDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsRotationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLetterSpacingDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = true;
	bool actual = object.getIsLetterSpacingDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineHeightDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsLineHeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsXmlLangDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlSpaceDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsXmlSpaceDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDirDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsDirDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEnclosureDefaultDefined, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	bool expected = false;
	bool actual = object.getIsEnclosureDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getJustifyDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getJustifyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getHalignDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getHalignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValignDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxEnumValign expected;
	MxEnumValign actual = object.getValignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getUnderlineDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getUnderlineDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getOverlineDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getOverlineDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineThroughDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getLineThroughDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRotationDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxNumberRotationDegrees expected;
	MxNumberRotationDegrees actual = object.getRotationDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLetterSpacingDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxNumberOrNormal expected( "normal" );
	MxNumberOrNormal actual = object.getLetterSpacingDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineHeightDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxNumberOrNormal expected;
	MxNumberOrNormal actual = object.getLineHeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlLangDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	XmlLang expected;
	XmlLang actual = object.getXmlLangDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlSpaceDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	XmlSpace expected;
	XmlSpace actual = object.getXmlSpaceDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDirDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxEnumTextDirection expected;
	MxEnumTextDirection actual = object.getDirDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getEnclosureDefaultValue, MxAttrGrpTextFormatting )
{
	MxAttrGrpTextFormatting object;
	MxEnumEnclosureShape expected;
	MxEnumEnclosureShape actual = object.getEnclosureDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


