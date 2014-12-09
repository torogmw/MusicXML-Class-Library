/** *******************************************************
  * 
  * MxEsKindTest.cpp
  * Created: 2014-12-05 20:57:59
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsKind.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsKind )
{
	MxEsKind object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsKind )
{
	MxEsKind object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getUseSymbols().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsKind )
{
	MxEsKind object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getText().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsKind )
{
	MxEsKind object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getStackDegrees().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsKind )
{
	MxEsKind object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getParenthesesDegrees().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEsKind )
{
	MxEsKind object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getBracketDegrees().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEsKind )
{
	MxEsKind object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEsKind )
{
	MxEsKind object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEsKind )
{
	MxEsKind object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEsKind )
{
	MxEsKind object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEsKind )
{
	MxEsKind object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxEsKind )
{
	MxEsKind object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxEsKind )
{
	MxEsKind object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxEsKind )
{
	MxEsKind object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxEsKind )
{
	MxEsKind object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues14, MxEsKind )
{
	MxEsKind object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getHalign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues15, MxEsKind )
{
	MxEsKind object;
	std::string expected = ( MxEnumValign(  ) ).toString();
	std::string actual = object.getValign().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsKind )
{
	MxEsKind object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsKind )
{
	MxEsKind object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::major );
	std::string expected;
	std::string actual;
	expected = "major";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumKindValue( lexicon::enums::KindValue::minor ) );
	expected = "minor";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::augmented );
	std::string expected;
	std::string actual;
	expected = "augmented";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumKindValue( lexicon::enums::KindValue::diminished ) );
	expected = "diminished";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::dominant );
	std::string expected;
	std::string actual;
	expected = "dominant";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumKindValue( lexicon::enums::KindValue::majorSeventh ) );
	expected = "major-seventh";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::minorSeventh );
	std::string expected;
	std::string actual;
	expected = "minor-seventh";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumKindValue( lexicon::enums::KindValue::diminishedSeventh ) );
	expected = "diminished-seventh";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::augmentedSeventh );
	std::string expected;
	std::string actual;
	expected = "augmented-seventh";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumKindValue( lexicon::enums::KindValue::halfDiminished ) );
	expected = "half-diminished";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEsKind )
{
	MxEsKind object;
	std::string expected = "MxEsKind";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsKind )
{
	MxEsKind object;
	std::string expected = "kind";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsKind )
{
	MxEsKind object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setUseSymbols0, MxEsKind )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsKind object;
	object.setUseSymbols( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getUseSymbols();
	CHECK_EQUAL( expected, actual )
	object.setUseSymbols( value2 );
	expected = value2;
	actual = object.getUseSymbols();
	CHECK_EQUAL( expected, actual )
}
TEST( setText1, MxEsKind )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxEsKind object;
	object.setText( value1 );
	XsToken expected = value1;
	XsToken actual = object.getText();
	CHECK_EQUAL( expected, actual )
	object.setText( value2 );
	expected = value2;
	actual = object.getText();
	CHECK_EQUAL( expected, actual )
}
TEST( setStackDegrees2, MxEsKind )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsKind object;
	object.setStackDegrees( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getStackDegrees();
	CHECK_EQUAL( expected, actual )
	object.setStackDegrees( value2 );
	expected = value2;
	actual = object.getStackDegrees();
	CHECK_EQUAL( expected, actual )
}
TEST( setParenthesesDegrees3, MxEsKind )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsKind object;
	object.setParenthesesDegrees( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getParenthesesDegrees();
	CHECK_EQUAL( expected, actual )
	object.setParenthesesDegrees( value2 );
	expected = value2;
	actual = object.getParenthesesDegrees();
	CHECK_EQUAL( expected, actual )
}
TEST( setBracketDegrees4, MxEsKind )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsKind object;
	object.setBracketDegrees( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getBracketDegrees();
	CHECK_EQUAL( expected, actual )
	object.setBracketDegrees( value2 );
	expected = value2;
	actual = object.getBracketDegrees();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX5, MxEsKind )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsKind object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY6, MxEsKind )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsKind object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX7, MxEsKind )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsKind object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY8, MxEsKind )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsKind object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily9, MxEsKind )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEsKind object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle10, MxEsKind )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEsKind object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize11, MxEsKind )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEsKind object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight12, MxEsKind )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEsKind object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor13, MxEsKind )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsKind object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setHalign14, MxEsKind )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxEsKind object;
	object.setHalign( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
	object.setHalign( value2 );
	expected = value2;
	actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
}
TEST( setValign15, MxEsKind )
{
	MxEnumValign value1( lexicon::enums::Valign::baseline );
	MxEnumValign value2( lexicon::enums::Valign::bottom );
	CHECK( ( value1 != value2 ) )
	MxEsKind object;
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

TEST( getIsUseSymbolsRequired0, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsUseSymbolsRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextRequired1, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsTextRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsStackDegreesRequired2, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsStackDegreesRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsParenthesesDegreesRequired3, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsParenthesesDegreesRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBracketDegreesRequired4, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsBracketDegreesRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired5, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired6, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired7, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired8, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired9, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired10, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired11, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired12, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired13, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignRequired14, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsHalignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignRequired15, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsValignRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsUseSymbolsPresent0, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsUseSymbolsPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsUseSymbolsPresent( true );
	expected = true;
	actual = object.getIsUseSymbolsPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsUseSymbolsPresent( false );
	expected = false;
	actual = object.getIsUseSymbolsPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextPresent1, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsTextPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTextPresent( true );
	expected = true;
	actual = object.getIsTextPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTextPresent( false );
	expected = false;
	actual = object.getIsTextPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsStackDegreesPresent2, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsStackDegreesPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsStackDegreesPresent( true );
	expected = true;
	actual = object.getIsStackDegreesPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsStackDegreesPresent( false );
	expected = false;
	actual = object.getIsStackDegreesPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsParenthesesDegreesPresent3, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsParenthesesDegreesPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsParenthesesDegreesPresent( true );
	expected = true;
	actual = object.getIsParenthesesDegreesPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsParenthesesDegreesPresent( false );
	expected = false;
	actual = object.getIsParenthesesDegreesPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBracketDegreesPresent4, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsBracketDegreesPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBracketDegreesPresent( true );
	expected = true;
	actual = object.getIsBracketDegreesPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBracketDegreesPresent( false );
	expected = false;
	actual = object.getIsBracketDegreesPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXPresent5, MxEsKind )
{
	MxEsKind object;
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
TEST( getIsDefaultYPresent6, MxEsKind )
{
	MxEsKind object;
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
TEST( getIsRelativeXPresent7, MxEsKind )
{
	MxEsKind object;
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
TEST( getIsRelativeYPresent8, MxEsKind )
{
	MxEsKind object;
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
TEST( getIsFontFamilyPresent9, MxEsKind )
{
	MxEsKind object;
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
TEST( getIsFontStylePresent10, MxEsKind )
{
	MxEsKind object;
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
TEST( getIsFontSizePresent11, MxEsKind )
{
	MxEsKind object;
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
TEST( getIsFontWeightPresent12, MxEsKind )
{
	MxEsKind object;
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
TEST( getIsColorPresent13, MxEsKind )
{
	MxEsKind object;
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
TEST( getIsHalignPresent14, MxEsKind )
{
	MxEsKind object;
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
TEST( getIsValignPresent15, MxEsKind )
{
	MxEsKind object;
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


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsUseSymbolsDefaultDefined, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsUseSymbolsDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextDefaultDefined, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsTextDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsStackDegreesDefaultDefined, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsStackDegreesDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsParenthesesDegreesDefaultDefined, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsParenthesesDegreesDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBracketDegreesDefaultDefined, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsBracketDegreesDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignDefaultDefined, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsHalignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignDefaultDefined, MxEsKind )
{
	MxEsKind object;
	bool expected = false;
	bool actual = object.getIsValignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getUseSymbolsDefaultValue, MxEsKind )
{
	MxEsKind object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getUseSymbolsDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTextDefaultValue, MxEsKind )
{
	MxEsKind object;
	XsToken expected;
	XsToken actual = object.getTextDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getStackDegreesDefaultValue, MxEsKind )
{
	MxEsKind object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getStackDegreesDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getParenthesesDegreesDefaultValue, MxEsKind )
{
	MxEsKind object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getParenthesesDegreesDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBracketDegreesDefaultValue, MxEsKind )
{
	MxEsKind object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getBracketDegreesDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEsKind )
{
	MxEsKind object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEsKind )
{
	MxEsKind object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEsKind )
{
	MxEsKind object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEsKind )
{
	MxEsKind object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEsKind )
{
	MxEsKind object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEsKind )
{
	MxEsKind object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEsKind )
{
	MxEsKind object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEsKind )
{
	MxEsKind object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsKind )
{
	MxEsKind object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getHalignDefaultValue, MxEsKind )
{
	MxEsKind object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getHalignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValignDefaultValue, MxEsKind )
{
	MxEsKind object;
	MxEnumValign expected;
	MxEnumValign actual = object.getValignDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 397.9 ) );
	object.setDefaultY( MxNumberTenths( 397.9 ) );
	object.setRelativeX( MxNumberTenths( 397.9 ) );
	object.setRelativeY( MxNumberTenths( 397.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
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
	expected = "<kind use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"397.9\" default-y=\"397.9\" relative-x=\"397.9\" relative-y=\"397.9\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#B8B7B6\" halign=\"left\" valign=\"top\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
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
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 398 ) );
	object.setDefaultY( MxNumberTenths( 398 ) );
	object.setRelativeX( MxNumberTenths( 398 ) );
	object.setRelativeY( MxNumberTenths( 398 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"398\" default-y=\"398\" relative-x=\"398\" relative-y=\"398\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#B9BAB9B8\" halign=\"center\" valign=\"middle\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
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
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 398.1 ) );
	object.setDefaultY( MxNumberTenths( 398.1 ) );
	object.setRelativeX( MxNumberTenths( 398.1 ) );
	object.setRelativeY( MxNumberTenths( 398.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"398.1\" default-y=\"398.1\" relative-x=\"398.1\" relative-y=\"398.1\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#BCBBBA\" halign=\"right\" valign=\"bottom\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
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
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 398.2 ) );
	object.setDefaultY( MxNumberTenths( 398.2 ) );
	object.setRelativeX( MxNumberTenths( 398.2 ) );
	object.setRelativeY( MxNumberTenths( 398.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"398.2\" default-y=\"398.2\" relative-x=\"398.2\" relative-y=\"398.2\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#BDBEBDBC\" halign=\"left\" valign=\"baseline\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
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
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 398.3 ) );
	object.setDefaultY( MxNumberTenths( 398.3 ) );
	object.setRelativeX( MxNumberTenths( 398.3 ) );
	object.setRelativeY( MxNumberTenths( 398.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" bracket-degrees=\"yes\" default-x=\"398.3\" default-y=\"398.3\" relative-x=\"398.3\" relative-y=\"398.3\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#C0BFBE\" halign=\"center\" valign=\"top\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
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
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 398.4 ) );
	object.setDefaultY( MxNumberTenths( 398.4 ) );
	object.setRelativeX( MxNumberTenths( 398.4 ) );
	object.setRelativeY( MxNumberTenths( 398.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" default-x=\"398.4\" default-y=\"398.4\" relative-x=\"398.4\" relative-y=\"398.4\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#C1C2C1C0\" halign=\"right\" valign=\"middle\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
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
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 398.5 ) );
	object.setDefaultY( MxNumberTenths( 398.5 ) );
	object.setRelativeX( MxNumberTenths( 398.5 ) );
	object.setRelativeY( MxNumberTenths( 398.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" stack-degrees=\"yes\" default-y=\"398.5\" relative-x=\"398.5\" relative-y=\"398.5\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#C4C3C2\" halign=\"left\" valign=\"bottom\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
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
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 398.6 ) );
	object.setDefaultY( MxNumberTenths( 398.6 ) );
	object.setRelativeX( MxNumberTenths( 398.6 ) );
	object.setRelativeY( MxNumberTenths( 398.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind stack-degrees=\"yes\" relative-x=\"398.6\" relative-y=\"398.6\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#C5C6C5C4\" halign=\"center\" valign=\"baseline\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
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
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 398.7 ) );
	object.setDefaultY( MxNumberTenths( 398.7 ) );
	object.setRelativeX( MxNumberTenths( 398.7 ) );
	object.setRelativeY( MxNumberTenths( 398.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" relative-y=\"398.7\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#C8C7C6\" halign=\"right\" valign=\"top\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( false );
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
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 398.8 ) );
	object.setDefaultY( MxNumberTenths( 398.8 ) );
	object.setRelativeX( MxNumberTenths( 398.8 ) );
	object.setRelativeY( MxNumberTenths( 398.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" parentheses-degrees=\"yes\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#C9CAC9C8\" halign=\"left\" valign=\"middle\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
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
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 398.9 ) );
	object.setDefaultY( MxNumberTenths( 398.9 ) );
	object.setRelativeX( MxNumberTenths( 398.9 ) );
	object.setRelativeY( MxNumberTenths( 398.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#CCCBCA\" halign=\"center\" valign=\"bottom\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 399 ) );
	object.setDefaultY( MxNumberTenths( 399 ) );
	object.setRelativeX( MxNumberTenths( 399 ) );
	object.setRelativeY( MxNumberTenths( 399 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind parentheses-degrees=\"yes\" bracket-degrees=\"yes\" font-size=\"large\" font-weight=\"normal\" color=\"#CDCECDCC\" halign=\"right\" valign=\"baseline\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 399.1 ) );
	object.setDefaultY( MxNumberTenths( 399.1 ) );
	object.setRelativeX( MxNumberTenths( 399.1 ) );
	object.setRelativeY( MxNumberTenths( 399.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"399.1\" font-weight=\"bold\" color=\"#D0CFCE\" halign=\"left\" valign=\"top\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 399.2 ) );
	object.setDefaultY( MxNumberTenths( 399.2 ) );
	object.setRelativeX( MxNumberTenths( 399.2 ) );
	object.setRelativeY( MxNumberTenths( 399.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"399.2\" color=\"#D1D2D1D0\" halign=\"center\" valign=\"middle\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 399.3 ) );
	object.setDefaultY( MxNumberTenths( 399.3 ) );
	object.setRelativeX( MxNumberTenths( 399.3 ) );
	object.setRelativeY( MxNumberTenths( 399.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"399.3\" default-y=\"399.3\" halign=\"right\" valign=\"bottom\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 399.4 ) );
	object.setDefaultY( MxNumberTenths( 399.4 ) );
	object.setRelativeX( MxNumberTenths( 399.4 ) );
	object.setRelativeY( MxNumberTenths( 399.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind default-x=\"399.4\" default-y=\"399.4\" valign=\"baseline\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 399.5 ) );
	object.setDefaultY( MxNumberTenths( 399.5 ) );
	object.setRelativeX( MxNumberTenths( 399.5 ) );
	object.setRelativeY( MxNumberTenths( 399.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" parentheses-degrees=\"yes\" default-x=\"399.5\" default-y=\"399.5\" relative-x=\"399.5\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 399.6 ) );
	object.setDefaultY( MxNumberTenths( 399.6 ) );
	object.setRelativeX( MxNumberTenths( 399.6 ) );
	object.setRelativeY( MxNumberTenths( 399.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" parentheses-degrees=\"yes\" default-x=\"399.6\" default-y=\"399.6\" relative-x=\"399.6\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 399.7 ) );
	object.setDefaultY( MxNumberTenths( 399.7 ) );
	object.setRelativeX( MxNumberTenths( 399.7 ) );
	object.setRelativeY( MxNumberTenths( 399.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-y=\"399.7\" relative-x=\"399.7\" relative-y=\"399.7\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 399.8 ) );
	object.setDefaultY( MxNumberTenths( 399.8 ) );
	object.setRelativeX( MxNumberTenths( 399.8 ) );
	object.setRelativeY( MxNumberTenths( 399.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-y=\"399.8\" relative-x=\"399.8\" relative-y=\"399.8\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 399.9 ) );
	object.setDefaultY( MxNumberTenths( 399.9 ) );
	object.setRelativeX( MxNumberTenths( 399.9 ) );
	object.setRelativeY( MxNumberTenths( 399.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"399.9\" relative-x=\"399.9\" relative-y=\"399.9\" font-family=\"XYZ\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
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
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 400 ) );
	object.setDefaultY( MxNumberTenths( 400 ) );
	object.setRelativeX( MxNumberTenths( 400 ) );
	object.setRelativeY( MxNumberTenths( 400 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" bracket-degrees=\"yes\" relative-x=\"400\" relative-y=\"400\" font-family=\"ABC\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 400.1 ) );
	object.setDefaultY( MxNumberTenths( 400.1 ) );
	object.setRelativeX( MxNumberTenths( 400.1 ) );
	object.setRelativeY( MxNumberTenths( 400.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" bracket-degrees=\"yes\" relative-x=\"400.1\" relative-y=\"400.1\" font-family=\"DEF\" font-style=\"italic\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 400.2 ) );
	object.setDefaultY( MxNumberTenths( 400.2 ) );
	object.setRelativeX( MxNumberTenths( 400.2 ) );
	object.setRelativeY( MxNumberTenths( 400.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind bracket-degrees=\"yes\" relative-x=\"400.2\" relative-y=\"400.2\" font-family=\"XYZ\" font-style=\"normal\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 400.3 ) );
	object.setDefaultY( MxNumberTenths( 400.3 ) );
	object.setRelativeX( MxNumberTenths( 400.3 ) );
	object.setRelativeY( MxNumberTenths( 400.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"400.3\" relative-y=\"400.3\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 400.4 ) );
	object.setDefaultY( MxNumberTenths( 400.4 ) );
	object.setRelativeX( MxNumberTenths( 400.4 ) );
	object.setRelativeY( MxNumberTenths( 400.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-x=\"400.4\" relative-y=\"400.4\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 400.5 ) );
	object.setDefaultY( MxNumberTenths( 400.5 ) );
	object.setRelativeX( MxNumberTenths( 400.5 ) );
	object.setRelativeY( MxNumberTenths( 400.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-x=\"400.5\" relative-y=\"400.5\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 400.6 ) );
	object.setDefaultY( MxNumberTenths( 400.6 ) );
	object.setRelativeX( MxNumberTenths( 400.6 ) );
	object.setRelativeY( MxNumberTenths( 400.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind parentheses-degrees=\"yes\" default-x=\"400.6\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 400.7 ) );
	object.setDefaultY( MxNumberTenths( 400.7 ) );
	object.setRelativeX( MxNumberTenths( 400.7 ) );
	object.setRelativeY( MxNumberTenths( 400.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" default-x=\"400.7\" default-y=\"400.7\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F0EFEE\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 400.8 ) );
	object.setDefaultY( MxNumberTenths( 400.8 ) );
	object.setRelativeX( MxNumberTenths( 400.8 ) );
	object.setRelativeY( MxNumberTenths( 400.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" default-x=\"400.8\" default-y=\"400.8\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#F1F2F1F0\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
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
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 400.9 ) );
	object.setDefaultY( MxNumberTenths( 400.9 ) );
	object.setRelativeX( MxNumberTenths( 400.9 ) );
	object.setRelativeY( MxNumberTenths( 400.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"400.9\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F4F3F2\" halign=\"left\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
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
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 401 ) );
	object.setDefaultY( MxNumberTenths( 401 ) );
	object.setRelativeX( MxNumberTenths( 401 ) );
	object.setRelativeY( MxNumberTenths( 401 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind stack-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"401\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#F5F6F5F4\" halign=\"center\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 401.1 ) );
	object.setDefaultY( MxNumberTenths( 401.1 ) );
	object.setRelativeX( MxNumberTenths( 401.1 ) );
	object.setRelativeY( MxNumberTenths( 401.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"401.1\" relative-x=\"401.1\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F8F7F6\" halign=\"right\" valign=\"top\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 401.2 ) );
	object.setDefaultY( MxNumberTenths( 401.2 ) );
	object.setRelativeX( MxNumberTenths( 401.2 ) );
	object.setRelativeY( MxNumberTenths( 401.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"401.2\" relative-x=\"401.2\" font-size=\"large\" font-weight=\"normal\" color=\"#F9FAF9F8\" halign=\"left\" valign=\"middle\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 401.3 ) );
	object.setDefaultY( MxNumberTenths( 401.3 ) );
	object.setRelativeX( MxNumberTenths( 401.3 ) );
	object.setRelativeY( MxNumberTenths( 401.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"401.3\" relative-x=\"401.3\" font-size=\"1.1\" font-weight=\"bold\" color=\"#FCFBFA\" halign=\"center\" valign=\"bottom\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 401.4 ) );
	object.setDefaultY( MxNumberTenths( 401.4 ) );
	object.setRelativeX( MxNumberTenths( 401.4 ) );
	object.setRelativeY( MxNumberTenths( 401.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind parentheses-degrees=\"yes\" relative-x=\"401.4\" font-size=\"large\" font-weight=\"normal\" color=\"#FDFEFDFC\" halign=\"right\" valign=\"baseline\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 401.5 ) );
	object.setDefaultY( MxNumberTenths( 401.5 ) );
	object.setRelativeX( MxNumberTenths( 401.5 ) );
	object.setRelativeY( MxNumberTenths( 401.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" default-x=\"401.5\" relative-x=\"401.5\" relative-y=\"401.5\" font-weight=\"bold\" color=\"#00FFFE\" halign=\"left\" valign=\"top\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 401.6 ) );
	object.setDefaultY( MxNumberTenths( 401.6 ) );
	object.setRelativeX( MxNumberTenths( 401.6 ) );
	object.setRelativeY( MxNumberTenths( 401.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" stack-degrees=\"yes\" default-x=\"401.6\" relative-x=\"401.6\" relative-y=\"401.6\" font-weight=\"normal\" color=\"#01020100\" halign=\"center\" valign=\"middle\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 401.7 ) );
	object.setDefaultY( MxNumberTenths( 401.7 ) );
	object.setRelativeX( MxNumberTenths( 401.7 ) );
	object.setRelativeY( MxNumberTenths( 401.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#040302" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" stack-degrees=\"yes\" default-x=\"401.7\" relative-x=\"401.7\" relative-y=\"401.7\" font-weight=\"bold\" color=\"#040302\" halign=\"right\" valign=\"bottom\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 401.8 ) );
	object.setDefaultY( MxNumberTenths( 401.8 ) );
	object.setRelativeX( MxNumberTenths( 401.8 ) );
	object.setRelativeY( MxNumberTenths( 401.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind default-x=\"401.8\" relative-x=\"401.8\" relative-y=\"401.8\" color=\"#05060504\" halign=\"left\" valign=\"baseline\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 401.9 ) );
	object.setDefaultY( MxNumberTenths( 401.9 ) );
	object.setRelativeX( MxNumberTenths( 401.9 ) );
	object.setRelativeY( MxNumberTenths( 401.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#080706" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"401.9\" relative-y=\"401.9\" font-family=\"DEF\" color=\"#080706\" halign=\"center\" valign=\"top\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 402 ) );
	object.setDefaultY( MxNumberTenths( 402 ) );
	object.setRelativeX( MxNumberTenths( 402 ) );
	object.setRelativeY( MxNumberTenths( 402 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"402\" relative-y=\"402\" font-family=\"XYZ\" color=\"#090A0908\" halign=\"right\" valign=\"middle\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 402.1 ) );
	object.setDefaultY( MxNumberTenths( 402.1 ) );
	object.setRelativeX( MxNumberTenths( 402.1 ) );
	object.setRelativeY( MxNumberTenths( 402.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"402.1\" relative-y=\"402.1\" font-family=\"ABC\" halign=\"left\" valign=\"bottom\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 402.2 ) );
	object.setDefaultY( MxNumberTenths( 402.2 ) );
	object.setRelativeX( MxNumberTenths( 402.2 ) );
	object.setRelativeY( MxNumberTenths( 402.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"402.2\" relative-y=\"402.2\" font-family=\"DEF\" halign=\"center\" valign=\"baseline\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
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
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 402.3 ) );
	object.setDefaultY( MxNumberTenths( 402.3 ) );
	object.setRelativeX( MxNumberTenths( 402.3 ) );
	object.setRelativeY( MxNumberTenths( 402.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"402.3\" relative-y=\"402.3\" font-family=\"XYZ\" font-style=\"italic\" halign=\"right\" valign=\"top\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 402.4 ) );
	object.setDefaultY( MxNumberTenths( 402.4 ) );
	object.setRelativeX( MxNumberTenths( 402.4 ) );
	object.setRelativeY( MxNumberTenths( 402.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" default-y=\"402.4\" font-family=\"ABC\" font-style=\"normal\" valign=\"middle\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 402.5 ) );
	object.setDefaultY( MxNumberTenths( 402.5 ) );
	object.setRelativeX( MxNumberTenths( 402.5 ) );
	object.setRelativeY( MxNumberTenths( 402.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#141312" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" default-y=\"402.5\" font-family=\"DEF\" font-style=\"italic\" valign=\"bottom\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 402.6 ) );
	object.setDefaultY( MxNumberTenths( 402.6 ) );
	object.setRelativeX( MxNumberTenths( 402.6 ) );
	object.setRelativeY( MxNumberTenths( 402.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind default-y=\"402.6\" font-family=\"XYZ\" font-style=\"normal\" valign=\"baseline\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 402.7 ) );
	object.setDefaultY( MxNumberTenths( 402.7 ) );
	object.setRelativeX( MxNumberTenths( 402.7 ) );
	object.setRelativeY( MxNumberTenths( 402.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-x=\"402.7\" default-y=\"402.7\" relative-x=\"402.7\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
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
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 402.8 ) );
	object.setDefaultY( MxNumberTenths( 402.8 ) );
	object.setRelativeX( MxNumberTenths( 402.8 ) );
	object.setRelativeY( MxNumberTenths( 402.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-x=\"402.8\" relative-x=\"402.8\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 402.9 ) );
	object.setDefaultY( MxNumberTenths( 402.9 ) );
	object.setRelativeX( MxNumberTenths( 402.9 ) );
	object.setRelativeY( MxNumberTenths( 402.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"402.9\" relative-x=\"402.9\" font-style=\"italic\" font-size=\"1.1\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 403 ) );
	object.setDefaultY( MxNumberTenths( 403 ) );
	object.setRelativeX( MxNumberTenths( 403 ) );
	object.setRelativeY( MxNumberTenths( 403 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"403\" relative-x=\"403\" font-style=\"normal\" font-size=\"large\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( true );
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
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 403.1 ) );
	object.setDefaultY( MxNumberTenths( 403.1 ) );
	object.setRelativeX( MxNumberTenths( 403.1 ) );
	object.setRelativeY( MxNumberTenths( 403.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" bracket-degrees=\"yes\" default-x=\"403.1\" relative-x=\"403.1\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( true );
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
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 403.2 ) );
	object.setDefaultY( MxNumberTenths( 403.2 ) );
	object.setRelativeX( MxNumberTenths( 403.2 ) );
	object.setRelativeY( MxNumberTenths( 403.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" bracket-degrees=\"yes\" default-x=\"403.2\" relative-x=\"403.2\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 403.3 ) );
	object.setDefaultY( MxNumberTenths( 403.3 ) );
	object.setRelativeX( MxNumberTenths( 403.3 ) );
	object.setRelativeY( MxNumberTenths( 403.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#242322" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" stack-degrees=\"yes\" bracket-degrees=\"yes\" relative-x=\"403.3\" relative-y=\"403.3\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 403.4 ) );
	object.setDefaultY( MxNumberTenths( 403.4 ) );
	object.setRelativeX( MxNumberTenths( 403.4 ) );
	object.setRelativeY( MxNumberTenths( 403.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind stack-degrees=\"yes\" relative-x=\"403.4\" relative-y=\"403.4\" font-size=\"large\" font-weight=\"normal\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 403.5 ) );
	object.setDefaultY( MxNumberTenths( 403.5 ) );
	object.setRelativeX( MxNumberTenths( 403.5 ) );
	object.setRelativeY( MxNumberTenths( 403.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#282726" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-y=\"403.5\" relative-y=\"403.5\" font-size=\"1.1\" font-weight=\"bold\" color=\"#282726\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 403.6 ) );
	object.setDefaultY( MxNumberTenths( 403.6 ) );
	object.setRelativeX( MxNumberTenths( 403.6 ) );
	object.setRelativeY( MxNumberTenths( 403.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" parentheses-degrees=\"yes\" default-y=\"403.6\" relative-y=\"403.6\" font-size=\"large\" font-weight=\"normal\" color=\"#292A2928\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 403.7 ) );
	object.setDefaultY( MxNumberTenths( 403.7 ) );
	object.setRelativeX( MxNumberTenths( 403.7 ) );
	object.setRelativeY( MxNumberTenths( 403.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" parentheses-degrees=\"yes\" default-y=\"403.7\" relative-y=\"403.7\" font-size=\"1.1\" font-weight=\"bold\" color=\"#2C2B2A\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 403.8 ) );
	object.setDefaultY( MxNumberTenths( 403.8 ) );
	object.setRelativeX( MxNumberTenths( 403.8 ) );
	object.setRelativeY( MxNumberTenths( 403.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind parentheses-degrees=\"yes\" default-y=\"403.8\" relative-y=\"403.8\" font-size=\"large\" font-weight=\"normal\" color=\"#2D2E2D2C\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 403.9 ) );
	object.setDefaultY( MxNumberTenths( 403.9 ) );
	object.setRelativeX( MxNumberTenths( 403.9 ) );
	object.setRelativeY( MxNumberTenths( 403.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"403.9\" default-y=\"403.9\" relative-y=\"403.9\" font-family=\"ABC\" font-weight=\"bold\" color=\"#302F2E\" halign=\"left\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 404 ) );
	object.setDefaultY( MxNumberTenths( 404 ) );
	object.setRelativeX( MxNumberTenths( 404 ) );
	object.setRelativeY( MxNumberTenths( 404 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"404\" default-y=\"404\" relative-y=\"404\" font-family=\"DEF\" font-weight=\"normal\" color=\"#31323130\" halign=\"center\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 404.1 ) );
	object.setDefaultY( MxNumberTenths( 404.1 ) );
	object.setRelativeX( MxNumberTenths( 404.1 ) );
	object.setRelativeY( MxNumberTenths( 404.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"404.1\" default-y=\"404.1\" relative-y=\"404.1\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#343332\" halign=\"right\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 404.2 ) );
	object.setDefaultY( MxNumberTenths( 404.2 ) );
	object.setRelativeX( MxNumberTenths( 404.2 ) );
	object.setRelativeY( MxNumberTenths( 404.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind bracket-degrees=\"yes\" default-x=\"404.2\" font-family=\"ABC\" font-weight=\"normal\" color=\"#35363534\" halign=\"left\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 404.3 ) );
	object.setDefaultY( MxNumberTenths( 404.3 ) );
	object.setRelativeX( MxNumberTenths( 404.3 ) );
	object.setRelativeY( MxNumberTenths( 404.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"404.3\" relative-x=\"404.3\" font-family=\"DEF\" font-weight=\"bold\" color=\"#383736\" halign=\"center\" valign=\"top\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
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
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 404.4 ) );
	object.setDefaultY( MxNumberTenths( 404.4 ) );
	object.setRelativeX( MxNumberTenths( 404.4 ) );
	object.setRelativeY( MxNumberTenths( 404.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" parentheses-degrees=\"yes\" default-x=\"404.4\" relative-x=\"404.4\" font-family=\"XYZ\" color=\"#393A3938\" halign=\"right\" valign=\"middle\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 404.5 ) );
	object.setDefaultY( MxNumberTenths( 404.5 ) );
	object.setRelativeX( MxNumberTenths( 404.5 ) );
	object.setRelativeY( MxNumberTenths( 404.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" relative-x=\"404.5\" font-family=\"ABC\" font-style=\"italic\" color=\"#3C3B3A\" halign=\"left\" valign=\"bottom\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 404.6 ) );
	object.setDefaultY( MxNumberTenths( 404.6 ) );
	object.setRelativeX( MxNumberTenths( 404.6 ) );
	object.setRelativeY( MxNumberTenths( 404.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind stack-degrees=\"yes\" parentheses-degrees=\"yes\" relative-x=\"404.6\" font-family=\"DEF\" font-style=\"normal\" color=\"#3D3E3D3C\" halign=\"center\" valign=\"baseline\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 404.7 ) );
	object.setDefaultY( MxNumberTenths( 404.7 ) );
	object.setRelativeX( MxNumberTenths( 404.7 ) );
	object.setRelativeY( MxNumberTenths( 404.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" relative-x=\"404.7\" font-family=\"XYZ\" font-style=\"italic\" color=\"#403F3E\" halign=\"right\" valign=\"top\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 404.8 ) );
	object.setDefaultY( MxNumberTenths( 404.8 ) );
	object.setRelativeX( MxNumberTenths( 404.8 ) );
	object.setRelativeY( MxNumberTenths( 404.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" relative-x=\"404.8\" font-family=\"ABC\" font-style=\"normal\" color=\"#41424140\" halign=\"left\" valign=\"middle\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 404.9 ) );
	object.setDefaultY( MxNumberTenths( 404.9 ) );
	object.setRelativeX( MxNumberTenths( 404.9 ) );
	object.setRelativeY( MxNumberTenths( 404.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" bracket-degrees=\"yes\" default-y=\"404.9\" relative-x=\"404.9\" font-style=\"italic\" halign=\"center\" valign=\"bottom\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 405 ) );
	object.setDefaultY( MxNumberTenths( 405 ) );
	object.setRelativeX( MxNumberTenths( 405 ) );
	object.setRelativeY( MxNumberTenths( 405 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind bracket-degrees=\"yes\" default-y=\"405\" relative-x=\"405\" font-style=\"normal\" halign=\"right\" valign=\"baseline\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 405.1 ) );
	object.setDefaultY( MxNumberTenths( 405.1 ) );
	object.setRelativeX( MxNumberTenths( 405.1 ) );
	object.setRelativeY( MxNumberTenths( 405.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"405.1\" default-y=\"405.1\" relative-y=\"405.1\" font-style=\"italic\" font-size=\"1.1\" halign=\"left\" valign=\"top\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 405.2 ) );
	object.setDefaultY( MxNumberTenths( 405.2 ) );
	object.setRelativeX( MxNumberTenths( 405.2 ) );
	object.setRelativeY( MxNumberTenths( 405.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"405.2\" default-y=\"405.2\" relative-y=\"405.2\" font-style=\"normal\" font-size=\"large\" halign=\"center\" valign=\"middle\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 405.3 ) );
	object.setDefaultY( MxNumberTenths( 405.3 ) );
	object.setRelativeX( MxNumberTenths( 405.3 ) );
	object.setRelativeY( MxNumberTenths( 405.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"405.3\" default-y=\"405.3\" relative-y=\"405.3\" font-style=\"italic\" font-size=\"1.1\" halign=\"right\" valign=\"bottom\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 405.4 ) );
	object.setDefaultY( MxNumberTenths( 405.4 ) );
	object.setRelativeX( MxNumberTenths( 405.4 ) );
	object.setRelativeY( MxNumberTenths( 405.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind parentheses-degrees=\"yes\" default-x=\"405.4\" default-y=\"405.4\" relative-y=\"405.4\" font-style=\"normal\" font-size=\"large\" valign=\"baseline\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 405.5 ) );
	object.setDefaultY( MxNumberTenths( 405.5 ) );
	object.setRelativeX( MxNumberTenths( 405.5 ) );
	object.setRelativeY( MxNumberTenths( 405.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" default-x=\"405.5\" default-y=\"405.5\" relative-y=\"405.5\" font-style=\"italic\" font-size=\"1.1\" valign=\"top\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 405.6 ) );
	object.setDefaultY( MxNumberTenths( 405.6 ) );
	object.setRelativeX( MxNumberTenths( 405.6 ) );
	object.setRelativeY( MxNumberTenths( 405.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" default-x=\"405.6\" relative-y=\"405.6\" font-size=\"large\" valign=\"middle\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 405.7 ) );
	object.setDefaultY( MxNumberTenths( 405.7 ) );
	object.setRelativeX( MxNumberTenths( 405.7 ) );
	object.setRelativeY( MxNumberTenths( 405.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#545352" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" stack-degrees=\"yes\" relative-y=\"405.7\" font-size=\"1.1\" font-weight=\"bold\" valign=\"bottom\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 405.8 ) );
	object.setDefaultY( MxNumberTenths( 405.8 ) );
	object.setRelativeX( MxNumberTenths( 405.8 ) );
	object.setRelativeY( MxNumberTenths( 405.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind stack-degrees=\"yes\" relative-y=\"405.8\" font-size=\"large\" font-weight=\"normal\" valign=\"baseline\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 405.9 ) );
	object.setDefaultY( MxNumberTenths( 405.9 ) );
	object.setRelativeX( MxNumberTenths( 405.9 ) );
	object.setRelativeY( MxNumberTenths( 405.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#585756" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" relative-x=\"405.9\" relative-y=\"405.9\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 406 ) );
	object.setDefaultY( MxNumberTenths( 406 ) );
	object.setRelativeX( MxNumberTenths( 406 ) );
	object.setRelativeY( MxNumberTenths( 406 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" relative-x=\"406\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 406.1 ) );
	object.setDefaultY( MxNumberTenths( 406.1 ) );
	object.setRelativeX( MxNumberTenths( 406.1 ) );
	object.setRelativeY( MxNumberTenths( 406.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" relative-x=\"406.1\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 406.2 ) );
	object.setDefaultY( MxNumberTenths( 406.2 ) );
	object.setRelativeX( MxNumberTenths( 406.2 ) );
	object.setRelativeY( MxNumberTenths( 406.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind parentheses-degrees=\"yes\" bracket-degrees=\"yes\" relative-x=\"406.2\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 406.3 ) );
	object.setDefaultY( MxNumberTenths( 406.3 ) );
	object.setRelativeX( MxNumberTenths( 406.3 ) );
	object.setRelativeY( MxNumberTenths( 406.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"406.3\" default-y=\"406.3\" relative-x=\"406.3\" font-family=\"ABC\" font-weight=\"bold\" color=\"#605F5E\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 406.4 ) );
	object.setDefaultY( MxNumberTenths( 406.4 ) );
	object.setRelativeX( MxNumberTenths( 406.4 ) );
	object.setRelativeY( MxNumberTenths( 406.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" stack-degrees=\"yes\" default-x=\"406.4\" default-y=\"406.4\" relative-x=\"406.4\" font-family=\"DEF\" font-weight=\"normal\" color=\"#61626160\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 406.5 ) );
	object.setDefaultY( MxNumberTenths( 406.5 ) );
	object.setRelativeX( MxNumberTenths( 406.5 ) );
	object.setRelativeY( MxNumberTenths( 406.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#646362" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" stack-degrees=\"yes\" default-x=\"406.5\" default-y=\"406.5\" relative-x=\"406.5\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#646362\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 406.6 ) );
	object.setDefaultY( MxNumberTenths( 406.6 ) );
	object.setRelativeX( MxNumberTenths( 406.6 ) );
	object.setRelativeY( MxNumberTenths( 406.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind default-x=\"406.6\" default-y=\"406.6\" relative-x=\"406.6\" font-family=\"ABC\" font-weight=\"normal\" color=\"#65666564\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 406.7 ) );
	object.setDefaultY( MxNumberTenths( 406.7 ) );
	object.setRelativeX( MxNumberTenths( 406.7 ) );
	object.setRelativeY( MxNumberTenths( 406.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#686766" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" parentheses-degrees=\"yes\" default-x=\"406.7\" default-y=\"406.7\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" color=\"#686766\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 406.8 ) );
	object.setDefaultY( MxNumberTenths( 406.8 ) );
	object.setRelativeX( MxNumberTenths( 406.8 ) );
	object.setRelativeY( MxNumberTenths( 406.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" parentheses-degrees=\"yes\" default-x=\"406.8\" default-y=\"406.8\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" color=\"#696A6968\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
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
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 406.9 ) );
	object.setDefaultY( MxNumberTenths( 406.9 ) );
	object.setRelativeX( MxNumberTenths( 406.9 ) );
	object.setRelativeY( MxNumberTenths( 406.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"406.9\" relative-y=\"406.9\" font-style=\"italic\" font-weight=\"bold\" color=\"#6C6B6A\" halign=\"left\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 407 ) );
	object.setDefaultY( MxNumberTenths( 407 ) );
	object.setRelativeX( MxNumberTenths( 407 ) );
	object.setRelativeY( MxNumberTenths( 407 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" relative-y=\"407\" font-style=\"normal\" color=\"#6D6E6D6C\" halign=\"center\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 407.1 ) );
	object.setDefaultY( MxNumberTenths( 407.1 ) );
	object.setRelativeX( MxNumberTenths( 407.1 ) );
	object.setRelativeY( MxNumberTenths( 407.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" bracket-degrees=\"yes\" relative-y=\"407.1\" font-style=\"italic\" color=\"#706F6E\" halign=\"right\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 407.2 ) );
	object.setDefaultY( MxNumberTenths( 407.2 ) );
	object.setRelativeX( MxNumberTenths( 407.2 ) );
	object.setRelativeY( MxNumberTenths( 407.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" bracket-degrees=\"yes\" relative-y=\"407.2\" font-style=\"normal\" color=\"#71727170\" halign=\"left\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 407.3 ) );
	object.setDefaultY( MxNumberTenths( 407.3 ) );
	object.setRelativeX( MxNumberTenths( 407.3 ) );
	object.setRelativeY( MxNumberTenths( 407.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#747372" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" bracket-degrees=\"yes\" relative-y=\"407.3\" font-style=\"italic\" color=\"#747372\" halign=\"center\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 407.4 ) );
	object.setDefaultY( MxNumberTenths( 407.4 ) );
	object.setRelativeX( MxNumberTenths( 407.4 ) );
	object.setRelativeY( MxNumberTenths( 407.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind relative-y=\"407.4\" font-style=\"normal\" color=\"#75767574\" halign=\"right\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 407.5 ) );
	object.setDefaultY( MxNumberTenths( 407.5 ) );
	object.setRelativeX( MxNumberTenths( 407.5 ) );
	object.setRelativeY( MxNumberTenths( 407.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#787776" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-x=\"407.5\" relative-x=\"407.5\" relative-y=\"407.5\" font-style=\"italic\" font-size=\"1.1\" color=\"#787776\" halign=\"left\" valign=\"top\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( true );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 407.6 ) );
	object.setDefaultY( MxNumberTenths( 407.6 ) );
	object.setRelativeX( MxNumberTenths( 407.6 ) );
	object.setRelativeY( MxNumberTenths( 407.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<kind text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-x=\"407.6\" relative-x=\"407.6\" relative-y=\"407.6\" font-style=\"normal\" font-size=\"large\" color=\"#797A7978\" halign=\"center\" valign=\"middle\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( true );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( true );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
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
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 407.7 ) );
	object.setDefaultY( MxNumberTenths( 407.7 ) );
	object.setRelativeX( MxNumberTenths( 407.7 ) );
	object.setRelativeY( MxNumberTenths( 407.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<kind use-symbols=\"yes\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-x=\"407.7\" default-y=\"407.7\" relative-x=\"407.7\" relative-y=\"407.7\" font-style=\"italic\" font-size=\"1.1\" halign=\"right\" valign=\"bottom\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( true );
	object.setIsBracketDegreesPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 407.8 ) );
	object.setDefaultY( MxNumberTenths( 407.8 ) );
	object.setRelativeX( MxNumberTenths( 407.8 ) );
	object.setRelativeY( MxNumberTenths( 407.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<kind parentheses-degrees=\"yes\" default-x=\"407.8\" default-y=\"407.8\" relative-x=\"407.8\" font-size=\"large\" halign=\"left\" valign=\"baseline\">major-minor</kind>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEsKind )
{
	MxEsKind object( lexicon::enums::KindValue::majorMinor );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setIsTextPresent( false );
	object.setIsStackDegreesPresent( false );
	object.setIsParenthesesDegreesPresent( false );
	object.setIsBracketDegreesPresent( false );
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
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 407.9 ) );
	object.setDefaultY( MxNumberTenths( 407.9 ) );
	object.setRelativeX( MxNumberTenths( 407.9 ) );
	object.setRelativeY( MxNumberTenths( 407.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<kind>major-minor</kind>";
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


