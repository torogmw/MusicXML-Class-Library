/** *******************************************************
  * 
  * MxEsDegreeValueTest.cpp
  * Created: 2014-12-05 20:57:51
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsDegreeValue.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	std::string expected = ( MxEnumDegreeSymbolValue(  ) ).toString();
	std::string actual = object.getSymbol().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getText().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsPositiveInteger( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsPositiveInteger( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsPositiveInteger( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsPositiveInteger( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsPositiveInteger( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	std::string expected = "MxEsDegreeValue";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	std::string expected = "degree-value";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setSymbol0, MxEsDegreeValue )
{
	MxEnumDegreeSymbolValue value1( lexicon::enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue value2( lexicon::enums::DegreeSymbolValue::diminished );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeValue object;
	object.setSymbol( value1 );
	MxEnumDegreeSymbolValue expected = value1;
	MxEnumDegreeSymbolValue actual = object.getSymbol();
	CHECK_EQUAL( expected, actual )
	object.setSymbol( value2 );
	expected = value2;
	actual = object.getSymbol();
	CHECK_EQUAL( expected, actual )
}
TEST( setText1, MxEsDegreeValue )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeValue object;
	object.setText( value1 );
	XsToken expected = value1;
	XsToken actual = object.getText();
	CHECK_EQUAL( expected, actual )
	object.setText( value2 );
	expected = value2;
	actual = object.getText();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX2, MxEsDegreeValue )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeValue object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY3, MxEsDegreeValue )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeValue object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX4, MxEsDegreeValue )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeValue object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY5, MxEsDegreeValue )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeValue object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily6, MxEsDegreeValue )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeValue object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle7, MxEsDegreeValue )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeValue object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize8, MxEsDegreeValue )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeValue object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight9, MxEsDegreeValue )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeValue object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor10, MxEsDegreeValue )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeValue object;
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

TEST( getIsSymbolRequired0, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsSymbolRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextRequired1, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsTextRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired2, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired3, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired4, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired5, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired6, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired7, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired8, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired9, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired10, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsSymbolPresent0, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsSymbolPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSymbolPresent( true );
	expected = true;
	actual = object.getIsSymbolPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSymbolPresent( false );
	expected = false;
	actual = object.getIsSymbolPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextPresent1, MxEsDegreeValue )
{
	MxEsDegreeValue object;
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
TEST( getIsDefaultXPresent2, MxEsDegreeValue )
{
	MxEsDegreeValue object;
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
TEST( getIsDefaultYPresent3, MxEsDegreeValue )
{
	MxEsDegreeValue object;
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
TEST( getIsRelativeXPresent4, MxEsDegreeValue )
{
	MxEsDegreeValue object;
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
TEST( getIsRelativeYPresent5, MxEsDegreeValue )
{
	MxEsDegreeValue object;
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
TEST( getIsFontFamilyPresent6, MxEsDegreeValue )
{
	MxEsDegreeValue object;
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
TEST( getIsFontStylePresent7, MxEsDegreeValue )
{
	MxEsDegreeValue object;
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
TEST( getIsFontSizePresent8, MxEsDegreeValue )
{
	MxEsDegreeValue object;
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
TEST( getIsFontWeightPresent9, MxEsDegreeValue )
{
	MxEsDegreeValue object;
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
TEST( getIsColorPresent10, MxEsDegreeValue )
{
	MxEsDegreeValue object;
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

TEST( getIsSymbolDefaultDefined, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsSymbolDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextDefaultDefined, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsTextDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getSymbolDefaultValue, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	MxEnumDegreeSymbolValue expected;
	MxEnumDegreeSymbolValue actual = object.getSymbolDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTextDefaultValue, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	XsToken expected;
	XsToken actual = object.getTextDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsDegreeValue )
{
	MxEsDegreeValue object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 51.4 ) );
	object.setDefaultY( MxNumberTenths( 51.4 ) );
	object.setRelativeX( MxNumberTenths( 51.4 ) );
	object.setRelativeY( MxNumberTenths( 51.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	expected = "<degree-value symbol=\"major\" text=\"\" default-x=\"51.4\" default-y=\"51.4\" relative-x=\"51.4\" relative-y=\"51.4\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F4F3F2\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 51.5 ) );
	object.setDefaultY( MxNumberTenths( 51.5 ) );
	object.setRelativeX( MxNumberTenths( 51.5 ) );
	object.setRelativeY( MxNumberTenths( 51.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<degree-value text=\"\" default-x=\"51.5\" default-y=\"51.5\" relative-x=\"51.5\" relative-y=\"51.5\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#F5F6F5F4\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 51.6 ) );
	object.setDefaultY( MxNumberTenths( 51.6 ) );
	object.setRelativeX( MxNumberTenths( 51.6 ) );
	object.setRelativeY( MxNumberTenths( 51.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	expected = "<degree-value symbol=\"major\" default-x=\"51.6\" default-y=\"51.6\" relative-x=\"51.6\" relative-y=\"51.6\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F8F7F6\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 51.7 ) );
	object.setDefaultY( MxNumberTenths( 51.7 ) );
	object.setRelativeX( MxNumberTenths( 51.7 ) );
	object.setRelativeY( MxNumberTenths( 51.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<degree-value default-y=\"51.7\" relative-x=\"51.7\" relative-y=\"51.7\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#F9FAF9F8\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 51.8 ) );
	object.setDefaultY( MxNumberTenths( 51.8 ) );
	object.setRelativeX( MxNumberTenths( 51.8 ) );
	object.setRelativeY( MxNumberTenths( 51.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" relative-x=\"51.8\" relative-y=\"51.8\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#FCFBFA\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 51.9 ) );
	object.setDefaultY( MxNumberTenths( 51.9 ) );
	object.setRelativeX( MxNumberTenths( 51.9 ) );
	object.setRelativeY( MxNumberTenths( 51.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<degree-value text=\"\" relative-y=\"51.9\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#FDFEFDFC\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 52 ) );
	object.setDefaultY( MxNumberTenths( 52 ) );
	object.setRelativeX( MxNumberTenths( 52 ) );
	object.setRelativeY( MxNumberTenths( 52 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<degree-value symbol=\"major\" default-x=\"52\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#00FFFE\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 52.1 ) );
	object.setDefaultY( MxNumberTenths( 52.1 ) );
	object.setRelativeX( MxNumberTenths( 52.1 ) );
	object.setRelativeY( MxNumberTenths( 52.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#01020100" ) );
	expected = "<degree-value default-x=\"52.1\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#01020100\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 52.2 ) );
	object.setDefaultY( MxNumberTenths( 52.2 ) );
	object.setRelativeX( MxNumberTenths( 52.2 ) );
	object.setRelativeY( MxNumberTenths( 52.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#040302" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-x=\"52.2\" default-y=\"52.2\" font-size=\"1.1\" font-weight=\"bold\" color=\"#040302\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 52.3 ) );
	object.setDefaultY( MxNumberTenths( 52.3 ) );
	object.setRelativeX( MxNumberTenths( 52.3 ) );
	object.setRelativeY( MxNumberTenths( 52.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#05060504" ) );
	expected = "<degree-value text=\"\" default-y=\"52.3\" font-weight=\"normal\" color=\"#05060504\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 52.4 ) );
	object.setDefaultY( MxNumberTenths( 52.4 ) );
	object.setRelativeX( MxNumberTenths( 52.4 ) );
	object.setRelativeY( MxNumberTenths( 52.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#080706" ) );
	expected = "<degree-value symbol=\"major\" default-y=\"52.4\" relative-x=\"52.4\" color=\"#080706\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 52.5 ) );
	object.setDefaultY( MxNumberTenths( 52.5 ) );
	object.setRelativeX( MxNumberTenths( 52.5 ) );
	object.setRelativeY( MxNumberTenths( 52.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#090A0908" ) );
	expected = "<degree-value default-y=\"52.5\" relative-x=\"52.5\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 52.6 ) );
	object.setDefaultY( MxNumberTenths( 52.6 ) );
	object.setRelativeX( MxNumberTenths( 52.6 ) );
	object.setRelativeY( MxNumberTenths( 52.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-x=\"52.6\" relative-x=\"52.6\" relative-y=\"52.6\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 52.7 ) );
	object.setDefaultY( MxNumberTenths( 52.7 ) );
	object.setRelativeX( MxNumberTenths( 52.7 ) );
	object.setRelativeY( MxNumberTenths( 52.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	expected = "<degree-value text=\"\" default-x=\"52.7\" relative-x=\"52.7\" relative-y=\"52.7\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 52.8 ) );
	object.setDefaultY( MxNumberTenths( 52.8 ) );
	object.setRelativeX( MxNumberTenths( 52.8 ) );
	object.setRelativeY( MxNumberTenths( 52.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#100F0E" ) );
	expected = "<degree-value symbol=\"major\" default-x=\"52.8\" relative-x=\"52.8\" relative-y=\"52.8\" font-family=\"DEF\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 52.9 ) );
	object.setDefaultY( MxNumberTenths( 52.9 ) );
	object.setRelativeX( MxNumberTenths( 52.9 ) );
	object.setRelativeY( MxNumberTenths( 52.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#11121110" ) );
	expected = "<degree-value relative-y=\"52.9\" font-family=\"XYZ\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 53 ) );
	object.setDefaultY( MxNumberTenths( 53 ) );
	object.setRelativeX( MxNumberTenths( 53 ) );
	object.setRelativeY( MxNumberTenths( 53 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#141312" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-y=\"53\" relative-y=\"53\" font-family=\"ABC\" font-style=\"italic\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 53.1 ) );
	object.setDefaultY( MxNumberTenths( 53.1 ) );
	object.setRelativeX( MxNumberTenths( 53.1 ) );
	object.setRelativeY( MxNumberTenths( 53.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#15161514" ) );
	expected = "<degree-value text=\"\" default-y=\"53.1\" relative-y=\"53.1\" font-family=\"DEF\" font-style=\"normal\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 53.2 ) );
	object.setDefaultY( MxNumberTenths( 53.2 ) );
	object.setRelativeX( MxNumberTenths( 53.2 ) );
	object.setRelativeY( MxNumberTenths( 53.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
	expected = "<degree-value symbol=\"major\" default-x=\"53.2\" default-y=\"53.2\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 53.3 ) );
	object.setDefaultY( MxNumberTenths( 53.3 ) );
	object.setRelativeX( MxNumberTenths( 53.3 ) );
	object.setRelativeY( MxNumberTenths( 53.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<degree-value default-x=\"53.3\" default-y=\"53.3\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 53.4 ) );
	object.setDefaultY( MxNumberTenths( 53.4 ) );
	object.setRelativeX( MxNumberTenths( 53.4 ) );
	object.setRelativeY( MxNumberTenths( 53.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-x=\"53.4\" relative-x=\"53.4\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 53.5 ) );
	object.setDefaultY( MxNumberTenths( 53.5 ) );
	object.setRelativeX( MxNumberTenths( 53.5 ) );
	object.setRelativeY( MxNumberTenths( 53.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<degree-value text=\"\" relative-x=\"53.5\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 53.6 ) );
	object.setDefaultY( MxNumberTenths( 53.6 ) );
	object.setRelativeX( MxNumberTenths( 53.6 ) );
	object.setRelativeY( MxNumberTenths( 53.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<degree-value symbol=\"major\" relative-x=\"53.6\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#201F1E\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 53.7 ) );
	object.setDefaultY( MxNumberTenths( 53.7 ) );
	object.setRelativeX( MxNumberTenths( 53.7 ) );
	object.setRelativeY( MxNumberTenths( 53.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<degree-value relative-x=\"53.7\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#21222120\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 53.8 ) );
	object.setDefaultY( MxNumberTenths( 53.8 ) );
	object.setRelativeX( MxNumberTenths( 53.8 ) );
	object.setRelativeY( MxNumberTenths( 53.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-x=\"53.8\" default-y=\"53.8\" relative-x=\"53.8\" relative-y=\"53.8\" font-size=\"1.1\" font-weight=\"bold\" color=\"#242322\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 53.9 ) );
	object.setDefaultY( MxNumberTenths( 53.9 ) );
	object.setRelativeX( MxNumberTenths( 53.9 ) );
	object.setRelativeY( MxNumberTenths( 53.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<degree-value text=\"\" default-x=\"53.9\" default-y=\"53.9\" relative-y=\"53.9\" font-size=\"large\" font-weight=\"normal\" color=\"#25262524\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 54 ) );
	object.setDefaultY( MxNumberTenths( 54 ) );
	object.setRelativeX( MxNumberTenths( 54 ) );
	object.setRelativeY( MxNumberTenths( 54 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<degree-value symbol=\"major\" default-x=\"54\" default-y=\"54\" relative-y=\"54\" font-size=\"1.1\" font-weight=\"bold\" color=\"#282726\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 54.1 ) );
	object.setDefaultY( MxNumberTenths( 54.1 ) );
	object.setRelativeX( MxNumberTenths( 54.1 ) );
	object.setRelativeY( MxNumberTenths( 54.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<degree-value default-y=\"54.1\" relative-y=\"54.1\" font-weight=\"normal\" color=\"#292A2928\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 54.2 ) );
	object.setDefaultY( MxNumberTenths( 54.2 ) );
	object.setRelativeX( MxNumberTenths( 54.2 ) );
	object.setRelativeY( MxNumberTenths( 54.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" relative-y=\"54.2\" font-family=\"ABC\" font-weight=\"bold\" color=\"#2C2B2A\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 54.3 ) );
	object.setDefaultY( MxNumberTenths( 54.3 ) );
	object.setRelativeX( MxNumberTenths( 54.3 ) );
	object.setRelativeY( MxNumberTenths( 54.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<degree-value text=\"\" relative-y=\"54.3\" font-family=\"DEF\" font-weight=\"normal\" color=\"#2D2E2D2C\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 54.4 ) );
	object.setDefaultY( MxNumberTenths( 54.4 ) );
	object.setRelativeX( MxNumberTenths( 54.4 ) );
	object.setRelativeY( MxNumberTenths( 54.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<degree-value symbol=\"major\" default-x=\"54.4\" relative-x=\"54.4\" font-family=\"XYZ\" color=\"#302F2E\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 54.5 ) );
	object.setDefaultY( MxNumberTenths( 54.5 ) );
	object.setRelativeX( MxNumberTenths( 54.5 ) );
	object.setRelativeY( MxNumberTenths( 54.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<degree-value default-x=\"54.5\" relative-x=\"54.5\" font-family=\"ABC\" color=\"#31323130\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 54.6 ) );
	object.setDefaultY( MxNumberTenths( 54.6 ) );
	object.setRelativeX( MxNumberTenths( 54.6 ) );
	object.setRelativeY( MxNumberTenths( 54.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-x=\"54.6\" default-y=\"54.6\" relative-x=\"54.6\" font-family=\"DEF\" font-style=\"italic\" color=\"#343332\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 54.7 ) );
	object.setDefaultY( MxNumberTenths( 54.7 ) );
	object.setRelativeX( MxNumberTenths( 54.7 ) );
	object.setRelativeY( MxNumberTenths( 54.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<degree-value text=\"\" default-y=\"54.7\" relative-x=\"54.7\" font-family=\"XYZ\" font-style=\"normal\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 54.8 ) );
	object.setDefaultY( MxNumberTenths( 54.8 ) );
	object.setRelativeX( MxNumberTenths( 54.8 ) );
	object.setRelativeY( MxNumberTenths( 54.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<degree-value symbol=\"major\" default-y=\"54.8\" relative-x=\"54.8\" font-family=\"ABC\" font-style=\"italic\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 54.9 ) );
	object.setDefaultY( MxNumberTenths( 54.9 ) );
	object.setRelativeX( MxNumberTenths( 54.9 ) );
	object.setRelativeY( MxNumberTenths( 54.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<degree-value default-y=\"54.9\" font-style=\"normal\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 55 ) );
	object.setDefaultY( MxNumberTenths( 55 ) );
	object.setRelativeX( MxNumberTenths( 55 ) );
	object.setRelativeY( MxNumberTenths( 55 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-x=\"55\" relative-y=\"55\" font-style=\"italic\" font-size=\"1.1\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 55.1 ) );
	object.setDefaultY( MxNumberTenths( 55.1 ) );
	object.setRelativeX( MxNumberTenths( 55.1 ) );
	object.setRelativeY( MxNumberTenths( 55.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<degree-value text=\"\" default-x=\"55.1\" relative-y=\"55.1\" font-style=\"normal\" font-size=\"large\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 55.2 ) );
	object.setDefaultY( MxNumberTenths( 55.2 ) );
	object.setRelativeX( MxNumberTenths( 55.2 ) );
	object.setRelativeY( MxNumberTenths( 55.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<degree-value symbol=\"major\" default-x=\"55.2\" relative-y=\"55.2\" font-style=\"italic\" font-size=\"1.1\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 55.3 ) );
	object.setDefaultY( MxNumberTenths( 55.3 ) );
	object.setRelativeX( MxNumberTenths( 55.3 ) );
	object.setRelativeY( MxNumberTenths( 55.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<degree-value relative-y=\"55.3\" font-style=\"normal\" font-size=\"large\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 55.4 ) );
	object.setDefaultY( MxNumberTenths( 55.4 ) );
	object.setRelativeX( MxNumberTenths( 55.4 ) );
	object.setRelativeY( MxNumberTenths( 55.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-y=\"55.4\" relative-x=\"55.4\" relative-y=\"55.4\" font-size=\"1.1\" font-weight=\"bold\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 55.5 ) );
	object.setDefaultY( MxNumberTenths( 55.5 ) );
	object.setRelativeX( MxNumberTenths( 55.5 ) );
	object.setRelativeY( MxNumberTenths( 55.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<degree-value text=\"\" default-y=\"55.5\" relative-x=\"55.5\" relative-y=\"55.5\" font-size=\"large\" font-weight=\"normal\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 55.6 ) );
	object.setDefaultY( MxNumberTenths( 55.6 ) );
	object.setRelativeX( MxNumberTenths( 55.6 ) );
	object.setRelativeY( MxNumberTenths( 55.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<degree-value symbol=\"major\" default-x=\"55.6\" default-y=\"55.6\" relative-x=\"55.6\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 55.7 ) );
	object.setDefaultY( MxNumberTenths( 55.7 ) );
	object.setRelativeX( MxNumberTenths( 55.7 ) );
	object.setRelativeY( MxNumberTenths( 55.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<degree-value default-x=\"55.7\" default-y=\"55.7\" relative-x=\"55.7\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 55.8 ) );
	object.setDefaultY( MxNumberTenths( 55.8 ) );
	object.setRelativeX( MxNumberTenths( 55.8 ) );
	object.setRelativeY( MxNumberTenths( 55.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-x=\"55.8\" relative-x=\"55.8\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" color=\"#4C4B4A\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 55.9 ) );
	object.setDefaultY( MxNumberTenths( 55.9 ) );
	object.setRelativeX( MxNumberTenths( 55.9 ) );
	object.setRelativeY( MxNumberTenths( 55.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<degree-value text=\"\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#4D4E4D4C\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 56 ) );
	object.setDefaultY( MxNumberTenths( 56 ) );
	object.setRelativeX( MxNumberTenths( 56 ) );
	object.setRelativeY( MxNumberTenths( 56 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<degree-value symbol=\"major\" font-family=\"ABC\" font-weight=\"bold\" color=\"#504F4E\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 56.1 ) );
	object.setDefaultY( MxNumberTenths( 56.1 ) );
	object.setRelativeX( MxNumberTenths( 56.1 ) );
	object.setRelativeY( MxNumberTenths( 56.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<degree-value font-family=\"DEF\" font-weight=\"normal\" color=\"#51525150\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 56.2 ) );
	object.setDefaultY( MxNumberTenths( 56.2 ) );
	object.setRelativeX( MxNumberTenths( 56.2 ) );
	object.setRelativeY( MxNumberTenths( 56.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-x=\"56.2\" default-y=\"56.2\" relative-y=\"56.2\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" color=\"#545352\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 56.3 ) );
	object.setDefaultY( MxNumberTenths( 56.3 ) );
	object.setRelativeX( MxNumberTenths( 56.3 ) );
	object.setRelativeY( MxNumberTenths( 56.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#55565554" ) );
	expected = "<degree-value text=\"\" default-x=\"56.3\" default-y=\"56.3\" relative-y=\"56.3\" font-style=\"normal\" font-weight=\"normal\" color=\"#55565554\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 56.4 ) );
	object.setDefaultY( MxNumberTenths( 56.4 ) );
	object.setRelativeX( MxNumberTenths( 56.4 ) );
	object.setRelativeY( MxNumberTenths( 56.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#585756" ) );
	expected = "<degree-value symbol=\"major\" default-x=\"56.4\" default-y=\"56.4\" relative-x=\"56.4\" relative-y=\"56.4\" font-style=\"italic\" color=\"#585756\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 56.5 ) );
	object.setDefaultY( MxNumberTenths( 56.5 ) );
	object.setRelativeX( MxNumberTenths( 56.5 ) );
	object.setRelativeY( MxNumberTenths( 56.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
	expected = "<degree-value default-y=\"56.5\" relative-x=\"56.5\" relative-y=\"56.5\" font-style=\"normal\" color=\"#595A5958\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 56.6 ) );
	object.setDefaultY( MxNumberTenths( 56.6 ) );
	object.setRelativeX( MxNumberTenths( 56.6 ) );
	object.setRelativeY( MxNumberTenths( 56.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" relative-x=\"56.6\" relative-y=\"56.6\" font-style=\"italic\" color=\"#5C5B5A\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 56.7 ) );
	object.setDefaultY( MxNumberTenths( 56.7 ) );
	object.setRelativeX( MxNumberTenths( 56.7 ) );
	object.setRelativeY( MxNumberTenths( 56.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	expected = "<degree-value text=\"\" relative-x=\"56.7\" relative-y=\"56.7\" font-style=\"normal\" color=\"#5D5E5D5C\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 56.8 ) );
	object.setDefaultY( MxNumberTenths( 56.8 ) );
	object.setRelativeX( MxNumberTenths( 56.8 ) );
	object.setRelativeY( MxNumberTenths( 56.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
	expected = "<degree-value symbol=\"major\" default-x=\"56.8\" relative-x=\"56.8\" font-style=\"italic\" font-size=\"1.1\" color=\"#605F5E\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 56.9 ) );
	object.setDefaultY( MxNumberTenths( 56.9 ) );
	object.setRelativeX( MxNumberTenths( 56.9 ) );
	object.setRelativeY( MxNumberTenths( 56.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<degree-value default-x=\"56.9\" font-style=\"normal\" font-size=\"large\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 57 ) );
	object.setDefaultY( MxNumberTenths( 57 ) );
	object.setRelativeX( MxNumberTenths( 57 ) );
	object.setRelativeY( MxNumberTenths( 57 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-x=\"57\" default-y=\"57\" font-family=\"DEF\" font-size=\"1.1\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 57.1 ) );
	object.setDefaultY( MxNumberTenths( 57.1 ) );
	object.setRelativeX( MxNumberTenths( 57.1 ) );
	object.setRelativeY( MxNumberTenths( 57.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<degree-value text=\"\" default-y=\"57.1\" font-family=\"XYZ\" font-size=\"large\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 57.2 ) );
	object.setDefaultY( MxNumberTenths( 57.2 ) );
	object.setRelativeX( MxNumberTenths( 57.2 ) );
	object.setRelativeY( MxNumberTenths( 57.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<degree-value symbol=\"major\" default-y=\"57.2\" font-family=\"ABC\" font-size=\"1.1\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 57.3 ) );
	object.setDefaultY( MxNumberTenths( 57.3 ) );
	object.setRelativeX( MxNumberTenths( 57.3 ) );
	object.setRelativeY( MxNumberTenths( 57.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<degree-value default-y=\"57.3\" font-family=\"DEF\" font-size=\"large\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 57.4 ) );
	object.setDefaultY( MxNumberTenths( 57.4 ) );
	object.setRelativeX( MxNumberTenths( 57.4 ) );
	object.setRelativeY( MxNumberTenths( 57.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-x=\"57.4\" relative-x=\"57.4\" relative-y=\"57.4\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 57.5 ) );
	object.setDefaultY( MxNumberTenths( 57.5 ) );
	object.setRelativeX( MxNumberTenths( 57.5 ) );
	object.setRelativeY( MxNumberTenths( 57.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<degree-value text=\"\" default-x=\"57.5\" relative-x=\"57.5\" relative-y=\"57.5\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 57.6 ) );
	object.setDefaultY( MxNumberTenths( 57.6 ) );
	object.setRelativeX( MxNumberTenths( 57.6 ) );
	object.setRelativeY( MxNumberTenths( 57.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<degree-value symbol=\"major\" default-x=\"57.6\" relative-x=\"57.6\" relative-y=\"57.6\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 57.7 ) );
	object.setDefaultY( MxNumberTenths( 57.7 ) );
	object.setRelativeX( MxNumberTenths( 57.7 ) );
	object.setRelativeY( MxNumberTenths( 57.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<degree-value relative-x=\"57.7\" relative-y=\"57.7\" font-weight=\"normal\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 57.8 ) );
	object.setDefaultY( MxNumberTenths( 57.8 ) );
	object.setRelativeX( MxNumberTenths( 57.8 ) );
	object.setRelativeY( MxNumberTenths( 57.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-y=\"57.8\" relative-x=\"57.8\" relative-y=\"57.8\" font-style=\"italic\" font-weight=\"bold\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 57.9 ) );
	object.setDefaultY( MxNumberTenths( 57.9 ) );
	object.setRelativeX( MxNumberTenths( 57.9 ) );
	object.setRelativeY( MxNumberTenths( 57.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<degree-value text=\"\" default-y=\"57.9\" relative-y=\"57.9\" font-style=\"normal\" font-weight=\"normal\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 58 ) );
	object.setDefaultY( MxNumberTenths( 58 ) );
	object.setRelativeX( MxNumberTenths( 58 ) );
	object.setRelativeY( MxNumberTenths( 58 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<degree-value symbol=\"major\" default-x=\"58\" default-y=\"58\" font-style=\"italic\" font-weight=\"bold\" color=\"#787776\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 58.1 ) );
	object.setDefaultY( MxNumberTenths( 58.1 ) );
	object.setRelativeX( MxNumberTenths( 58.1 ) );
	object.setRelativeY( MxNumberTenths( 58.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<degree-value default-x=\"58.1\" default-y=\"58.1\" font-style=\"normal\" font-weight=\"normal\" color=\"#797A7978\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 58.2 ) );
	object.setDefaultY( MxNumberTenths( 58.2 ) );
	object.setRelativeX( MxNumberTenths( 58.2 ) );
	object.setRelativeY( MxNumberTenths( 58.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-x=\"58.2\" font-style=\"italic\" font-weight=\"bold\" color=\"#7C7B7A\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 58.3 ) );
	object.setDefaultY( MxNumberTenths( 58.3 ) );
	object.setRelativeX( MxNumberTenths( 58.3 ) );
	object.setRelativeY( MxNumberTenths( 58.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<degree-value text=\"\" font-style=\"normal\" font-weight=\"normal\" color=\"#7D7E7D7C\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 58.4 ) );
	object.setDefaultY( MxNumberTenths( 58.4 ) );
	object.setRelativeX( MxNumberTenths( 58.4 ) );
	object.setRelativeY( MxNumberTenths( 58.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<degree-value symbol=\"major\" relative-x=\"58.4\" font-family=\"ABC\" font-style=\"italic\" color=\"#807F7E\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 58.5 ) );
	object.setDefaultY( MxNumberTenths( 58.5 ) );
	object.setRelativeX( MxNumberTenths( 58.5 ) );
	object.setRelativeY( MxNumberTenths( 58.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<degree-value relative-x=\"58.5\" font-family=\"DEF\" font-style=\"normal\" color=\"#81828180\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 58.6 ) );
	object.setDefaultY( MxNumberTenths( 58.6 ) );
	object.setRelativeX( MxNumberTenths( 58.6 ) );
	object.setRelativeY( MxNumberTenths( 58.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-x=\"58.6\" default-y=\"58.6\" relative-x=\"58.6\" relative-y=\"58.6\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#848382\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 58.7 ) );
	object.setDefaultY( MxNumberTenths( 58.7 ) );
	object.setRelativeX( MxNumberTenths( 58.7 ) );
	object.setRelativeY( MxNumberTenths( 58.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<degree-value text=\"\" default-x=\"58.7\" default-y=\"58.7\" relative-x=\"58.7\" relative-y=\"58.7\" font-family=\"ABC\" font-size=\"large\" color=\"#85868584\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 58.8 ) );
	object.setDefaultY( MxNumberTenths( 58.8 ) );
	object.setRelativeX( MxNumberTenths( 58.8 ) );
	object.setRelativeY( MxNumberTenths( 58.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<degree-value symbol=\"major\" default-x=\"58.8\" default-y=\"58.8\" relative-x=\"58.8\" relative-y=\"58.8\" font-family=\"DEF\" font-size=\"1.1\" color=\"#888786\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 58.9 ) );
	object.setDefaultY( MxNumberTenths( 58.9 ) );
	object.setRelativeX( MxNumberTenths( 58.9 ) );
	object.setRelativeY( MxNumberTenths( 58.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<degree-value default-y=\"58.9\" relative-y=\"58.9\" font-family=\"XYZ\" font-size=\"large\" color=\"#898A8988\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 59 ) );
	object.setDefaultY( MxNumberTenths( 59 ) );
	object.setRelativeX( MxNumberTenths( 59 ) );
	object.setRelativeY( MxNumberTenths( 59 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" relative-y=\"59\" font-family=\"ABC\" font-size=\"1.1\" color=\"#8C8B8A\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 59.1 ) );
	object.setDefaultY( MxNumberTenths( 59.1 ) );
	object.setRelativeX( MxNumberTenths( 59.1 ) );
	object.setRelativeY( MxNumberTenths( 59.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<degree-value text=\"\" relative-y=\"59.1\" font-size=\"large\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 59.2 ) );
	object.setDefaultY( MxNumberTenths( 59.2 ) );
	object.setRelativeX( MxNumberTenths( 59.2 ) );
	object.setRelativeY( MxNumberTenths( 59.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<degree-value symbol=\"major\" default-x=\"59.2\" font-size=\"1.1\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 59.3 ) );
	object.setDefaultY( MxNumberTenths( 59.3 ) );
	object.setRelativeX( MxNumberTenths( 59.3 ) );
	object.setRelativeY( MxNumberTenths( 59.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<degree-value default-x=\"59.3\" font-size=\"large\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 59.4 ) );
	object.setDefaultY( MxNumberTenths( 59.4 ) );
	object.setRelativeX( MxNumberTenths( 59.4 ) );
	object.setRelativeY( MxNumberTenths( 59.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-x=\"59.4\" default-y=\"59.4\" relative-x=\"59.4\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 59.5 ) );
	object.setDefaultY( MxNumberTenths( 59.5 ) );
	object.setRelativeX( MxNumberTenths( 59.5 ) );
	object.setRelativeY( MxNumberTenths( 59.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<degree-value text=\"\" default-y=\"59.5\" relative-x=\"59.5\" font-style=\"normal\" font-weight=\"normal\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 59.6 ) );
	object.setDefaultY( MxNumberTenths( 59.6 ) );
	object.setRelativeX( MxNumberTenths( 59.6 ) );
	object.setRelativeY( MxNumberTenths( 59.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<degree-value symbol=\"major\" default-y=\"59.6\" relative-x=\"59.6\" font-style=\"italic\" font-weight=\"bold\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 59.7 ) );
	object.setDefaultY( MxNumberTenths( 59.7 ) );
	object.setRelativeX( MxNumberTenths( 59.7 ) );
	object.setRelativeY( MxNumberTenths( 59.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<degree-value default-y=\"59.7\" relative-x=\"59.7\" font-style=\"normal\" font-weight=\"normal\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 59.8 ) );
	object.setDefaultY( MxNumberTenths( 59.8 ) );
	object.setRelativeX( MxNumberTenths( 59.8 ) );
	object.setRelativeY( MxNumberTenths( 59.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-x=\"59.8\" relative-x=\"59.8\" relative-y=\"59.8\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 59.9 ) );
	object.setDefaultY( MxNumberTenths( 59.9 ) );
	object.setRelativeX( MxNumberTenths( 59.9 ) );
	object.setRelativeY( MxNumberTenths( 59.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<degree-value text=\"\" default-x=\"59.9\" relative-y=\"59.9\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 60 ) );
	object.setDefaultY( MxNumberTenths( 60 ) );
	object.setRelativeX( MxNumberTenths( 60 ) );
	object.setRelativeY( MxNumberTenths( 60 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<degree-value symbol=\"major\" default-x=\"60\" relative-y=\"60\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 60.1 ) );
	object.setDefaultY( MxNumberTenths( 60.1 ) );
	object.setRelativeX( MxNumberTenths( 60.1 ) );
	object.setRelativeY( MxNumberTenths( 60.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<degree-value relative-y=\"60.1\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 60.2 ) );
	object.setDefaultY( MxNumberTenths( 60.2 ) );
	object.setRelativeX( MxNumberTenths( 60.2 ) );
	object.setRelativeY( MxNumberTenths( 60.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-y=\"60.2\" relative-y=\"60.2\" font-family=\"ABC\" font-weight=\"bold\" color=\"#A4A3A2\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 60.3 ) );
	object.setDefaultY( MxNumberTenths( 60.3 ) );
	object.setRelativeX( MxNumberTenths( 60.3 ) );
	object.setRelativeY( MxNumberTenths( 60.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<degree-value text=\"\" default-y=\"60.3\" relative-y=\"60.3\" font-family=\"DEF\" font-weight=\"normal\" color=\"#A5A6A5A4\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 60.4 ) );
	object.setDefaultY( MxNumberTenths( 60.4 ) );
	object.setRelativeX( MxNumberTenths( 60.4 ) );
	object.setRelativeY( MxNumberTenths( 60.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<degree-value symbol=\"major\" default-x=\"60.4\" default-y=\"60.4\" relative-x=\"60.4\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#A8A7A6\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 60.5 ) );
	object.setDefaultY( MxNumberTenths( 60.5 ) );
	object.setRelativeX( MxNumberTenths( 60.5 ) );
	object.setRelativeY( MxNumberTenths( 60.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<degree-value default-x=\"60.5\" default-y=\"60.5\" relative-x=\"60.5\" font-size=\"large\" color=\"#A9AAA9A8\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 60.6 ) );
	object.setDefaultY( MxNumberTenths( 60.6 ) );
	object.setRelativeX( MxNumberTenths( 60.6 ) );
	object.setRelativeY( MxNumberTenths( 60.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-x=\"60.6\" relative-x=\"60.6\" font-size=\"1.1\" color=\"#ACABAA\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 60.7 ) );
	object.setDefaultY( MxNumberTenths( 60.7 ) );
	object.setRelativeX( MxNumberTenths( 60.7 ) );
	object.setRelativeY( MxNumberTenths( 60.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<degree-value text=\"\" relative-x=\"60.7\" font-size=\"large\" color=\"#ADAEADAC\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 60.8 ) );
	object.setDefaultY( MxNumberTenths( 60.8 ) );
	object.setRelativeX( MxNumberTenths( 60.8 ) );
	object.setRelativeY( MxNumberTenths( 60.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<degree-value symbol=\"major\" relative-x=\"60.8\" font-size=\"1.1\" color=\"#B0AFAE\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 60.9 ) );
	object.setDefaultY( MxNumberTenths( 60.9 ) );
	object.setRelativeX( MxNumberTenths( 60.9 ) );
	object.setRelativeY( MxNumberTenths( 60.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<degree-value font-size=\"large\" color=\"#B1B2B1B0\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 61 ) );
	object.setDefaultY( MxNumberTenths( 61 ) );
	object.setRelativeX( MxNumberTenths( 61 ) );
	object.setRelativeY( MxNumberTenths( 61 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<degree-value symbol=\"major\" text=\"\" default-x=\"61\" default-y=\"61\" relative-y=\"61\" font-style=\"italic\" font-size=\"1.1\" color=\"#B4B3B2\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 61.1 ) );
	object.setDefaultY( MxNumberTenths( 61.1 ) );
	object.setRelativeX( MxNumberTenths( 61.1 ) );
	object.setRelativeY( MxNumberTenths( 61.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<degree-value text=\"\" default-x=\"61.1\" default-y=\"61.1\" relative-y=\"61.1\" font-style=\"normal\" font-size=\"large\" color=\"#B5B6B5B4\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( true );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 61.2 ) );
	object.setDefaultY( MxNumberTenths( 61.2 ) );
	object.setRelativeX( MxNumberTenths( 61.2 ) );
	object.setRelativeY( MxNumberTenths( 61.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<degree-value symbol=\"major\" default-x=\"61.2\" default-y=\"61.2\" relative-y=\"61.2\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#B8B7B6\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 61.3 ) );
	object.setDefaultY( MxNumberTenths( 61.3 ) );
	object.setRelativeX( MxNumberTenths( 61.3 ) );
	object.setRelativeY( MxNumberTenths( 61.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<degree-value default-y=\"61.3\" relative-y=\"61.3\" font-family=\"XYZ\" font-style=\"normal\">1</degree-value>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEsDegreeValue )
{
	MxEsDegreeValue object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSymbolPresent( false );
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setSymbol( MxEnumDegreeSymbolValue( lexicon::enums::DegreeSymbolValue::major ) );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 61.4 ) );
	object.setDefaultY( MxNumberTenths( 61.4 ) );
	object.setRelativeX( MxNumberTenths( 61.4 ) );
	object.setRelativeY( MxNumberTenths( 61.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<degree-value>1</degree-value>";
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


