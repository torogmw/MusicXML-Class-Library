/** *******************************************************
  * 
  * MxCxSmpKindTest.cpp
  * Created: 2014-12-02 17:31:52
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpKind.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpKind )
{
	MxCxSmpKind object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpKind )
{
	MxCxSmpKind object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getUseSymbols().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpKind )
{
	MxCxSmpKind object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getText().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpKind )
{
	MxCxSmpKind object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getStackDegrees().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpKind )
{
	MxCxSmpKind object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getParenthesesDegrees().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpKind )
{
	MxCxSmpKind object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getBracketDegrees().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpKind )
{
	MxCxSmpKind object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpKind )
{
	MxCxSmpKind object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxSmpKind )
{
	MxCxSmpKind object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxSmpKind )
{
	MxCxSmpKind object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxSmpKind )
{
	MxCxSmpKind object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxSmpKind )
{
	MxCxSmpKind object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxSmpKind )
{
	MxCxSmpKind object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxCxSmpKind )
{
	MxCxSmpKind object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxCxSmpKind )
{
	MxCxSmpKind object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues14, MxCxSmpKind )
{
	MxCxSmpKind object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getHalign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues15, MxCxSmpKind )
{
	MxCxSmpKind object;
	std::string expected = ( MxEnumValign(  ) ).toString();
	std::string actual = object.getValign().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::major ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "major";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumKindValue( lexicon::enums::KindValue::minor ) );
	expected = "minor";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::augmented ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "augmented";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumKindValue( lexicon::enums::KindValue::diminished ) );
	expected = "diminished";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::dominant ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "dominant";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumKindValue( lexicon::enums::KindValue::majorSeventh ) );
	expected = "major-seventh";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::minorSeventh ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "minor-seventh";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumKindValue( lexicon::enums::KindValue::diminishedSeventh ) );
	expected = "diminished-seventh";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::augmentedSeventh ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
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

TEST( getClassName, MxCxSmpKind )
{
	MxCxSmpKind object;
	std::string expected = "MxCxSmpKind";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpKind )
{
	MxCxSmpKind object;
	std::string expected = "kind";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpKind )
{
	MxCxSmpKind object;
	std::string expected = "Kind indicates the type of chord. Degree elements can then add, subtract, or alter from these starting points The attributes are used to indicate the formatting of the symbol. Since the kind element is the constant in all the harmony-chord groups that can make up a polychord, many formatting attributes are here. The use-symbols attribute is yes if the kind should be represented when possible with harmony symbols rather than letters and numbers. These symbols include: major: a triangle, like Unicode 25B3 minor: -, like Unicode 002D augmented: +, like Unicode 002B diminished: , like Unicode 00B0 half-diminished: , like Unicode 00F8 For the major-minor kind, only the minor symbol is used when use-symbols is yes. The major symbol is set using the symbol attribute in the degree-value element. The corresponding degree-alter value will usually be 0 in this case. The text attribute describes how the kind should be spelled in a score. If use-symbols is yes, the value of the text attribute follows the symbol. The stack-degrees attribute is yes if the degree elements should be stacked above each other. The parentheses-degrees attribute is yes if all the degrees should be in parentheses. The bracket-degrees attribute is yes if all the degrees should be in a bracket. If not specified, these values are implementation-specific. The alignment attributes are for the entire harmony-chord group of which this kind element is a part.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setUseSymbols0, MxCxSmpKind )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpKind object;
	object.setUseSymbols( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getUseSymbols();
	CHECK_EQUAL( expected, actual )
	object.setUseSymbols( value2 );
	expected = value2;
	actual = object.getUseSymbols();
	CHECK_EQUAL( expected, actual )
}
TEST( setText1, MxCxSmpKind )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpKind object;
	object.setText( value1 );
	XsToken expected = value1;
	XsToken actual = object.getText();
	CHECK_EQUAL( expected, actual )
	object.setText( value2 );
	expected = value2;
	actual = object.getText();
	CHECK_EQUAL( expected, actual )
}
TEST( setStackDegrees2, MxCxSmpKind )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpKind object;
	object.setStackDegrees( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getStackDegrees();
	CHECK_EQUAL( expected, actual )
	object.setStackDegrees( value2 );
	expected = value2;
	actual = object.getStackDegrees();
	CHECK_EQUAL( expected, actual )
}
TEST( setParenthesesDegrees3, MxCxSmpKind )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpKind object;
	object.setParenthesesDegrees( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getParenthesesDegrees();
	CHECK_EQUAL( expected, actual )
	object.setParenthesesDegrees( value2 );
	expected = value2;
	actual = object.getParenthesesDegrees();
	CHECK_EQUAL( expected, actual )
}
TEST( setBracketDegrees4, MxCxSmpKind )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpKind object;
	object.setBracketDegrees( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getBracketDegrees();
	CHECK_EQUAL( expected, actual )
	object.setBracketDegrees( value2 );
	expected = value2;
	actual = object.getBracketDegrees();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX5, MxCxSmpKind )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpKind object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY6, MxCxSmpKind )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpKind object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX7, MxCxSmpKind )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpKind object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY8, MxCxSmpKind )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpKind object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily9, MxCxSmpKind )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpKind object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle10, MxCxSmpKind )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpKind object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize11, MxCxSmpKind )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpKind object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight12, MxCxSmpKind )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpKind object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor13, MxCxSmpKind )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpKind object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setHalign14, MxCxSmpKind )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxCxSmpKind object;
	object.setHalign( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
	object.setHalign( value2 );
	expected = value2;
	actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
}
TEST( setValign15, MxCxSmpKind )
{
	MxEnumValign value1( lexicon::enums::Valign::baseline );
	MxEnumValign value2( lexicon::enums::Valign::bottom );
	CHECK( ( value1 != value2 ) )
	MxCxSmpKind object;
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

TEST( getIsUseSymbolsRequired0, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsUseSymbolsRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextRequired1, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsTextRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsStackDegreesRequired2, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsStackDegreesRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsParenthesesDegreesRequired3, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsParenthesesDegreesRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBracketDegreesRequired4, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsBracketDegreesRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired5, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired6, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired7, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired8, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired9, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired10, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired11, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired12, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired13, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignRequired14, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsHalignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignRequired15, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsValignRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsUseSymbolsPresent0, MxCxSmpKind )
{
	MxCxSmpKind object;
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
TEST( getIsTextPresent1, MxCxSmpKind )
{
	MxCxSmpKind object;
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
TEST( getIsStackDegreesPresent2, MxCxSmpKind )
{
	MxCxSmpKind object;
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
TEST( getIsParenthesesDegreesPresent3, MxCxSmpKind )
{
	MxCxSmpKind object;
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
TEST( getIsBracketDegreesPresent4, MxCxSmpKind )
{
	MxCxSmpKind object;
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
TEST( getIsDefaultXPresent5, MxCxSmpKind )
{
	MxCxSmpKind object;
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
TEST( getIsDefaultYPresent6, MxCxSmpKind )
{
	MxCxSmpKind object;
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
TEST( getIsRelativeXPresent7, MxCxSmpKind )
{
	MxCxSmpKind object;
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
TEST( getIsRelativeYPresent8, MxCxSmpKind )
{
	MxCxSmpKind object;
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
TEST( getIsFontFamilyPresent9, MxCxSmpKind )
{
	MxCxSmpKind object;
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
TEST( getIsFontStylePresent10, MxCxSmpKind )
{
	MxCxSmpKind object;
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
TEST( getIsFontSizePresent11, MxCxSmpKind )
{
	MxCxSmpKind object;
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
TEST( getIsFontWeightPresent12, MxCxSmpKind )
{
	MxCxSmpKind object;
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
TEST( getIsColorPresent13, MxCxSmpKind )
{
	MxCxSmpKind object;
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
TEST( getIsHalignPresent14, MxCxSmpKind )
{
	MxCxSmpKind object;
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
TEST( getIsValignPresent15, MxCxSmpKind )
{
	MxCxSmpKind object;
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


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
	std::string expected;
	std::string actual;
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setText( XsToken( "" ) );
	object.setStackDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParenthesesDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracketDegrees( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 132.2 ) );
	object.setDefaultY( MxNumberTenths( 132.2 ) );
	object.setRelativeX( MxNumberTenths( 132.2 ) );
	object.setRelativeY( MxNumberTenths( 132.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
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
	expected = "<booksmart use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"132.2\" default-y=\"132.2\" relative-x=\"132.2\" relative-y=\"132.2\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#81828180\" halign=\"right\" valign=\"baseline\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 132.3 ) );
	object.setDefaultY( MxNumberTenths( 132.3 ) );
	object.setRelativeX( MxNumberTenths( 132.3 ) );
	object.setRelativeY( MxNumberTenths( 132.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<quiet text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"132.3\" default-y=\"132.3\" relative-x=\"132.3\" relative-y=\"132.3\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#848382\" halign=\"left\" valign=\"top\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 132.4 ) );
	object.setDefaultY( MxNumberTenths( 132.4 ) );
	object.setRelativeX( MxNumberTenths( 132.4 ) );
	object.setRelativeY( MxNumberTenths( 132.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<musicxmlishard use-symbols=\"yes\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"132.4\" default-y=\"132.4\" relative-x=\"132.4\" relative-y=\"132.4\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#85868584\" halign=\"center\" valign=\"middle\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 132.5 ) );
	object.setDefaultY( MxNumberTenths( 132.5 ) );
	object.setRelativeX( MxNumberTenths( 132.5 ) );
	object.setRelativeY( MxNumberTenths( 132.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<bishop parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"132.5\" default-y=\"132.5\" relative-x=\"132.5\" relative-y=\"132.5\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#888786\" halign=\"right\" valign=\"bottom\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 132.6 ) );
	object.setDefaultY( MxNumberTenths( 132.6 ) );
	object.setRelativeX( MxNumberTenths( 132.6 ) );
	object.setRelativeY( MxNumberTenths( 132.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<charlie use-symbols=\"yes\" text=\"\" bracket-degrees=\"yes\" default-x=\"132.6\" default-y=\"132.6\" relative-x=\"132.6\" relative-y=\"132.6\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#898A8988\" halign=\"left\" valign=\"baseline\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 132.7 ) );
	object.setDefaultY( MxNumberTenths( 132.7 ) );
	object.setRelativeX( MxNumberTenths( 132.7 ) );
	object.setRelativeY( MxNumberTenths( 132.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<booksmart text=\"\" default-x=\"132.7\" default-y=\"132.7\" relative-x=\"132.7\" relative-y=\"132.7\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#8C8B8A\" halign=\"center\" valign=\"top\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 132.8 ) );
	object.setDefaultY( MxNumberTenths( 132.8 ) );
	object.setRelativeX( MxNumberTenths( 132.8 ) );
	object.setRelativeY( MxNumberTenths( 132.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<quiet use-symbols=\"yes\" stack-degrees=\"yes\" default-y=\"132.8\" relative-x=\"132.8\" relative-y=\"132.8\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#8D8E8D8C\" halign=\"right\" valign=\"middle\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 132.9 ) );
	object.setDefaultY( MxNumberTenths( 132.9 ) );
	object.setRelativeX( MxNumberTenths( 132.9 ) );
	object.setRelativeY( MxNumberTenths( 132.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<musicxmlishard stack-degrees=\"yes\" relative-x=\"132.9\" relative-y=\"132.9\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#908F8E\" halign=\"left\" valign=\"bottom\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 133 ) );
	object.setDefaultY( MxNumberTenths( 133 ) );
	object.setRelativeX( MxNumberTenths( 133 ) );
	object.setRelativeY( MxNumberTenths( 133 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<bishop use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" relative-y=\"133\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#91929190\" halign=\"center\" valign=\"baseline\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 133.1 ) );
	object.setDefaultY( MxNumberTenths( 133.1 ) );
	object.setRelativeX( MxNumberTenths( 133.1 ) );
	object.setRelativeY( MxNumberTenths( 133.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#949392" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<charlie text=\"\" parentheses-degrees=\"yes\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#949392\" halign=\"right\" valign=\"top\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 133.2 ) );
	object.setDefaultY( MxNumberTenths( 133.2 ) );
	object.setRelativeX( MxNumberTenths( 133.2 ) );
	object.setRelativeY( MxNumberTenths( 133.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<booksmart use-symbols=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#95969594\" halign=\"left\" valign=\"middle\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 133.3 ) );
	object.setDefaultY( MxNumberTenths( 133.3 ) );
	object.setRelativeX( MxNumberTenths( 133.3 ) );
	object.setRelativeY( MxNumberTenths( 133.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#989796" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<quiet parentheses-degrees=\"yes\" bracket-degrees=\"yes\" font-size=\"1.1\" font-weight=\"bold\" color=\"#989796\" halign=\"center\" valign=\"bottom\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 133.4 ) );
	object.setDefaultY( MxNumberTenths( 133.4 ) );
	object.setRelativeX( MxNumberTenths( 133.4 ) );
	object.setRelativeY( MxNumberTenths( 133.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<musicxmlishard use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"133.4\" font-weight=\"normal\" color=\"#999A9998\" halign=\"right\" valign=\"baseline\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 133.5 ) );
	object.setDefaultY( MxNumberTenths( 133.5 ) );
	object.setRelativeX( MxNumberTenths( 133.5 ) );
	object.setRelativeY( MxNumberTenths( 133.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<bishop text=\"\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"133.5\" color=\"#9C9B9A\" halign=\"left\" valign=\"top\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 133.6 ) );
	object.setDefaultY( MxNumberTenths( 133.6 ) );
	object.setRelativeX( MxNumberTenths( 133.6 ) );
	object.setRelativeY( MxNumberTenths( 133.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<charlie use-symbols=\"yes\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"133.6\" default-y=\"133.6\" halign=\"center\" valign=\"middle\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 133.7 ) );
	object.setDefaultY( MxNumberTenths( 133.7 ) );
	object.setRelativeX( MxNumberTenths( 133.7 ) );
	object.setRelativeY( MxNumberTenths( 133.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<booksmart default-x=\"133.7\" default-y=\"133.7\" valign=\"bottom\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 133.8 ) );
	object.setDefaultY( MxNumberTenths( 133.8 ) );
	object.setRelativeX( MxNumberTenths( 133.8 ) );
	object.setRelativeY( MxNumberTenths( 133.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<quiet use-symbols=\"yes\" text=\"\" parentheses-degrees=\"yes\" default-x=\"133.8\" default-y=\"133.8\" relative-x=\"133.8\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 133.9 ) );
	object.setDefaultY( MxNumberTenths( 133.9 ) );
	object.setRelativeX( MxNumberTenths( 133.9 ) );
	object.setRelativeY( MxNumberTenths( 133.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<musicxmlishard text=\"\" parentheses-degrees=\"yes\" default-x=\"133.9\" default-y=\"133.9\" relative-x=\"133.9\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 134 ) );
	object.setDefaultY( MxNumberTenths( 134 ) );
	object.setRelativeX( MxNumberTenths( 134 ) );
	object.setRelativeY( MxNumberTenths( 134 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<bishop use-symbols=\"yes\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-y=\"134\" relative-x=\"134\" relative-y=\"134\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 134.1 ) );
	object.setDefaultY( MxNumberTenths( 134.1 ) );
	object.setRelativeX( MxNumberTenths( 134.1 ) );
	object.setRelativeY( MxNumberTenths( 134.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<charlie stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-y=\"134.1\" relative-x=\"134.1\" relative-y=\"134.1\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 134.2 ) );
	object.setDefaultY( MxNumberTenths( 134.2 ) );
	object.setRelativeX( MxNumberTenths( 134.2 ) );
	object.setRelativeY( MxNumberTenths( 134.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<booksmart use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"134.2\" relative-x=\"134.2\" relative-y=\"134.2\" font-family=\"ABC\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 134.3 ) );
	object.setDefaultY( MxNumberTenths( 134.3 ) );
	object.setRelativeX( MxNumberTenths( 134.3 ) );
	object.setRelativeY( MxNumberTenths( 134.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<quiet text=\"\" bracket-degrees=\"yes\" relative-x=\"134.3\" relative-y=\"134.3\" font-family=\"DEF\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 134.4 ) );
	object.setDefaultY( MxNumberTenths( 134.4 ) );
	object.setRelativeX( MxNumberTenths( 134.4 ) );
	object.setRelativeY( MxNumberTenths( 134.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<musicxmlishard use-symbols=\"yes\" bracket-degrees=\"yes\" relative-x=\"134.4\" relative-y=\"134.4\" font-family=\"XYZ\" font-style=\"normal\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 134.5 ) );
	object.setDefaultY( MxNumberTenths( 134.5 ) );
	object.setRelativeX( MxNumberTenths( 134.5 ) );
	object.setRelativeY( MxNumberTenths( 134.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<bishop bracket-degrees=\"yes\" relative-x=\"134.5\" relative-y=\"134.5\" font-family=\"ABC\" font-style=\"italic\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 134.6 ) );
	object.setDefaultY( MxNumberTenths( 134.6 ) );
	object.setRelativeX( MxNumberTenths( 134.6 ) );
	object.setRelativeY( MxNumberTenths( 134.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<charlie use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"134.6\" relative-y=\"134.6\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 134.7 ) );
	object.setDefaultY( MxNumberTenths( 134.7 ) );
	object.setRelativeX( MxNumberTenths( 134.7 ) );
	object.setRelativeY( MxNumberTenths( 134.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<booksmart text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-x=\"134.7\" relative-y=\"134.7\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 134.8 ) );
	object.setDefaultY( MxNumberTenths( 134.8 ) );
	object.setRelativeX( MxNumberTenths( 134.8 ) );
	object.setRelativeY( MxNumberTenths( 134.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<quiet use-symbols=\"yes\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-x=\"134.8\" relative-y=\"134.8\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 134.9 ) );
	object.setDefaultY( MxNumberTenths( 134.9 ) );
	object.setRelativeX( MxNumberTenths( 134.9 ) );
	object.setRelativeY( MxNumberTenths( 134.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<musicxmlishard parentheses-degrees=\"yes\" default-x=\"134.9\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 135 ) );
	object.setDefaultY( MxNumberTenths( 135 ) );
	object.setRelativeX( MxNumberTenths( 135 ) );
	object.setRelativeY( MxNumberTenths( 135 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<bishop use-symbols=\"yes\" text=\"\" default-x=\"135\" default-y=\"135\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#B9BAB9B8\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 135.1 ) );
	object.setDefaultY( MxNumberTenths( 135.1 ) );
	object.setRelativeX( MxNumberTenths( 135.1 ) );
	object.setRelativeY( MxNumberTenths( 135.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<charlie text=\"\" default-x=\"135.1\" default-y=\"135.1\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#BCBBBA\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 135.2 ) );
	object.setDefaultY( MxNumberTenths( 135.2 ) );
	object.setRelativeX( MxNumberTenths( 135.2 ) );
	object.setRelativeY( MxNumberTenths( 135.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<booksmart use-symbols=\"yes\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"135.2\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#BDBEBDBC\" halign=\"right\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 135.3 ) );
	object.setDefaultY( MxNumberTenths( 135.3 ) );
	object.setRelativeX( MxNumberTenths( 135.3 ) );
	object.setRelativeY( MxNumberTenths( 135.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<quiet stack-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"135.3\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#C0BFBE\" halign=\"left\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 135.4 ) );
	object.setDefaultY( MxNumberTenths( 135.4 ) );
	object.setRelativeX( MxNumberTenths( 135.4 ) );
	object.setRelativeY( MxNumberTenths( 135.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<musicxmlishard use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"135.4\" relative-x=\"135.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#C1C2C1C0\" halign=\"center\" valign=\"baseline\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 135.5 ) );
	object.setDefaultY( MxNumberTenths( 135.5 ) );
	object.setRelativeX( MxNumberTenths( 135.5 ) );
	object.setRelativeY( MxNumberTenths( 135.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<bishop text=\"\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"135.5\" relative-x=\"135.5\" font-size=\"1.1\" font-weight=\"bold\" color=\"#C4C3C2\" halign=\"right\" valign=\"top\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 135.6 ) );
	object.setDefaultY( MxNumberTenths( 135.6 ) );
	object.setRelativeX( MxNumberTenths( 135.6 ) );
	object.setRelativeY( MxNumberTenths( 135.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<charlie use-symbols=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"135.6\" relative-x=\"135.6\" font-size=\"large\" font-weight=\"normal\" color=\"#C5C6C5C4\" halign=\"left\" valign=\"middle\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 135.7 ) );
	object.setDefaultY( MxNumberTenths( 135.7 ) );
	object.setRelativeX( MxNumberTenths( 135.7 ) );
	object.setRelativeY( MxNumberTenths( 135.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<booksmart parentheses-degrees=\"yes\" relative-x=\"135.7\" font-size=\"1.1\" font-weight=\"bold\" color=\"#C8C7C6\" halign=\"center\" valign=\"bottom\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 135.8 ) );
	object.setDefaultY( MxNumberTenths( 135.8 ) );
	object.setRelativeX( MxNumberTenths( 135.8 ) );
	object.setRelativeY( MxNumberTenths( 135.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<quiet use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" default-x=\"135.8\" relative-x=\"135.8\" relative-y=\"135.8\" font-weight=\"normal\" color=\"#C9CAC9C8\" halign=\"right\" valign=\"baseline\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 135.9 ) );
	object.setDefaultY( MxNumberTenths( 135.9 ) );
	object.setRelativeX( MxNumberTenths( 135.9 ) );
	object.setRelativeY( MxNumberTenths( 135.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<musicxmlishard text=\"\" stack-degrees=\"yes\" default-x=\"135.9\" relative-x=\"135.9\" relative-y=\"135.9\" font-weight=\"bold\" color=\"#CCCBCA\" halign=\"left\" valign=\"top\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 136 ) );
	object.setDefaultY( MxNumberTenths( 136 ) );
	object.setRelativeX( MxNumberTenths( 136 ) );
	object.setRelativeY( MxNumberTenths( 136 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<bishop use-symbols=\"yes\" stack-degrees=\"yes\" default-x=\"136\" relative-x=\"136\" relative-y=\"136\" font-weight=\"normal\" color=\"#CDCECDCC\" halign=\"center\" valign=\"middle\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 136.1 ) );
	object.setDefaultY( MxNumberTenths( 136.1 ) );
	object.setRelativeX( MxNumberTenths( 136.1 ) );
	object.setRelativeY( MxNumberTenths( 136.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<charlie default-x=\"136.1\" relative-x=\"136.1\" relative-y=\"136.1\" color=\"#D0CFCE\" halign=\"right\" valign=\"bottom\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 136.2 ) );
	object.setDefaultY( MxNumberTenths( 136.2 ) );
	object.setRelativeX( MxNumberTenths( 136.2 ) );
	object.setRelativeY( MxNumberTenths( 136.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<booksmart use-symbols=\"yes\" text=\"\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"136.2\" relative-y=\"136.2\" font-family=\"XYZ\" color=\"#D1D2D1D0\" halign=\"left\" valign=\"baseline\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 136.3 ) );
	object.setDefaultY( MxNumberTenths( 136.3 ) );
	object.setRelativeX( MxNumberTenths( 136.3 ) );
	object.setRelativeY( MxNumberTenths( 136.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<quiet text=\"\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"136.3\" relative-y=\"136.3\" font-family=\"ABC\" color=\"#D4D3D2\" halign=\"center\" valign=\"top\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 136.4 ) );
	object.setDefaultY( MxNumberTenths( 136.4 ) );
	object.setRelativeX( MxNumberTenths( 136.4 ) );
	object.setRelativeY( MxNumberTenths( 136.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<musicxmlishard use-symbols=\"yes\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"136.4\" relative-y=\"136.4\" font-family=\"DEF\" halign=\"right\" valign=\"middle\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 136.5 ) );
	object.setDefaultY( MxNumberTenths( 136.5 ) );
	object.setRelativeX( MxNumberTenths( 136.5 ) );
	object.setRelativeY( MxNumberTenths( 136.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<bishop stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"136.5\" relative-y=\"136.5\" font-family=\"XYZ\" halign=\"left\" valign=\"bottom\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 136.6 ) );
	object.setDefaultY( MxNumberTenths( 136.6 ) );
	object.setRelativeX( MxNumberTenths( 136.6 ) );
	object.setRelativeY( MxNumberTenths( 136.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<charlie use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"136.6\" relative-y=\"136.6\" font-family=\"ABC\" font-style=\"normal\" halign=\"center\" valign=\"baseline\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 136.7 ) );
	object.setDefaultY( MxNumberTenths( 136.7 ) );
	object.setRelativeX( MxNumberTenths( 136.7 ) );
	object.setRelativeY( MxNumberTenths( 136.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<booksmart text=\"\" default-y=\"136.7\" font-family=\"DEF\" font-style=\"italic\" valign=\"top\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 136.8 ) );
	object.setDefaultY( MxNumberTenths( 136.8 ) );
	object.setRelativeX( MxNumberTenths( 136.8 ) );
	object.setRelativeY( MxNumberTenths( 136.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<quiet use-symbols=\"yes\" default-y=\"136.8\" font-family=\"XYZ\" font-style=\"normal\" valign=\"middle\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 136.9 ) );
	object.setDefaultY( MxNumberTenths( 136.9 ) );
	object.setRelativeX( MxNumberTenths( 136.9 ) );
	object.setRelativeY( MxNumberTenths( 136.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<musicxmlishard default-y=\"136.9\" font-family=\"ABC\" font-style=\"italic\" valign=\"bottom\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 137 ) );
	object.setDefaultY( MxNumberTenths( 137 ) );
	object.setRelativeX( MxNumberTenths( 137 ) );
	object.setRelativeY( MxNumberTenths( 137 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<bishop use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-x=\"137\" default-y=\"137\" relative-x=\"137\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 137.1 ) );
	object.setDefaultY( MxNumberTenths( 137.1 ) );
	object.setRelativeX( MxNumberTenths( 137.1 ) );
	object.setRelativeY( MxNumberTenths( 137.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<charlie text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-x=\"137.1\" relative-x=\"137.1\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 137.2 ) );
	object.setDefaultY( MxNumberTenths( 137.2 ) );
	object.setRelativeX( MxNumberTenths( 137.2 ) );
	object.setRelativeY( MxNumberTenths( 137.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<booksmart use-symbols=\"yes\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"137.2\" relative-x=\"137.2\" font-style=\"normal\" font-size=\"large\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 137.3 ) );
	object.setDefaultY( MxNumberTenths( 137.3 ) );
	object.setRelativeX( MxNumberTenths( 137.3 ) );
	object.setRelativeY( MxNumberTenths( 137.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<quiet parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"137.3\" relative-x=\"137.3\" font-style=\"italic\" font-size=\"1.1\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 137.4 ) );
	object.setDefaultY( MxNumberTenths( 137.4 ) );
	object.setRelativeX( MxNumberTenths( 137.4 ) );
	object.setRelativeY( MxNumberTenths( 137.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<musicxmlishard use-symbols=\"yes\" text=\"\" bracket-degrees=\"yes\" default-x=\"137.4\" relative-x=\"137.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 137.5 ) );
	object.setDefaultY( MxNumberTenths( 137.5 ) );
	object.setRelativeX( MxNumberTenths( 137.5 ) );
	object.setRelativeY( MxNumberTenths( 137.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<bishop text=\"\" bracket-degrees=\"yes\" default-x=\"137.5\" relative-x=\"137.5\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 137.6 ) );
	object.setDefaultY( MxNumberTenths( 137.6 ) );
	object.setRelativeX( MxNumberTenths( 137.6 ) );
	object.setRelativeY( MxNumberTenths( 137.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<charlie use-symbols=\"yes\" stack-degrees=\"yes\" bracket-degrees=\"yes\" relative-x=\"137.6\" relative-y=\"137.6\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 137.7 ) );
	object.setDefaultY( MxNumberTenths( 137.7 ) );
	object.setRelativeX( MxNumberTenths( 137.7 ) );
	object.setRelativeY( MxNumberTenths( 137.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<booksmart stack-degrees=\"yes\" relative-x=\"137.7\" relative-y=\"137.7\" font-size=\"1.1\" font-weight=\"bold\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 137.8 ) );
	object.setDefaultY( MxNumberTenths( 137.8 ) );
	object.setRelativeX( MxNumberTenths( 137.8 ) );
	object.setRelativeY( MxNumberTenths( 137.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<quiet use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-y=\"137.8\" relative-y=\"137.8\" font-size=\"large\" font-weight=\"normal\" color=\"#F1F2F1F0\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 137.9 ) );
	object.setDefaultY( MxNumberTenths( 137.9 ) );
	object.setRelativeX( MxNumberTenths( 137.9 ) );
	object.setRelativeY( MxNumberTenths( 137.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<musicxmlishard text=\"\" parentheses-degrees=\"yes\" default-y=\"137.9\" relative-y=\"137.9\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F4F3F2\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 138 ) );
	object.setDefaultY( MxNumberTenths( 138 ) );
	object.setRelativeX( MxNumberTenths( 138 ) );
	object.setRelativeY( MxNumberTenths( 138 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<bishop use-symbols=\"yes\" parentheses-degrees=\"yes\" default-y=\"138\" relative-y=\"138\" font-size=\"large\" font-weight=\"normal\" color=\"#F5F6F5F4\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 138.1 ) );
	object.setDefaultY( MxNumberTenths( 138.1 ) );
	object.setRelativeX( MxNumberTenths( 138.1 ) );
	object.setRelativeY( MxNumberTenths( 138.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<charlie parentheses-degrees=\"yes\" default-y=\"138.1\" relative-y=\"138.1\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F8F7F6\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 138.2 ) );
	object.setDefaultY( MxNumberTenths( 138.2 ) );
	object.setRelativeX( MxNumberTenths( 138.2 ) );
	object.setRelativeY( MxNumberTenths( 138.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<booksmart use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"138.2\" default-y=\"138.2\" relative-y=\"138.2\" font-family=\"DEF\" font-weight=\"normal\" color=\"#F9FAF9F8\" halign=\"right\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 138.3 ) );
	object.setDefaultY( MxNumberTenths( 138.3 ) );
	object.setRelativeX( MxNumberTenths( 138.3 ) );
	object.setRelativeY( MxNumberTenths( 138.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<quiet text=\"\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"138.3\" default-y=\"138.3\" relative-y=\"138.3\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#FCFBFA\" halign=\"left\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 138.4 ) );
	object.setDefaultY( MxNumberTenths( 138.4 ) );
	object.setRelativeX( MxNumberTenths( 138.4 ) );
	object.setRelativeY( MxNumberTenths( 138.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<musicxmlishard use-symbols=\"yes\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"138.4\" default-y=\"138.4\" relative-y=\"138.4\" font-family=\"ABC\" font-weight=\"normal\" color=\"#FDFEFDFC\" halign=\"center\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 138.5 ) );
	object.setDefaultY( MxNumberTenths( 138.5 ) );
	object.setRelativeX( MxNumberTenths( 138.5 ) );
	object.setRelativeY( MxNumberTenths( 138.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<bishop bracket-degrees=\"yes\" default-x=\"138.5\" font-family=\"DEF\" font-weight=\"bold\" color=\"#00FFFE\" halign=\"right\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 138.6 ) );
	object.setDefaultY( MxNumberTenths( 138.6 ) );
	object.setRelativeX( MxNumberTenths( 138.6 ) );
	object.setRelativeY( MxNumberTenths( 138.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<charlie use-symbols=\"yes\" text=\"\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"138.6\" relative-x=\"138.6\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#01020100\" halign=\"left\" valign=\"baseline\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 138.7 ) );
	object.setDefaultY( MxNumberTenths( 138.7 ) );
	object.setRelativeX( MxNumberTenths( 138.7 ) );
	object.setRelativeY( MxNumberTenths( 138.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#040302" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<booksmart text=\"\" parentheses-degrees=\"yes\" default-x=\"138.7\" relative-x=\"138.7\" font-family=\"ABC\" color=\"#040302\" halign=\"center\" valign=\"top\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 138.8 ) );
	object.setDefaultY( MxNumberTenths( 138.8 ) );
	object.setRelativeX( MxNumberTenths( 138.8 ) );
	object.setRelativeY( MxNumberTenths( 138.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<quiet use-symbols=\"yes\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" relative-x=\"138.8\" font-family=\"DEF\" font-style=\"normal\" color=\"#05060504\" halign=\"right\" valign=\"middle\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 138.9 ) );
	object.setDefaultY( MxNumberTenths( 138.9 ) );
	object.setRelativeX( MxNumberTenths( 138.9 ) );
	object.setRelativeY( MxNumberTenths( 138.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#080706" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<musicxmlishard stack-degrees=\"yes\" parentheses-degrees=\"yes\" relative-x=\"138.9\" font-family=\"XYZ\" font-style=\"italic\" color=\"#080706\" halign=\"left\" valign=\"bottom\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 139 ) );
	object.setDefaultY( MxNumberTenths( 139 ) );
	object.setRelativeX( MxNumberTenths( 139 ) );
	object.setRelativeY( MxNumberTenths( 139 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<bishop use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" relative-x=\"139\" font-family=\"ABC\" font-style=\"normal\" color=\"#090A0908\" halign=\"center\" valign=\"baseline\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 139.1 ) );
	object.setDefaultY( MxNumberTenths( 139.1 ) );
	object.setRelativeX( MxNumberTenths( 139.1 ) );
	object.setRelativeY( MxNumberTenths( 139.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<charlie text=\"\" relative-x=\"139.1\" font-family=\"DEF\" font-style=\"italic\" color=\"#0C0B0A\" halign=\"right\" valign=\"top\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 139.2 ) );
	object.setDefaultY( MxNumberTenths( 139.2 ) );
	object.setRelativeX( MxNumberTenths( 139.2 ) );
	object.setRelativeY( MxNumberTenths( 139.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<booksmart use-symbols=\"yes\" bracket-degrees=\"yes\" default-y=\"139.2\" relative-x=\"139.2\" font-style=\"normal\" halign=\"left\" valign=\"middle\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 139.3 ) );
	object.setDefaultY( MxNumberTenths( 139.3 ) );
	object.setRelativeX( MxNumberTenths( 139.3 ) );
	object.setRelativeY( MxNumberTenths( 139.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<quiet bracket-degrees=\"yes\" default-y=\"139.3\" relative-x=\"139.3\" font-style=\"italic\" halign=\"center\" valign=\"bottom\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 139.4 ) );
	object.setDefaultY( MxNumberTenths( 139.4 ) );
	object.setRelativeX( MxNumberTenths( 139.4 ) );
	object.setRelativeY( MxNumberTenths( 139.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<musicxmlishard use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"139.4\" default-y=\"139.4\" relative-y=\"139.4\" font-style=\"normal\" font-size=\"large\" halign=\"right\" valign=\"baseline\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 139.5 ) );
	object.setDefaultY( MxNumberTenths( 139.5 ) );
	object.setRelativeX( MxNumberTenths( 139.5 ) );
	object.setRelativeY( MxNumberTenths( 139.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#141312" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<bishop text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"139.5\" default-y=\"139.5\" relative-y=\"139.5\" font-style=\"italic\" font-size=\"1.1\" halign=\"left\" valign=\"top\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 139.6 ) );
	object.setDefaultY( MxNumberTenths( 139.6 ) );
	object.setRelativeX( MxNumberTenths( 139.6 ) );
	object.setRelativeY( MxNumberTenths( 139.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<charlie use-symbols=\"yes\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"139.6\" default-y=\"139.6\" relative-y=\"139.6\" font-style=\"normal\" font-size=\"large\" halign=\"center\" valign=\"middle\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 139.7 ) );
	object.setDefaultY( MxNumberTenths( 139.7 ) );
	object.setRelativeX( MxNumberTenths( 139.7 ) );
	object.setRelativeY( MxNumberTenths( 139.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<booksmart parentheses-degrees=\"yes\" default-x=\"139.7\" default-y=\"139.7\" relative-y=\"139.7\" font-style=\"italic\" font-size=\"1.1\" valign=\"bottom\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 139.8 ) );
	object.setDefaultY( MxNumberTenths( 139.8 ) );
	object.setRelativeX( MxNumberTenths( 139.8 ) );
	object.setRelativeY( MxNumberTenths( 139.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<quiet use-symbols=\"yes\" text=\"\" default-x=\"139.8\" default-y=\"139.8\" relative-y=\"139.8\" font-style=\"normal\" font-size=\"large\" valign=\"baseline\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 139.9 ) );
	object.setDefaultY( MxNumberTenths( 139.9 ) );
	object.setRelativeX( MxNumberTenths( 139.9 ) );
	object.setRelativeY( MxNumberTenths( 139.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<musicxmlishard text=\"\" default-x=\"139.9\" relative-y=\"139.9\" font-size=\"1.1\" valign=\"top\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 140 ) );
	object.setDefaultY( MxNumberTenths( 140 ) );
	object.setRelativeX( MxNumberTenths( 140 ) );
	object.setRelativeY( MxNumberTenths( 140 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<bishop use-symbols=\"yes\" stack-degrees=\"yes\" relative-y=\"140\" font-size=\"large\" font-weight=\"normal\" valign=\"middle\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 140.1 ) );
	object.setDefaultY( MxNumberTenths( 140.1 ) );
	object.setRelativeX( MxNumberTenths( 140.1 ) );
	object.setRelativeY( MxNumberTenths( 140.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<charlie stack-degrees=\"yes\" relative-y=\"140.1\" font-size=\"1.1\" font-weight=\"bold\" valign=\"bottom\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 140.2 ) );
	object.setDefaultY( MxNumberTenths( 140.2 ) );
	object.setRelativeX( MxNumberTenths( 140.2 ) );
	object.setRelativeY( MxNumberTenths( 140.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<booksmart use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" relative-x=\"140.2\" relative-y=\"140.2\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 140.3 ) );
	object.setDefaultY( MxNumberTenths( 140.3 ) );
	object.setRelativeX( MxNumberTenths( 140.3 ) );
	object.setRelativeY( MxNumberTenths( 140.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#242322" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<quiet text=\"\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" relative-x=\"140.3\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 140.4 ) );
	object.setDefaultY( MxNumberTenths( 140.4 ) );
	object.setRelativeX( MxNumberTenths( 140.4 ) );
	object.setRelativeY( MxNumberTenths( 140.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<musicxmlishard use-symbols=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" relative-x=\"140.4\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 140.5 ) );
	object.setDefaultY( MxNumberTenths( 140.5 ) );
	object.setRelativeX( MxNumberTenths( 140.5 ) );
	object.setRelativeY( MxNumberTenths( 140.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#282726" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<bishop parentheses-degrees=\"yes\" bracket-degrees=\"yes\" relative-x=\"140.5\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 140.6 ) );
	object.setDefaultY( MxNumberTenths( 140.6 ) );
	object.setRelativeX( MxNumberTenths( 140.6 ) );
	object.setRelativeY( MxNumberTenths( 140.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<charlie use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" bracket-degrees=\"yes\" default-x=\"140.6\" default-y=\"140.6\" relative-x=\"140.6\" font-family=\"DEF\" font-weight=\"normal\" color=\"#292A2928\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 140.7 ) );
	object.setDefaultY( MxNumberTenths( 140.7 ) );
	object.setRelativeX( MxNumberTenths( 140.7 ) );
	object.setRelativeY( MxNumberTenths( 140.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<booksmart text=\"\" stack-degrees=\"yes\" default-x=\"140.7\" default-y=\"140.7\" relative-x=\"140.7\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#2C2B2A\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 140.8 ) );
	object.setDefaultY( MxNumberTenths( 140.8 ) );
	object.setRelativeX( MxNumberTenths( 140.8 ) );
	object.setRelativeY( MxNumberTenths( 140.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<quiet use-symbols=\"yes\" stack-degrees=\"yes\" default-x=\"140.8\" default-y=\"140.8\" relative-x=\"140.8\" font-family=\"ABC\" font-weight=\"normal\" color=\"#2D2E2D2C\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 140.9 ) );
	object.setDefaultY( MxNumberTenths( 140.9 ) );
	object.setRelativeX( MxNumberTenths( 140.9 ) );
	object.setRelativeY( MxNumberTenths( 140.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<musicxmlishard default-x=\"140.9\" default-y=\"140.9\" relative-x=\"140.9\" font-family=\"DEF\" font-weight=\"bold\" color=\"#302F2E\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 141 ) );
	object.setDefaultY( MxNumberTenths( 141 ) );
	object.setRelativeX( MxNumberTenths( 141 ) );
	object.setRelativeY( MxNumberTenths( 141 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<bishop use-symbols=\"yes\" text=\"\" parentheses-degrees=\"yes\" default-x=\"141\" default-y=\"141\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" color=\"#31323130\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 141.1 ) );
	object.setDefaultY( MxNumberTenths( 141.1 ) );
	object.setRelativeX( MxNumberTenths( 141.1 ) );
	object.setRelativeY( MxNumberTenths( 141.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<charlie text=\"\" parentheses-degrees=\"yes\" default-x=\"141.1\" default-y=\"141.1\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" color=\"#343332\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 141.2 ) );
	object.setDefaultY( MxNumberTenths( 141.2 ) );
	object.setRelativeX( MxNumberTenths( 141.2 ) );
	object.setRelativeY( MxNumberTenths( 141.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<booksmart use-symbols=\"yes\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" default-y=\"141.2\" relative-y=\"141.2\" font-style=\"normal\" font-weight=\"normal\" color=\"#35363534\" halign=\"right\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 141.3 ) );
	object.setDefaultY( MxNumberTenths( 141.3 ) );
	object.setRelativeX( MxNumberTenths( 141.3 ) );
	object.setRelativeY( MxNumberTenths( 141.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<quiet stack-degrees=\"yes\" parentheses-degrees=\"yes\" bracket-degrees=\"yes\" relative-y=\"141.3\" font-style=\"italic\" color=\"#383736\" halign=\"left\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 141.4 ) );
	object.setDefaultY( MxNumberTenths( 141.4 ) );
	object.setRelativeX( MxNumberTenths( 141.4 ) );
	object.setRelativeY( MxNumberTenths( 141.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<musicxmlishard use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" bracket-degrees=\"yes\" relative-y=\"141.4\" font-style=\"normal\" color=\"#393A3938\" halign=\"center\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 141.5 ) );
	object.setDefaultY( MxNumberTenths( 141.5 ) );
	object.setRelativeX( MxNumberTenths( 141.5 ) );
	object.setRelativeY( MxNumberTenths( 141.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<bishop text=\"\" bracket-degrees=\"yes\" relative-y=\"141.5\" font-style=\"italic\" color=\"#3C3B3A\" halign=\"right\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 141.6 ) );
	object.setDefaultY( MxNumberTenths( 141.6 ) );
	object.setRelativeX( MxNumberTenths( 141.6 ) );
	object.setRelativeY( MxNumberTenths( 141.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<charlie use-symbols=\"yes\" bracket-degrees=\"yes\" relative-y=\"141.6\" font-style=\"normal\" color=\"#3D3E3D3C\" halign=\"left\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 141.7 ) );
	object.setDefaultY( MxNumberTenths( 141.7 ) );
	object.setRelativeX( MxNumberTenths( 141.7 ) );
	object.setRelativeY( MxNumberTenths( 141.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<booksmart relative-y=\"141.7\" font-style=\"italic\" color=\"#403F3E\" halign=\"center\">major-minor</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpKind )
{
	MxCxSmpKind object( "quiet", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 141.8 ) );
	object.setDefaultY( MxNumberTenths( 141.8 ) );
	object.setRelativeX( MxNumberTenths( 141.8 ) );
	object.setRelativeY( MxNumberTenths( 141.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<quiet use-symbols=\"yes\" text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-x=\"141.8\" relative-x=\"141.8\" relative-y=\"141.8\" font-style=\"normal\" font-size=\"large\" color=\"#41424140\" halign=\"right\" valign=\"baseline\">major-minor</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpKind )
{
	MxCxSmpKind object( "musicxmlishard", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 141.9 ) );
	object.setDefaultY( MxNumberTenths( 141.9 ) );
	object.setRelativeX( MxNumberTenths( 141.9 ) );
	object.setRelativeY( MxNumberTenths( 141.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<musicxmlishard text=\"\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-x=\"141.9\" relative-x=\"141.9\" relative-y=\"141.9\" font-style=\"italic\" font-size=\"1.1\" color=\"#444342\" halign=\"left\" valign=\"top\">major-minor</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpKind )
{
	MxCxSmpKind object( "bishop", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 142 ) );
	object.setDefaultY( MxNumberTenths( 142 ) );
	object.setRelativeX( MxNumberTenths( 142 ) );
	object.setRelativeY( MxNumberTenths( 142 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<bishop use-symbols=\"yes\" stack-degrees=\"yes\" parentheses-degrees=\"yes\" default-x=\"142\" default-y=\"142\" relative-x=\"142\" relative-y=\"142\" font-style=\"normal\" font-size=\"large\" halign=\"center\" valign=\"middle\">major-minor</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxSmpKind )
{
	MxCxSmpKind object( "charlie", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 142.1 ) );
	object.setDefaultY( MxNumberTenths( 142.1 ) );
	object.setRelativeX( MxNumberTenths( 142.1 ) );
	object.setRelativeY( MxNumberTenths( 142.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<charlie parentheses-degrees=\"yes\" default-x=\"142.1\" default-y=\"142.1\" relative-x=\"142.1\" font-size=\"1.1\" halign=\"right\" valign=\"bottom\">major-minor</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxSmpKind )
{
	MxCxSmpKind object( "booksmart", MxEnumKindValue( lexicon::enums::KindValue::majorMinor ) );
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
	object.setDefaultX( MxNumberTenths( 142.2 ) );
	object.setDefaultY( MxNumberTenths( 142.2 ) );
	object.setRelativeX( MxNumberTenths( 142.2 ) );
	object.setRelativeY( MxNumberTenths( 142.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<booksmart>major-minor</booksmart>";
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

TEST( getIsUseSymbolsDefaultDefined, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsUseSymbolsDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextDefaultDefined, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsTextDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsStackDegreesDefaultDefined, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsStackDegreesDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsParenthesesDegreesDefaultDefined, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsParenthesesDegreesDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBracketDegreesDefaultDefined, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsBracketDegreesDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignDefaultDefined, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsHalignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignDefaultDefined, MxCxSmpKind )
{
	MxCxSmpKind object;
	bool expected = false;
	bool actual = object.getIsValignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getUseSymbolsDefaultValue, MxCxSmpKind )
{
	MxCxSmpKind object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getUseSymbolsDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTextDefaultValue, MxCxSmpKind )
{
	MxCxSmpKind object;
	XsToken expected;
	XsToken actual = object.getTextDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getStackDegreesDefaultValue, MxCxSmpKind )
{
	MxCxSmpKind object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getStackDegreesDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getParenthesesDegreesDefaultValue, MxCxSmpKind )
{
	MxCxSmpKind object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getParenthesesDegreesDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBracketDegreesDefaultValue, MxCxSmpKind )
{
	MxCxSmpKind object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getBracketDegreesDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxSmpKind )
{
	MxCxSmpKind object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxSmpKind )
{
	MxCxSmpKind object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxSmpKind )
{
	MxCxSmpKind object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxSmpKind )
{
	MxCxSmpKind object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxSmpKind )
{
	MxCxSmpKind object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxSmpKind )
{
	MxCxSmpKind object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxSmpKind )
{
	MxCxSmpKind object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxSmpKind )
{
	MxCxSmpKind object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpKind )
{
	MxCxSmpKind object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getHalignDefaultValue, MxCxSmpKind )
{
	MxCxSmpKind object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getHalignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValignDefaultValue, MxCxSmpKind )
{
	MxCxSmpKind object;
	MxEnumValign expected;
	MxEnumValign actual = object.getValignDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


