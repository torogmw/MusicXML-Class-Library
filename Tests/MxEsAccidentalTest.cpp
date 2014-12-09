/** *******************************************************
  * 
  * MxEsAccidentalTest.cpp
  * Created: 2014-12-05 20:57:55
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsAccidental.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsAccidental )
{
	MxEsAccidental object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsAccidental )
{
	MxEsAccidental object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getCautionary().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsAccidental )
{
	MxEsAccidental object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getEditorial().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsAccidental )
{
	MxEsAccidental object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getParentheses().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsAccidental )
{
	MxEsAccidental object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getBracket().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEsAccidental )
{
	MxEsAccidental object;
	std::string expected = ( MxEnumSymbolSize(  ) ).toString();
	std::string actual = object.getSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEsAccidental )
{
	MxEsAccidental object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEsAccidental )
{
	MxEsAccidental object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEsAccidental )
{
	MxEsAccidental object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEsAccidental )
{
	MxEsAccidental object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEsAccidental )
{
	MxEsAccidental object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxEsAccidental )
{
	MxEsAccidental object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxEsAccidental )
{
	MxEsAccidental object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxEsAccidental )
{
	MxEsAccidental object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxEsAccidental )
{
	MxEsAccidental object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsAccidental )
{
	MxEsAccidental object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsAccidental )
{
	MxEsAccidental object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::sharp );
	std::string expected;
	std::string actual;
	expected = "sharp";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumAccidentalValue( lexicon::enums::AccidentalValue::natural ) );
	expected = "natural";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::flat );
	std::string expected;
	std::string actual;
	expected = "flat";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumAccidentalValue( lexicon::enums::AccidentalValue::doubleSharp ) );
	expected = "double-sharp";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::sharpSharp );
	std::string expected;
	std::string actual;
	expected = "sharp-sharp";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumAccidentalValue( lexicon::enums::AccidentalValue::flatFlat ) );
	expected = "flat-flat";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::naturalSharp );
	std::string expected;
	std::string actual;
	expected = "natural-sharp";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumAccidentalValue( lexicon::enums::AccidentalValue::naturalFlat ) );
	expected = "natural-flat";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::quarterFlat );
	std::string expected;
	std::string actual;
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

TEST( getClassName, MxEsAccidental )
{
	MxEsAccidental object;
	std::string expected = "MxEsAccidental";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsAccidental )
{
	MxEsAccidental object;
	std::string expected = "accidental";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsAccidental )
{
	MxEsAccidental object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setCautionary0, MxEsAccidental )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsAccidental object;
	object.setCautionary( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getCautionary();
	CHECK_EQUAL( expected, actual )
	object.setCautionary( value2 );
	expected = value2;
	actual = object.getCautionary();
	CHECK_EQUAL( expected, actual )
}
TEST( setEditorial1, MxEsAccidental )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsAccidental object;
	object.setEditorial( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getEditorial();
	CHECK_EQUAL( expected, actual )
	object.setEditorial( value2 );
	expected = value2;
	actual = object.getEditorial();
	CHECK_EQUAL( expected, actual )
}
TEST( setParentheses2, MxEsAccidental )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsAccidental object;
	object.setParentheses( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getParentheses();
	CHECK_EQUAL( expected, actual )
	object.setParentheses( value2 );
	expected = value2;
	actual = object.getParentheses();
	CHECK_EQUAL( expected, actual )
}
TEST( setBracket3, MxEsAccidental )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsAccidental object;
	object.setBracket( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getBracket();
	CHECK_EQUAL( expected, actual )
	object.setBracket( value2 );
	expected = value2;
	actual = object.getBracket();
	CHECK_EQUAL( expected, actual )
}
TEST( setSize4, MxEsAccidental )
{
	MxEnumSymbolSize value1( lexicon::enums::SymbolSize::large );
	MxEnumSymbolSize value2( lexicon::enums::SymbolSize::cue );
	CHECK( ( value1 != value2 ) )
	MxEsAccidental object;
	object.setSize( value1 );
	MxEnumSymbolSize expected = value1;
	MxEnumSymbolSize actual = object.getSize();
	CHECK_EQUAL( expected, actual )
	object.setSize( value2 );
	expected = value2;
	actual = object.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX5, MxEsAccidental )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsAccidental object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY6, MxEsAccidental )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsAccidental object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX7, MxEsAccidental )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsAccidental object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY8, MxEsAccidental )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsAccidental object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily9, MxEsAccidental )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEsAccidental object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle10, MxEsAccidental )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEsAccidental object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize11, MxEsAccidental )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEsAccidental object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight12, MxEsAccidental )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEsAccidental object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor13, MxEsAccidental )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsAccidental object;
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

TEST( getIsCautionaryRequired0, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsCautionaryRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEditorialRequired1, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsEditorialRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsParenthesesRequired2, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsParenthesesRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBracketRequired3, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsBracketRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSizeRequired4, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired5, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired6, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired7, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired8, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired9, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired10, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired11, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired12, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired13, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsCautionaryPresent0, MxEsAccidental )
{
	MxEsAccidental object;
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
TEST( getIsEditorialPresent1, MxEsAccidental )
{
	MxEsAccidental object;
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
TEST( getIsParenthesesPresent2, MxEsAccidental )
{
	MxEsAccidental object;
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
TEST( getIsBracketPresent3, MxEsAccidental )
{
	MxEsAccidental object;
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
TEST( getIsSizePresent4, MxEsAccidental )
{
	MxEsAccidental object;
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
TEST( getIsDefaultXPresent5, MxEsAccidental )
{
	MxEsAccidental object;
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
TEST( getIsDefaultYPresent6, MxEsAccidental )
{
	MxEsAccidental object;
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
TEST( getIsRelativeXPresent7, MxEsAccidental )
{
	MxEsAccidental object;
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
TEST( getIsRelativeYPresent8, MxEsAccidental )
{
	MxEsAccidental object;
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
TEST( getIsFontFamilyPresent9, MxEsAccidental )
{
	MxEsAccidental object;
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
TEST( getIsFontStylePresent10, MxEsAccidental )
{
	MxEsAccidental object;
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
TEST( getIsFontSizePresent11, MxEsAccidental )
{
	MxEsAccidental object;
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
TEST( getIsFontWeightPresent12, MxEsAccidental )
{
	MxEsAccidental object;
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
TEST( getIsColorPresent13, MxEsAccidental )
{
	MxEsAccidental object;
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


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsCautionaryDefaultDefined, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsCautionaryDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEditorialDefaultDefined, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsEditorialDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsParenthesesDefaultDefined, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsParenthesesDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBracketDefaultDefined, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsBracketDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSizeDefaultDefined, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsAccidental )
{
	MxEsAccidental object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getCautionaryDefaultValue, MxEsAccidental )
{
	MxEsAccidental object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getCautionaryDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getEditorialDefaultValue, MxEsAccidental )
{
	MxEsAccidental object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getEditorialDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getParenthesesDefaultValue, MxEsAccidental )
{
	MxEsAccidental object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getParenthesesDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBracketDefaultValue, MxEsAccidental )
{
	MxEsAccidental object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getBracketDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSizeDefaultValue, MxEsAccidental )
{
	MxEsAccidental object;
	MxEnumSymbolSize expected;
	MxEnumSymbolSize actual = object.getSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEsAccidental )
{
	MxEsAccidental object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEsAccidental )
{
	MxEsAccidental object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEsAccidental )
{
	MxEsAccidental object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEsAccidental )
{
	MxEsAccidental object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEsAccidental )
{
	MxEsAccidental object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEsAccidental )
{
	MxEsAccidental object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEsAccidental )
{
	MxEsAccidental object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEsAccidental )
{
	MxEsAccidental object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsAccidental )
{
	MxEsAccidental object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
	std::string expected;
	std::string actual;
	object.setCautionary( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setEditorial( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 233.2 ) );
	object.setDefaultY( MxNumberTenths( 233.2 ) );
	object.setRelativeX( MxNumberTenths( 233.2 ) );
	object.setRelativeY( MxNumberTenths( 233.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
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
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" parentheses=\"no\" bracket=\"no\" size=\"cue\" default-x=\"233.2\" default-y=\"233.2\" relative-x=\"233.2\" relative-y=\"233.2\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F9FAF9F8\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 233.3 ) );
	object.setDefaultY( MxNumberTenths( 233.3 ) );
	object.setRelativeX( MxNumberTenths( 233.3 ) );
	object.setRelativeY( MxNumberTenths( 233.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<accidental editorial=\"yes\" parentheses=\"yes\" bracket=\"yes\" size=\"large\" default-x=\"233.3\" default-y=\"233.3\" relative-x=\"233.3\" relative-y=\"233.3\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#FCFBFA\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 233.4 ) );
	object.setDefaultY( MxNumberTenths( 233.4 ) );
	object.setRelativeX( MxNumberTenths( 233.4 ) );
	object.setRelativeY( MxNumberTenths( 233.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<accidental cautionary=\"yes\" parentheses=\"no\" bracket=\"no\" size=\"full\" default-x=\"233.4\" default-y=\"233.4\" relative-x=\"233.4\" relative-y=\"233.4\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#FDFEFDFC\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 233.5 ) );
	object.setDefaultY( MxNumberTenths( 233.5 ) );
	object.setRelativeX( MxNumberTenths( 233.5 ) );
	object.setRelativeY( MxNumberTenths( 233.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<accidental bracket=\"yes\" size=\"cue\" default-x=\"233.5\" default-y=\"233.5\" relative-x=\"233.5\" relative-y=\"233.5\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#00FFFE\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 233.6 ) );
	object.setDefaultY( MxNumberTenths( 233.6 ) );
	object.setRelativeX( MxNumberTenths( 233.6 ) );
	object.setRelativeY( MxNumberTenths( 233.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#01020100" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" size=\"large\" default-x=\"233.6\" default-y=\"233.6\" relative-x=\"233.6\" relative-y=\"233.6\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#01020100\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 233.7 ) );
	object.setDefaultY( MxNumberTenths( 233.7 ) );
	object.setRelativeX( MxNumberTenths( 233.7 ) );
	object.setRelativeY( MxNumberTenths( 233.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#040302" ) );
	expected = "<accidental editorial=\"yes\" default-x=\"233.7\" default-y=\"233.7\" relative-x=\"233.7\" relative-y=\"233.7\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#040302\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 233.8 ) );
	object.setDefaultY( MxNumberTenths( 233.8 ) );
	object.setRelativeX( MxNumberTenths( 233.8 ) );
	object.setRelativeY( MxNumberTenths( 233.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#05060504" ) );
	expected = "<accidental cautionary=\"yes\" parentheses=\"no\" default-y=\"233.8\" relative-x=\"233.8\" relative-y=\"233.8\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#05060504\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 233.9 ) );
	object.setDefaultY( MxNumberTenths( 233.9 ) );
	object.setRelativeX( MxNumberTenths( 233.9 ) );
	object.setRelativeY( MxNumberTenths( 233.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#080706" ) );
	expected = "<accidental parentheses=\"yes\" relative-x=\"233.9\" relative-y=\"233.9\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#080706\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 234 ) );
	object.setDefaultY( MxNumberTenths( 234 ) );
	object.setRelativeX( MxNumberTenths( 234 ) );
	object.setRelativeY( MxNumberTenths( 234 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#090A0908" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" parentheses=\"no\" bracket=\"no\" relative-y=\"234\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#090A0908\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 234.1 ) );
	object.setDefaultY( MxNumberTenths( 234.1 ) );
	object.setRelativeX( MxNumberTenths( 234.1 ) );
	object.setRelativeY( MxNumberTenths( 234.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	expected = "<accidental editorial=\"yes\" bracket=\"yes\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#0C0B0A\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 234.2 ) );
	object.setDefaultY( MxNumberTenths( 234.2 ) );
	object.setRelativeX( MxNumberTenths( 234.2 ) );
	object.setRelativeY( MxNumberTenths( 234.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	expected = "<accidental cautionary=\"yes\" bracket=\"no\" size=\"large\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#0D0E0D0C\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 234.3 ) );
	object.setDefaultY( MxNumberTenths( 234.3 ) );
	object.setRelativeX( MxNumberTenths( 234.3 ) );
	object.setRelativeY( MxNumberTenths( 234.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#100F0E" ) );
	expected = "<accidental bracket=\"yes\" size=\"full\" font-size=\"large\" font-weight=\"normal\" color=\"#100F0E\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 234.4 ) );
	object.setDefaultY( MxNumberTenths( 234.4 ) );
	object.setRelativeX( MxNumberTenths( 234.4 ) );
	object.setRelativeY( MxNumberTenths( 234.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#11121110" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" parentheses=\"no\" size=\"cue\" default-x=\"234.4\" font-weight=\"bold\" color=\"#11121110\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 234.5 ) );
	object.setDefaultY( MxNumberTenths( 234.5 ) );
	object.setRelativeX( MxNumberTenths( 234.5 ) );
	object.setRelativeY( MxNumberTenths( 234.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#141312" ) );
	expected = "<accidental editorial=\"yes\" parentheses=\"yes\" size=\"large\" default-x=\"234.5\" color=\"#141312\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 234.6 ) );
	object.setDefaultY( MxNumberTenths( 234.6 ) );
	object.setRelativeX( MxNumberTenths( 234.6 ) );
	object.setRelativeY( MxNumberTenths( 234.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#15161514" ) );
	expected = "<accidental cautionary=\"yes\" parentheses=\"no\" size=\"full\" default-x=\"234.6\" default-y=\"234.6\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 234.7 ) );
	object.setDefaultY( MxNumberTenths( 234.7 ) );
	object.setRelativeX( MxNumberTenths( 234.7 ) );
	object.setRelativeY( MxNumberTenths( 234.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#181716" ) );
	expected = "<accidental default-x=\"234.7\" default-y=\"234.7\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 234.8 ) );
	object.setDefaultY( MxNumberTenths( 234.8 ) );
	object.setRelativeX( MxNumberTenths( 234.8 ) );
	object.setRelativeY( MxNumberTenths( 234.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" bracket=\"no\" default-x=\"234.8\" default-y=\"234.8\" relative-x=\"234.8\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 234.9 ) );
	object.setDefaultY( MxNumberTenths( 234.9 ) );
	object.setRelativeX( MxNumberTenths( 234.9 ) );
	object.setRelativeY( MxNumberTenths( 234.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<accidental editorial=\"yes\" bracket=\"yes\" default-x=\"234.9\" default-y=\"234.9\" relative-x=\"234.9\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 235 ) );
	object.setDefaultY( MxNumberTenths( 235 ) );
	object.setRelativeX( MxNumberTenths( 235 ) );
	object.setRelativeY( MxNumberTenths( 235 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<accidental cautionary=\"yes\" parentheses=\"no\" bracket=\"no\" default-y=\"235\" relative-x=\"235\" relative-y=\"235\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 235.1 ) );
	object.setDefaultY( MxNumberTenths( 235.1 ) );
	object.setRelativeX( MxNumberTenths( 235.1 ) );
	object.setRelativeY( MxNumberTenths( 235.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<accidental parentheses=\"yes\" bracket=\"yes\" default-y=\"235.1\" relative-x=\"235.1\" relative-y=\"235.1\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 235.2 ) );
	object.setDefaultY( MxNumberTenths( 235.2 ) );
	object.setRelativeX( MxNumberTenths( 235.2 ) );
	object.setRelativeY( MxNumberTenths( 235.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" parentheses=\"no\" size=\"full\" default-y=\"235.2\" relative-x=\"235.2\" relative-y=\"235.2\" font-family=\"ABC\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 235.3 ) );
	object.setDefaultY( MxNumberTenths( 235.3 ) );
	object.setRelativeX( MxNumberTenths( 235.3 ) );
	object.setRelativeY( MxNumberTenths( 235.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<accidental editorial=\"yes\" size=\"cue\" relative-x=\"235.3\" relative-y=\"235.3\" font-family=\"DEF\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 235.4 ) );
	object.setDefaultY( MxNumberTenths( 235.4 ) );
	object.setRelativeX( MxNumberTenths( 235.4 ) );
	object.setRelativeY( MxNumberTenths( 235.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<accidental cautionary=\"yes\" size=\"large\" relative-x=\"235.4\" relative-y=\"235.4\" font-family=\"XYZ\" font-style=\"italic\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 235.5 ) );
	object.setDefaultY( MxNumberTenths( 235.5 ) );
	object.setRelativeX( MxNumberTenths( 235.5 ) );
	object.setRelativeY( MxNumberTenths( 235.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<accidental size=\"full\" relative-x=\"235.5\" relative-y=\"235.5\" font-family=\"ABC\" font-style=\"normal\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 235.6 ) );
	object.setDefaultY( MxNumberTenths( 235.6 ) );
	object.setRelativeX( MxNumberTenths( 235.6 ) );
	object.setRelativeY( MxNumberTenths( 235.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" parentheses=\"no\" bracket=\"no\" size=\"cue\" default-x=\"235.6\" relative-y=\"235.6\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 235.7 ) );
	object.setDefaultY( MxNumberTenths( 235.7 ) );
	object.setRelativeX( MxNumberTenths( 235.7 ) );
	object.setRelativeY( MxNumberTenths( 235.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<accidental editorial=\"yes\" parentheses=\"yes\" bracket=\"yes\" default-x=\"235.7\" relative-y=\"235.7\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 235.8 ) );
	object.setDefaultY( MxNumberTenths( 235.8 ) );
	object.setRelativeX( MxNumberTenths( 235.8 ) );
	object.setRelativeY( MxNumberTenths( 235.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<accidental cautionary=\"yes\" parentheses=\"no\" bracket=\"no\" default-x=\"235.8\" relative-y=\"235.8\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 235.9 ) );
	object.setDefaultY( MxNumberTenths( 235.9 ) );
	object.setRelativeX( MxNumberTenths( 235.9 ) );
	object.setRelativeY( MxNumberTenths( 235.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<accidental bracket=\"yes\" default-x=\"235.9\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 236 ) );
	object.setDefaultY( MxNumberTenths( 236 ) );
	object.setRelativeX( MxNumberTenths( 236 ) );
	object.setRelativeY( MxNumberTenths( 236 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" default-x=\"236\" default-y=\"236\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#31323130\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 236.1 ) );
	object.setDefaultY( MxNumberTenths( 236.1 ) );
	object.setRelativeX( MxNumberTenths( 236.1 ) );
	object.setRelativeY( MxNumberTenths( 236.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<accidental editorial=\"yes\" default-x=\"236.1\" default-y=\"236.1\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#343332\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 236.2 ) );
	object.setDefaultY( MxNumberTenths( 236.2 ) );
	object.setRelativeX( MxNumberTenths( 236.2 ) );
	object.setRelativeY( MxNumberTenths( 236.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<accidental cautionary=\"yes\" parentheses=\"no\" size=\"cue\" default-y=\"236.2\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#35363534\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 236.3 ) );
	object.setDefaultY( MxNumberTenths( 236.3 ) );
	object.setRelativeX( MxNumberTenths( 236.3 ) );
	object.setRelativeY( MxNumberTenths( 236.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<accidental parentheses=\"yes\" size=\"large\" default-y=\"236.3\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#383736\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 236.4 ) );
	object.setDefaultY( MxNumberTenths( 236.4 ) );
	object.setRelativeX( MxNumberTenths( 236.4 ) );
	object.setRelativeY( MxNumberTenths( 236.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" parentheses=\"no\" bracket=\"no\" size=\"full\" default-y=\"236.4\" relative-x=\"236.4\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#393A3938\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 236.5 ) );
	object.setDefaultY( MxNumberTenths( 236.5 ) );
	object.setRelativeX( MxNumberTenths( 236.5 ) );
	object.setRelativeY( MxNumberTenths( 236.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<accidental editorial=\"yes\" bracket=\"yes\" size=\"cue\" default-y=\"236.5\" relative-x=\"236.5\" font-size=\"large\" font-weight=\"normal\" color=\"#3C3B3A\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 236.6 ) );
	object.setDefaultY( MxNumberTenths( 236.6 ) );
	object.setRelativeX( MxNumberTenths( 236.6 ) );
	object.setRelativeY( MxNumberTenths( 236.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<accidental cautionary=\"yes\" bracket=\"no\" size=\"large\" default-y=\"236.6\" relative-x=\"236.6\" font-size=\"1.1\" font-weight=\"bold\" color=\"#3D3E3D3C\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 236.7 ) );
	object.setDefaultY( MxNumberTenths( 236.7 ) );
	object.setRelativeX( MxNumberTenths( 236.7 ) );
	object.setRelativeY( MxNumberTenths( 236.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<accidental bracket=\"yes\" relative-x=\"236.7\" font-size=\"large\" font-weight=\"normal\" color=\"#403F3E\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 236.8 ) );
	object.setDefaultY( MxNumberTenths( 236.8 ) );
	object.setRelativeX( MxNumberTenths( 236.8 ) );
	object.setRelativeY( MxNumberTenths( 236.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" parentheses=\"no\" default-x=\"236.8\" relative-x=\"236.8\" relative-y=\"236.8\" font-weight=\"bold\" color=\"#41424140\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 236.9 ) );
	object.setDefaultY( MxNumberTenths( 236.9 ) );
	object.setRelativeX( MxNumberTenths( 236.9 ) );
	object.setRelativeY( MxNumberTenths( 236.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<accidental editorial=\"yes\" parentheses=\"yes\" default-x=\"236.9\" relative-x=\"236.9\" relative-y=\"236.9\" font-weight=\"normal\" color=\"#444342\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 237 ) );
	object.setDefaultY( MxNumberTenths( 237 ) );
	object.setRelativeX( MxNumberTenths( 237 ) );
	object.setRelativeY( MxNumberTenths( 237 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<accidental cautionary=\"yes\" parentheses=\"no\" default-x=\"237\" relative-x=\"237\" relative-y=\"237\" font-weight=\"bold\" color=\"#45464544\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 237.1 ) );
	object.setDefaultY( MxNumberTenths( 237.1 ) );
	object.setRelativeX( MxNumberTenths( 237.1 ) );
	object.setRelativeY( MxNumberTenths( 237.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<accidental default-x=\"237.1\" relative-x=\"237.1\" relative-y=\"237.1\" color=\"#484746\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 237.2 ) );
	object.setDefaultY( MxNumberTenths( 237.2 ) );
	object.setRelativeX( MxNumberTenths( 237.2 ) );
	object.setRelativeY( MxNumberTenths( 237.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" bracket=\"no\" size=\"large\" default-x=\"237.2\" relative-y=\"237.2\" font-family=\"XYZ\" color=\"#494A4948\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 237.3 ) );
	object.setDefaultY( MxNumberTenths( 237.3 ) );
	object.setRelativeX( MxNumberTenths( 237.3 ) );
	object.setRelativeY( MxNumberTenths( 237.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<accidental editorial=\"yes\" bracket=\"yes\" size=\"full\" default-x=\"237.3\" relative-y=\"237.3\" font-family=\"ABC\" color=\"#4C4B4A\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 237.4 ) );
	object.setDefaultY( MxNumberTenths( 237.4 ) );
	object.setRelativeX( MxNumberTenths( 237.4 ) );
	object.setRelativeY( MxNumberTenths( 237.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<accidental cautionary=\"yes\" parentheses=\"no\" bracket=\"no\" size=\"cue\" default-y=\"237.4\" relative-y=\"237.4\" font-family=\"DEF\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 237.5 ) );
	object.setDefaultY( MxNumberTenths( 237.5 ) );
	object.setRelativeX( MxNumberTenths( 237.5 ) );
	object.setRelativeY( MxNumberTenths( 237.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<accidental parentheses=\"yes\" bracket=\"yes\" size=\"large\" default-y=\"237.5\" relative-y=\"237.5\" font-family=\"XYZ\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 237.6 ) );
	object.setDefaultY( MxNumberTenths( 237.6 ) );
	object.setRelativeX( MxNumberTenths( 237.6 ) );
	object.setRelativeY( MxNumberTenths( 237.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" parentheses=\"no\" size=\"full\" default-y=\"237.6\" relative-y=\"237.6\" font-family=\"ABC\" font-style=\"italic\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 237.7 ) );
	object.setDefaultY( MxNumberTenths( 237.7 ) );
	object.setRelativeX( MxNumberTenths( 237.7 ) );
	object.setRelativeY( MxNumberTenths( 237.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<accidental editorial=\"yes\" default-y=\"237.7\" font-family=\"DEF\" font-style=\"normal\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 237.8 ) );
	object.setDefaultY( MxNumberTenths( 237.8 ) );
	object.setRelativeX( MxNumberTenths( 237.8 ) );
	object.setRelativeY( MxNumberTenths( 237.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#55565554" ) );
	expected = "<accidental cautionary=\"yes\" default-y=\"237.8\" font-family=\"XYZ\" font-style=\"italic\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 237.9 ) );
	object.setDefaultY( MxNumberTenths( 237.9 ) );
	object.setRelativeX( MxNumberTenths( 237.9 ) );
	object.setRelativeY( MxNumberTenths( 237.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#585756" ) );
	expected = "<accidental default-y=\"237.9\" font-family=\"ABC\" font-style=\"normal\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 238 ) );
	object.setDefaultY( MxNumberTenths( 238 ) );
	object.setRelativeX( MxNumberTenths( 238 ) );
	object.setRelativeY( MxNumberTenths( 238 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#595A5958" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" parentheses=\"no\" bracket=\"no\" default-x=\"238\" default-y=\"238\" relative-x=\"238\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 238.1 ) );
	object.setDefaultY( MxNumberTenths( 238.1 ) );
	object.setRelativeX( MxNumberTenths( 238.1 ) );
	object.setRelativeY( MxNumberTenths( 238.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	expected = "<accidental editorial=\"yes\" parentheses=\"yes\" bracket=\"yes\" default-x=\"238.1\" relative-x=\"238.1\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 238.2 ) );
	object.setDefaultY( MxNumberTenths( 238.2 ) );
	object.setRelativeX( MxNumberTenths( 238.2 ) );
	object.setRelativeY( MxNumberTenths( 238.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	expected = "<accidental cautionary=\"yes\" parentheses=\"no\" bracket=\"no\" size=\"full\" default-x=\"238.2\" relative-x=\"238.2\" font-style=\"italic\" font-size=\"1.1\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 238.3 ) );
	object.setDefaultY( MxNumberTenths( 238.3 ) );
	object.setRelativeX( MxNumberTenths( 238.3 ) );
	object.setRelativeY( MxNumberTenths( 238.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#605F5E" ) );
	expected = "<accidental bracket=\"yes\" size=\"cue\" default-x=\"238.3\" relative-x=\"238.3\" font-style=\"normal\" font-size=\"large\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 238.4 ) );
	object.setDefaultY( MxNumberTenths( 238.4 ) );
	object.setRelativeX( MxNumberTenths( 238.4 ) );
	object.setRelativeY( MxNumberTenths( 238.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" size=\"large\" default-x=\"238.4\" relative-x=\"238.4\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 238.5 ) );
	object.setDefaultY( MxNumberTenths( 238.5 ) );
	object.setRelativeX( MxNumberTenths( 238.5 ) );
	object.setRelativeY( MxNumberTenths( 238.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<accidental editorial=\"yes\" size=\"full\" default-x=\"238.5\" relative-x=\"238.5\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 238.6 ) );
	object.setDefaultY( MxNumberTenths( 238.6 ) );
	object.setRelativeX( MxNumberTenths( 238.6 ) );
	object.setRelativeY( MxNumberTenths( 238.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<accidental cautionary=\"yes\" parentheses=\"no\" size=\"cue\" relative-x=\"238.6\" relative-y=\"238.6\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 238.7 ) );
	object.setDefaultY( MxNumberTenths( 238.7 ) );
	object.setRelativeX( MxNumberTenths( 238.7 ) );
	object.setRelativeY( MxNumberTenths( 238.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<accidental parentheses=\"yes\" relative-x=\"238.7\" relative-y=\"238.7\" font-size=\"large\" font-weight=\"normal\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 238.8 ) );
	object.setDefaultY( MxNumberTenths( 238.8 ) );
	object.setRelativeX( MxNumberTenths( 238.8 ) );
	object.setRelativeY( MxNumberTenths( 238.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" parentheses=\"no\" bracket=\"no\" default-y=\"238.8\" relative-y=\"238.8\" font-size=\"1.1\" font-weight=\"bold\" color=\"#696A6968\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 238.9 ) );
	object.setDefaultY( MxNumberTenths( 238.9 ) );
	object.setRelativeX( MxNumberTenths( 238.9 ) );
	object.setRelativeY( MxNumberTenths( 238.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<accidental editorial=\"yes\" bracket=\"yes\" default-y=\"238.9\" relative-y=\"238.9\" font-size=\"large\" font-weight=\"normal\" color=\"#6C6B6A\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 239 ) );
	object.setDefaultY( MxNumberTenths( 239 ) );
	object.setRelativeX( MxNumberTenths( 239 ) );
	object.setRelativeY( MxNumberTenths( 239 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<accidental cautionary=\"yes\" bracket=\"no\" default-y=\"239\" relative-y=\"239\" font-size=\"1.1\" font-weight=\"bold\" color=\"#6D6E6D6C\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 239.1 ) );
	object.setDefaultY( MxNumberTenths( 239.1 ) );
	object.setRelativeX( MxNumberTenths( 239.1 ) );
	object.setRelativeY( MxNumberTenths( 239.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<accidental bracket=\"yes\" default-y=\"239.1\" relative-y=\"239.1\" font-size=\"large\" font-weight=\"normal\" color=\"#706F6E\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 239.2 ) );
	object.setDefaultY( MxNumberTenths( 239.2 ) );
	object.setRelativeX( MxNumberTenths( 239.2 ) );
	object.setRelativeY( MxNumberTenths( 239.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" parentheses=\"no\" size=\"cue\" default-x=\"239.2\" default-y=\"239.2\" relative-y=\"239.2\" font-family=\"DEF\" font-weight=\"bold\" color=\"#71727170\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 239.3 ) );
	object.setDefaultY( MxNumberTenths( 239.3 ) );
	object.setRelativeX( MxNumberTenths( 239.3 ) );
	object.setRelativeY( MxNumberTenths( 239.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<accidental editorial=\"yes\" parentheses=\"yes\" size=\"large\" default-x=\"239.3\" default-y=\"239.3\" relative-y=\"239.3\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#747372\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 239.4 ) );
	object.setDefaultY( MxNumberTenths( 239.4 ) );
	object.setRelativeX( MxNumberTenths( 239.4 ) );
	object.setRelativeY( MxNumberTenths( 239.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<accidental cautionary=\"yes\" parentheses=\"no\" size=\"full\" default-x=\"239.4\" default-y=\"239.4\" relative-y=\"239.4\" font-family=\"ABC\" font-weight=\"bold\" color=\"#75767574\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 239.5 ) );
	object.setDefaultY( MxNumberTenths( 239.5 ) );
	object.setRelativeX( MxNumberTenths( 239.5 ) );
	object.setRelativeY( MxNumberTenths( 239.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<accidental size=\"cue\" default-x=\"239.5\" font-family=\"DEF\" font-weight=\"normal\" color=\"#787776\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 239.6 ) );
	object.setDefaultY( MxNumberTenths( 239.6 ) );
	object.setRelativeX( MxNumberTenths( 239.6 ) );
	object.setRelativeY( MxNumberTenths( 239.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" bracket=\"no\" size=\"large\" default-x=\"239.6\" relative-x=\"239.6\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#797A7978\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 239.7 ) );
	object.setDefaultY( MxNumberTenths( 239.7 ) );
	object.setRelativeX( MxNumberTenths( 239.7 ) );
	object.setRelativeY( MxNumberTenths( 239.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<accidental editorial=\"yes\" bracket=\"yes\" default-x=\"239.7\" relative-x=\"239.7\" font-family=\"ABC\" color=\"#7C7B7A\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 239.8 ) );
	object.setDefaultY( MxNumberTenths( 239.8 ) );
	object.setRelativeX( MxNumberTenths( 239.8 ) );
	object.setRelativeY( MxNumberTenths( 239.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<accidental cautionary=\"yes\" parentheses=\"no\" bracket=\"no\" relative-x=\"239.8\" font-family=\"DEF\" font-style=\"italic\" color=\"#7D7E7D7C\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 239.9 ) );
	object.setDefaultY( MxNumberTenths( 239.9 ) );
	object.setRelativeX( MxNumberTenths( 239.9 ) );
	object.setRelativeY( MxNumberTenths( 239.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<accidental parentheses=\"yes\" bracket=\"yes\" relative-x=\"239.9\" font-family=\"XYZ\" font-style=\"normal\" color=\"#807F7E\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 240 ) );
	object.setDefaultY( MxNumberTenths( 240 ) );
	object.setRelativeX( MxNumberTenths( 240 ) );
	object.setRelativeY( MxNumberTenths( 240 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" parentheses=\"no\" relative-x=\"240\" font-family=\"ABC\" font-style=\"italic\" color=\"#81828180\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 240.1 ) );
	object.setDefaultY( MxNumberTenths( 240.1 ) );
	object.setRelativeX( MxNumberTenths( 240.1 ) );
	object.setRelativeY( MxNumberTenths( 240.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<accidental editorial=\"yes\" relative-x=\"240.1\" font-family=\"DEF\" font-style=\"normal\" color=\"#848382\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 240.2 ) );
	object.setDefaultY( MxNumberTenths( 240.2 ) );
	object.setRelativeX( MxNumberTenths( 240.2 ) );
	object.setRelativeY( MxNumberTenths( 240.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<accidental cautionary=\"yes\" size=\"large\" default-y=\"240.2\" relative-x=\"240.2\" font-style=\"italic\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 240.3 ) );
	object.setDefaultY( MxNumberTenths( 240.3 ) );
	object.setRelativeX( MxNumberTenths( 240.3 ) );
	object.setRelativeY( MxNumberTenths( 240.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<accidental size=\"full\" default-y=\"240.3\" relative-x=\"240.3\" font-style=\"normal\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 240.4 ) );
	object.setDefaultY( MxNumberTenths( 240.4 ) );
	object.setRelativeX( MxNumberTenths( 240.4 ) );
	object.setRelativeY( MxNumberTenths( 240.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" parentheses=\"no\" bracket=\"no\" size=\"cue\" default-x=\"240.4\" default-y=\"240.4\" relative-y=\"240.4\" font-style=\"italic\" font-size=\"1.1\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 240.5 ) );
	object.setDefaultY( MxNumberTenths( 240.5 ) );
	object.setRelativeX( MxNumberTenths( 240.5 ) );
	object.setRelativeY( MxNumberTenths( 240.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<accidental editorial=\"yes\" parentheses=\"yes\" bracket=\"yes\" size=\"large\" default-x=\"240.5\" default-y=\"240.5\" relative-y=\"240.5\" font-style=\"normal\" font-size=\"large\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 240.6 ) );
	object.setDefaultY( MxNumberTenths( 240.6 ) );
	object.setRelativeX( MxNumberTenths( 240.6 ) );
	object.setRelativeY( MxNumberTenths( 240.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<accidental cautionary=\"yes\" parentheses=\"no\" bracket=\"no\" size=\"full\" default-x=\"240.6\" default-y=\"240.6\" relative-y=\"240.6\" font-style=\"italic\" font-size=\"1.1\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 240.7 ) );
	object.setDefaultY( MxNumberTenths( 240.7 ) );
	object.setRelativeX( MxNumberTenths( 240.7 ) );
	object.setRelativeY( MxNumberTenths( 240.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<accidental bracket=\"yes\" default-x=\"240.7\" default-y=\"240.7\" relative-y=\"240.7\" font-style=\"normal\" font-size=\"large\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 240.8 ) );
	object.setDefaultY( MxNumberTenths( 240.8 ) );
	object.setRelativeX( MxNumberTenths( 240.8 ) );
	object.setRelativeY( MxNumberTenths( 240.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" default-x=\"240.8\" default-y=\"240.8\" relative-y=\"240.8\" font-style=\"italic\" font-size=\"1.1\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 240.9 ) );
	object.setDefaultY( MxNumberTenths( 240.9 ) );
	object.setRelativeX( MxNumberTenths( 240.9 ) );
	object.setRelativeY( MxNumberTenths( 240.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<accidental editorial=\"yes\" default-x=\"240.9\" relative-y=\"240.9\" font-size=\"large\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 241 ) );
	object.setDefaultY( MxNumberTenths( 241 ) );
	object.setRelativeX( MxNumberTenths( 241 ) );
	object.setRelativeY( MxNumberTenths( 241 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<accidental cautionary=\"yes\" parentheses=\"no\" relative-y=\"241\" font-size=\"1.1\" font-weight=\"bold\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 241.1 ) );
	object.setDefaultY( MxNumberTenths( 241.1 ) );
	object.setRelativeX( MxNumberTenths( 241.1 ) );
	object.setRelativeY( MxNumberTenths( 241.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<accidental parentheses=\"yes\" relative-y=\"241.1\" font-size=\"large\" font-weight=\"normal\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 241.2 ) );
	object.setDefaultY( MxNumberTenths( 241.2 ) );
	object.setRelativeX( MxNumberTenths( 241.2 ) );
	object.setRelativeY( MxNumberTenths( 241.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" parentheses=\"no\" bracket=\"no\" size=\"full\" relative-x=\"241.2\" relative-y=\"241.2\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 241.3 ) );
	object.setDefaultY( MxNumberTenths( 241.3 ) );
	object.setRelativeX( MxNumberTenths( 241.3 ) );
	object.setRelativeY( MxNumberTenths( 241.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<accidental editorial=\"yes\" bracket=\"yes\" size=\"cue\" relative-x=\"241.3\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 241.4 ) );
	object.setDefaultY( MxNumberTenths( 241.4 ) );
	object.setRelativeX( MxNumberTenths( 241.4 ) );
	object.setRelativeY( MxNumberTenths( 241.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<accidental cautionary=\"yes\" bracket=\"no\" size=\"large\" relative-x=\"241.4\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 241.5 ) );
	object.setDefaultY( MxNumberTenths( 241.5 ) );
	object.setRelativeX( MxNumberTenths( 241.5 ) );
	object.setRelativeY( MxNumberTenths( 241.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<accidental bracket=\"yes\" size=\"full\" relative-x=\"241.5\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 241.6 ) );
	object.setDefaultY( MxNumberTenths( 241.6 ) );
	object.setRelativeX( MxNumberTenths( 241.6 ) );
	object.setRelativeY( MxNumberTenths( 241.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" parentheses=\"no\" size=\"cue\" default-x=\"241.6\" default-y=\"241.6\" relative-x=\"241.6\" font-family=\"DEF\" font-weight=\"bold\" color=\"#A1A2A1A0\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 241.7 ) );
	object.setDefaultY( MxNumberTenths( 241.7 ) );
	object.setRelativeX( MxNumberTenths( 241.7 ) );
	object.setRelativeY( MxNumberTenths( 241.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<accidental editorial=\"yes\" parentheses=\"yes\" default-x=\"241.7\" default-y=\"241.7\" relative-x=\"241.7\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#A4A3A2\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 241.8 ) );
	object.setDefaultY( MxNumberTenths( 241.8 ) );
	object.setRelativeX( MxNumberTenths( 241.8 ) );
	object.setRelativeY( MxNumberTenths( 241.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<accidental cautionary=\"yes\" parentheses=\"no\" default-x=\"241.8\" default-y=\"241.8\" relative-x=\"241.8\" font-family=\"ABC\" font-weight=\"bold\" color=\"#A5A6A5A4\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 241.9 ) );
	object.setDefaultY( MxNumberTenths( 241.9 ) );
	object.setRelativeX( MxNumberTenths( 241.9 ) );
	object.setRelativeY( MxNumberTenths( 241.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<accidental default-x=\"241.9\" default-y=\"241.9\" relative-x=\"241.9\" font-family=\"DEF\" font-weight=\"normal\" color=\"#A8A7A6\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 242 ) );
	object.setDefaultY( MxNumberTenths( 242 ) );
	object.setRelativeX( MxNumberTenths( 242 ) );
	object.setRelativeY( MxNumberTenths( 242 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" bracket=\"no\" default-x=\"242\" default-y=\"242\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" color=\"#A9AAA9A8\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 242.1 ) );
	object.setDefaultY( MxNumberTenths( 242.1 ) );
	object.setRelativeX( MxNumberTenths( 242.1 ) );
	object.setRelativeY( MxNumberTenths( 242.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<accidental editorial=\"yes\" bracket=\"yes\" default-x=\"242.1\" default-y=\"242.1\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" color=\"#ACABAA\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 242.2 ) );
	object.setDefaultY( MxNumberTenths( 242.2 ) );
	object.setRelativeX( MxNumberTenths( 242.2 ) );
	object.setRelativeY( MxNumberTenths( 242.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<accidental cautionary=\"yes\" parentheses=\"no\" bracket=\"no\" size=\"cue\" default-y=\"242.2\" relative-y=\"242.2\" font-style=\"italic\" font-weight=\"bold\" color=\"#ADAEADAC\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 242.3 ) );
	object.setDefaultY( MxNumberTenths( 242.3 ) );
	object.setRelativeX( MxNumberTenths( 242.3 ) );
	object.setRelativeY( MxNumberTenths( 242.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<accidental parentheses=\"yes\" bracket=\"yes\" size=\"large\" relative-y=\"242.3\" font-style=\"normal\" color=\"#B0AFAE\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 242.4 ) );
	object.setDefaultY( MxNumberTenths( 242.4 ) );
	object.setRelativeX( MxNumberTenths( 242.4 ) );
	object.setRelativeY( MxNumberTenths( 242.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" parentheses=\"no\" size=\"full\" relative-y=\"242.4\" font-style=\"italic\" color=\"#B1B2B1B0\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 242.5 ) );
	object.setDefaultY( MxNumberTenths( 242.5 ) );
	object.setRelativeX( MxNumberTenths( 242.5 ) );
	object.setRelativeY( MxNumberTenths( 242.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<accidental editorial=\"yes\" size=\"cue\" relative-y=\"242.5\" font-style=\"normal\" color=\"#B4B3B2\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 242.6 ) );
	object.setDefaultY( MxNumberTenths( 242.6 ) );
	object.setRelativeX( MxNumberTenths( 242.6 ) );
	object.setRelativeY( MxNumberTenths( 242.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<accidental cautionary=\"yes\" size=\"large\" relative-y=\"242.6\" font-style=\"italic\" color=\"#B5B6B5B4\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 242.7 ) );
	object.setDefaultY( MxNumberTenths( 242.7 ) );
	object.setRelativeX( MxNumberTenths( 242.7 ) );
	object.setRelativeY( MxNumberTenths( 242.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<accidental relative-y=\"242.7\" font-style=\"normal\" color=\"#B8B7B6\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 242.8 ) );
	object.setDefaultY( MxNumberTenths( 242.8 ) );
	object.setRelativeX( MxNumberTenths( 242.8 ) );
	object.setRelativeY( MxNumberTenths( 242.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<accidental cautionary=\"yes\" editorial=\"yes\" parentheses=\"no\" bracket=\"no\" default-x=\"242.8\" relative-x=\"242.8\" relative-y=\"242.8\" font-style=\"italic\" font-size=\"1.1\" color=\"#B9BAB9B8\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 242.9 ) );
	object.setDefaultY( MxNumberTenths( 242.9 ) );
	object.setRelativeX( MxNumberTenths( 242.9 ) );
	object.setRelativeY( MxNumberTenths( 242.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<accidental editorial=\"yes\" parentheses=\"yes\" bracket=\"yes\" default-x=\"242.9\" relative-x=\"242.9\" relative-y=\"242.9\" font-style=\"normal\" font-size=\"large\" color=\"#BCBBBA\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setDefaultX( MxNumberTenths( 243 ) );
	object.setDefaultY( MxNumberTenths( 243 ) );
	object.setRelativeX( MxNumberTenths( 243 ) );
	object.setRelativeY( MxNumberTenths( 243 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<accidental cautionary=\"yes\" parentheses=\"no\" bracket=\"no\" default-x=\"243\" default-y=\"243\" relative-x=\"243\" relative-y=\"243\" font-style=\"italic\" font-size=\"1.1\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setDefaultX( MxNumberTenths( 243.1 ) );
	object.setDefaultY( MxNumberTenths( 243.1 ) );
	object.setRelativeX( MxNumberTenths( 243.1 ) );
	object.setRelativeY( MxNumberTenths( 243.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<accidental bracket=\"yes\" default-x=\"243.1\" default-y=\"243.1\" relative-x=\"243.1\" font-size=\"large\">three-quarters-flat</accidental>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEsAccidental )
{
	MxEsAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
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
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	object.setDefaultX( MxNumberTenths( 243.2 ) );
	object.setDefaultY( MxNumberTenths( 243.2 ) );
	object.setRelativeX( MxNumberTenths( 243.2 ) );
	object.setRelativeY( MxNumberTenths( 243.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<accidental>three-quarters-flat</accidental>";
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


