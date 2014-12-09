/** *******************************************************
  * 
  * MxCxSmpAccidentalTest.cpp
  * Created: 2014-12-02 17:31:53
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpAccidental.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getCautionary().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getEditorial().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getParentheses().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getBracket().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	std::string expected = ( MxEnumSymbolSize(  ) ).toString();
	std::string actual = object.getSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::sharp ) );
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
TEST( ctorValueAndElementName2, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::flat ) );
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
TEST( ctorValueAndElementName4, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::sharpSharp ) );
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
TEST( ctorValueAndElementName6, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::naturalSharp ) );
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
TEST( ctorValueAndElementName8, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::quarterFlat ) );
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

TEST( getClassName, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	std::string expected = "MxCxSmpAccidental";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	std::string expected = "accidental";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	std::string expected = "The accidental type represents actual notated accidentals. Editorial and cautionary indications are indicated by attributes. Values for these attributes are 'no' if not present. Specific graphic display such as parentheses, brackets, and size are controlled by the level-display attribute group.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setCautionary0, MxCxSmpAccidental )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidental object;
	object.setCautionary( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getCautionary();
	CHECK_EQUAL( expected, actual )
	object.setCautionary( value2 );
	expected = value2;
	actual = object.getCautionary();
	CHECK_EQUAL( expected, actual )
}
TEST( setEditorial1, MxCxSmpAccidental )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidental object;
	object.setEditorial( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getEditorial();
	CHECK_EQUAL( expected, actual )
	object.setEditorial( value2 );
	expected = value2;
	actual = object.getEditorial();
	CHECK_EQUAL( expected, actual )
}
TEST( setParentheses2, MxCxSmpAccidental )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidental object;
	object.setParentheses( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getParentheses();
	CHECK_EQUAL( expected, actual )
	object.setParentheses( value2 );
	expected = value2;
	actual = object.getParentheses();
	CHECK_EQUAL( expected, actual )
}
TEST( setBracket3, MxCxSmpAccidental )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidental object;
	object.setBracket( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getBracket();
	CHECK_EQUAL( expected, actual )
	object.setBracket( value2 );
	expected = value2;
	actual = object.getBracket();
	CHECK_EQUAL( expected, actual )
}
TEST( setSize4, MxCxSmpAccidental )
{
	MxEnumSymbolSize value1( lexicon::enums::SymbolSize::large );
	MxEnumSymbolSize value2( lexicon::enums::SymbolSize::cue );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidental object;
	object.setSize( value1 );
	MxEnumSymbolSize expected = value1;
	MxEnumSymbolSize actual = object.getSize();
	CHECK_EQUAL( expected, actual )
	object.setSize( value2 );
	expected = value2;
	actual = object.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX5, MxCxSmpAccidental )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidental object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY6, MxCxSmpAccidental )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidental object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX7, MxCxSmpAccidental )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidental object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY8, MxCxSmpAccidental )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidental object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily9, MxCxSmpAccidental )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidental object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle10, MxCxSmpAccidental )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidental object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize11, MxCxSmpAccidental )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidental object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight12, MxCxSmpAccidental )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidental object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor13, MxCxSmpAccidental )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpAccidental object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsCautionaryRequired0, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsCautionaryRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEditorialRequired1, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsEditorialRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsParenthesesRequired2, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsParenthesesRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBracketRequired3, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsBracketRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSizeRequired4, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired5, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired6, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired7, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired8, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired9, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired10, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired11, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired12, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired13, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsCautionaryPresent0, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsCautionaryPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsCautionaryPresent( true );
	expected = true;
	actual = object.getIsCautionaryPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsCautionaryPresent( false );
	expected = false;
	actual = object.getIsCautionaryPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEditorialPresent1, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsEditorialPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsEditorialPresent( true );
	expected = true;
	actual = object.getIsEditorialPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsEditorialPresent( false );
	expected = false;
	actual = object.getIsEditorialPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsParenthesesPresent2, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsParenthesesPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsParenthesesPresent( true );
	expected = true;
	actual = object.getIsParenthesesPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsParenthesesPresent( false );
	expected = false;
	actual = object.getIsParenthesesPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBracketPresent3, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsBracketPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBracketPresent( true );
	expected = true;
	actual = object.getIsBracketPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBracketPresent( false );
	expected = false;
	actual = object.getIsBracketPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSizePresent4, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsSizePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSizePresent( true );
	expected = true;
	actual = object.getIsSizePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSizePresent( false );
	expected = false;
	actual = object.getIsSizePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXPresent5, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
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
TEST( getIsDefaultYPresent6, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
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
TEST( getIsRelativeXPresent7, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
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
TEST( getIsRelativeYPresent8, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
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
TEST( getIsFontFamilyPresent9, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
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
TEST( getIsFontStylePresent10, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
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
TEST( getIsFontSizePresent11, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
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
TEST( getIsFontWeightPresent12, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
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
TEST( getIsColorPresent13, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
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

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 192.8 ) );
	object.setDefaultY( MxNumberTenths( 192.8 ) );
	object.setRelativeX( MxNumberTenths( 192.8 ) );
	object.setRelativeY( MxNumberTenths( 192.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	expected = "<booksmart cautionary=\"yes\" editorial=\"yes\" parentheses=\"yes\" bracket=\"yes\" size=\"cue\" default-x=\"192.8\" default-y=\"192.8\" relative-x=\"192.8\" relative-y=\"192.8\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#3D3E3D3C\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 192.9 ) );
	object.setDefaultY( MxNumberTenths( 192.9 ) );
	object.setRelativeX( MxNumberTenths( 192.9 ) );
	object.setRelativeY( MxNumberTenths( 192.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<quiet editorial=\"yes\" parentheses=\"no\" bracket=\"no\" size=\"large\" default-x=\"192.9\" default-y=\"192.9\" relative-x=\"192.9\" relative-y=\"192.9\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#403F3E\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 193 ) );
	object.setDefaultY( MxNumberTenths( 193 ) );
	object.setRelativeX( MxNumberTenths( 193 ) );
	object.setRelativeY( MxNumberTenths( 193 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<musicxmlishard cautionary=\"yes\" parentheses=\"yes\" bracket=\"yes\" size=\"full\" default-x=\"193\" default-y=\"193\" relative-x=\"193\" relative-y=\"193\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#41424140\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 193.1 ) );
	object.setDefaultY( MxNumberTenths( 193.1 ) );
	object.setRelativeX( MxNumberTenths( 193.1 ) );
	object.setRelativeY( MxNumberTenths( 193.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<bishop bracket=\"no\" size=\"cue\" default-x=\"193.1\" default-y=\"193.1\" relative-x=\"193.1\" relative-y=\"193.1\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#444342\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 193.2 ) );
	object.setDefaultY( MxNumberTenths( 193.2 ) );
	object.setRelativeX( MxNumberTenths( 193.2 ) );
	object.setRelativeY( MxNumberTenths( 193.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<charlie cautionary=\"yes\" editorial=\"yes\" size=\"large\" default-x=\"193.2\" default-y=\"193.2\" relative-x=\"193.2\" relative-y=\"193.2\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#45464544\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 193.3 ) );
	object.setDefaultY( MxNumberTenths( 193.3 ) );
	object.setRelativeX( MxNumberTenths( 193.3 ) );
	object.setRelativeY( MxNumberTenths( 193.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<booksmart editorial=\"yes\" default-x=\"193.3\" default-y=\"193.3\" relative-x=\"193.3\" relative-y=\"193.3\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#484746\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 193.4 ) );
	object.setDefaultY( MxNumberTenths( 193.4 ) );
	object.setRelativeX( MxNumberTenths( 193.4 ) );
	object.setRelativeY( MxNumberTenths( 193.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<quiet cautionary=\"yes\" parentheses=\"yes\" default-y=\"193.4\" relative-x=\"193.4\" relative-y=\"193.4\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#494A4948\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 193.5 ) );
	object.setDefaultY( MxNumberTenths( 193.5 ) );
	object.setRelativeX( MxNumberTenths( 193.5 ) );
	object.setRelativeY( MxNumberTenths( 193.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<musicxmlishard parentheses=\"no\" relative-x=\"193.5\" relative-y=\"193.5\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#4C4B4A\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 193.6 ) );
	object.setDefaultY( MxNumberTenths( 193.6 ) );
	object.setRelativeX( MxNumberTenths( 193.6 ) );
	object.setRelativeY( MxNumberTenths( 193.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<bishop cautionary=\"yes\" editorial=\"yes\" parentheses=\"yes\" bracket=\"yes\" relative-y=\"193.6\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#4D4E4D4C\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 193.7 ) );
	object.setDefaultY( MxNumberTenths( 193.7 ) );
	object.setRelativeX( MxNumberTenths( 193.7 ) );
	object.setRelativeY( MxNumberTenths( 193.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<charlie editorial=\"yes\" bracket=\"no\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#504F4E\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 193.8 ) );
	object.setDefaultY( MxNumberTenths( 193.8 ) );
	object.setRelativeX( MxNumberTenths( 193.8 ) );
	object.setRelativeY( MxNumberTenths( 193.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<booksmart cautionary=\"yes\" bracket=\"yes\" size=\"large\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#51525150\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 193.9 ) );
	object.setDefaultY( MxNumberTenths( 193.9 ) );
	object.setRelativeX( MxNumberTenths( 193.9 ) );
	object.setRelativeY( MxNumberTenths( 193.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<quiet bracket=\"no\" size=\"full\" font-size=\"large\" font-weight=\"normal\" color=\"#545352\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 194 ) );
	object.setDefaultY( MxNumberTenths( 194 ) );
	object.setRelativeX( MxNumberTenths( 194 ) );
	object.setRelativeY( MxNumberTenths( 194 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#55565554" ) );
	expected = "<musicxmlishard cautionary=\"yes\" editorial=\"yes\" parentheses=\"yes\" size=\"cue\" default-x=\"194\" font-weight=\"bold\" color=\"#55565554\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 194.1 ) );
	object.setDefaultY( MxNumberTenths( 194.1 ) );
	object.setRelativeX( MxNumberTenths( 194.1 ) );
	object.setRelativeY( MxNumberTenths( 194.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#585756" ) );
	expected = "<bishop editorial=\"yes\" parentheses=\"no\" size=\"large\" default-x=\"194.1\" color=\"#585756\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 194.2 ) );
	object.setDefaultY( MxNumberTenths( 194.2 ) );
	object.setRelativeX( MxNumberTenths( 194.2 ) );
	object.setRelativeY( MxNumberTenths( 194.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#595A5958" ) );
	expected = "<charlie cautionary=\"yes\" parentheses=\"yes\" size=\"full\" default-x=\"194.2\" default-y=\"194.2\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 194.3 ) );
	object.setDefaultY( MxNumberTenths( 194.3 ) );
	object.setRelativeX( MxNumberTenths( 194.3 ) );
	object.setRelativeY( MxNumberTenths( 194.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	expected = "<booksmart default-x=\"194.3\" default-y=\"194.3\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 194.4 ) );
	object.setDefaultY( MxNumberTenths( 194.4 ) );
	object.setRelativeX( MxNumberTenths( 194.4 ) );
	object.setRelativeY( MxNumberTenths( 194.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	expected = "<quiet cautionary=\"yes\" editorial=\"yes\" bracket=\"yes\" default-x=\"194.4\" default-y=\"194.4\" relative-x=\"194.4\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 194.5 ) );
	object.setDefaultY( MxNumberTenths( 194.5 ) );
	object.setRelativeX( MxNumberTenths( 194.5 ) );
	object.setRelativeY( MxNumberTenths( 194.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#605F5E" ) );
	expected = "<musicxmlishard editorial=\"yes\" bracket=\"no\" default-x=\"194.5\" default-y=\"194.5\" relative-x=\"194.5\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 194.6 ) );
	object.setDefaultY( MxNumberTenths( 194.6 ) );
	object.setRelativeX( MxNumberTenths( 194.6 ) );
	object.setRelativeY( MxNumberTenths( 194.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<bishop cautionary=\"yes\" parentheses=\"yes\" bracket=\"yes\" default-y=\"194.6\" relative-x=\"194.6\" relative-y=\"194.6\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 194.7 ) );
	object.setDefaultY( MxNumberTenths( 194.7 ) );
	object.setRelativeX( MxNumberTenths( 194.7 ) );
	object.setRelativeY( MxNumberTenths( 194.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<charlie parentheses=\"no\" bracket=\"no\" default-y=\"194.7\" relative-x=\"194.7\" relative-y=\"194.7\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 194.8 ) );
	object.setDefaultY( MxNumberTenths( 194.8 ) );
	object.setRelativeX( MxNumberTenths( 194.8 ) );
	object.setRelativeY( MxNumberTenths( 194.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<booksmart cautionary=\"yes\" editorial=\"yes\" parentheses=\"yes\" size=\"full\" default-y=\"194.8\" relative-x=\"194.8\" relative-y=\"194.8\" font-family=\"ABC\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 194.9 ) );
	object.setDefaultY( MxNumberTenths( 194.9 ) );
	object.setRelativeX( MxNumberTenths( 194.9 ) );
	object.setRelativeY( MxNumberTenths( 194.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<quiet editorial=\"yes\" size=\"cue\" relative-x=\"194.9\" relative-y=\"194.9\" font-family=\"DEF\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 195 ) );
	object.setDefaultY( MxNumberTenths( 195 ) );
	object.setRelativeX( MxNumberTenths( 195 ) );
	object.setRelativeY( MxNumberTenths( 195 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<musicxmlishard cautionary=\"yes\" size=\"large\" relative-x=\"195\" relative-y=\"195\" font-family=\"XYZ\" font-style=\"italic\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 195.1 ) );
	object.setDefaultY( MxNumberTenths( 195.1 ) );
	object.setRelativeX( MxNumberTenths( 195.1 ) );
	object.setRelativeY( MxNumberTenths( 195.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<bishop size=\"full\" relative-x=\"195.1\" relative-y=\"195.1\" font-family=\"ABC\" font-style=\"normal\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 195.2 ) );
	object.setDefaultY( MxNumberTenths( 195.2 ) );
	object.setRelativeX( MxNumberTenths( 195.2 ) );
	object.setRelativeY( MxNumberTenths( 195.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<charlie cautionary=\"yes\" editorial=\"yes\" parentheses=\"yes\" bracket=\"yes\" size=\"cue\" default-x=\"195.2\" relative-y=\"195.2\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 195.3 ) );
	object.setDefaultY( MxNumberTenths( 195.3 ) );
	object.setRelativeX( MxNumberTenths( 195.3 ) );
	object.setRelativeY( MxNumberTenths( 195.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<booksmart editorial=\"yes\" parentheses=\"no\" bracket=\"no\" default-x=\"195.3\" relative-y=\"195.3\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 195.4 ) );
	object.setDefaultY( MxNumberTenths( 195.4 ) );
	object.setRelativeX( MxNumberTenths( 195.4 ) );
	object.setRelativeY( MxNumberTenths( 195.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<quiet cautionary=\"yes\" parentheses=\"yes\" bracket=\"yes\" default-x=\"195.4\" relative-y=\"195.4\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 195.5 ) );
	object.setDefaultY( MxNumberTenths( 195.5 ) );
	object.setRelativeX( MxNumberTenths( 195.5 ) );
	object.setRelativeY( MxNumberTenths( 195.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<musicxmlishard bracket=\"no\" default-x=\"195.5\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 195.6 ) );
	object.setDefaultY( MxNumberTenths( 195.6 ) );
	object.setRelativeX( MxNumberTenths( 195.6 ) );
	object.setRelativeY( MxNumberTenths( 195.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<bishop cautionary=\"yes\" editorial=\"yes\" default-x=\"195.6\" default-y=\"195.6\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#75767574\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 195.7 ) );
	object.setDefaultY( MxNumberTenths( 195.7 ) );
	object.setRelativeX( MxNumberTenths( 195.7 ) );
	object.setRelativeY( MxNumberTenths( 195.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<charlie editorial=\"yes\" default-x=\"195.7\" default-y=\"195.7\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#787776\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 195.8 ) );
	object.setDefaultY( MxNumberTenths( 195.8 ) );
	object.setRelativeX( MxNumberTenths( 195.8 ) );
	object.setRelativeY( MxNumberTenths( 195.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<booksmart cautionary=\"yes\" parentheses=\"yes\" size=\"cue\" default-y=\"195.8\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#797A7978\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 195.9 ) );
	object.setDefaultY( MxNumberTenths( 195.9 ) );
	object.setRelativeX( MxNumberTenths( 195.9 ) );
	object.setRelativeY( MxNumberTenths( 195.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<quiet parentheses=\"no\" size=\"large\" default-y=\"195.9\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#7C7B7A\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 196 ) );
	object.setDefaultY( MxNumberTenths( 196 ) );
	object.setRelativeX( MxNumberTenths( 196 ) );
	object.setRelativeY( MxNumberTenths( 196 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<musicxmlishard cautionary=\"yes\" editorial=\"yes\" parentheses=\"yes\" bracket=\"yes\" size=\"full\" default-y=\"196\" relative-x=\"196\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#7D7E7D7C\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 196.1 ) );
	object.setDefaultY( MxNumberTenths( 196.1 ) );
	object.setRelativeX( MxNumberTenths( 196.1 ) );
	object.setRelativeY( MxNumberTenths( 196.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<bishop editorial=\"yes\" bracket=\"no\" size=\"cue\" default-y=\"196.1\" relative-x=\"196.1\" font-size=\"large\" font-weight=\"normal\" color=\"#807F7E\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 196.2 ) );
	object.setDefaultY( MxNumberTenths( 196.2 ) );
	object.setRelativeX( MxNumberTenths( 196.2 ) );
	object.setRelativeY( MxNumberTenths( 196.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<charlie cautionary=\"yes\" bracket=\"yes\" size=\"large\" default-y=\"196.2\" relative-x=\"196.2\" font-size=\"1.1\" font-weight=\"bold\" color=\"#81828180\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 196.3 ) );
	object.setDefaultY( MxNumberTenths( 196.3 ) );
	object.setRelativeX( MxNumberTenths( 196.3 ) );
	object.setRelativeY( MxNumberTenths( 196.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<booksmart bracket=\"no\" relative-x=\"196.3\" font-size=\"large\" font-weight=\"normal\" color=\"#848382\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 196.4 ) );
	object.setDefaultY( MxNumberTenths( 196.4 ) );
	object.setRelativeX( MxNumberTenths( 196.4 ) );
	object.setRelativeY( MxNumberTenths( 196.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<quiet cautionary=\"yes\" editorial=\"yes\" parentheses=\"yes\" default-x=\"196.4\" relative-x=\"196.4\" relative-y=\"196.4\" font-weight=\"bold\" color=\"#85868584\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 196.5 ) );
	object.setDefaultY( MxNumberTenths( 196.5 ) );
	object.setRelativeX( MxNumberTenths( 196.5 ) );
	object.setRelativeY( MxNumberTenths( 196.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<musicxmlishard editorial=\"yes\" parentheses=\"no\" default-x=\"196.5\" relative-x=\"196.5\" relative-y=\"196.5\" font-weight=\"normal\" color=\"#888786\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 196.6 ) );
	object.setDefaultY( MxNumberTenths( 196.6 ) );
	object.setRelativeX( MxNumberTenths( 196.6 ) );
	object.setRelativeY( MxNumberTenths( 196.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<bishop cautionary=\"yes\" parentheses=\"yes\" default-x=\"196.6\" relative-x=\"196.6\" relative-y=\"196.6\" font-weight=\"bold\" color=\"#898A8988\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 196.7 ) );
	object.setDefaultY( MxNumberTenths( 196.7 ) );
	object.setRelativeX( MxNumberTenths( 196.7 ) );
	object.setRelativeY( MxNumberTenths( 196.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<charlie default-x=\"196.7\" relative-x=\"196.7\" relative-y=\"196.7\" color=\"#8C8B8A\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 196.8 ) );
	object.setDefaultY( MxNumberTenths( 196.8 ) );
	object.setRelativeX( MxNumberTenths( 196.8 ) );
	object.setRelativeY( MxNumberTenths( 196.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<booksmart cautionary=\"yes\" editorial=\"yes\" bracket=\"yes\" size=\"large\" default-x=\"196.8\" relative-y=\"196.8\" font-family=\"XYZ\" color=\"#8D8E8D8C\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 196.9 ) );
	object.setDefaultY( MxNumberTenths( 196.9 ) );
	object.setRelativeX( MxNumberTenths( 196.9 ) );
	object.setRelativeY( MxNumberTenths( 196.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<quiet editorial=\"yes\" bracket=\"no\" size=\"full\" default-x=\"196.9\" relative-y=\"196.9\" font-family=\"ABC\" color=\"#908F8E\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 197 ) );
	object.setDefaultY( MxNumberTenths( 197 ) );
	object.setRelativeX( MxNumberTenths( 197 ) );
	object.setRelativeY( MxNumberTenths( 197 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<musicxmlishard cautionary=\"yes\" parentheses=\"yes\" bracket=\"yes\" size=\"cue\" default-y=\"197\" relative-y=\"197\" font-family=\"DEF\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 197.1 ) );
	object.setDefaultY( MxNumberTenths( 197.1 ) );
	object.setRelativeX( MxNumberTenths( 197.1 ) );
	object.setRelativeY( MxNumberTenths( 197.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<bishop parentheses=\"no\" bracket=\"no\" size=\"large\" default-y=\"197.1\" relative-y=\"197.1\" font-family=\"XYZ\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 197.2 ) );
	object.setDefaultY( MxNumberTenths( 197.2 ) );
	object.setRelativeX( MxNumberTenths( 197.2 ) );
	object.setRelativeY( MxNumberTenths( 197.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<charlie cautionary=\"yes\" editorial=\"yes\" parentheses=\"yes\" size=\"full\" default-y=\"197.2\" relative-y=\"197.2\" font-family=\"ABC\" font-style=\"italic\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 197.3 ) );
	object.setDefaultY( MxNumberTenths( 197.3 ) );
	object.setRelativeX( MxNumberTenths( 197.3 ) );
	object.setRelativeY( MxNumberTenths( 197.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<booksmart editorial=\"yes\" default-y=\"197.3\" font-family=\"DEF\" font-style=\"normal\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 197.4 ) );
	object.setDefaultY( MxNumberTenths( 197.4 ) );
	object.setRelativeX( MxNumberTenths( 197.4 ) );
	object.setRelativeY( MxNumberTenths( 197.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<quiet cautionary=\"yes\" default-y=\"197.4\" font-family=\"XYZ\" font-style=\"italic\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 197.5 ) );
	object.setDefaultY( MxNumberTenths( 197.5 ) );
	object.setRelativeX( MxNumberTenths( 197.5 ) );
	object.setRelativeY( MxNumberTenths( 197.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<musicxmlishard default-y=\"197.5\" font-family=\"ABC\" font-style=\"normal\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 197.6 ) );
	object.setDefaultY( MxNumberTenths( 197.6 ) );
	object.setRelativeX( MxNumberTenths( 197.6 ) );
	object.setRelativeY( MxNumberTenths( 197.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<bishop cautionary=\"yes\" editorial=\"yes\" parentheses=\"yes\" bracket=\"yes\" default-x=\"197.6\" default-y=\"197.6\" relative-x=\"197.6\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 197.7 ) );
	object.setDefaultY( MxNumberTenths( 197.7 ) );
	object.setRelativeX( MxNumberTenths( 197.7 ) );
	object.setRelativeY( MxNumberTenths( 197.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<charlie editorial=\"yes\" parentheses=\"no\" bracket=\"no\" default-x=\"197.7\" relative-x=\"197.7\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 197.8 ) );
	object.setDefaultY( MxNumberTenths( 197.8 ) );
	object.setRelativeX( MxNumberTenths( 197.8 ) );
	object.setRelativeY( MxNumberTenths( 197.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<booksmart cautionary=\"yes\" parentheses=\"yes\" bracket=\"yes\" size=\"full\" default-x=\"197.8\" relative-x=\"197.8\" font-style=\"italic\" font-size=\"1.1\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 197.9 ) );
	object.setDefaultY( MxNumberTenths( 197.9 ) );
	object.setRelativeX( MxNumberTenths( 197.9 ) );
	object.setRelativeY( MxNumberTenths( 197.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<quiet bracket=\"no\" size=\"cue\" default-x=\"197.9\" relative-x=\"197.9\" font-style=\"normal\" font-size=\"large\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 198 ) );
	object.setDefaultY( MxNumberTenths( 198 ) );
	object.setRelativeX( MxNumberTenths( 198 ) );
	object.setRelativeY( MxNumberTenths( 198 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<musicxmlishard cautionary=\"yes\" editorial=\"yes\" size=\"large\" default-x=\"198\" relative-x=\"198\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 198.1 ) );
	object.setDefaultY( MxNumberTenths( 198.1 ) );
	object.setRelativeX( MxNumberTenths( 198.1 ) );
	object.setRelativeY( MxNumberTenths( 198.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<bishop editorial=\"yes\" size=\"full\" default-x=\"198.1\" relative-x=\"198.1\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 198.2 ) );
	object.setDefaultY( MxNumberTenths( 198.2 ) );
	object.setRelativeX( MxNumberTenths( 198.2 ) );
	object.setRelativeY( MxNumberTenths( 198.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<charlie cautionary=\"yes\" parentheses=\"yes\" size=\"cue\" relative-x=\"198.2\" relative-y=\"198.2\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 198.3 ) );
	object.setDefaultY( MxNumberTenths( 198.3 ) );
	object.setRelativeX( MxNumberTenths( 198.3 ) );
	object.setRelativeY( MxNumberTenths( 198.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<booksmart parentheses=\"no\" relative-x=\"198.3\" relative-y=\"198.3\" font-size=\"large\" font-weight=\"normal\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 198.4 ) );
	object.setDefaultY( MxNumberTenths( 198.4 ) );
	object.setRelativeX( MxNumberTenths( 198.4 ) );
	object.setRelativeY( MxNumberTenths( 198.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<quiet cautionary=\"yes\" editorial=\"yes\" parentheses=\"yes\" bracket=\"yes\" default-y=\"198.4\" relative-y=\"198.4\" font-size=\"1.1\" font-weight=\"bold\" color=\"#ADAEADAC\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 198.5 ) );
	object.setDefaultY( MxNumberTenths( 198.5 ) );
	object.setRelativeX( MxNumberTenths( 198.5 ) );
	object.setRelativeY( MxNumberTenths( 198.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<musicxmlishard editorial=\"yes\" bracket=\"no\" default-y=\"198.5\" relative-y=\"198.5\" font-size=\"large\" font-weight=\"normal\" color=\"#B0AFAE\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 198.6 ) );
	object.setDefaultY( MxNumberTenths( 198.6 ) );
	object.setRelativeX( MxNumberTenths( 198.6 ) );
	object.setRelativeY( MxNumberTenths( 198.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<bishop cautionary=\"yes\" bracket=\"yes\" default-y=\"198.6\" relative-y=\"198.6\" font-size=\"1.1\" font-weight=\"bold\" color=\"#B1B2B1B0\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 198.7 ) );
	object.setDefaultY( MxNumberTenths( 198.7 ) );
	object.setRelativeX( MxNumberTenths( 198.7 ) );
	object.setRelativeY( MxNumberTenths( 198.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<charlie bracket=\"no\" default-y=\"198.7\" relative-y=\"198.7\" font-size=\"large\" font-weight=\"normal\" color=\"#B4B3B2\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 198.8 ) );
	object.setDefaultY( MxNumberTenths( 198.8 ) );
	object.setRelativeX( MxNumberTenths( 198.8 ) );
	object.setRelativeY( MxNumberTenths( 198.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<booksmart cautionary=\"yes\" editorial=\"yes\" parentheses=\"yes\" size=\"cue\" default-x=\"198.8\" default-y=\"198.8\" relative-y=\"198.8\" font-family=\"DEF\" font-weight=\"bold\" color=\"#B5B6B5B4\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 198.9 ) );
	object.setDefaultY( MxNumberTenths( 198.9 ) );
	object.setRelativeX( MxNumberTenths( 198.9 ) );
	object.setRelativeY( MxNumberTenths( 198.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<quiet editorial=\"yes\" parentheses=\"no\" size=\"large\" default-x=\"198.9\" default-y=\"198.9\" relative-y=\"198.9\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#B8B7B6\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 199 ) );
	object.setDefaultY( MxNumberTenths( 199 ) );
	object.setRelativeX( MxNumberTenths( 199 ) );
	object.setRelativeY( MxNumberTenths( 199 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<musicxmlishard cautionary=\"yes\" parentheses=\"yes\" size=\"full\" default-x=\"199\" default-y=\"199\" relative-y=\"199\" font-family=\"ABC\" font-weight=\"bold\" color=\"#B9BAB9B8\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 199.1 ) );
	object.setDefaultY( MxNumberTenths( 199.1 ) );
	object.setRelativeX( MxNumberTenths( 199.1 ) );
	object.setRelativeY( MxNumberTenths( 199.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<bishop size=\"cue\" default-x=\"199.1\" font-family=\"DEF\" font-weight=\"normal\" color=\"#BCBBBA\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 199.2 ) );
	object.setDefaultY( MxNumberTenths( 199.2 ) );
	object.setRelativeX( MxNumberTenths( 199.2 ) );
	object.setRelativeY( MxNumberTenths( 199.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<charlie cautionary=\"yes\" editorial=\"yes\" bracket=\"yes\" size=\"large\" default-x=\"199.2\" relative-x=\"199.2\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#BDBEBDBC\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 199.3 ) );
	object.setDefaultY( MxNumberTenths( 199.3 ) );
	object.setRelativeX( MxNumberTenths( 199.3 ) );
	object.setRelativeY( MxNumberTenths( 199.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<booksmart editorial=\"yes\" bracket=\"no\" default-x=\"199.3\" relative-x=\"199.3\" font-family=\"ABC\" color=\"#C0BFBE\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 199.4 ) );
	object.setDefaultY( MxNumberTenths( 199.4 ) );
	object.setRelativeX( MxNumberTenths( 199.4 ) );
	object.setRelativeY( MxNumberTenths( 199.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<quiet cautionary=\"yes\" parentheses=\"yes\" bracket=\"yes\" relative-x=\"199.4\" font-family=\"DEF\" font-style=\"italic\" color=\"#C1C2C1C0\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 199.5 ) );
	object.setDefaultY( MxNumberTenths( 199.5 ) );
	object.setRelativeX( MxNumberTenths( 199.5 ) );
	object.setRelativeY( MxNumberTenths( 199.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<musicxmlishard parentheses=\"no\" bracket=\"no\" relative-x=\"199.5\" font-family=\"XYZ\" font-style=\"normal\" color=\"#C4C3C2\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 199.6 ) );
	object.setDefaultY( MxNumberTenths( 199.6 ) );
	object.setRelativeX( MxNumberTenths( 199.6 ) );
	object.setRelativeY( MxNumberTenths( 199.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<bishop cautionary=\"yes\" editorial=\"yes\" parentheses=\"yes\" relative-x=\"199.6\" font-family=\"ABC\" font-style=\"italic\" color=\"#C5C6C5C4\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 199.7 ) );
	object.setDefaultY( MxNumberTenths( 199.7 ) );
	object.setRelativeX( MxNumberTenths( 199.7 ) );
	object.setRelativeY( MxNumberTenths( 199.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<charlie editorial=\"yes\" relative-x=\"199.7\" font-family=\"DEF\" font-style=\"normal\" color=\"#C8C7C6\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 199.8 ) );
	object.setDefaultY( MxNumberTenths( 199.8 ) );
	object.setRelativeX( MxNumberTenths( 199.8 ) );
	object.setRelativeY( MxNumberTenths( 199.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<booksmart cautionary=\"yes\" size=\"large\" default-y=\"199.8\" relative-x=\"199.8\" font-style=\"italic\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 199.9 ) );
	object.setDefaultY( MxNumberTenths( 199.9 ) );
	object.setRelativeX( MxNumberTenths( 199.9 ) );
	object.setRelativeY( MxNumberTenths( 199.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<quiet size=\"full\" default-y=\"199.9\" relative-x=\"199.9\" font-style=\"normal\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 200 ) );
	object.setDefaultY( MxNumberTenths( 200 ) );
	object.setRelativeX( MxNumberTenths( 200 ) );
	object.setRelativeY( MxNumberTenths( 200 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<musicxmlishard cautionary=\"yes\" editorial=\"yes\" parentheses=\"yes\" bracket=\"yes\" size=\"cue\" default-x=\"200\" default-y=\"200\" relative-y=\"200\" font-style=\"italic\" font-size=\"1.1\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 200.1 ) );
	object.setDefaultY( MxNumberTenths( 200.1 ) );
	object.setRelativeX( MxNumberTenths( 200.1 ) );
	object.setRelativeY( MxNumberTenths( 200.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<bishop editorial=\"yes\" parentheses=\"no\" bracket=\"no\" size=\"large\" default-x=\"200.1\" default-y=\"200.1\" relative-y=\"200.1\" font-style=\"normal\" font-size=\"large\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 200.2 ) );
	object.setDefaultY( MxNumberTenths( 200.2 ) );
	object.setRelativeX( MxNumberTenths( 200.2 ) );
	object.setRelativeY( MxNumberTenths( 200.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<charlie cautionary=\"yes\" parentheses=\"yes\" bracket=\"yes\" size=\"full\" default-x=\"200.2\" default-y=\"200.2\" relative-y=\"200.2\" font-style=\"italic\" font-size=\"1.1\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 200.3 ) );
	object.setDefaultY( MxNumberTenths( 200.3 ) );
	object.setRelativeX( MxNumberTenths( 200.3 ) );
	object.setRelativeY( MxNumberTenths( 200.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<booksmart bracket=\"no\" default-x=\"200.3\" default-y=\"200.3\" relative-y=\"200.3\" font-style=\"normal\" font-size=\"large\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 200.4 ) );
	object.setDefaultY( MxNumberTenths( 200.4 ) );
	object.setRelativeX( MxNumberTenths( 200.4 ) );
	object.setRelativeY( MxNumberTenths( 200.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<quiet cautionary=\"yes\" editorial=\"yes\" default-x=\"200.4\" default-y=\"200.4\" relative-y=\"200.4\" font-style=\"italic\" font-size=\"1.1\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 200.5 ) );
	object.setDefaultY( MxNumberTenths( 200.5 ) );
	object.setRelativeX( MxNumberTenths( 200.5 ) );
	object.setRelativeY( MxNumberTenths( 200.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<musicxmlishard editorial=\"yes\" default-x=\"200.5\" relative-y=\"200.5\" font-size=\"large\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 200.6 ) );
	object.setDefaultY( MxNumberTenths( 200.6 ) );
	object.setRelativeX( MxNumberTenths( 200.6 ) );
	object.setRelativeY( MxNumberTenths( 200.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<bishop cautionary=\"yes\" parentheses=\"yes\" relative-y=\"200.6\" font-size=\"1.1\" font-weight=\"bold\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 200.7 ) );
	object.setDefaultY( MxNumberTenths( 200.7 ) );
	object.setRelativeX( MxNumberTenths( 200.7 ) );
	object.setRelativeY( MxNumberTenths( 200.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<charlie parentheses=\"no\" relative-y=\"200.7\" font-size=\"large\" font-weight=\"normal\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 200.8 ) );
	object.setDefaultY( MxNumberTenths( 200.8 ) );
	object.setRelativeX( MxNumberTenths( 200.8 ) );
	object.setRelativeY( MxNumberTenths( 200.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<booksmart cautionary=\"yes\" editorial=\"yes\" parentheses=\"yes\" bracket=\"yes\" size=\"full\" relative-x=\"200.8\" relative-y=\"200.8\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 200.9 ) );
	object.setDefaultY( MxNumberTenths( 200.9 ) );
	object.setRelativeX( MxNumberTenths( 200.9 ) );
	object.setRelativeY( MxNumberTenths( 200.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<quiet editorial=\"yes\" bracket=\"no\" size=\"cue\" relative-x=\"200.9\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 201 ) );
	object.setDefaultY( MxNumberTenths( 201 ) );
	object.setRelativeX( MxNumberTenths( 201 ) );
	object.setRelativeY( MxNumberTenths( 201 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<musicxmlishard cautionary=\"yes\" bracket=\"yes\" size=\"large\" relative-x=\"201\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 201.1 ) );
	object.setDefaultY( MxNumberTenths( 201.1 ) );
	object.setRelativeX( MxNumberTenths( 201.1 ) );
	object.setRelativeY( MxNumberTenths( 201.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<bishop bracket=\"no\" size=\"full\" relative-x=\"201.1\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 201.2 ) );
	object.setDefaultY( MxNumberTenths( 201.2 ) );
	object.setRelativeX( MxNumberTenths( 201.2 ) );
	object.setRelativeY( MxNumberTenths( 201.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	expected = "<charlie cautionary=\"yes\" editorial=\"yes\" parentheses=\"yes\" size=\"cue\" default-x=\"201.2\" default-y=\"201.2\" relative-x=\"201.2\" font-family=\"DEF\" font-weight=\"bold\" color=\"#E5E6E5E4\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 201.3 ) );
	object.setDefaultY( MxNumberTenths( 201.3 ) );
	object.setRelativeX( MxNumberTenths( 201.3 ) );
	object.setRelativeY( MxNumberTenths( 201.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	expected = "<booksmart editorial=\"yes\" parentheses=\"no\" default-x=\"201.3\" default-y=\"201.3\" relative-x=\"201.3\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#E8E7E6\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 201.4 ) );
	object.setDefaultY( MxNumberTenths( 201.4 ) );
	object.setRelativeX( MxNumberTenths( 201.4 ) );
	object.setRelativeY( MxNumberTenths( 201.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	expected = "<quiet cautionary=\"yes\" parentheses=\"yes\" default-x=\"201.4\" default-y=\"201.4\" relative-x=\"201.4\" font-family=\"ABC\" font-weight=\"bold\" color=\"#E9EAE9E8\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 201.5 ) );
	object.setDefaultY( MxNumberTenths( 201.5 ) );
	object.setRelativeX( MxNumberTenths( 201.5 ) );
	object.setRelativeY( MxNumberTenths( 201.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	expected = "<musicxmlishard default-x=\"201.5\" default-y=\"201.5\" relative-x=\"201.5\" font-family=\"DEF\" font-weight=\"normal\" color=\"#ECEBEA\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 201.6 ) );
	object.setDefaultY( MxNumberTenths( 201.6 ) );
	object.setRelativeX( MxNumberTenths( 201.6 ) );
	object.setRelativeY( MxNumberTenths( 201.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	expected = "<bishop cautionary=\"yes\" editorial=\"yes\" bracket=\"yes\" default-x=\"201.6\" default-y=\"201.6\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" color=\"#EDEEEDEC\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 201.7 ) );
	object.setDefaultY( MxNumberTenths( 201.7 ) );
	object.setRelativeX( MxNumberTenths( 201.7 ) );
	object.setRelativeY( MxNumberTenths( 201.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	expected = "<charlie editorial=\"yes\" bracket=\"no\" default-x=\"201.7\" default-y=\"201.7\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" color=\"#F0EFEE\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 201.8 ) );
	object.setDefaultY( MxNumberTenths( 201.8 ) );
	object.setRelativeX( MxNumberTenths( 201.8 ) );
	object.setRelativeY( MxNumberTenths( 201.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	expected = "<booksmart cautionary=\"yes\" parentheses=\"yes\" bracket=\"yes\" size=\"cue\" default-y=\"201.8\" relative-y=\"201.8\" font-style=\"italic\" font-weight=\"bold\" color=\"#F1F2F1F0\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 201.9 ) );
	object.setDefaultY( MxNumberTenths( 201.9 ) );
	object.setRelativeX( MxNumberTenths( 201.9 ) );
	object.setRelativeY( MxNumberTenths( 201.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	expected = "<quiet parentheses=\"no\" bracket=\"no\" size=\"large\" relative-y=\"201.9\" font-style=\"normal\" color=\"#F4F3F2\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 202 ) );
	object.setDefaultY( MxNumberTenths( 202 ) );
	object.setRelativeX( MxNumberTenths( 202 ) );
	object.setRelativeY( MxNumberTenths( 202 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<musicxmlishard cautionary=\"yes\" editorial=\"yes\" parentheses=\"yes\" size=\"full\" relative-y=\"202\" font-style=\"italic\" color=\"#F5F6F5F4\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 202.1 ) );
	object.setDefaultY( MxNumberTenths( 202.1 ) );
	object.setRelativeX( MxNumberTenths( 202.1 ) );
	object.setRelativeY( MxNumberTenths( 202.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	expected = "<bishop editorial=\"yes\" size=\"cue\" relative-y=\"202.1\" font-style=\"normal\" color=\"#F8F7F6\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 202.2 ) );
	object.setDefaultY( MxNumberTenths( 202.2 ) );
	object.setRelativeX( MxNumberTenths( 202.2 ) );
	object.setRelativeY( MxNumberTenths( 202.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<charlie cautionary=\"yes\" size=\"large\" relative-y=\"202.2\" font-style=\"italic\" color=\"#F9FAF9F8\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 202.3 ) );
	object.setDefaultY( MxNumberTenths( 202.3 ) );
	object.setRelativeX( MxNumberTenths( 202.3 ) );
	object.setRelativeY( MxNumberTenths( 202.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<booksmart relative-y=\"202.3\" font-style=\"normal\" color=\"#FCFBFA\">three-quarters-flat</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "quiet", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 202.4 ) );
	object.setDefaultY( MxNumberTenths( 202.4 ) );
	object.setRelativeX( MxNumberTenths( 202.4 ) );
	object.setRelativeY( MxNumberTenths( 202.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<quiet cautionary=\"yes\" editorial=\"yes\" parentheses=\"yes\" bracket=\"yes\" default-x=\"202.4\" relative-x=\"202.4\" relative-y=\"202.4\" font-style=\"italic\" font-size=\"1.1\" color=\"#FDFEFDFC\">three-quarters-flat</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "musicxmlishard", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 202.5 ) );
	object.setDefaultY( MxNumberTenths( 202.5 ) );
	object.setRelativeX( MxNumberTenths( 202.5 ) );
	object.setRelativeY( MxNumberTenths( 202.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<musicxmlishard editorial=\"yes\" parentheses=\"no\" bracket=\"no\" default-x=\"202.5\" relative-x=\"202.5\" relative-y=\"202.5\" font-style=\"normal\" font-size=\"large\" color=\"#00FFFE\">three-quarters-flat</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "bishop", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( true );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 202.6 ) );
	object.setDefaultY( MxNumberTenths( 202.6 ) );
	object.setRelativeX( MxNumberTenths( 202.6 ) );
	object.setRelativeY( MxNumberTenths( 202.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#01020100" ) );
	expected = "<bishop cautionary=\"yes\" parentheses=\"yes\" bracket=\"yes\" default-x=\"202.6\" default-y=\"202.6\" relative-x=\"202.6\" relative-y=\"202.6\" font-style=\"italic\" font-size=\"1.1\">three-quarters-flat</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "charlie", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 202.7 ) );
	object.setDefaultY( MxNumberTenths( 202.7 ) );
	object.setRelativeX( MxNumberTenths( 202.7 ) );
	object.setRelativeY( MxNumberTenths( 202.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#040302" ) );
	expected = "<charlie bracket=\"no\" default-x=\"202.7\" default-y=\"202.7\" relative-x=\"202.7\" font-size=\"large\">three-quarters-flat</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxSmpAccidental )
{
	MxCxSmpAccidental object( "booksmart", MxEnumAccidentalValue( lexicon::enums::AccidentalValue::threeQuartersFlat ) );
	std::string expected;
	std::string actual;
	object.setIsCautionaryPresent( false );
	object.setIsEditorialPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 202.8 ) );
	object.setDefaultY( MxNumberTenths( 202.8 ) );
	object.setRelativeX( MxNumberTenths( 202.8 ) );
	object.setRelativeY( MxNumberTenths( 202.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#05060504" ) );
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

TEST( getIsCautionaryDefaultDefined, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsCautionaryDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEditorialDefaultDefined, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsEditorialDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsParenthesesDefaultDefined, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsParenthesesDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBracketDefaultDefined, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsBracketDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSizeDefaultDefined, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getCautionaryDefaultValue, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getCautionaryDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getEditorialDefaultValue, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getEditorialDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getParenthesesDefaultValue, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getParenthesesDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBracketDefaultValue, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getBracketDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSizeDefaultValue, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	MxEnumSymbolSize expected;
	MxEnumSymbolSize actual = object.getSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpAccidental )
{
	MxCxSmpAccidental object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


