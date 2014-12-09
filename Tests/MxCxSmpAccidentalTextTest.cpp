/** *******************************************************
  * 
  * MxCxSmpAccidentalTextTest.cpp
  * Created: 2014-12-02 17:31:48
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpAccidentalText.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getJustify().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getHalign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxEnumValign(  ) ).toString();
	std::string actual = object.getValign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getUnderline().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getOverline().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues14, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getLineThrough().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues15, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxNumberRotationDegrees(  ) ).toString();
	std::string actual = object.getRotation().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues16, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxNumberOrNormal( "normal" ) ).toString();
	std::string actual = object.getLetterSpacing().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues17, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxNumberOrNormal(  ) ).toString();
	std::string actual = object.getLineHeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues18, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( XmlLang(  ) ).toString();
	std::string actual = object.getXmlLang().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues19, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( XmlSpace(  ) ).toString();
	std::string actual = object.getXmlSpace().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues20, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxEnumTextDirection(  ) ).toString();
	std::string actual = object.getDir().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues21, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = ( MxEnumEnclosureShape(  ) ).toString();
	std::string actual = object.getEnclosure().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::sharp ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "sharp";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumAccidentalValue( lexicon::enums::AccidentalValue::natural ) );
	expected = "natural";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::flat ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "flat";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumAccidentalValue( lexicon::enums::AccidentalValue::doubleSharp ) );
	expected = "double-sharp";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::sharpSharp ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "sharp-sharp";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumAccidentalValue( lexicon::enums::AccidentalValue::flatFlat ) );
	expected = "flat-flat";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::naturalSharp ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "natural-sharp";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumAccidentalValue( lexicon::enums::AccidentalValue::naturalFlat ) );
	expected = "natural-flat";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::quarterFlat ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "quarter-flat";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumAccidentalValue( lexicon::enums::AccidentalValue::quarterSharp ) );
	expected = "quarter-sharp";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = "MxCxSmpAccidentalText";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = "accidental-text";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	std::string expected = "The accidental-text type represents an element with an accidental value and text-formatting attributes.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setJustify0, MxCxSmpAccidentalText )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setJustify( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getJustify();
	CHECK_EQUAL( expected, actual )
	object.setJustify( value2 );
	expected = value2;
	actual = object.getJustify();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX1, MxCxSmpAccidentalText )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY2, MxCxSmpAccidentalText )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX3, MxCxSmpAccidentalText )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY4, MxCxSmpAccidentalText )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily5, MxCxSmpAccidentalText )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle6, MxCxSmpAccidentalText )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize7, MxCxSmpAccidentalText )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight8, MxCxSmpAccidentalText )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor9, MxCxSmpAccidentalText )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setHalign10, MxCxSmpAccidentalText )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setHalign( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
	object.setHalign( value2 );
	expected = value2;
	actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
}
TEST( setValign11, MxCxSmpAccidentalText )
{
	MxEnumValign value1( lexicon::enums::Valign::baseline );
	MxEnumValign value2( lexicon::enums::Valign::bottom );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setValign( value1 );
	MxEnumValign expected = value1;
	MxEnumValign actual = object.getValign();
	CHECK_EQUAL( expected, actual )
	object.setValign( value2 );
	expected = value2;
	actual = object.getValign();
	CHECK_EQUAL( expected, actual )
}
TEST( setUnderline12, MxCxSmpAccidentalText )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setUnderline( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getUnderline();
	CHECK_EQUAL( expected, actual )
	object.setUnderline( value2 );
	expected = value2;
	actual = object.getUnderline();
	CHECK_EQUAL( expected, actual )
}
TEST( setOverline13, MxCxSmpAccidentalText )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setOverline( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getOverline();
	CHECK_EQUAL( expected, actual )
	object.setOverline( value2 );
	expected = value2;
	actual = object.getOverline();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineThrough14, MxCxSmpAccidentalText )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setLineThrough( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getLineThrough();
	CHECK_EQUAL( expected, actual )
	object.setLineThrough( value2 );
	expected = value2;
	actual = object.getLineThrough();
	CHECK_EQUAL( expected, actual )
}
TEST( setRotation15, MxCxSmpAccidentalText )
{
	MxNumberRotationDegrees value1( -179.9 );
	MxNumberRotationDegrees value2( -179.8 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setRotation( value1 );
	MxNumberRotationDegrees expected = value1;
	MxNumberRotationDegrees actual = object.getRotation();
	CHECK_EQUAL( expected, actual )
	object.setRotation( value2 );
	expected = value2;
	actual = object.getRotation();
	CHECK_EQUAL( expected, actual )
}
TEST( setLetterSpacing16, MxCxSmpAccidentalText )
{
	MxNumberOrNormal value1( 0.1 );
	MxNumberOrNormal value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setLetterSpacing( value1 );
	MxNumberOrNormal expected = value1;
	MxNumberOrNormal actual = object.getLetterSpacing();
	CHECK_EQUAL( expected, actual )
	object.setLetterSpacing( value2 );
	expected = value2;
	actual = object.getLetterSpacing();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineHeight17, MxCxSmpAccidentalText )
{
	MxNumberOrNormal value1( 0.1 );
	MxNumberOrNormal value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setLineHeight( value1 );
	MxNumberOrNormal expected = value1;
	MxNumberOrNormal actual = object.getLineHeight();
	CHECK_EQUAL( expected, actual )
	object.setLineHeight( value2 );
	expected = value2;
	actual = object.getLineHeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setXmlLang18, MxCxSmpAccidentalText )
{
	XmlLang value1( "en" );
	XmlLang value2( "fr" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setXmlLang( value1 );
	XmlLang expected = value1;
	XmlLang actual = object.getXmlLang();
	CHECK_EQUAL( expected, actual )
	object.setXmlLang( value2 );
	expected = value2;
	actual = object.getXmlLang();
	CHECK_EQUAL( expected, actual )
}
TEST( setXmlSpace19, MxCxSmpAccidentalText )
{
	XmlSpace value1( lexicon::enums::XmlSpace::preserve );
	XmlSpace value2( lexicon::enums::XmlSpace::default_ );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setXmlSpace( value1 );
	XmlSpace expected = value1;
	XmlSpace actual = object.getXmlSpace();
	CHECK_EQUAL( expected, actual )
	object.setXmlSpace( value2 );
	expected = value2;
	actual = object.getXmlSpace();
	CHECK_EQUAL( expected, actual )
}
TEST( setDir20, MxCxSmpAccidentalText )
{
	MxEnumTextDirection value1( lexicon::enums::TextDirection::rlo );
	MxEnumTextDirection value2( lexicon::enums::TextDirection::lro );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
	object.setDir( value1 );
	MxEnumTextDirection expected = value1;
	MxEnumTextDirection actual = object.getDir();
	CHECK_EQUAL( expected, actual )
	object.setDir( value2 );
	expected = value2;
	actual = object.getDir();
	CHECK_EQUAL( expected, actual )
}
TEST( setEnclosure21, MxCxSmpAccidentalText )
{
	MxEnumEnclosureShape value1( lexicon::enums::EnclosureShape::none );
	MxEnumEnclosureShape value2( lexicon::enums::EnclosureShape::diamond );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidentalText object;
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

TEST( getIsJustifyRequired0, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsJustifyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired1, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired2, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired3, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired4, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired5, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired6, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired7, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired8, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired9, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignRequired10, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsHalignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignRequired11, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsValignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsUnderlineRequired12, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsUnderlineRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsOverlineRequired13, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsOverlineRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineThroughRequired14, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsLineThroughRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRotationRequired15, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsRotationRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLetterSpacingRequired16, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsLetterSpacingRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineHeightRequired17, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsLineHeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangRequired18, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsXmlLangRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlSpaceRequired19, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsXmlSpaceRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDirRequired20, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsDirRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEnclosureRequired21, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsEnclosureRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsJustifyPresent0, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsDefaultXPresent1, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsDefaultYPresent2, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsRelativeXPresent3, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsRelativeYPresent4, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsFontFamilyPresent5, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsFontStylePresent6, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsFontSizePresent7, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsFontWeightPresent8, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsColorPresent9, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsHalignPresent10, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsValignPresent11, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsUnderlinePresent12, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsOverlinePresent13, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsLineThroughPresent14, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsRotationPresent15, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsLetterSpacingPresent16, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsLineHeightPresent17, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsXmlLangPresent18, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsXmlSpacePresent19, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsDirPresent20, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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
TEST( getIsEnclosurePresent21, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
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

TEST( toString0, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 1.1 ) );
	object.setDefaultY( MxNumberTenths( 1.1 ) );
	object.setRelativeX( MxNumberTenths( 1.1 ) );
	object.setRelativeY( MxNumberTenths( 1.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 1.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 0.1 ) );
	object.setLineHeight( MxNumberOrNormal( 0.1 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
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
	expected = "<booksmart justify=\"center\" default-x=\"1.1\" default-y=\"1.1\" relative-x=\"1.1\" relative-y=\"1.1\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#01020100\" halign=\"center\" valign=\"middle\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"1.1\" letter-spacing=\"0.1\" line-height=\"0.1\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 1.2 ) );
	object.setDefaultY( MxNumberTenths( 1.2 ) );
	object.setRelativeX( MxNumberTenths( 1.2 ) );
	object.setRelativeY( MxNumberTenths( 1.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#040302" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 1.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 0.2 ) );
	object.setLineHeight( MxNumberOrNormal( 0.2 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<quiet default-x=\"1.2\" default-y=\"1.2\" relative-x=\"1.2\" relative-y=\"1.2\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#040302\" halign=\"right\" valign=\"bottom\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"1.2\" letter-spacing=\"0.2\" line-height=\"0.2\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 1.3 ) );
	object.setDefaultY( MxNumberTenths( 1.3 ) );
	object.setRelativeX( MxNumberTenths( 1.3 ) );
	object.setRelativeY( MxNumberTenths( 1.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 1.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 0.3 ) );
	object.setLineHeight( MxNumberOrNormal( 0.3 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<musicxmlishard justify=\"left\" default-y=\"1.3\" relative-x=\"1.3\" relative-y=\"1.3\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#05060504\" halign=\"left\" valign=\"baseline\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"1.3\" letter-spacing=\"0.3\" line-height=\"0.3\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 1.4 ) );
	object.setDefaultY( MxNumberTenths( 1.4 ) );
	object.setRelativeX( MxNumberTenths( 1.4 ) );
	object.setRelativeY( MxNumberTenths( 1.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#080706" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 1.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 0.4 ) );
	object.setLineHeight( MxNumberOrNormal( 0.4 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<bishop relative-x=\"1.4\" relative-y=\"1.4\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#080706\" halign=\"center\" valign=\"top\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"1.4\" letter-spacing=\"0.4\" line-height=\"0.4\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 1.5 ) );
	object.setDefaultY( MxNumberTenths( 1.5 ) );
	object.setRelativeX( MxNumberTenths( 1.5 ) );
	object.setRelativeY( MxNumberTenths( 1.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 1.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 0.5 ) );
	object.setLineHeight( MxNumberOrNormal( 0.5 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<charlie justify=\"right\" default-x=\"1.5\" relative-y=\"1.5\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#090A0908\" halign=\"right\" valign=\"middle\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"1.5\" letter-spacing=\"0.5\" line-height=\"0.5\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 1.6 ) );
	object.setDefaultY( MxNumberTenths( 1.6 ) );
	object.setRelativeX( MxNumberTenths( 1.6 ) );
	object.setRelativeY( MxNumberTenths( 1.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 1.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 0.6 ) );
	object.setLineHeight( MxNumberOrNormal( 0.6 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<booksmart default-x=\"1.6\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#0C0B0A\" halign=\"left\" valign=\"bottom\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"1.6\" letter-spacing=\"0.6\" line-height=\"0.6\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 1.7 ) );
	object.setDefaultY( MxNumberTenths( 1.7 ) );
	object.setRelativeX( MxNumberTenths( 1.7 ) );
	object.setRelativeY( MxNumberTenths( 1.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 1.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 0.7 ) );
	object.setLineHeight( MxNumberOrNormal( 0.7 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<quiet justify=\"center\" default-y=\"1.7\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#0D0E0D0C\" halign=\"center\" valign=\"baseline\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"1.7\" letter-spacing=\"0.7\" line-height=\"0.7\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 1.8 ) );
	object.setDefaultY( MxNumberTenths( 1.8 ) );
	object.setRelativeX( MxNumberTenths( 1.8 ) );
	object.setRelativeY( MxNumberTenths( 1.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 1.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 0.8 ) );
	object.setLineHeight( MxNumberOrNormal( 0.8 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<musicxmlishard default-y=\"1.8\" font-size=\"large\" font-weight=\"normal\" color=\"#100F0E\" halign=\"right\" valign=\"top\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"1.8\" letter-spacing=\"0.8\" line-height=\"0.8\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 1.9 ) );
	object.setDefaultY( MxNumberTenths( 1.9 ) );
	object.setRelativeX( MxNumberTenths( 1.9 ) );
	object.setRelativeY( MxNumberTenths( 1.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 1.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 0.9 ) );
	object.setLineHeight( MxNumberOrNormal( 0.9 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<bishop justify=\"left\" default-x=\"1.9\" default-y=\"1.9\" relative-x=\"1.9\" font-weight=\"bold\" color=\"#11121110\" halign=\"left\" valign=\"middle\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"1.9\" letter-spacing=\"0.9\" line-height=\"0.9\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 2 ) );
	object.setDefaultY( MxNumberTenths( 2 ) );
	object.setRelativeX( MxNumberTenths( 2 ) );
	object.setRelativeY( MxNumberTenths( 2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#141312" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1 ) );
	object.setLineHeight( MxNumberOrNormal( 1 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<charlie default-x=\"2\" relative-x=\"2\" color=\"#141312\" halign=\"center\" valign=\"bottom\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"2\" letter-spacing=\"1\" line-height=\"1\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 2.1 ) );
	object.setDefaultY( MxNumberTenths( 2.1 ) );
	object.setRelativeX( MxNumberTenths( 2.1 ) );
	object.setRelativeY( MxNumberTenths( 2.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 2.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1.1 ) );
	object.setLineHeight( MxNumberOrNormal( 1.1 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<booksmart justify=\"right\" relative-x=\"2.1\" relative-y=\"2.1\" halign=\"right\" valign=\"baseline\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"2.1\" letter-spacing=\"1.1\" line-height=\"1.1\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 2.2 ) );
	object.setDefaultY( MxNumberTenths( 2.2 ) );
	object.setRelativeX( MxNumberTenths( 2.2 ) );
	object.setRelativeY( MxNumberTenths( 2.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#181716" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 2.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1.2 ) );
	object.setLineHeight( MxNumberOrNormal( 1.2 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<quiet relative-x=\"2.2\" relative-y=\"2.2\" valign=\"top\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"2.2\" letter-spacing=\"1.2\" line-height=\"1.2\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 2.3 ) );
	object.setDefaultY( MxNumberTenths( 2.3 ) );
	object.setRelativeX( MxNumberTenths( 2.3 ) );
	object.setRelativeY( MxNumberTenths( 2.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 2.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1.3 ) );
	object.setLineHeight( MxNumberOrNormal( 1.3 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<musicxmlishard justify=\"center\" default-x=\"2.3\" default-y=\"2.3\" relative-y=\"2.3\" font-family=\"ABC\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"2.3\" letter-spacing=\"1.3\" line-height=\"1.3\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 2.4 ) );
	object.setDefaultY( MxNumberTenths( 2.4 ) );
	object.setRelativeX( MxNumberTenths( 2.4 ) );
	object.setRelativeY( MxNumberTenths( 2.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 2.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1.4 ) );
	object.setLineHeight( MxNumberOrNormal( 1.4 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<bishop default-x=\"2.4\" default-y=\"2.4\" relative-y=\"2.4\" font-family=\"DEF\" overline=\"0\" line-through=\"0\" rotation=\"2.4\" letter-spacing=\"1.4\" line-height=\"1.4\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 2.5 ) );
	object.setDefaultY( MxNumberTenths( 2.5 ) );
	object.setRelativeX( MxNumberTenths( 2.5 ) );
	object.setRelativeY( MxNumberTenths( 2.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 2.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1.5 ) );
	object.setLineHeight( MxNumberOrNormal( 1.5 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<charlie justify=\"left\" default-y=\"2.5\" relative-y=\"2.5\" font-family=\"XYZ\" font-style=\"italic\" line-through=\"1\" rotation=\"2.5\" letter-spacing=\"1.5\" line-height=\"1.5\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 2.6 ) );
	object.setDefaultY( MxNumberTenths( 2.6 ) );
	object.setRelativeX( MxNumberTenths( 2.6 ) );
	object.setRelativeY( MxNumberTenths( 2.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 2.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1.6 ) );
	object.setLineHeight( MxNumberOrNormal( 1.6 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<booksmart font-family=\"ABC\" font-style=\"normal\" rotation=\"2.6\" letter-spacing=\"1.6\" line-height=\"1.6\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 2.7 ) );
	object.setDefaultY( MxNumberTenths( 2.7 ) );
	object.setRelativeX( MxNumberTenths( 2.7 ) );
	object.setRelativeY( MxNumberTenths( 2.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 2.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1.7 ) );
	object.setLineHeight( MxNumberOrNormal( 1.7 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<quiet justify=\"right\" default-x=\"2.7\" relative-x=\"2.7\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" letter-spacing=\"1.7\" line-height=\"1.7\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 2.8 ) );
	object.setDefaultY( MxNumberTenths( 2.8 ) );
	object.setRelativeX( MxNumberTenths( 2.8 ) );
	object.setRelativeY( MxNumberTenths( 2.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#242322" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 2.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1.8 ) );
	object.setLineHeight( MxNumberOrNormal( 1.8 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<musicxmlishard default-x=\"2.8\" relative-x=\"2.8\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" line-height=\"1.8\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 2.9 ) );
	object.setDefaultY( MxNumberTenths( 2.9 ) );
	object.setRelativeX( MxNumberTenths( 2.9 ) );
	object.setRelativeY( MxNumberTenths( 2.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 2.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 1.9 ) );
	object.setLineHeight( MxNumberOrNormal( 1.9 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<bishop justify=\"center\" default-y=\"2.9\" relative-x=\"2.9\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 3 ) );
	object.setDefaultY( MxNumberTenths( 3 ) );
	object.setRelativeX( MxNumberTenths( 3 ) );
	object.setRelativeY( MxNumberTenths( 3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#282726" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2 ) );
	object.setLineHeight( MxNumberOrNormal( 2 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<charlie default-y=\"3\" relative-x=\"3\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 3.1 ) );
	object.setDefaultY( MxNumberTenths( 3.1 ) );
	object.setRelativeX( MxNumberTenths( 3.1 ) );
	object.setRelativeY( MxNumberTenths( 3.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 3.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2.1 ) );
	object.setLineHeight( MxNumberOrNormal( 2.1 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<booksmart justify=\"left\" default-x=\"3.1\" default-y=\"3.1\" relative-y=\"3.1\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#292A2928\" dir=\"rtl\" enclosure=\"triangle\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 3.2 ) );
	object.setDefaultY( MxNumberTenths( 3.2 ) );
	object.setRelativeX( MxNumberTenths( 3.2 ) );
	object.setRelativeY( MxNumberTenths( 3.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 3.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2.2 ) );
	object.setLineHeight( MxNumberOrNormal( 2.2 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<quiet default-x=\"3.2\" relative-y=\"3.2\" font-size=\"large\" font-weight=\"normal\" color=\"#2C2B2A\" enclosure=\"diamond\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 3.3 ) );
	object.setDefaultY( MxNumberTenths( 3.3 ) );
	object.setRelativeX( MxNumberTenths( 3.3 ) );
	object.setRelativeY( MxNumberTenths( 3.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 3.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2.3 ) );
	object.setLineHeight( MxNumberOrNormal( 2.3 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<musicxmlishard justify=\"right\" relative-y=\"3.3\" font-size=\"1.1\" font-weight=\"bold\" color=\"#2D2E2D2C\" halign=\"right\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 3.4 ) );
	object.setDefaultY( MxNumberTenths( 3.4 ) );
	object.setRelativeX( MxNumberTenths( 3.4 ) );
	object.setRelativeY( MxNumberTenths( 3.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 3.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2.4 ) );
	object.setLineHeight( MxNumberOrNormal( 2.4 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<bishop relative-y=\"3.4\" font-size=\"large\" font-weight=\"normal\" color=\"#302F2E\" halign=\"left\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 3.5 ) );
	object.setDefaultY( MxNumberTenths( 3.5 ) );
	object.setRelativeX( MxNumberTenths( 3.5 ) );
	object.setRelativeY( MxNumberTenths( 3.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 3.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2.5 ) );
	object.setLineHeight( MxNumberOrNormal( 2.5 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<charlie justify=\"center\" default-x=\"3.5\" default-y=\"3.5\" relative-x=\"3.5\" relative-y=\"3.5\" font-family=\"ABC\" font-weight=\"bold\" color=\"#31323130\" halign=\"center\" valign=\"middle\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 3.6 ) );
	object.setDefaultY( MxNumberTenths( 3.6 ) );
	object.setRelativeX( MxNumberTenths( 3.6 ) );
	object.setRelativeY( MxNumberTenths( 3.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#343332" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 3.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2.6 ) );
	object.setLineHeight( MxNumberOrNormal( 2.6 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<booksmart default-x=\"3.6\" default-y=\"3.6\" relative-x=\"3.6\" font-family=\"DEF\" font-weight=\"normal\" color=\"#343332\" halign=\"right\" valign=\"bottom\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 3.7 ) );
	object.setDefaultY( MxNumberTenths( 3.7 ) );
	object.setRelativeX( MxNumberTenths( 3.7 ) );
	object.setRelativeY( MxNumberTenths( 3.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 3.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2.7 ) );
	object.setLineHeight( MxNumberOrNormal( 2.7 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<quiet justify=\"left\" default-y=\"3.7\" relative-x=\"3.7\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#35363534\" halign=\"left\" valign=\"baseline\" underline=\"1\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 3.8 ) );
	object.setDefaultY( MxNumberTenths( 3.8 ) );
	object.setRelativeX( MxNumberTenths( 3.8 ) );
	object.setRelativeY( MxNumberTenths( 3.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#383736" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 3.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2.8 ) );
	object.setLineHeight( MxNumberOrNormal( 2.8 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<musicxmlishard relative-x=\"3.8\" font-family=\"ABC\" color=\"#383736\" halign=\"center\" valign=\"top\" underline=\"2\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 3.9 ) );
	object.setDefaultY( MxNumberTenths( 3.9 ) );
	object.setRelativeX( MxNumberTenths( 3.9 ) );
	object.setRelativeY( MxNumberTenths( 3.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 3.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 2.9 ) );
	object.setLineHeight( MxNumberOrNormal( 2.9 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<bishop justify=\"right\" default-x=\"3.9\" font-family=\"DEF\" font-style=\"italic\" color=\"#393A3938\" halign=\"right\" valign=\"middle\" underline=\"0\" overline=\"0\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 4 ) );
	object.setDefaultY( MxNumberTenths( 4 ) );
	object.setRelativeX( MxNumberTenths( 4 ) );
	object.setRelativeY( MxNumberTenths( 4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3 ) );
	object.setLineHeight( MxNumberOrNormal( 3 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<charlie default-x=\"4\" font-family=\"XYZ\" font-style=\"normal\" color=\"#3C3B3A\" halign=\"left\" valign=\"bottom\" underline=\"1\" overline=\"1\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 4.1 ) );
	object.setDefaultY( MxNumberTenths( 4.1 ) );
	object.setRelativeX( MxNumberTenths( 4.1 ) );
	object.setRelativeY( MxNumberTenths( 4.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 4.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3.1 ) );
	object.setLineHeight( MxNumberOrNormal( 3.1 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<booksmart justify=\"center\" default-y=\"4.1\" relative-y=\"4.1\" font-style=\"italic\" halign=\"center\" valign=\"baseline\" underline=\"2\" overline=\"2\" line-through=\"2\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 4.2 ) );
	object.setDefaultY( MxNumberTenths( 4.2 ) );
	object.setRelativeX( MxNumberTenths( 4.2 ) );
	object.setRelativeY( MxNumberTenths( 4.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 4.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3.2 ) );
	object.setLineHeight( MxNumberOrNormal( 3.2 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<quiet default-y=\"4.2\" relative-y=\"4.2\" font-style=\"normal\" halign=\"right\" valign=\"top\" underline=\"0\" overline=\"0\" line-through=\"0\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 4.3 ) );
	object.setDefaultY( MxNumberTenths( 4.3 ) );
	object.setRelativeX( MxNumberTenths( 4.3 ) );
	object.setRelativeY( MxNumberTenths( 4.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 4.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3.3 ) );
	object.setLineHeight( MxNumberOrNormal( 3.3 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<musicxmlishard justify=\"left\" default-x=\"4.3\" default-y=\"4.3\" relative-x=\"4.3\" relative-y=\"4.3\" font-style=\"italic\" font-size=\"1.1\" halign=\"left\" valign=\"middle\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"4.3\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 4.4 ) );
	object.setDefaultY( MxNumberTenths( 4.4 ) );
	object.setRelativeX( MxNumberTenths( 4.4 ) );
	object.setRelativeY( MxNumberTenths( 4.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#444342" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 4.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3.4 ) );
	object.setLineHeight( MxNumberOrNormal( 3.4 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<bishop default-x=\"4.4\" relative-x=\"4.4\" relative-y=\"4.4\" font-style=\"normal\" font-size=\"large\" valign=\"bottom\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"4.4\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 4.5 ) );
	object.setDefaultY( MxNumberTenths( 4.5 ) );
	object.setRelativeX( MxNumberTenths( 4.5 ) );
	object.setRelativeY( MxNumberTenths( 4.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 4.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3.5 ) );
	object.setLineHeight( MxNumberOrNormal( 3.5 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<charlie justify=\"right\" relative-x=\"4.5\" relative-y=\"4.5\" font-style=\"italic\" font-size=\"1.1\" valign=\"baseline\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"4.5\" letter-spacing=\"3.5\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 4.6 ) );
	object.setDefaultY( MxNumberTenths( 4.6 ) );
	object.setRelativeX( MxNumberTenths( 4.6 ) );
	object.setRelativeY( MxNumberTenths( 4.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#484746" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 4.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3.6 ) );
	object.setLineHeight( MxNumberOrNormal( 3.6 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<booksmart relative-x=\"4.6\" font-size=\"large\" valign=\"top\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"4.6\" letter-spacing=\"3.6\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 4.7 ) );
	object.setDefaultY( MxNumberTenths( 4.7 ) );
	object.setRelativeX( MxNumberTenths( 4.7 ) );
	object.setRelativeY( MxNumberTenths( 4.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 4.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3.7 ) );
	object.setLineHeight( MxNumberOrNormal( 3.7 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<quiet justify=\"center\" default-x=\"4.7\" default-y=\"4.7\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"4.7\" letter-spacing=\"3.7\" line-height=\"3.7\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 4.8 ) );
	object.setDefaultY( MxNumberTenths( 4.8 ) );
	object.setRelativeX( MxNumberTenths( 4.8 ) );
	object.setRelativeY( MxNumberTenths( 4.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 4.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3.8 ) );
	object.setLineHeight( MxNumberOrNormal( 3.8 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<musicxmlishard default-x=\"4.8\" default-y=\"4.8\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"4.8\" letter-spacing=\"3.8\" line-height=\"3.8\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 4.9 ) );
	object.setDefaultY( MxNumberTenths( 4.9 ) );
	object.setRelativeX( MxNumberTenths( 4.9 ) );
	object.setRelativeY( MxNumberTenths( 4.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 4.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 3.9 ) );
	object.setLineHeight( MxNumberOrNormal( 3.9 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<bishop justify=\"left\" default-y=\"4.9\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"4.9\" letter-spacing=\"3.9\" line-height=\"3.9\" xml:lang=\"XYZ\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 5 ) );
	object.setDefaultY( MxNumberTenths( 5 ) );
	object.setRelativeX( MxNumberTenths( 5 ) );
	object.setRelativeY( MxNumberTenths( 5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4 ) );
	object.setLineHeight( MxNumberOrNormal( 4 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<charlie font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" overline=\"2\" line-through=\"2\" rotation=\"5\" letter-spacing=\"4\" line-height=\"4\" xml:lang=\"ABC\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 5.1 ) );
	object.setDefaultY( MxNumberTenths( 5.1 ) );
	object.setRelativeX( MxNumberTenths( 5.1 ) );
	object.setRelativeY( MxNumberTenths( 5.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 5.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4.1 ) );
	object.setLineHeight( MxNumberOrNormal( 4.1 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<booksmart justify=\"right\" default-x=\"5.1\" relative-x=\"5.1\" relative-y=\"5.1\" font-family=\"DEF\" font-weight=\"bold\" color=\"#51525150\" overline=\"0\" line-through=\"0\" rotation=\"5.1\" letter-spacing=\"4.1\" line-height=\"4.1\" xml:lang=\"DEF\" xml:space=\"preserve\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 5.2 ) );
	object.setDefaultY( MxNumberTenths( 5.2 ) );
	object.setRelativeX( MxNumberTenths( 5.2 ) );
	object.setRelativeY( MxNumberTenths( 5.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#545352" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 5.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4.2 ) );
	object.setLineHeight( MxNumberOrNormal( 4.2 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<quiet default-x=\"5.2\" relative-x=\"5.2\" relative-y=\"5.2\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#545352\" overline=\"1\" line-through=\"1\" rotation=\"5.2\" letter-spacing=\"4.2\" line-height=\"4.2\" xml:lang=\"XYZ\" xml:space=\"default\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 5.3 ) );
	object.setDefaultY( MxNumberTenths( 5.3 ) );
	object.setRelativeX( MxNumberTenths( 5.3 ) );
	object.setRelativeY( MxNumberTenths( 5.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 5.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4.3 ) );
	object.setLineHeight( MxNumberOrNormal( 4.3 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<musicxmlishard justify=\"center\" default-y=\"5.3\" relative-x=\"5.3\" relative-y=\"5.3\" font-style=\"italic\" font-weight=\"bold\" color=\"#55565554\" line-through=\"2\" rotation=\"5.3\" letter-spacing=\"4.3\" line-height=\"4.3\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 5.4 ) );
	object.setDefaultY( MxNumberTenths( 5.4 ) );
	object.setRelativeX( MxNumberTenths( 5.4 ) );
	object.setRelativeY( MxNumberTenths( 5.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#585756" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 5.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4.4 ) );
	object.setLineHeight( MxNumberOrNormal( 4.4 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<bishop default-y=\"5.4\" relative-x=\"5.4\" relative-y=\"5.4\" font-style=\"normal\" font-weight=\"normal\" color=\"#585756\" line-through=\"0\" rotation=\"5.4\" letter-spacing=\"4.4\" line-height=\"4.4\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 5.5 ) );
	object.setDefaultY( MxNumberTenths( 5.5 ) );
	object.setRelativeX( MxNumberTenths( 5.5 ) );
	object.setRelativeY( MxNumberTenths( 5.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 5.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4.5 ) );
	object.setLineHeight( MxNumberOrNormal( 4.5 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<charlie justify=\"left\" default-x=\"5.5\" default-y=\"5.5\" relative-y=\"5.5\" font-style=\"italic\" font-weight=\"bold\" color=\"#595A5958\" halign=\"left\" line-through=\"1\" rotation=\"5.5\" letter-spacing=\"4.5\" line-height=\"4.5\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 5.6 ) );
	object.setDefaultY( MxNumberTenths( 5.6 ) );
	object.setRelativeX( MxNumberTenths( 5.6 ) );
	object.setRelativeY( MxNumberTenths( 5.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 5.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4.6 ) );
	object.setLineHeight( MxNumberOrNormal( 4.6 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<booksmart default-x=\"5.6\" font-style=\"normal\" color=\"#5C5B5A\" halign=\"center\" rotation=\"5.6\" letter-spacing=\"4.6\" line-height=\"4.6\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 5.7 ) );
	object.setDefaultY( MxNumberTenths( 5.7 ) );
	object.setRelativeX( MxNumberTenths( 5.7 ) );
	object.setRelativeY( MxNumberTenths( 5.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 5.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4.7 ) );
	object.setLineHeight( MxNumberOrNormal( 4.7 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<quiet justify=\"right\" font-style=\"italic\" color=\"#5D5E5D5C\" halign=\"right\" rotation=\"5.7\" letter-spacing=\"4.7\" line-height=\"4.7\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 5.8 ) );
	object.setDefaultY( MxNumberTenths( 5.8 ) );
	object.setRelativeX( MxNumberTenths( 5.8 ) );
	object.setRelativeY( MxNumberTenths( 5.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 5.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4.8 ) );
	object.setLineHeight( MxNumberOrNormal( 4.8 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<musicxmlishard font-style=\"normal\" color=\"#605F5E\" halign=\"left\" rotation=\"5.8\" letter-spacing=\"4.8\" line-height=\"4.8\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 5.9 ) );
	object.setDefaultY( MxNumberTenths( 5.9 ) );
	object.setRelativeX( MxNumberTenths( 5.9 ) );
	object.setRelativeY( MxNumberTenths( 5.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 5.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 4.9 ) );
	object.setLineHeight( MxNumberOrNormal( 4.9 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<bishop justify=\"center\" default-x=\"5.9\" default-y=\"5.9\" relative-x=\"5.9\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#61626160\" halign=\"center\" valign=\"middle\" letter-spacing=\"4.9\" line-height=\"4.9\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 6 ) );
	object.setDefaultY( MxNumberTenths( 6 ) );
	object.setRelativeX( MxNumberTenths( 6 ) );
	object.setRelativeY( MxNumberTenths( 6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5 ) );
	object.setLineHeight( MxNumberOrNormal( 5 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<charlie default-x=\"6\" default-y=\"6\" relative-x=\"6\" font-family=\"DEF\" font-size=\"large\" color=\"#646362\" halign=\"right\" valign=\"bottom\" letter-spacing=\"5\" line-height=\"5\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 6.1 ) );
	object.setDefaultY( MxNumberTenths( 6.1 ) );
	object.setRelativeX( MxNumberTenths( 6.1 ) );
	object.setRelativeY( MxNumberTenths( 6.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 6.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5.1 ) );
	object.setLineHeight( MxNumberOrNormal( 5.1 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<booksmart justify=\"left\" default-y=\"6.1\" relative-x=\"6.1\" relative-y=\"6.1\" font-family=\"XYZ\" font-size=\"1.1\" halign=\"left\" valign=\"baseline\" letter-spacing=\"5.1\" line-height=\"5.1\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 6.2 ) );
	object.setDefaultY( MxNumberTenths( 6.2 ) );
	object.setRelativeX( MxNumberTenths( 6.2 ) );
	object.setRelativeY( MxNumberTenths( 6.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 6.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5.2 ) );
	object.setLineHeight( MxNumberOrNormal( 5.2 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<quiet relative-x=\"6.2\" relative-y=\"6.2\" font-family=\"ABC\" font-size=\"large\" halign=\"center\" valign=\"top\" line-height=\"5.2\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 6.3 ) );
	object.setDefaultY( MxNumberTenths( 6.3 ) );
	object.setRelativeX( MxNumberTenths( 6.3 ) );
	object.setRelativeY( MxNumberTenths( 6.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 6.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5.3 ) );
	object.setLineHeight( MxNumberOrNormal( 5.3 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<musicxmlishard justify=\"right\" default-x=\"6.3\" relative-y=\"6.3\" font-family=\"DEF\" font-size=\"1.1\" halign=\"right\" valign=\"middle\" underline=\"0\" line-height=\"5.3\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 6.4 ) );
	object.setDefaultY( MxNumberTenths( 6.4 ) );
	object.setRelativeX( MxNumberTenths( 6.4 ) );
	object.setRelativeY( MxNumberTenths( 6.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 6.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5.4 ) );
	object.setLineHeight( MxNumberOrNormal( 5.4 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<bishop default-x=\"6.4\" relative-y=\"6.4\" font-family=\"XYZ\" font-size=\"large\" halign=\"left\" valign=\"bottom\" underline=\"1\" line-height=\"5.4\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 6.5 ) );
	object.setDefaultY( MxNumberTenths( 6.5 ) );
	object.setRelativeX( MxNumberTenths( 6.5 ) );
	object.setRelativeY( MxNumberTenths( 6.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 6.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5.5 ) );
	object.setLineHeight( MxNumberOrNormal( 5.5 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<charlie justify=\"center\" default-y=\"6.5\" relative-y=\"6.5\" font-size=\"1.1\" font-weight=\"bold\" halign=\"center\" valign=\"baseline\" underline=\"2\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 6.6 ) );
	object.setDefaultY( MxNumberTenths( 6.6 ) );
	object.setRelativeX( MxNumberTenths( 6.6 ) );
	object.setRelativeY( MxNumberTenths( 6.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 6.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5.6 ) );
	object.setLineHeight( MxNumberOrNormal( 5.6 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<booksmart default-y=\"6.6\" font-size=\"large\" font-weight=\"normal\" valign=\"top\" underline=\"0\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 6.7 ) );
	object.setDefaultY( MxNumberTenths( 6.7 ) );
	object.setRelativeX( MxNumberTenths( 6.7 ) );
	object.setRelativeY( MxNumberTenths( 6.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 6.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5.7 ) );
	object.setLineHeight( MxNumberOrNormal( 5.7 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<quiet justify=\"left\" default-x=\"6.7\" default-y=\"6.7\" relative-x=\"6.7\" font-style=\"italic\" font-weight=\"bold\" valign=\"middle\" underline=\"1\" overline=\"1\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 6.8 ) );
	object.setDefaultY( MxNumberTenths( 6.8 ) );
	object.setRelativeX( MxNumberTenths( 6.8 ) );
	object.setRelativeY( MxNumberTenths( 6.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 6.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5.8 ) );
	object.setLineHeight( MxNumberOrNormal( 5.8 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<musicxmlishard default-x=\"6.8\" relative-x=\"6.8\" font-style=\"normal\" font-weight=\"normal\" valign=\"bottom\" underline=\"2\" overline=\"2\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 6.9 ) );
	object.setDefaultY( MxNumberTenths( 6.9 ) );
	object.setRelativeX( MxNumberTenths( 6.9 ) );
	object.setRelativeY( MxNumberTenths( 6.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 6.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 5.9 ) );
	object.setLineHeight( MxNumberOrNormal( 5.9 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<bishop justify=\"right\" relative-x=\"6.9\" font-style=\"italic\" font-weight=\"bold\" valign=\"baseline\" underline=\"0\" overline=\"0\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 7 ) );
	object.setDefaultY( MxNumberTenths( 7 ) );
	object.setRelativeX( MxNumberTenths( 7 ) );
	object.setRelativeY( MxNumberTenths( 7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6 ) );
	object.setLineHeight( MxNumberOrNormal( 6 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<charlie relative-x=\"7\" font-style=\"normal\" font-weight=\"normal\" valign=\"top\" underline=\"1\" overline=\"1\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 7.1 ) );
	object.setDefaultY( MxNumberTenths( 7.1 ) );
	object.setRelativeX( MxNumberTenths( 7.1 ) );
	object.setRelativeY( MxNumberTenths( 7.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 7.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6.1 ) );
	object.setLineHeight( MxNumberOrNormal( 6.1 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<booksmart justify=\"center\" default-x=\"7.1\" default-y=\"7.1\" relative-y=\"7.1\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" color=\"#797A7978\" underline=\"2\" overline=\"2\" line-through=\"2\" dir=\"rtl\" enclosure=\"triangle\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 7.2 ) );
	object.setDefaultY( MxNumberTenths( 7.2 ) );
	object.setRelativeX( MxNumberTenths( 7.2 ) );
	object.setRelativeY( MxNumberTenths( 7.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 7.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6.2 ) );
	object.setLineHeight( MxNumberOrNormal( 6.2 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<quiet default-x=\"7.2\" default-y=\"7.2\" relative-y=\"7.2\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" color=\"#7C7B7A\" underline=\"0\" overline=\"0\" line-through=\"0\" dir=\"lro\" enclosure=\"diamond\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 7.3 ) );
	object.setDefaultY( MxNumberTenths( 7.3 ) );
	object.setRelativeX( MxNumberTenths( 7.3 ) );
	object.setRelativeY( MxNumberTenths( 7.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 7.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6.3 ) );
	object.setLineHeight( MxNumberOrNormal( 6.3 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<musicxmlishard justify=\"left\" default-y=\"7.3\" relative-y=\"7.3\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" color=\"#7D7E7D7C\" underline=\"1\" overline=\"1\" line-through=\"1\" dir=\"rlo\" enclosure=\"none\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 7.4 ) );
	object.setDefaultY( MxNumberTenths( 7.4 ) );
	object.setRelativeX( MxNumberTenths( 7.4 ) );
	object.setRelativeY( MxNumberTenths( 7.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 7.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6.4 ) );
	object.setLineHeight( MxNumberOrNormal( 6.4 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<bishop relative-y=\"7.4\" font-family=\"ABC\" color=\"#807F7E\" underline=\"2\" overline=\"2\" line-through=\"2\" enclosure=\"rectangle\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 7.5 ) );
	object.setDefaultY( MxNumberTenths( 7.5 ) );
	object.setRelativeX( MxNumberTenths( 7.5 ) );
	object.setRelativeY( MxNumberTenths( 7.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 7.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6.5 ) );
	object.setLineHeight( MxNumberOrNormal( 6.5 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<charlie justify=\"right\" default-x=\"7.5\" relative-x=\"7.5\" relative-y=\"7.5\" font-family=\"DEF\" font-size=\"1.1\" color=\"#81828180\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"7.5\" enclosure=\"square\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 7.6 ) );
	object.setDefaultY( MxNumberTenths( 7.6 ) );
	object.setRelativeX( MxNumberTenths( 7.6 ) );
	object.setRelativeY( MxNumberTenths( 7.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 7.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6.6 ) );
	object.setLineHeight( MxNumberOrNormal( 6.6 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<booksmart default-x=\"7.6\" relative-x=\"7.6\" font-family=\"XYZ\" font-size=\"large\" color=\"#848382\" overline=\"1\" line-through=\"1\" rotation=\"7.6\" enclosure=\"oval\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 7.7 ) );
	object.setDefaultY( MxNumberTenths( 7.7 ) );
	object.setRelativeX( MxNumberTenths( 7.7 ) );
	object.setRelativeY( MxNumberTenths( 7.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 7.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6.7 ) );
	object.setLineHeight( MxNumberOrNormal( 6.7 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<quiet justify=\"center\" default-y=\"7.7\" relative-x=\"7.7\" font-size=\"1.1\" color=\"#85868584\" halign=\"center\" overline=\"2\" line-through=\"2\" rotation=\"7.7\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 7.8 ) );
	object.setDefaultY( MxNumberTenths( 7.8 ) );
	object.setRelativeX( MxNumberTenths( 7.8 ) );
	object.setRelativeY( MxNumberTenths( 7.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 7.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6.8 ) );
	object.setLineHeight( MxNumberOrNormal( 6.8 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<musicxmlishard default-y=\"7.8\" relative-x=\"7.8\" font-size=\"large\" color=\"#888786\" halign=\"right\" overline=\"0\" line-through=\"0\" rotation=\"7.8\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 7.9 ) );
	object.setDefaultY( MxNumberTenths( 7.9 ) );
	object.setRelativeX( MxNumberTenths( 7.9 ) );
	object.setRelativeY( MxNumberTenths( 7.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 7.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 6.9 ) );
	object.setLineHeight( MxNumberOrNormal( 6.9 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<bishop justify=\"left\" default-x=\"7.9\" default-y=\"7.9\" font-size=\"1.1\" color=\"#898A8988\" halign=\"left\" overline=\"1\" line-through=\"1\" rotation=\"7.9\" letter-spacing=\"6.9\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 8 ) );
	object.setDefaultY( MxNumberTenths( 8 ) );
	object.setRelativeX( MxNumberTenths( 8 ) );
	object.setRelativeY( MxNumberTenths( 8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7 ) );
	object.setLineHeight( MxNumberOrNormal( 7 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<charlie default-x=\"8\" font-size=\"large\" color=\"#8C8B8A\" halign=\"center\" overline=\"2\" line-through=\"2\" rotation=\"8\" letter-spacing=\"7\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 8.1 ) );
	object.setDefaultY( MxNumberTenths( 8.1 ) );
	object.setRelativeX( MxNumberTenths( 8.1 ) );
	object.setRelativeY( MxNumberTenths( 8.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 8.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7.1 ) );
	object.setLineHeight( MxNumberOrNormal( 7.1 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<booksmart justify=\"right\" relative-y=\"8.1\" font-style=\"italic\" font-size=\"1.1\" halign=\"right\" line-through=\"0\" rotation=\"8.1\" letter-spacing=\"7.1\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 8.2 ) );
	object.setDefaultY( MxNumberTenths( 8.2 ) );
	object.setRelativeX( MxNumberTenths( 8.2 ) );
	object.setRelativeY( MxNumberTenths( 8.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 8.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7.2 ) );
	object.setLineHeight( MxNumberOrNormal( 7.2 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<quiet relative-y=\"8.2\" font-style=\"normal\" font-size=\"large\" halign=\"left\" line-through=\"1\" rotation=\"8.2\" letter-spacing=\"7.2\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 8.3 ) );
	object.setDefaultY( MxNumberTenths( 8.3 ) );
	object.setRelativeX( MxNumberTenths( 8.3 ) );
	object.setRelativeY( MxNumberTenths( 8.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 8.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7.3 ) );
	object.setLineHeight( MxNumberOrNormal( 7.3 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<musicxmlishard justify=\"center\" default-x=\"8.3\" default-y=\"8.3\" relative-x=\"8.3\" relative-y=\"8.3\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" halign=\"center\" valign=\"middle\" line-through=\"2\" rotation=\"8.3\" letter-spacing=\"7.3\" line-height=\"7.3\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 8.4 ) );
	object.setDefaultY( MxNumberTenths( 8.4 ) );
	object.setRelativeX( MxNumberTenths( 8.4 ) );
	object.setRelativeY( MxNumberTenths( 8.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 8.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7.4 ) );
	object.setLineHeight( MxNumberOrNormal( 7.4 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<bishop default-x=\"8.4\" default-y=\"8.4\" relative-x=\"8.4\" relative-y=\"8.4\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" halign=\"right\" valign=\"bottom\" line-through=\"0\" rotation=\"8.4\" letter-spacing=\"7.4\" line-height=\"7.4\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 8.5 ) );
	object.setDefaultY( MxNumberTenths( 8.5 ) );
	object.setRelativeX( MxNumberTenths( 8.5 ) );
	object.setRelativeY( MxNumberTenths( 8.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 8.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7.5 ) );
	object.setLineHeight( MxNumberOrNormal( 7.5 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<charlie justify=\"left\" default-y=\"8.5\" relative-x=\"8.5\" relative-y=\"8.5\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" halign=\"left\" valign=\"baseline\" line-through=\"1\" rotation=\"8.5\" letter-spacing=\"7.5\" line-height=\"7.5\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 8.6 ) );
	object.setDefaultY( MxNumberTenths( 8.6 ) );
	object.setRelativeX( MxNumberTenths( 8.6 ) );
	object.setRelativeY( MxNumberTenths( 8.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 8.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7.6 ) );
	object.setLineHeight( MxNumberOrNormal( 7.6 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<booksmart relative-x=\"8.6\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" halign=\"center\" valign=\"top\" rotation=\"8.6\" letter-spacing=\"7.6\" line-height=\"7.6\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 8.7 ) );
	object.setDefaultY( MxNumberTenths( 8.7 ) );
	object.setRelativeX( MxNumberTenths( 8.7 ) );
	object.setRelativeY( MxNumberTenths( 8.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 8.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7.7 ) );
	object.setLineHeight( MxNumberOrNormal( 7.7 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<quiet justify=\"right\" default-x=\"8.7\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" halign=\"right\" valign=\"middle\" rotation=\"8.7\" letter-spacing=\"7.7\" line-height=\"7.7\" xml:lang=\"DEF\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 8.8 ) );
	object.setDefaultY( MxNumberTenths( 8.8 ) );
	object.setRelativeX( MxNumberTenths( 8.8 ) );
	object.setRelativeY( MxNumberTenths( 8.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 8.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7.8 ) );
	object.setLineHeight( MxNumberOrNormal( 7.8 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<musicxmlishard default-x=\"8.8\" font-family=\"XYZ\" font-weight=\"normal\" valign=\"bottom\" rotation=\"8.8\" letter-spacing=\"7.8\" line-height=\"7.8\" xml:lang=\"XYZ\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 8.9 ) );
	object.setDefaultY( MxNumberTenths( 8.9 ) );
	object.setRelativeX( MxNumberTenths( 8.9 ) );
	object.setRelativeY( MxNumberTenths( 8.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 8.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 7.9 ) );
	object.setLineHeight( MxNumberOrNormal( 7.9 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<bishop justify=\"center\" default-y=\"8.9\" font-weight=\"bold\" valign=\"baseline\" underline=\"2\" rotation=\"8.9\" letter-spacing=\"7.9\" line-height=\"7.9\" xml:lang=\"ABC\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 9 ) );
	object.setDefaultY( MxNumberTenths( 9 ) );
	object.setRelativeX( MxNumberTenths( 9 ) );
	object.setRelativeY( MxNumberTenths( 9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8 ) );
	object.setLineHeight( MxNumberOrNormal( 8 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<charlie default-y=\"9\" font-weight=\"normal\" valign=\"top\" underline=\"0\" rotation=\"9\" letter-spacing=\"8\" line-height=\"8\" xml:lang=\"DEF\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 9.1 ) );
	object.setDefaultY( MxNumberTenths( 9.1 ) );
	object.setRelativeX( MxNumberTenths( 9.1 ) );
	object.setRelativeY( MxNumberTenths( 9.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 9.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8.1 ) );
	object.setLineHeight( MxNumberOrNormal( 8.1 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<booksmart justify=\"left\" default-x=\"9.1\" default-y=\"9.1\" relative-x=\"9.1\" relative-y=\"9.1\" font-size=\"1.1\" font-weight=\"bold\" color=\"#A1A2A1A0\" valign=\"middle\" underline=\"1\" letter-spacing=\"8.1\" line-height=\"8.1\" xml:lang=\"XYZ\" xml:space=\"preserve\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 9.2 ) );
	object.setDefaultY( MxNumberTenths( 9.2 ) );
	object.setRelativeX( MxNumberTenths( 9.2 ) );
	object.setRelativeY( MxNumberTenths( 9.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 9.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8.2 ) );
	object.setLineHeight( MxNumberOrNormal( 8.2 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<quiet default-x=\"9.2\" relative-x=\"9.2\" relative-y=\"9.2\" font-size=\"large\" color=\"#A4A3A2\" valign=\"bottom\" underline=\"2\" letter-spacing=\"8.2\" line-height=\"8.2\" xml:lang=\"ABC\" xml:space=\"default\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 9.3 ) );
	object.setDefaultY( MxNumberTenths( 9.3 ) );
	object.setRelativeX( MxNumberTenths( 9.3 ) );
	object.setRelativeY( MxNumberTenths( 9.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 9.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8.3 ) );
	object.setLineHeight( MxNumberOrNormal( 8.3 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<musicxmlishard justify=\"right\" relative-x=\"9.3\" relative-y=\"9.3\" font-size=\"1.1\" color=\"#A5A6A5A4\" valign=\"baseline\" underline=\"0\" letter-spacing=\"8.3\" line-height=\"8.3\" xml:lang=\"DEF\" xml:space=\"preserve\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 9.4 ) );
	object.setDefaultY( MxNumberTenths( 9.4 ) );
	object.setRelativeX( MxNumberTenths( 9.4 ) );
	object.setRelativeY( MxNumberTenths( 9.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 9.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8.4 ) );
	object.setLineHeight( MxNumberOrNormal( 8.4 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<bishop relative-x=\"9.4\" relative-y=\"9.4\" font-size=\"large\" color=\"#A8A7A6\" valign=\"top\" underline=\"1\" letter-spacing=\"8.4\" line-height=\"8.4\" xml:lang=\"XYZ\" xml:space=\"default\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 9.5 ) );
	object.setDefaultY( MxNumberTenths( 9.5 ) );
	object.setRelativeX( MxNumberTenths( 9.5 ) );
	object.setRelativeY( MxNumberTenths( 9.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 9.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8.5 ) );
	object.setLineHeight( MxNumberOrNormal( 8.5 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<charlie justify=\"center\" default-x=\"9.5\" default-y=\"9.5\" relative-y=\"9.5\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#A9AAA9A8\" underline=\"2\" overline=\"2\" letter-spacing=\"8.5\" line-height=\"8.5\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 9.6 ) );
	object.setDefaultY( MxNumberTenths( 9.6 ) );
	object.setRelativeX( MxNumberTenths( 9.6 ) );
	object.setRelativeY( MxNumberTenths( 9.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 9.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8.6 ) );
	object.setLineHeight( MxNumberOrNormal( 8.6 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<booksmart default-x=\"9.6\" default-y=\"9.6\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#ACABAA\" underline=\"0\" overline=\"0\" line-height=\"8.6\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"lro\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 9.7 ) );
	object.setDefaultY( MxNumberTenths( 9.7 ) );
	object.setRelativeX( MxNumberTenths( 9.7 ) );
	object.setRelativeY( MxNumberTenths( 9.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 9.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8.7 ) );
	object.setLineHeight( MxNumberOrNormal( 8.7 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<quiet justify=\"left\" default-y=\"9.7\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#ADAEADAC\" underline=\"1\" overline=\"1\" line-height=\"8.7\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rlo\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 9.8 ) );
	object.setDefaultY( MxNumberTenths( 9.8 ) );
	object.setRelativeX( MxNumberTenths( 9.8 ) );
	object.setRelativeY( MxNumberTenths( 9.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 9.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8.8 ) );
	object.setLineHeight( MxNumberOrNormal( 8.8 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<musicxmlishard font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#B0AFAE\" underline=\"2\" overline=\"2\" line-height=\"8.8\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"ltr\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 9.9 ) );
	object.setDefaultY( MxNumberTenths( 9.9 ) );
	object.setRelativeX( MxNumberTenths( 9.9 ) );
	object.setRelativeY( MxNumberTenths( 9.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 9.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 8.9 ) );
	object.setLineHeight( MxNumberOrNormal( 8.9 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<bishop justify=\"right\" default-x=\"9.9\" relative-x=\"9.9\" font-family=\"DEF\" font-style=\"italic\" color=\"#B1B2B1B0\" halign=\"right\" underline=\"0\" overline=\"0\" line-height=\"8.9\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 10 ) );
	object.setDefaultY( MxNumberTenths( 10 ) );
	object.setRelativeX( MxNumberTenths( 10 ) );
	object.setRelativeY( MxNumberTenths( 10 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 10 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9 ) );
	object.setLineHeight( MxNumberOrNormal( 9 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<charlie default-x=\"10\" relative-x=\"10\" font-family=\"XYZ\" font-style=\"normal\" color=\"#B4B3B2\" halign=\"left\" underline=\"1\" overline=\"1\" line-height=\"9\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 10.1 ) );
	object.setDefaultY( MxNumberTenths( 10.1 ) );
	object.setRelativeX( MxNumberTenths( 10.1 ) );
	object.setRelativeY( MxNumberTenths( 10.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 10.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9.1 ) );
	object.setLineHeight( MxNumberOrNormal( 9.1 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<booksmart justify=\"center\" default-y=\"10.1\" relative-x=\"10.1\" relative-y=\"10.1\" font-style=\"italic\" font-weight=\"bold\" halign=\"center\" underline=\"2\" overline=\"2\" line-through=\"2\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 10.2 ) );
	object.setDefaultY( MxNumberTenths( 10.2 ) );
	object.setRelativeX( MxNumberTenths( 10.2 ) );
	object.setRelativeY( MxNumberTenths( 10.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 10.2 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9.2 ) );
	object.setLineHeight( MxNumberOrNormal( 9.2 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<quiet default-y=\"10.2\" relative-x=\"10.2\" relative-y=\"10.2\" font-weight=\"normal\" halign=\"right\" overline=\"0\" line-through=\"0\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 10.3 ) );
	object.setDefaultY( MxNumberTenths( 10.3 ) );
	object.setRelativeX( MxNumberTenths( 10.3 ) );
	object.setRelativeY( MxNumberTenths( 10.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 10.3 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9.3 ) );
	object.setLineHeight( MxNumberOrNormal( 9.3 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<musicxmlishard justify=\"left\" default-x=\"10.3\" default-y=\"10.3\" relative-y=\"10.3\" font-weight=\"bold\" halign=\"left\" overline=\"1\" line-through=\"1\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 10.4 ) );
	object.setDefaultY( MxNumberTenths( 10.4 ) );
	object.setRelativeX( MxNumberTenths( 10.4 ) );
	object.setRelativeY( MxNumberTenths( 10.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 10.4 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9.4 ) );
	object.setLineHeight( MxNumberOrNormal( 9.4 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::diamond ) );
	expected = "<bishop default-x=\"10.4\" relative-y=\"10.4\" font-weight=\"normal\" halign=\"center\" overline=\"2\" line-through=\"2\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 10.5 ) );
	object.setDefaultY( MxNumberTenths( 10.5 ) );
	object.setRelativeX( MxNumberTenths( 10.5 ) );
	object.setRelativeY( MxNumberTenths( 10.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 10.5 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9.5 ) );
	object.setLineHeight( MxNumberOrNormal( 9.5 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::none ) );
	expected = "<charlie justify=\"right\" relative-y=\"10.5\" font-weight=\"bold\" halign=\"right\" overline=\"0\" line-through=\"0\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 10.6 ) );
	object.setDefaultY( MxNumberTenths( 10.6 ) );
	object.setRelativeX( MxNumberTenths( 10.6 ) );
	object.setRelativeY( MxNumberTenths( 10.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 10.6 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9.6 ) );
	object.setLineHeight( MxNumberOrNormal( 9.6 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::rectangle ) );
	expected = "<booksmart font-weight=\"normal\" halign=\"left\" overline=\"1\" line-through=\"1\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 10.7 ) );
	object.setDefaultY( MxNumberTenths( 10.7 ) );
	object.setRelativeX( MxNumberTenths( 10.7 ) );
	object.setRelativeY( MxNumberTenths( 10.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 10.7 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9.7 ) );
	object.setLineHeight( MxNumberOrNormal( 9.7 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	expected = "<quiet justify=\"center\" default-x=\"10.7\" default-y=\"10.7\" relative-x=\"10.7\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" halign=\"center\" valign=\"middle\" overline=\"2\" line-through=\"2\" rotation=\"10.7\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 10.8 ) );
	object.setDefaultY( MxNumberTenths( 10.8 ) );
	object.setRelativeX( MxNumberTenths( 10.8 ) );
	object.setRelativeY( MxNumberTenths( 10.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 10.8 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9.8 ) );
	object.setLineHeight( MxNumberOrNormal( 9.8 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::lro ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "<musicxmlishard default-x=\"10.8\" default-y=\"10.8\" relative-x=\"10.8\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" halign=\"right\" valign=\"bottom\" overline=\"0\" line-through=\"0\" rotation=\"10.8\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setDefaultX( MxNumberTenths( 10.9 ) );
	object.setDefaultY( MxNumberTenths( 10.9 ) );
	object.setRelativeX( MxNumberTenths( 10.9 ) );
	object.setRelativeY( MxNumberTenths( 10.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setUnderline( MxNumberNumberOfLines( 1 ) );
	object.setOverline( MxNumberNumberOfLines( 1 ) );
	object.setLineThrough( MxNumberNumberOfLines( 1 ) );
	object.setRotation( MxNumberRotationDegrees( 10.9 ) );
	object.setLetterSpacing( MxNumberOrNormal( 9.9 ) );
	object.setLineHeight( MxNumberOrNormal( 9.9 ) );
	object.setXmlLang( XmlLang( "XYZ" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rlo ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::circle ) );
	expected = "<bishop justify=\"left\" default-y=\"10.9\" relative-x=\"10.9\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" halign=\"left\" valign=\"baseline\" line-through=\"1\" rotation=\"10.9\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 11 ) );
	object.setDefaultY( MxNumberTenths( 11 ) );
	object.setRelativeX( MxNumberTenths( 11 ) );
	object.setRelativeY( MxNumberTenths( 11 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setUnderline( MxNumberNumberOfLines( 2 ) );
	object.setOverline( MxNumberNumberOfLines( 2 ) );
	object.setLineThrough( MxNumberNumberOfLines( 2 ) );
	object.setRotation( MxNumberRotationDegrees( 11 ) );
	object.setLetterSpacing( MxNumberOrNormal( 10 ) );
	object.setLineHeight( MxNumberOrNormal( 10 ) );
	object.setXmlLang( XmlLang( "ABC" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::default_ ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::ltr ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::bracket ) );
	expected = "<charlie relative-x=\"11\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" valign=\"top\" line-through=\"2\" rotation=\"11\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
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
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setDefaultX( MxNumberTenths( 11.1 ) );
	object.setDefaultY( MxNumberTenths( 11.1 ) );
	object.setRelativeX( MxNumberTenths( 11.1 ) );
	object.setRelativeY( MxNumberTenths( 11.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	object.setUnderline( MxNumberNumberOfLines( 0 ) );
	object.setOverline( MxNumberNumberOfLines( 0 ) );
	object.setLineThrough( MxNumberNumberOfLines( 0 ) );
	object.setRotation( MxNumberRotationDegrees( 11.1 ) );
	object.setLetterSpacing( MxNumberOrNormal( 10.1 ) );
	object.setLineHeight( MxNumberOrNormal( 10.1 ) );
	object.setXmlLang( XmlLang( "DEF" ) );
	object.setXmlSpace( XmlSpace( lexicon::enums::XmlSpace::preserve ) );
	object.setDir( MxEnumTextDirection( lexicon::enums::TextDirection::rtl ) );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::triangle ) );
	expected = "<booksmart>three-quarters-flat</booksmart>";
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

TEST( getIsJustifyDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsJustifyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsHalignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsValignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsUnderlineDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsUnderlineDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsOverlineDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsOverlineDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineThroughDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsLineThroughDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRotationDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsRotationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLetterSpacingDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = true;
	bool actual = object.getIsLetterSpacingDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineHeightDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsLineHeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsXmlLangDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlSpaceDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsXmlSpaceDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDirDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsDirDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEnclosureDefaultDefined, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	bool expected = false;
	bool actual = object.getIsEnclosureDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getJustifyDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getJustifyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getHalignDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getHalignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValignDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxEnumValign expected;
	MxEnumValign actual = object.getValignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getUnderlineDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getUnderlineDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getOverlineDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getOverlineDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineThroughDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getLineThroughDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRotationDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxNumberRotationDegrees expected;
	MxNumberRotationDegrees actual = object.getRotationDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLetterSpacingDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxNumberOrNormal expected( "normal" );
	MxNumberOrNormal actual = object.getLetterSpacingDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineHeightDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxNumberOrNormal expected;
	MxNumberOrNormal actual = object.getLineHeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlLangDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	XmlLang expected;
	XmlLang actual = object.getXmlLangDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlSpaceDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	XmlSpace expected;
	XmlSpace actual = object.getXmlSpaceDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDirDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxEnumTextDirection expected;
	MxEnumTextDirection actual = object.getDirDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getEnclosureDefaultValue, MxCxSmpAccidentalText )
{
	MxCxSmpAccidentalText object;
	MxEnumEnclosureShape expected;
	MxEnumEnclosureShape actual = object.getEnclosureDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


