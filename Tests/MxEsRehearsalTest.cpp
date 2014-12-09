/** *******************************************************
  * 
  * MxEsRehearsalTest.cpp
  * Created: 2014-12-05 20:57:51
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsRehearsal.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsRehearsal )
{
	MxEsRehearsal object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getJustify().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getHalign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxEnumValign(  ) ).toString();
	std::string actual = object.getValign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getUnderline().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getOverline().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues14, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxNumberNumberOfLines(  ) ).toString();
	std::string actual = object.getLineThrough().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues15, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxNumberRotationDegrees(  ) ).toString();
	std::string actual = object.getRotation().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues16, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxNumberOrNormal( "normal" ) ).toString();
	std::string actual = object.getLetterSpacing().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues17, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxNumberOrNormal(  ) ).toString();
	std::string actual = object.getLineHeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues18, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( XmlLang(  ) ).toString();
	std::string actual = object.getXmlLang().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues19, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( XmlSpace(  ) ).toString();
	std::string actual = object.getXmlSpace().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues20, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxEnumTextDirection(  ) ).toString();
	std::string actual = object.getDir().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues21, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = ( MxEnumEnclosureShape(  ) ).toString();
	std::string actual = object.getEnclosure().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsRehearsal )
{
	MxEsRehearsal object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsRehearsal )
{
	MxEsRehearsal object;
	int expected = 32767;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = true;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "" ) );
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
TEST( ctorValue2, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
TEST( ctorValue4, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "X,Y,Z" ) );
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
TEST( ctorValue6, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
TEST( ctorValue8, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "X,Y,Z" ) );
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

TEST( getClassName, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = "MxEsRehearsal";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = "rehearsal";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsRehearsal )
{
	MxEsRehearsal object;
	std::string expected = "The rehearsal type specifies a rehearsal mark. Language is Italian ('it') by default. Enclosure is square by default. Left justification is assumed if not specified.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setJustify0, MxEsRehearsal )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setJustify( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getJustify();
	CHECK_EQUAL( expected, actual )
	object.setJustify( value2 );
	expected = value2;
	actual = object.getJustify();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX1, MxEsRehearsal )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY2, MxEsRehearsal )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX3, MxEsRehearsal )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY4, MxEsRehearsal )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily5, MxEsRehearsal )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle6, MxEsRehearsal )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize7, MxEsRehearsal )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight8, MxEsRehearsal )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor9, MxEsRehearsal )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setHalign10, MxEsRehearsal )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setHalign( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
	object.setHalign( value2 );
	expected = value2;
	actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
}
TEST( setValign11, MxEsRehearsal )
{
	MxEnumValign value1( lexicon::enums::Valign::baseline );
	MxEnumValign value2( lexicon::enums::Valign::bottom );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setValign( value1 );
	MxEnumValign expected = value1;
	MxEnumValign actual = object.getValign();
	CHECK_EQUAL( expected, actual )
	object.setValign( value2 );
	expected = value2;
	actual = object.getValign();
	CHECK_EQUAL( expected, actual )
}
TEST( setUnderline12, MxEsRehearsal )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setUnderline( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getUnderline();
	CHECK_EQUAL( expected, actual )
	object.setUnderline( value2 );
	expected = value2;
	actual = object.getUnderline();
	CHECK_EQUAL( expected, actual )
}
TEST( setOverline13, MxEsRehearsal )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setOverline( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getOverline();
	CHECK_EQUAL( expected, actual )
	object.setOverline( value2 );
	expected = value2;
	actual = object.getOverline();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineThrough14, MxEsRehearsal )
{
	MxNumberNumberOfLines value1( 1 );
	MxNumberNumberOfLines value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setLineThrough( value1 );
	MxNumberNumberOfLines expected = value1;
	MxNumberNumberOfLines actual = object.getLineThrough();
	CHECK_EQUAL( expected, actual )
	object.setLineThrough( value2 );
	expected = value2;
	actual = object.getLineThrough();
	CHECK_EQUAL( expected, actual )
}
TEST( setRotation15, MxEsRehearsal )
{
	MxNumberRotationDegrees value1( -179.9 );
	MxNumberRotationDegrees value2( -179.8 );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setRotation( value1 );
	MxNumberRotationDegrees expected = value1;
	MxNumberRotationDegrees actual = object.getRotation();
	CHECK_EQUAL( expected, actual )
	object.setRotation( value2 );
	expected = value2;
	actual = object.getRotation();
	CHECK_EQUAL( expected, actual )
}
TEST( setLetterSpacing16, MxEsRehearsal )
{
	MxNumberOrNormal value1( 0.1 );
	MxNumberOrNormal value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setLetterSpacing( value1 );
	MxNumberOrNormal expected = value1;
	MxNumberOrNormal actual = object.getLetterSpacing();
	CHECK_EQUAL( expected, actual )
	object.setLetterSpacing( value2 );
	expected = value2;
	actual = object.getLetterSpacing();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineHeight17, MxEsRehearsal )
{
	MxNumberOrNormal value1( 0.1 );
	MxNumberOrNormal value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setLineHeight( value1 );
	MxNumberOrNormal expected = value1;
	MxNumberOrNormal actual = object.getLineHeight();
	CHECK_EQUAL( expected, actual )
	object.setLineHeight( value2 );
	expected = value2;
	actual = object.getLineHeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setXmlLang18, MxEsRehearsal )
{
	XmlLang value1( "en" );
	XmlLang value2( "fr" );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setXmlLang( value1 );
	XmlLang expected = value1;
	XmlLang actual = object.getXmlLang();
	CHECK_EQUAL( expected, actual )
	object.setXmlLang( value2 );
	expected = value2;
	actual = object.getXmlLang();
	CHECK_EQUAL( expected, actual )
}
TEST( setXmlSpace19, MxEsRehearsal )
{
	XmlSpace value1( lexicon::enums::XmlSpace::preserve );
	XmlSpace value2( lexicon::enums::XmlSpace::default_ );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setXmlSpace( value1 );
	XmlSpace expected = value1;
	XmlSpace actual = object.getXmlSpace();
	CHECK_EQUAL( expected, actual )
	object.setXmlSpace( value2 );
	expected = value2;
	actual = object.getXmlSpace();
	CHECK_EQUAL( expected, actual )
}
TEST( setDir20, MxEsRehearsal )
{
	MxEnumTextDirection value1( lexicon::enums::TextDirection::rlo );
	MxEnumTextDirection value2( lexicon::enums::TextDirection::lro );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
	object.setDir( value1 );
	MxEnumTextDirection expected = value1;
	MxEnumTextDirection actual = object.getDir();
	CHECK_EQUAL( expected, actual )
	object.setDir( value2 );
	expected = value2;
	actual = object.getDir();
	CHECK_EQUAL( expected, actual )
}
TEST( setEnclosure21, MxEsRehearsal )
{
	MxEnumEnclosureShape value1( lexicon::enums::EnclosureShape::none );
	MxEnumEnclosureShape value2( lexicon::enums::EnclosureShape::diamond );
	CHECK( ( value1 != value2 ) )
	MxEsRehearsal object;
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

TEST( getIsJustifyRequired0, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsJustifyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired1, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired2, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired3, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired4, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired5, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired6, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired7, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired8, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired9, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignRequired10, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsHalignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignRequired11, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsValignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsUnderlineRequired12, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsUnderlineRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsOverlineRequired13, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsOverlineRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineThroughRequired14, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsLineThroughRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRotationRequired15, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsRotationRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLetterSpacingRequired16, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsLetterSpacingRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineHeightRequired17, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsLineHeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangRequired18, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsXmlLangRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlSpaceRequired19, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsXmlSpaceRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDirRequired20, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsDirRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEnclosureRequired21, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsEnclosureRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsJustifyPresent0, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsDefaultXPresent1, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsDefaultYPresent2, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsRelativeXPresent3, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsRelativeYPresent4, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsFontFamilyPresent5, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsFontStylePresent6, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsFontSizePresent7, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsFontWeightPresent8, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsColorPresent9, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsHalignPresent10, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsValignPresent11, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsUnderlinePresent12, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsOverlinePresent13, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsLineThroughPresent14, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsRotationPresent15, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsLetterSpacingPresent16, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsLineHeightPresent17, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsXmlLangPresent18, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsXmlSpacePresent19, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsDirPresent20, MxEsRehearsal )
{
	MxEsRehearsal object;
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
TEST( getIsEnclosurePresent21, MxEsRehearsal )
{
	MxEsRehearsal object;
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

TEST( getIsJustifyDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsJustifyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsHalignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsValignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsUnderlineDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsUnderlineDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsOverlineDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsOverlineDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineThroughDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsLineThroughDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRotationDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsRotationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLetterSpacingDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = true;
	bool actual = object.getIsLetterSpacingDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineHeightDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsLineHeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsXmlLangDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlSpaceDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsXmlSpaceDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDirDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsDirDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEnclosureDefaultDefined, MxEsRehearsal )
{
	MxEsRehearsal object;
	bool expected = false;
	bool actual = object.getIsEnclosureDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getJustifyDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getJustifyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getHalignDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getHalignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValignDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxEnumValign expected;
	MxEnumValign actual = object.getValignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getUnderlineDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getUnderlineDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getOverlineDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getOverlineDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineThroughDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxNumberNumberOfLines expected;
	MxNumberNumberOfLines actual = object.getLineThroughDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRotationDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxNumberRotationDegrees expected;
	MxNumberRotationDegrees actual = object.getRotationDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLetterSpacingDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxNumberOrNormal expected( "normal" );
	MxNumberOrNormal actual = object.getLetterSpacingDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineHeightDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxNumberOrNormal expected;
	MxNumberOrNormal actual = object.getLineHeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlLangDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	XmlLang expected;
	XmlLang actual = object.getXmlLangDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlSpaceDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	XmlSpace expected;
	XmlSpace actual = object.getXmlSpaceDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDirDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxEnumTextDirection expected;
	MxEnumTextDirection actual = object.getDirDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getEnclosureDefaultValue, MxEsRehearsal )
{
	MxEsRehearsal object;
	MxEnumEnclosureShape expected;
	MxEnumEnclosureShape actual = object.getEnclosureDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setDefaultX( MxNumberTenths( 81.7 ) );
	object.setDefaultY( MxNumberTenths( 81.7 ) );
	object.setRelativeX( MxNumberTenths( 81.7 ) );
	object.setRelativeY( MxNumberTenths( 81.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#51525150" ) );
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
	expected = "<rehearsal justify=\"center\" default-x=\"81.7\" default-y=\"81.7\" relative-x=\"81.7\" relative-y=\"81.7\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#51525150\" halign=\"center\" valign=\"middle\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"1.1\" letter-spacing=\"0.1\" line-height=\"0.1\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 81.8 ) );
	object.setDefaultY( MxNumberTenths( 81.8 ) );
	object.setRelativeX( MxNumberTenths( 81.8 ) );
	object.setRelativeY( MxNumberTenths( 81.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#545352" ) );
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
	expected = "<rehearsal default-x=\"81.8\" default-y=\"81.8\" relative-x=\"81.8\" relative-y=\"81.8\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#545352\" halign=\"right\" valign=\"bottom\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"1.2\" letter-spacing=\"0.2\" line-height=\"0.2\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 81.9 ) );
	object.setDefaultY( MxNumberTenths( 81.9 ) );
	object.setRelativeX( MxNumberTenths( 81.9 ) );
	object.setRelativeY( MxNumberTenths( 81.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#55565554" ) );
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
	expected = "<rehearsal justify=\"left\" default-y=\"81.9\" relative-x=\"81.9\" relative-y=\"81.9\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#55565554\" halign=\"left\" valign=\"baseline\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"1.3\" letter-spacing=\"0.3\" line-height=\"0.3\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 82 ) );
	object.setDefaultY( MxNumberTenths( 82 ) );
	object.setRelativeX( MxNumberTenths( 82 ) );
	object.setRelativeY( MxNumberTenths( 82 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#585756" ) );
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
	expected = "<rehearsal relative-x=\"82\" relative-y=\"82\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#585756\" halign=\"center\" valign=\"top\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"1.4\" letter-spacing=\"0.4\" line-height=\"0.4\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 82.1 ) );
	object.setDefaultY( MxNumberTenths( 82.1 ) );
	object.setRelativeX( MxNumberTenths( 82.1 ) );
	object.setRelativeY( MxNumberTenths( 82.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
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
	expected = "<rehearsal justify=\"right\" default-x=\"82.1\" relative-y=\"82.1\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#595A5958\" halign=\"right\" valign=\"middle\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"1.5\" letter-spacing=\"0.5\" line-height=\"0.5\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 82.2 ) );
	object.setDefaultY( MxNumberTenths( 82.2 ) );
	object.setRelativeX( MxNumberTenths( 82.2 ) );
	object.setRelativeY( MxNumberTenths( 82.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
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
	expected = "<rehearsal default-x=\"82.2\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#5C5B5A\" halign=\"left\" valign=\"bottom\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"1.6\" letter-spacing=\"0.6\" line-height=\"0.6\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 82.3 ) );
	object.setDefaultY( MxNumberTenths( 82.3 ) );
	object.setRelativeX( MxNumberTenths( 82.3 ) );
	object.setRelativeY( MxNumberTenths( 82.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
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
	expected = "<rehearsal justify=\"center\" default-y=\"82.3\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#5D5E5D5C\" halign=\"center\" valign=\"baseline\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"1.7\" letter-spacing=\"0.7\" line-height=\"0.7\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 82.4 ) );
	object.setDefaultY( MxNumberTenths( 82.4 ) );
	object.setRelativeX( MxNumberTenths( 82.4 ) );
	object.setRelativeY( MxNumberTenths( 82.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
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
	expected = "<rehearsal default-y=\"82.4\" font-size=\"1.1\" font-weight=\"bold\" color=\"#605F5E\" halign=\"right\" valign=\"top\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"1.8\" letter-spacing=\"0.8\" line-height=\"0.8\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 82.5 ) );
	object.setDefaultY( MxNumberTenths( 82.5 ) );
	object.setRelativeX( MxNumberTenths( 82.5 ) );
	object.setRelativeY( MxNumberTenths( 82.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
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
	expected = "<rehearsal justify=\"left\" default-x=\"82.5\" default-y=\"82.5\" relative-x=\"82.5\" font-weight=\"normal\" color=\"#61626160\" halign=\"left\" valign=\"middle\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"1.9\" letter-spacing=\"0.9\" line-height=\"0.9\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 82.6 ) );
	object.setDefaultY( MxNumberTenths( 82.6 ) );
	object.setRelativeX( MxNumberTenths( 82.6 ) );
	object.setRelativeY( MxNumberTenths( 82.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#646362" ) );
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
	expected = "<rehearsal default-x=\"82.6\" relative-x=\"82.6\" color=\"#646362\" halign=\"center\" valign=\"bottom\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"2\" letter-spacing=\"1\" line-height=\"1\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 82.7 ) );
	object.setDefaultY( MxNumberTenths( 82.7 ) );
	object.setRelativeX( MxNumberTenths( 82.7 ) );
	object.setRelativeY( MxNumberTenths( 82.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#65666564" ) );
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
	expected = "<rehearsal justify=\"right\" relative-x=\"82.7\" relative-y=\"82.7\" halign=\"right\" valign=\"baseline\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"2.1\" letter-spacing=\"1.1\" line-height=\"1.1\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 82.8 ) );
	object.setDefaultY( MxNumberTenths( 82.8 ) );
	object.setRelativeX( MxNumberTenths( 82.8 ) );
	object.setRelativeY( MxNumberTenths( 82.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#686766" ) );
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
	expected = "<rehearsal relative-x=\"82.8\" relative-y=\"82.8\" valign=\"top\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"2.2\" letter-spacing=\"1.2\" line-height=\"1.2\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 82.9 ) );
	object.setDefaultY( MxNumberTenths( 82.9 ) );
	object.setRelativeX( MxNumberTenths( 82.9 ) );
	object.setRelativeY( MxNumberTenths( 82.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#696A6968" ) );
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
	expected = "<rehearsal justify=\"center\" default-x=\"82.9\" default-y=\"82.9\" relative-y=\"82.9\" font-family=\"XYZ\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"2.3\" letter-spacing=\"1.3\" line-height=\"1.3\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 83 ) );
	object.setDefaultY( MxNumberTenths( 83 ) );
	object.setRelativeX( MxNumberTenths( 83 ) );
	object.setRelativeY( MxNumberTenths( 83 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6C6B6A" ) );
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
	expected = "<rehearsal default-x=\"83\" default-y=\"83\" relative-y=\"83\" font-family=\"ABC\" overline=\"0\" line-through=\"0\" rotation=\"2.4\" letter-spacing=\"1.4\" line-height=\"1.4\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 83.1 ) );
	object.setDefaultY( MxNumberTenths( 83.1 ) );
	object.setRelativeX( MxNumberTenths( 83.1 ) );
	object.setRelativeY( MxNumberTenths( 83.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
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
	expected = "<rehearsal justify=\"left\" default-y=\"83.1\" relative-y=\"83.1\" font-family=\"DEF\" font-style=\"normal\" line-through=\"1\" rotation=\"2.5\" letter-spacing=\"1.5\" line-height=\"1.5\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 83.2 ) );
	object.setDefaultY( MxNumberTenths( 83.2 ) );
	object.setRelativeX( MxNumberTenths( 83.2 ) );
	object.setRelativeY( MxNumberTenths( 83.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#706F6E" ) );
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
	expected = "<rehearsal font-family=\"XYZ\" font-style=\"italic\" rotation=\"2.6\" letter-spacing=\"1.6\" line-height=\"1.6\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 83.3 ) );
	object.setDefaultY( MxNumberTenths( 83.3 ) );
	object.setRelativeX( MxNumberTenths( 83.3 ) );
	object.setRelativeY( MxNumberTenths( 83.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#71727170" ) );
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
	expected = "<rehearsal justify=\"right\" default-x=\"83.3\" relative-x=\"83.3\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" letter-spacing=\"1.7\" line-height=\"1.7\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 83.4 ) );
	object.setDefaultY( MxNumberTenths( 83.4 ) );
	object.setRelativeX( MxNumberTenths( 83.4 ) );
	object.setRelativeY( MxNumberTenths( 83.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#747372" ) );
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
	expected = "<rehearsal default-x=\"83.4\" relative-x=\"83.4\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" line-height=\"1.8\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 83.5 ) );
	object.setDefaultY( MxNumberTenths( 83.5 ) );
	object.setRelativeX( MxNumberTenths( 83.5 ) );
	object.setRelativeY( MxNumberTenths( 83.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#75767574" ) );
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
	expected = "<rehearsal justify=\"center\" default-y=\"83.5\" relative-x=\"83.5\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 83.6 ) );
	object.setDefaultY( MxNumberTenths( 83.6 ) );
	object.setRelativeX( MxNumberTenths( 83.6 ) );
	object.setRelativeY( MxNumberTenths( 83.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#787776" ) );
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
	expected = "<rehearsal default-y=\"83.6\" relative-x=\"83.6\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 83.7 ) );
	object.setDefaultY( MxNumberTenths( 83.7 ) );
	object.setRelativeX( MxNumberTenths( 83.7 ) );
	object.setRelativeY( MxNumberTenths( 83.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#797A7978" ) );
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
	expected = "<rehearsal justify=\"left\" default-x=\"83.7\" default-y=\"83.7\" relative-y=\"83.7\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#797A7978\" dir=\"rtl\" enclosure=\"triangle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 83.8 ) );
	object.setDefaultY( MxNumberTenths( 83.8 ) );
	object.setRelativeX( MxNumberTenths( 83.8 ) );
	object.setRelativeY( MxNumberTenths( 83.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7C7B7A" ) );
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
	expected = "<rehearsal default-x=\"83.8\" relative-y=\"83.8\" font-size=\"1.1\" font-weight=\"bold\" color=\"#7C7B7A\" enclosure=\"diamond\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 83.9 ) );
	object.setDefaultY( MxNumberTenths( 83.9 ) );
	object.setRelativeX( MxNumberTenths( 83.9 ) );
	object.setRelativeY( MxNumberTenths( 83.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
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
	expected = "<rehearsal justify=\"right\" relative-y=\"83.9\" font-size=\"large\" font-weight=\"normal\" color=\"#7D7E7D7C\" halign=\"right\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 84 ) );
	object.setDefaultY( MxNumberTenths( 84 ) );
	object.setRelativeX( MxNumberTenths( 84 ) );
	object.setRelativeY( MxNumberTenths( 84 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#807F7E" ) );
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
	expected = "<rehearsal relative-y=\"84\" font-size=\"1.1\" font-weight=\"bold\" color=\"#807F7E\" halign=\"left\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 84.1 ) );
	object.setDefaultY( MxNumberTenths( 84.1 ) );
	object.setRelativeX( MxNumberTenths( 84.1 ) );
	object.setRelativeY( MxNumberTenths( 84.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#81828180" ) );
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
	expected = "<rehearsal justify=\"center\" default-x=\"84.1\" default-y=\"84.1\" relative-x=\"84.1\" relative-y=\"84.1\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#81828180\" halign=\"center\" valign=\"middle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 84.2 ) );
	object.setDefaultY( MxNumberTenths( 84.2 ) );
	object.setRelativeX( MxNumberTenths( 84.2 ) );
	object.setRelativeY( MxNumberTenths( 84.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
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
	expected = "<rehearsal default-x=\"84.2\" default-y=\"84.2\" relative-x=\"84.2\" font-family=\"ABC\" font-weight=\"bold\" color=\"#848382\" halign=\"right\" valign=\"bottom\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 84.3 ) );
	object.setDefaultY( MxNumberTenths( 84.3 ) );
	object.setRelativeX( MxNumberTenths( 84.3 ) );
	object.setRelativeY( MxNumberTenths( 84.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
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
	expected = "<rehearsal justify=\"left\" default-y=\"84.3\" relative-x=\"84.3\" font-family=\"DEF\" font-weight=\"normal\" color=\"#85868584\" halign=\"left\" valign=\"baseline\" underline=\"1\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 84.4 ) );
	object.setDefaultY( MxNumberTenths( 84.4 ) );
	object.setRelativeX( MxNumberTenths( 84.4 ) );
	object.setRelativeY( MxNumberTenths( 84.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
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
	expected = "<rehearsal relative-x=\"84.4\" font-family=\"XYZ\" color=\"#888786\" halign=\"center\" valign=\"top\" underline=\"2\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 84.5 ) );
	object.setDefaultY( MxNumberTenths( 84.5 ) );
	object.setRelativeX( MxNumberTenths( 84.5 ) );
	object.setRelativeY( MxNumberTenths( 84.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
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
	expected = "<rehearsal justify=\"right\" default-x=\"84.5\" font-family=\"ABC\" font-style=\"normal\" color=\"#898A8988\" halign=\"right\" valign=\"middle\" underline=\"0\" overline=\"0\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 84.6 ) );
	object.setDefaultY( MxNumberTenths( 84.6 ) );
	object.setRelativeX( MxNumberTenths( 84.6 ) );
	object.setRelativeY( MxNumberTenths( 84.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
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
	expected = "<rehearsal default-x=\"84.6\" font-family=\"DEF\" font-style=\"italic\" color=\"#8C8B8A\" halign=\"left\" valign=\"bottom\" underline=\"1\" overline=\"1\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 84.7 ) );
	object.setDefaultY( MxNumberTenths( 84.7 ) );
	object.setRelativeX( MxNumberTenths( 84.7 ) );
	object.setRelativeY( MxNumberTenths( 84.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
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
	expected = "<rehearsal justify=\"center\" default-y=\"84.7\" relative-y=\"84.7\" font-style=\"normal\" halign=\"center\" valign=\"baseline\" underline=\"2\" overline=\"2\" line-through=\"2\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 84.8 ) );
	object.setDefaultY( MxNumberTenths( 84.8 ) );
	object.setRelativeX( MxNumberTenths( 84.8 ) );
	object.setRelativeY( MxNumberTenths( 84.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#908F8E" ) );
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
	expected = "<rehearsal default-y=\"84.8\" relative-y=\"84.8\" font-style=\"italic\" halign=\"right\" valign=\"top\" underline=\"0\" overline=\"0\" line-through=\"0\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 84.9 ) );
	object.setDefaultY( MxNumberTenths( 84.9 ) );
	object.setRelativeX( MxNumberTenths( 84.9 ) );
	object.setRelativeY( MxNumberTenths( 84.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#91929190" ) );
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
	expected = "<rehearsal justify=\"left\" default-x=\"84.9\" default-y=\"84.9\" relative-x=\"84.9\" relative-y=\"84.9\" font-style=\"normal\" font-size=\"large\" halign=\"left\" valign=\"middle\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"4.3\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 85 ) );
	object.setDefaultY( MxNumberTenths( 85 ) );
	object.setRelativeX( MxNumberTenths( 85 ) );
	object.setRelativeY( MxNumberTenths( 85 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#949392" ) );
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
	expected = "<rehearsal default-x=\"85\" relative-x=\"85\" relative-y=\"85\" font-style=\"italic\" font-size=\"1.1\" valign=\"bottom\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"4.4\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 85.1 ) );
	object.setDefaultY( MxNumberTenths( 85.1 ) );
	object.setRelativeX( MxNumberTenths( 85.1 ) );
	object.setRelativeY( MxNumberTenths( 85.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#95969594" ) );
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
	expected = "<rehearsal justify=\"right\" relative-x=\"85.1\" relative-y=\"85.1\" font-style=\"normal\" font-size=\"large\" valign=\"baseline\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"4.5\" letter-spacing=\"3.5\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 85.2 ) );
	object.setDefaultY( MxNumberTenths( 85.2 ) );
	object.setRelativeX( MxNumberTenths( 85.2 ) );
	object.setRelativeY( MxNumberTenths( 85.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#989796" ) );
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
	expected = "<rehearsal relative-x=\"85.2\" font-size=\"1.1\" valign=\"top\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"4.6\" letter-spacing=\"3.6\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 85.3 ) );
	object.setDefaultY( MxNumberTenths( 85.3 ) );
	object.setRelativeX( MxNumberTenths( 85.3 ) );
	object.setRelativeY( MxNumberTenths( 85.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
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
	expected = "<rehearsal justify=\"center\" default-x=\"85.3\" default-y=\"85.3\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" underline=\"2\" overline=\"2\" line-through=\"2\" rotation=\"4.7\" letter-spacing=\"3.7\" line-height=\"3.7\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 85.4 ) );
	object.setDefaultY( MxNumberTenths( 85.4 ) );
	object.setRelativeX( MxNumberTenths( 85.4 ) );
	object.setRelativeY( MxNumberTenths( 85.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
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
	expected = "<rehearsal default-x=\"85.4\" default-y=\"85.4\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"4.8\" letter-spacing=\"3.8\" line-height=\"3.8\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 85.5 ) );
	object.setDefaultY( MxNumberTenths( 85.5 ) );
	object.setRelativeX( MxNumberTenths( 85.5 ) );
	object.setRelativeY( MxNumberTenths( 85.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
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
	expected = "<rehearsal justify=\"left\" default-y=\"85.5\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" underline=\"1\" overline=\"1\" line-through=\"1\" rotation=\"4.9\" letter-spacing=\"3.9\" line-height=\"3.9\" xml:lang=\"XYZ\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 85.6 ) );
	object.setDefaultY( MxNumberTenths( 85.6 ) );
	object.setRelativeX( MxNumberTenths( 85.6 ) );
	object.setRelativeY( MxNumberTenths( 85.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
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
	expected = "<rehearsal font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" overline=\"2\" line-through=\"2\" rotation=\"5\" letter-spacing=\"4\" line-height=\"4\" xml:lang=\"ABC\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 85.7 ) );
	object.setDefaultY( MxNumberTenths( 85.7 ) );
	object.setRelativeX( MxNumberTenths( 85.7 ) );
	object.setRelativeY( MxNumberTenths( 85.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
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
	expected = "<rehearsal justify=\"right\" default-x=\"85.7\" relative-x=\"85.7\" relative-y=\"85.7\" font-family=\"ABC\" font-weight=\"normal\" color=\"#A1A2A1A0\" overline=\"0\" line-through=\"0\" rotation=\"5.1\" letter-spacing=\"4.1\" line-height=\"4.1\" xml:lang=\"DEF\" xml:space=\"preserve\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 85.8 ) );
	object.setDefaultY( MxNumberTenths( 85.8 ) );
	object.setRelativeX( MxNumberTenths( 85.8 ) );
	object.setRelativeY( MxNumberTenths( 85.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
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
	expected = "<rehearsal default-x=\"85.8\" relative-x=\"85.8\" relative-y=\"85.8\" font-family=\"DEF\" font-weight=\"bold\" color=\"#A4A3A2\" overline=\"1\" line-through=\"1\" rotation=\"5.2\" letter-spacing=\"4.2\" line-height=\"4.2\" xml:lang=\"XYZ\" xml:space=\"default\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 85.9 ) );
	object.setDefaultY( MxNumberTenths( 85.9 ) );
	object.setRelativeX( MxNumberTenths( 85.9 ) );
	object.setRelativeY( MxNumberTenths( 85.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
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
	expected = "<rehearsal justify=\"center\" default-y=\"85.9\" relative-x=\"85.9\" relative-y=\"85.9\" font-style=\"normal\" font-weight=\"normal\" color=\"#A5A6A5A4\" line-through=\"2\" rotation=\"5.3\" letter-spacing=\"4.3\" line-height=\"4.3\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 86 ) );
	object.setDefaultY( MxNumberTenths( 86 ) );
	object.setRelativeX( MxNumberTenths( 86 ) );
	object.setRelativeY( MxNumberTenths( 86 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A8A7A6" ) );
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
	expected = "<rehearsal default-y=\"86\" relative-x=\"86\" relative-y=\"86\" font-style=\"italic\" font-weight=\"bold\" color=\"#A8A7A6\" line-through=\"0\" rotation=\"5.4\" letter-spacing=\"4.4\" line-height=\"4.4\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 86.1 ) );
	object.setDefaultY( MxNumberTenths( 86.1 ) );
	object.setRelativeX( MxNumberTenths( 86.1 ) );
	object.setRelativeY( MxNumberTenths( 86.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
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
	expected = "<rehearsal justify=\"left\" default-x=\"86.1\" default-y=\"86.1\" relative-y=\"86.1\" font-style=\"normal\" font-weight=\"normal\" color=\"#A9AAA9A8\" halign=\"left\" line-through=\"1\" rotation=\"5.5\" letter-spacing=\"4.5\" line-height=\"4.5\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 86.2 ) );
	object.setDefaultY( MxNumberTenths( 86.2 ) );
	object.setRelativeX( MxNumberTenths( 86.2 ) );
	object.setRelativeY( MxNumberTenths( 86.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ACABAA" ) );
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
	expected = "<rehearsal default-x=\"86.2\" font-style=\"italic\" color=\"#ACABAA\" halign=\"center\" rotation=\"5.6\" letter-spacing=\"4.6\" line-height=\"4.6\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 86.3 ) );
	object.setDefaultY( MxNumberTenths( 86.3 ) );
	object.setRelativeX( MxNumberTenths( 86.3 ) );
	object.setRelativeY( MxNumberTenths( 86.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
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
	expected = "<rehearsal justify=\"right\" font-style=\"normal\" color=\"#ADAEADAC\" halign=\"right\" rotation=\"5.7\" letter-spacing=\"4.7\" line-height=\"4.7\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 86.4 ) );
	object.setDefaultY( MxNumberTenths( 86.4 ) );
	object.setRelativeX( MxNumberTenths( 86.4 ) );
	object.setRelativeY( MxNumberTenths( 86.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B0AFAE" ) );
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
	expected = "<rehearsal font-style=\"italic\" color=\"#B0AFAE\" halign=\"left\" rotation=\"5.8\" letter-spacing=\"4.8\" line-height=\"4.8\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 86.5 ) );
	object.setDefaultY( MxNumberTenths( 86.5 ) );
	object.setRelativeX( MxNumberTenths( 86.5 ) );
	object.setRelativeY( MxNumberTenths( 86.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
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
	expected = "<rehearsal justify=\"center\" default-x=\"86.5\" default-y=\"86.5\" relative-x=\"86.5\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#B1B2B1B0\" halign=\"center\" valign=\"middle\" letter-spacing=\"4.9\" line-height=\"4.9\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 86.6 ) );
	object.setDefaultY( MxNumberTenths( 86.6 ) );
	object.setRelativeX( MxNumberTenths( 86.6 ) );
	object.setRelativeY( MxNumberTenths( 86.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B4B3B2" ) );
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
	expected = "<rehearsal default-x=\"86.6\" default-y=\"86.6\" relative-x=\"86.6\" font-family=\"ABC\" font-size=\"1.1\" color=\"#B4B3B2\" halign=\"right\" valign=\"bottom\" letter-spacing=\"5\" line-height=\"5\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 86.7 ) );
	object.setDefaultY( MxNumberTenths( 86.7 ) );
	object.setRelativeX( MxNumberTenths( 86.7 ) );
	object.setRelativeY( MxNumberTenths( 86.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
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
	expected = "<rehearsal justify=\"left\" default-y=\"86.7\" relative-x=\"86.7\" relative-y=\"86.7\" font-family=\"DEF\" font-size=\"large\" halign=\"left\" valign=\"baseline\" letter-spacing=\"5.1\" line-height=\"5.1\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 86.8 ) );
	object.setDefaultY( MxNumberTenths( 86.8 ) );
	object.setRelativeX( MxNumberTenths( 86.8 ) );
	object.setRelativeY( MxNumberTenths( 86.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B8B7B6" ) );
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
	expected = "<rehearsal relative-x=\"86.8\" relative-y=\"86.8\" font-family=\"XYZ\" font-size=\"1.1\" halign=\"center\" valign=\"top\" line-height=\"5.2\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 86.9 ) );
	object.setDefaultY( MxNumberTenths( 86.9 ) );
	object.setRelativeX( MxNumberTenths( 86.9 ) );
	object.setRelativeY( MxNumberTenths( 86.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
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
	expected = "<rehearsal justify=\"right\" default-x=\"86.9\" relative-y=\"86.9\" font-family=\"ABC\" font-size=\"large\" halign=\"right\" valign=\"middle\" underline=\"0\" line-height=\"5.3\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 87 ) );
	object.setDefaultY( MxNumberTenths( 87 ) );
	object.setRelativeX( MxNumberTenths( 87 ) );
	object.setRelativeY( MxNumberTenths( 87 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BCBBBA" ) );
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
	expected = "<rehearsal default-x=\"87\" relative-y=\"87\" font-family=\"DEF\" font-size=\"1.1\" halign=\"left\" valign=\"bottom\" underline=\"1\" line-height=\"5.4\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 87.1 ) );
	object.setDefaultY( MxNumberTenths( 87.1 ) );
	object.setRelativeX( MxNumberTenths( 87.1 ) );
	object.setRelativeY( MxNumberTenths( 87.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
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
	expected = "<rehearsal justify=\"center\" default-y=\"87.1\" relative-y=\"87.1\" font-size=\"large\" font-weight=\"normal\" halign=\"center\" valign=\"baseline\" underline=\"2\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 87.2 ) );
	object.setDefaultY( MxNumberTenths( 87.2 ) );
	object.setRelativeX( MxNumberTenths( 87.2 ) );
	object.setRelativeY( MxNumberTenths( 87.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C0BFBE" ) );
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
	expected = "<rehearsal default-y=\"87.2\" font-size=\"1.1\" font-weight=\"bold\" valign=\"top\" underline=\"0\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 87.3 ) );
	object.setDefaultY( MxNumberTenths( 87.3 ) );
	object.setRelativeX( MxNumberTenths( 87.3 ) );
	object.setRelativeY( MxNumberTenths( 87.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
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
	expected = "<rehearsal justify=\"left\" default-x=\"87.3\" default-y=\"87.3\" relative-x=\"87.3\" font-style=\"normal\" font-weight=\"normal\" valign=\"middle\" underline=\"1\" overline=\"1\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 87.4 ) );
	object.setDefaultY( MxNumberTenths( 87.4 ) );
	object.setRelativeX( MxNumberTenths( 87.4 ) );
	object.setRelativeY( MxNumberTenths( 87.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C4C3C2" ) );
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
	expected = "<rehearsal default-x=\"87.4\" relative-x=\"87.4\" font-style=\"italic\" font-weight=\"bold\" valign=\"bottom\" underline=\"2\" overline=\"2\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 87.5 ) );
	object.setDefaultY( MxNumberTenths( 87.5 ) );
	object.setRelativeX( MxNumberTenths( 87.5 ) );
	object.setRelativeY( MxNumberTenths( 87.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
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
	expected = "<rehearsal justify=\"right\" relative-x=\"87.5\" font-style=\"normal\" font-weight=\"normal\" valign=\"baseline\" underline=\"0\" overline=\"0\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 87.6 ) );
	object.setDefaultY( MxNumberTenths( 87.6 ) );
	object.setRelativeX( MxNumberTenths( 87.6 ) );
	object.setRelativeY( MxNumberTenths( 87.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C8C7C6" ) );
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
	expected = "<rehearsal relative-x=\"87.6\" font-style=\"italic\" font-weight=\"bold\" valign=\"top\" underline=\"1\" overline=\"1\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 87.7 ) );
	object.setDefaultY( MxNumberTenths( 87.7 ) );
	object.setRelativeX( MxNumberTenths( 87.7 ) );
	object.setRelativeY( MxNumberTenths( 87.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
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
	expected = "<rehearsal justify=\"center\" default-x=\"87.7\" default-y=\"87.7\" relative-y=\"87.7\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" color=\"#C9CAC9C8\" underline=\"2\" overline=\"2\" line-through=\"2\" dir=\"rtl\" enclosure=\"triangle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 87.8 ) );
	object.setDefaultY( MxNumberTenths( 87.8 ) );
	object.setRelativeX( MxNumberTenths( 87.8 ) );
	object.setRelativeY( MxNumberTenths( 87.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CCCBCA" ) );
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
	expected = "<rehearsal default-x=\"87.8\" default-y=\"87.8\" relative-y=\"87.8\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" color=\"#CCCBCA\" underline=\"0\" overline=\"0\" line-through=\"0\" dir=\"lro\" enclosure=\"diamond\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 87.9 ) );
	object.setDefaultY( MxNumberTenths( 87.9 ) );
	object.setRelativeX( MxNumberTenths( 87.9 ) );
	object.setRelativeY( MxNumberTenths( 87.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
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
	expected = "<rehearsal justify=\"left\" default-y=\"87.9\" relative-y=\"87.9\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" color=\"#CDCECDCC\" underline=\"1\" overline=\"1\" line-through=\"1\" dir=\"rlo\" enclosure=\"none\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 88 ) );
	object.setDefaultY( MxNumberTenths( 88 ) );
	object.setRelativeX( MxNumberTenths( 88 ) );
	object.setRelativeY( MxNumberTenths( 88 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D0CFCE" ) );
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
	expected = "<rehearsal relative-y=\"88\" font-family=\"XYZ\" color=\"#D0CFCE\" underline=\"2\" overline=\"2\" line-through=\"2\" enclosure=\"rectangle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 88.1 ) );
	object.setDefaultY( MxNumberTenths( 88.1 ) );
	object.setRelativeX( MxNumberTenths( 88.1 ) );
	object.setRelativeY( MxNumberTenths( 88.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
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
	expected = "<rehearsal justify=\"right\" default-x=\"88.1\" relative-x=\"88.1\" relative-y=\"88.1\" font-family=\"ABC\" font-size=\"large\" color=\"#D1D2D1D0\" underline=\"0\" overline=\"0\" line-through=\"0\" rotation=\"7.5\" enclosure=\"square\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 88.2 ) );
	object.setDefaultY( MxNumberTenths( 88.2 ) );
	object.setRelativeX( MxNumberTenths( 88.2 ) );
	object.setRelativeY( MxNumberTenths( 88.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D4D3D2" ) );
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
	expected = "<rehearsal default-x=\"88.2\" relative-x=\"88.2\" font-family=\"DEF\" font-size=\"1.1\" color=\"#D4D3D2\" overline=\"1\" line-through=\"1\" rotation=\"7.6\" enclosure=\"oval\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 88.3 ) );
	object.setDefaultY( MxNumberTenths( 88.3 ) );
	object.setRelativeX( MxNumberTenths( 88.3 ) );
	object.setRelativeY( MxNumberTenths( 88.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
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
	expected = "<rehearsal justify=\"center\" default-y=\"88.3\" relative-x=\"88.3\" font-size=\"large\" color=\"#D5D6D5D4\" halign=\"center\" overline=\"2\" line-through=\"2\" rotation=\"7.7\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 88.4 ) );
	object.setDefaultY( MxNumberTenths( 88.4 ) );
	object.setRelativeX( MxNumberTenths( 88.4 ) );
	object.setRelativeY( MxNumberTenths( 88.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D8D7D6" ) );
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
	expected = "<rehearsal default-y=\"88.4\" relative-x=\"88.4\" font-size=\"1.1\" color=\"#D8D7D6\" halign=\"right\" overline=\"0\" line-through=\"0\" rotation=\"7.8\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 88.5 ) );
	object.setDefaultY( MxNumberTenths( 88.5 ) );
	object.setRelativeX( MxNumberTenths( 88.5 ) );
	object.setRelativeY( MxNumberTenths( 88.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
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
	expected = "<rehearsal justify=\"left\" default-x=\"88.5\" default-y=\"88.5\" font-size=\"large\" color=\"#D9DAD9D8\" halign=\"left\" overline=\"1\" line-through=\"1\" rotation=\"7.9\" letter-spacing=\"6.9\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 88.6 ) );
	object.setDefaultY( MxNumberTenths( 88.6 ) );
	object.setRelativeX( MxNumberTenths( 88.6 ) );
	object.setRelativeY( MxNumberTenths( 88.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DCDBDA" ) );
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
	expected = "<rehearsal default-x=\"88.6\" font-size=\"1.1\" color=\"#DCDBDA\" halign=\"center\" overline=\"2\" line-through=\"2\" rotation=\"8\" letter-spacing=\"7\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 88.7 ) );
	object.setDefaultY( MxNumberTenths( 88.7 ) );
	object.setRelativeX( MxNumberTenths( 88.7 ) );
	object.setRelativeY( MxNumberTenths( 88.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
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
	expected = "<rehearsal justify=\"right\" relative-y=\"88.7\" font-style=\"normal\" font-size=\"large\" halign=\"right\" line-through=\"0\" rotation=\"8.1\" letter-spacing=\"7.1\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 88.8 ) );
	object.setDefaultY( MxNumberTenths( 88.8 ) );
	object.setRelativeX( MxNumberTenths( 88.8 ) );
	object.setRelativeY( MxNumberTenths( 88.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E0DFDE" ) );
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
	expected = "<rehearsal relative-y=\"88.8\" font-style=\"italic\" font-size=\"1.1\" halign=\"left\" line-through=\"1\" rotation=\"8.2\" letter-spacing=\"7.2\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 88.9 ) );
	object.setDefaultY( MxNumberTenths( 88.9 ) );
	object.setRelativeX( MxNumberTenths( 88.9 ) );
	object.setRelativeY( MxNumberTenths( 88.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
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
	expected = "<rehearsal justify=\"center\" default-x=\"88.9\" default-y=\"88.9\" relative-x=\"88.9\" relative-y=\"88.9\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" halign=\"center\" valign=\"middle\" line-through=\"2\" rotation=\"8.3\" letter-spacing=\"7.3\" line-height=\"7.3\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 89 ) );
	object.setDefaultY( MxNumberTenths( 89 ) );
	object.setRelativeX( MxNumberTenths( 89 ) );
	object.setRelativeY( MxNumberTenths( 89 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E4E3E2" ) );
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
	expected = "<rehearsal default-x=\"89\" default-y=\"89\" relative-x=\"89\" relative-y=\"89\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" halign=\"right\" valign=\"bottom\" line-through=\"0\" rotation=\"8.4\" letter-spacing=\"7.4\" line-height=\"7.4\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 89.1 ) );
	object.setDefaultY( MxNumberTenths( 89.1 ) );
	object.setRelativeX( MxNumberTenths( 89.1 ) );
	object.setRelativeY( MxNumberTenths( 89.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
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
	expected = "<rehearsal justify=\"left\" default-y=\"89.1\" relative-x=\"89.1\" relative-y=\"89.1\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" halign=\"left\" valign=\"baseline\" line-through=\"1\" rotation=\"8.5\" letter-spacing=\"7.5\" line-height=\"7.5\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 89.2 ) );
	object.setDefaultY( MxNumberTenths( 89.2 ) );
	object.setRelativeX( MxNumberTenths( 89.2 ) );
	object.setRelativeY( MxNumberTenths( 89.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E8E7E6" ) );
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
	expected = "<rehearsal relative-x=\"89.2\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" halign=\"center\" valign=\"top\" rotation=\"8.6\" letter-spacing=\"7.6\" line-height=\"7.6\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 89.3 ) );
	object.setDefaultY( MxNumberTenths( 89.3 ) );
	object.setRelativeX( MxNumberTenths( 89.3 ) );
	object.setRelativeY( MxNumberTenths( 89.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
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
	expected = "<rehearsal justify=\"right\" default-x=\"89.3\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" halign=\"right\" valign=\"middle\" rotation=\"8.7\" letter-spacing=\"7.7\" line-height=\"7.7\" xml:lang=\"DEF\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 89.4 ) );
	object.setDefaultY( MxNumberTenths( 89.4 ) );
	object.setRelativeX( MxNumberTenths( 89.4 ) );
	object.setRelativeY( MxNumberTenths( 89.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ECEBEA" ) );
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
	expected = "<rehearsal default-x=\"89.4\" font-family=\"DEF\" font-weight=\"bold\" valign=\"bottom\" rotation=\"8.8\" letter-spacing=\"7.8\" line-height=\"7.8\" xml:lang=\"XYZ\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 89.5 ) );
	object.setDefaultY( MxNumberTenths( 89.5 ) );
	object.setRelativeX( MxNumberTenths( 89.5 ) );
	object.setRelativeY( MxNumberTenths( 89.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
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
	expected = "<rehearsal justify=\"center\" default-y=\"89.5\" font-weight=\"normal\" valign=\"baseline\" underline=\"2\" rotation=\"8.9\" letter-spacing=\"7.9\" line-height=\"7.9\" xml:lang=\"ABC\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 89.6 ) );
	object.setDefaultY( MxNumberTenths( 89.6 ) );
	object.setRelativeX( MxNumberTenths( 89.6 ) );
	object.setRelativeY( MxNumberTenths( 89.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F0EFEE" ) );
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
	expected = "<rehearsal default-y=\"89.6\" font-weight=\"bold\" valign=\"top\" underline=\"0\" rotation=\"9\" letter-spacing=\"8\" line-height=\"8\" xml:lang=\"DEF\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 89.7 ) );
	object.setDefaultY( MxNumberTenths( 89.7 ) );
	object.setRelativeX( MxNumberTenths( 89.7 ) );
	object.setRelativeY( MxNumberTenths( 89.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
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
	expected = "<rehearsal justify=\"left\" default-x=\"89.7\" default-y=\"89.7\" relative-x=\"89.7\" relative-y=\"89.7\" font-size=\"large\" font-weight=\"normal\" color=\"#F1F2F1F0\" valign=\"middle\" underline=\"1\" letter-spacing=\"8.1\" line-height=\"8.1\" xml:lang=\"XYZ\" xml:space=\"preserve\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 89.8 ) );
	object.setDefaultY( MxNumberTenths( 89.8 ) );
	object.setRelativeX( MxNumberTenths( 89.8 ) );
	object.setRelativeY( MxNumberTenths( 89.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F4F3F2" ) );
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
	expected = "<rehearsal default-x=\"89.8\" relative-x=\"89.8\" relative-y=\"89.8\" font-size=\"1.1\" color=\"#F4F3F2\" valign=\"bottom\" underline=\"2\" letter-spacing=\"8.2\" line-height=\"8.2\" xml:lang=\"ABC\" xml:space=\"default\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 89.9 ) );
	object.setDefaultY( MxNumberTenths( 89.9 ) );
	object.setRelativeX( MxNumberTenths( 89.9 ) );
	object.setRelativeY( MxNumberTenths( 89.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
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
	expected = "<rehearsal justify=\"right\" relative-x=\"89.9\" relative-y=\"89.9\" font-size=\"large\" color=\"#F5F6F5F4\" valign=\"baseline\" underline=\"0\" letter-spacing=\"8.3\" line-height=\"8.3\" xml:lang=\"DEF\" xml:space=\"preserve\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 90 ) );
	object.setDefaultY( MxNumberTenths( 90 ) );
	object.setRelativeX( MxNumberTenths( 90 ) );
	object.setRelativeY( MxNumberTenths( 90 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F8F7F6" ) );
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
	expected = "<rehearsal relative-x=\"90\" relative-y=\"90\" font-size=\"1.1\" color=\"#F8F7F6\" valign=\"top\" underline=\"1\" letter-spacing=\"8.4\" line-height=\"8.4\" xml:lang=\"XYZ\" xml:space=\"default\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 90.1 ) );
	object.setDefaultY( MxNumberTenths( 90.1 ) );
	object.setRelativeX( MxNumberTenths( 90.1 ) );
	object.setRelativeY( MxNumberTenths( 90.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
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
	expected = "<rehearsal justify=\"center\" default-x=\"90.1\" default-y=\"90.1\" relative-y=\"90.1\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#F9FAF9F8\" underline=\"2\" overline=\"2\" letter-spacing=\"8.5\" line-height=\"8.5\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rtl\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 90.2 ) );
	object.setDefaultY( MxNumberTenths( 90.2 ) );
	object.setRelativeX( MxNumberTenths( 90.2 ) );
	object.setRelativeY( MxNumberTenths( 90.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FCFBFA" ) );
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
	expected = "<rehearsal default-x=\"90.2\" default-y=\"90.2\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#FCFBFA\" underline=\"0\" overline=\"0\" line-height=\"8.6\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"lro\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 90.3 ) );
	object.setDefaultY( MxNumberTenths( 90.3 ) );
	object.setRelativeX( MxNumberTenths( 90.3 ) );
	object.setRelativeY( MxNumberTenths( 90.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
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
	expected = "<rehearsal justify=\"left\" default-y=\"90.3\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#FDFEFDFC\" underline=\"1\" overline=\"1\" line-height=\"8.7\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rlo\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 90.4 ) );
	object.setDefaultY( MxNumberTenths( 90.4 ) );
	object.setRelativeX( MxNumberTenths( 90.4 ) );
	object.setRelativeY( MxNumberTenths( 90.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#00FFFE" ) );
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
	expected = "<rehearsal font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#00FFFE\" underline=\"2\" overline=\"2\" line-height=\"8.8\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"ltr\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 90.5 ) );
	object.setDefaultY( MxNumberTenths( 90.5 ) );
	object.setRelativeX( MxNumberTenths( 90.5 ) );
	object.setRelativeY( MxNumberTenths( 90.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#01020100" ) );
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
	expected = "<rehearsal justify=\"right\" default-x=\"90.5\" relative-x=\"90.5\" font-family=\"ABC\" font-style=\"normal\" color=\"#01020100\" halign=\"right\" underline=\"0\" overline=\"0\" line-height=\"8.9\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 90.6 ) );
	object.setDefaultY( MxNumberTenths( 90.6 ) );
	object.setRelativeX( MxNumberTenths( 90.6 ) );
	object.setRelativeY( MxNumberTenths( 90.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#040302" ) );
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
	expected = "<rehearsal default-x=\"90.6\" relative-x=\"90.6\" font-family=\"DEF\" font-style=\"italic\" color=\"#040302\" halign=\"left\" underline=\"1\" overline=\"1\" line-height=\"9\" xml:lang=\"XYZ\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 90.7 ) );
	object.setDefaultY( MxNumberTenths( 90.7 ) );
	object.setRelativeX( MxNumberTenths( 90.7 ) );
	object.setRelativeY( MxNumberTenths( 90.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#05060504" ) );
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
	expected = "<rehearsal justify=\"center\" default-y=\"90.7\" relative-x=\"90.7\" relative-y=\"90.7\" font-style=\"normal\" font-weight=\"normal\" halign=\"center\" underline=\"2\" overline=\"2\" line-through=\"2\" xml:lang=\"ABC\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 90.8 ) );
	object.setDefaultY( MxNumberTenths( 90.8 ) );
	object.setRelativeX( MxNumberTenths( 90.8 ) );
	object.setRelativeY( MxNumberTenths( 90.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#080706" ) );
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
	expected = "<rehearsal default-y=\"90.8\" relative-x=\"90.8\" relative-y=\"90.8\" font-weight=\"bold\" halign=\"right\" overline=\"0\" line-through=\"0\" xml:lang=\"DEF\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 90.9 ) );
	object.setDefaultY( MxNumberTenths( 90.9 ) );
	object.setRelativeX( MxNumberTenths( 90.9 ) );
	object.setRelativeY( MxNumberTenths( 90.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#090A0908" ) );
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
	expected = "<rehearsal justify=\"left\" default-x=\"90.9\" default-y=\"90.9\" relative-y=\"90.9\" font-weight=\"normal\" halign=\"left\" overline=\"1\" line-through=\"1\" xml:lang=\"XYZ\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"triangle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 91 ) );
	object.setDefaultY( MxNumberTenths( 91 ) );
	object.setRelativeX( MxNumberTenths( 91 ) );
	object.setRelativeY( MxNumberTenths( 91 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0C0B0A" ) );
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
	expected = "<rehearsal default-x=\"91\" relative-y=\"91\" font-weight=\"bold\" halign=\"center\" overline=\"2\" line-through=\"2\" xml:lang=\"ABC\" xml:space=\"default\" dir=\"lro\" enclosure=\"diamond\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 91.1 ) );
	object.setDefaultY( MxNumberTenths( 91.1 ) );
	object.setRelativeX( MxNumberTenths( 91.1 ) );
	object.setRelativeY( MxNumberTenths( 91.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
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
	expected = "<rehearsal justify=\"right\" relative-y=\"91.1\" font-weight=\"normal\" halign=\"right\" overline=\"0\" line-through=\"0\" xml:lang=\"DEF\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"none\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 91.2 ) );
	object.setDefaultY( MxNumberTenths( 91.2 ) );
	object.setRelativeX( MxNumberTenths( 91.2 ) );
	object.setRelativeY( MxNumberTenths( 91.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#100F0E" ) );
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
	expected = "<rehearsal font-weight=\"bold\" halign=\"left\" overline=\"1\" line-through=\"1\" xml:space=\"default\" dir=\"ltr\" enclosure=\"rectangle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 91.3 ) );
	object.setDefaultY( MxNumberTenths( 91.3 ) );
	object.setRelativeX( MxNumberTenths( 91.3 ) );
	object.setRelativeY( MxNumberTenths( 91.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#11121110" ) );
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
	expected = "<rehearsal justify=\"center\" default-x=\"91.3\" default-y=\"91.3\" relative-x=\"91.3\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" halign=\"center\" valign=\"middle\" overline=\"2\" line-through=\"2\" rotation=\"10.7\" xml:space=\"preserve\" dir=\"rtl\" enclosure=\"square\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 91.4 ) );
	object.setDefaultY( MxNumberTenths( 91.4 ) );
	object.setRelativeX( MxNumberTenths( 91.4 ) );
	object.setRelativeY( MxNumberTenths( 91.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#141312" ) );
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
	expected = "<rehearsal default-x=\"91.4\" default-y=\"91.4\" relative-x=\"91.4\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" halign=\"right\" valign=\"bottom\" overline=\"0\" line-through=\"0\" rotation=\"10.8\" xml:space=\"default\" dir=\"lro\" enclosure=\"oval\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 91.5 ) );
	object.setDefaultY( MxNumberTenths( 91.5 ) );
	object.setRelativeX( MxNumberTenths( 91.5 ) );
	object.setRelativeY( MxNumberTenths( 91.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#15161514" ) );
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
	expected = "<rehearsal justify=\"left\" default-y=\"91.5\" relative-x=\"91.5\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" halign=\"left\" valign=\"baseline\" line-through=\"1\" rotation=\"10.9\" xml:space=\"preserve\" dir=\"rlo\" enclosure=\"circle\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 91.6 ) );
	object.setDefaultY( MxNumberTenths( 91.6 ) );
	object.setRelativeX( MxNumberTenths( 91.6 ) );
	object.setRelativeY( MxNumberTenths( 91.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
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
	expected = "<rehearsal relative-x=\"91.6\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" valign=\"top\" line-through=\"2\" rotation=\"11\" xml:space=\"default\" dir=\"ltr\" enclosure=\"bracket\">D,E,F</rehearsal>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEsRehearsal )
{
	MxEsRehearsal object( XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 91.7 ) );
	object.setDefaultY( MxNumberTenths( 91.7 ) );
	object.setRelativeX( MxNumberTenths( 91.7 ) );
	object.setRelativeY( MxNumberTenths( 91.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
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
	expected = "<rehearsal>D,E,F</rehearsal>";
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


