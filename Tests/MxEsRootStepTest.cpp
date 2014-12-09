/** *******************************************************
  * 
  * MxEsRootStepTest.cpp
  * Created: 2014-12-05 20:57:54
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsRootStep.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsRootStep )
{
	MxEsRootStep object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsRootStep )
{
	MxEsRootStep object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getText().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsRootStep )
{
	MxEsRootStep object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsRootStep )
{
	MxEsRootStep object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsRootStep )
{
	MxEsRootStep object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEsRootStep )
{
	MxEsRootStep object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEsRootStep )
{
	MxEsRootStep object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEsRootStep )
{
	MxEsRootStep object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEsRootStep )
{
	MxEsRootStep object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEsRootStep )
{
	MxEsRootStep object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEsRootStep )
{
	MxEsRootStep object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsRootStep )
{
	MxEsRootStep object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsRootStep )
{
	MxEsRootStep object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::a );
	std::string expected;
	std::string actual;
	expected = "A";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStep( lexicon::enums::Step::b ) );
	expected = "B";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::c );
	std::string expected;
	std::string actual;
	expected = "C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStep( lexicon::enums::Step::d ) );
	expected = "D";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::e );
	std::string expected;
	std::string actual;
	expected = "E";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStep( lexicon::enums::Step::f ) );
	expected = "F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::g );
	std::string expected;
	std::string actual;
	expected = "G";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStep( lexicon::enums::Step::a ) );
	expected = "A";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::b );
	std::string expected;
	std::string actual;
	expected = "B";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStep( lexicon::enums::Step::c ) );
	expected = "C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEsRootStep )
{
	MxEsRootStep object;
	std::string expected = "MxEsRootStep";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsRootStep )
{
	MxEsRootStep object;
	std::string expected = "root-step";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsRootStep )
{
	MxEsRootStep object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setText0, MxEsRootStep )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxEsRootStep object;
	object.setText( value1 );
	XsToken expected = value1;
	XsToken actual = object.getText();
	CHECK_EQUAL( expected, actual )
	object.setText( value2 );
	expected = value2;
	actual = object.getText();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX1, MxEsRootStep )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsRootStep object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY2, MxEsRootStep )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsRootStep object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX3, MxEsRootStep )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsRootStep object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY4, MxEsRootStep )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsRootStep object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily5, MxEsRootStep )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEsRootStep object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle6, MxEsRootStep )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEsRootStep object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize7, MxEsRootStep )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEsRootStep object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight8, MxEsRootStep )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEsRootStep object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor9, MxEsRootStep )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsRootStep object;
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

TEST( getIsTextRequired0, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsTextRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired1, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired2, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired3, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired4, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired5, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired6, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired7, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired8, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired9, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTextPresent0, MxEsRootStep )
{
	MxEsRootStep object;
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
TEST( getIsDefaultXPresent1, MxEsRootStep )
{
	MxEsRootStep object;
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
TEST( getIsDefaultYPresent2, MxEsRootStep )
{
	MxEsRootStep object;
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
TEST( getIsRelativeXPresent3, MxEsRootStep )
{
	MxEsRootStep object;
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
TEST( getIsRelativeYPresent4, MxEsRootStep )
{
	MxEsRootStep object;
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
TEST( getIsFontFamilyPresent5, MxEsRootStep )
{
	MxEsRootStep object;
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
TEST( getIsFontStylePresent6, MxEsRootStep )
{
	MxEsRootStep object;
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
TEST( getIsFontSizePresent7, MxEsRootStep )
{
	MxEsRootStep object;
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
TEST( getIsFontWeightPresent8, MxEsRootStep )
{
	MxEsRootStep object;
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
TEST( getIsColorPresent9, MxEsRootStep )
{
	MxEsRootStep object;
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

TEST( getIsTextDefaultDefined, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsTextDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsRootStep )
{
	MxEsRootStep object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTextDefaultValue, MxEsRootStep )
{
	MxEsRootStep object;
	XsToken expected;
	XsToken actual = object.getTextDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEsRootStep )
{
	MxEsRootStep object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEsRootStep )
{
	MxEsRootStep object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEsRootStep )
{
	MxEsRootStep object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEsRootStep )
{
	MxEsRootStep object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEsRootStep )
{
	MxEsRootStep object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEsRootStep )
{
	MxEsRootStep object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEsRootStep )
{
	MxEsRootStep object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEsRootStep )
{
	MxEsRootStep object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsRootStep )
{
	MxEsRootStep object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 152.4 ) );
	object.setDefaultY( MxNumberTenths( 152.4 ) );
	object.setRelativeX( MxNumberTenths( 152.4 ) );
	object.setRelativeY( MxNumberTenths( 152.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#15161514" ) );
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
	expected = "<root-step text=\"\" default-x=\"152.4\" default-y=\"152.4\" relative-x=\"152.4\" relative-y=\"152.4\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#15161514\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
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
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 152.5 ) );
	object.setDefaultY( MxNumberTenths( 152.5 ) );
	object.setRelativeX( MxNumberTenths( 152.5 ) );
	object.setRelativeY( MxNumberTenths( 152.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#181716" ) );
	expected = "<root-step default-x=\"152.5\" default-y=\"152.5\" relative-x=\"152.5\" relative-y=\"152.5\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#181716\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 152.6 ) );
	object.setDefaultY( MxNumberTenths( 152.6 ) );
	object.setRelativeX( MxNumberTenths( 152.6 ) );
	object.setRelativeY( MxNumberTenths( 152.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<root-step text=\"\" default-y=\"152.6\" relative-x=\"152.6\" relative-y=\"152.6\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#191A1918\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 152.7 ) );
	object.setDefaultY( MxNumberTenths( 152.7 ) );
	object.setRelativeX( MxNumberTenths( 152.7 ) );
	object.setRelativeY( MxNumberTenths( 152.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<root-step relative-x=\"152.7\" relative-y=\"152.7\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#1C1B1A\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 152.8 ) );
	object.setDefaultY( MxNumberTenths( 152.8 ) );
	object.setRelativeX( MxNumberTenths( 152.8 ) );
	object.setRelativeY( MxNumberTenths( 152.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<root-step text=\"\" default-x=\"152.8\" relative-y=\"152.8\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#1D1E1D1C\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
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
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 152.9 ) );
	object.setDefaultY( MxNumberTenths( 152.9 ) );
	object.setRelativeX( MxNumberTenths( 152.9 ) );
	object.setRelativeY( MxNumberTenths( 152.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<root-step default-x=\"152.9\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#201F1E\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 153 ) );
	object.setDefaultY( MxNumberTenths( 153 ) );
	object.setRelativeX( MxNumberTenths( 153 ) );
	object.setRelativeY( MxNumberTenths( 153 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<root-step text=\"\" default-y=\"153\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#21222120\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 153.1 ) );
	object.setDefaultY( MxNumberTenths( 153.1 ) );
	object.setRelativeX( MxNumberTenths( 153.1 ) );
	object.setRelativeY( MxNumberTenths( 153.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<root-step default-y=\"153.1\" font-size=\"large\" font-weight=\"normal\" color=\"#242322\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 153.2 ) );
	object.setDefaultY( MxNumberTenths( 153.2 ) );
	object.setRelativeX( MxNumberTenths( 153.2 ) );
	object.setRelativeY( MxNumberTenths( 153.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<root-step text=\"\" default-x=\"153.2\" default-y=\"153.2\" relative-x=\"153.2\" font-weight=\"bold\" color=\"#25262524\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 153.3 ) );
	object.setDefaultY( MxNumberTenths( 153.3 ) );
	object.setRelativeX( MxNumberTenths( 153.3 ) );
	object.setRelativeY( MxNumberTenths( 153.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<root-step default-x=\"153.3\" relative-x=\"153.3\" color=\"#282726\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 153.4 ) );
	object.setDefaultY( MxNumberTenths( 153.4 ) );
	object.setRelativeX( MxNumberTenths( 153.4 ) );
	object.setRelativeY( MxNumberTenths( 153.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<root-step text=\"\" relative-x=\"153.4\" relative-y=\"153.4\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 153.5 ) );
	object.setDefaultY( MxNumberTenths( 153.5 ) );
	object.setRelativeX( MxNumberTenths( 153.5 ) );
	object.setRelativeY( MxNumberTenths( 153.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<root-step relative-x=\"153.5\" relative-y=\"153.5\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 153.6 ) );
	object.setDefaultY( MxNumberTenths( 153.6 ) );
	object.setRelativeX( MxNumberTenths( 153.6 ) );
	object.setRelativeY( MxNumberTenths( 153.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<root-step text=\"\" default-x=\"153.6\" default-y=\"153.6\" relative-y=\"153.6\" font-family=\"XYZ\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 153.7 ) );
	object.setDefaultY( MxNumberTenths( 153.7 ) );
	object.setRelativeX( MxNumberTenths( 153.7 ) );
	object.setRelativeY( MxNumberTenths( 153.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<root-step default-x=\"153.7\" default-y=\"153.7\" relative-y=\"153.7\" font-family=\"ABC\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
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
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 153.8 ) );
	object.setDefaultY( MxNumberTenths( 153.8 ) );
	object.setRelativeX( MxNumberTenths( 153.8 ) );
	object.setRelativeY( MxNumberTenths( 153.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<root-step text=\"\" default-y=\"153.8\" relative-y=\"153.8\" font-family=\"DEF\" font-style=\"italic\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 153.9 ) );
	object.setDefaultY( MxNumberTenths( 153.9 ) );
	object.setRelativeX( MxNumberTenths( 153.9 ) );
	object.setRelativeY( MxNumberTenths( 153.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<root-step font-family=\"XYZ\" font-style=\"normal\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 154 ) );
	object.setDefaultY( MxNumberTenths( 154 ) );
	object.setRelativeX( MxNumberTenths( 154 ) );
	object.setRelativeY( MxNumberTenths( 154 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<root-step text=\"\" default-x=\"154\" relative-x=\"154\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 154.1 ) );
	object.setDefaultY( MxNumberTenths( 154.1 ) );
	object.setRelativeX( MxNumberTenths( 154.1 ) );
	object.setRelativeY( MxNumberTenths( 154.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<root-step default-x=\"154.1\" relative-x=\"154.1\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 154.2 ) );
	object.setDefaultY( MxNumberTenths( 154.2 ) );
	object.setRelativeX( MxNumberTenths( 154.2 ) );
	object.setRelativeY( MxNumberTenths( 154.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<root-step text=\"\" default-y=\"154.2\" relative-x=\"154.2\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 154.3 ) );
	object.setDefaultY( MxNumberTenths( 154.3 ) );
	object.setRelativeX( MxNumberTenths( 154.3 ) );
	object.setRelativeY( MxNumberTenths( 154.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<root-step default-y=\"154.3\" relative-x=\"154.3\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 154.4 ) );
	object.setDefaultY( MxNumberTenths( 154.4 ) );
	object.setRelativeX( MxNumberTenths( 154.4 ) );
	object.setRelativeY( MxNumberTenths( 154.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<root-step text=\"\" default-x=\"154.4\" default-y=\"154.4\" relative-y=\"154.4\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#3D3E3D3C\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 154.5 ) );
	object.setDefaultY( MxNumberTenths( 154.5 ) );
	object.setRelativeX( MxNumberTenths( 154.5 ) );
	object.setRelativeY( MxNumberTenths( 154.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<root-step default-x=\"154.5\" relative-y=\"154.5\" font-size=\"large\" font-weight=\"normal\" color=\"#403F3E\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 154.6 ) );
	object.setDefaultY( MxNumberTenths( 154.6 ) );
	object.setRelativeX( MxNumberTenths( 154.6 ) );
	object.setRelativeY( MxNumberTenths( 154.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<root-step text=\"\" relative-y=\"154.6\" font-size=\"1.1\" font-weight=\"bold\" color=\"#41424140\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 154.7 ) );
	object.setDefaultY( MxNumberTenths( 154.7 ) );
	object.setRelativeX( MxNumberTenths( 154.7 ) );
	object.setRelativeY( MxNumberTenths( 154.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<root-step relative-y=\"154.7\" font-size=\"large\" font-weight=\"normal\" color=\"#444342\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 154.8 ) );
	object.setDefaultY( MxNumberTenths( 154.8 ) );
	object.setRelativeX( MxNumberTenths( 154.8 ) );
	object.setRelativeY( MxNumberTenths( 154.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<root-step text=\"\" default-x=\"154.8\" default-y=\"154.8\" relative-x=\"154.8\" relative-y=\"154.8\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#45464544\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 154.9 ) );
	object.setDefaultY( MxNumberTenths( 154.9 ) );
	object.setRelativeX( MxNumberTenths( 154.9 ) );
	object.setRelativeY( MxNumberTenths( 154.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<root-step default-x=\"154.9\" default-y=\"154.9\" relative-x=\"154.9\" font-family=\"ABC\" font-weight=\"normal\" color=\"#484746\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 155 ) );
	object.setDefaultY( MxNumberTenths( 155 ) );
	object.setRelativeX( MxNumberTenths( 155 ) );
	object.setRelativeY( MxNumberTenths( 155 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<root-step text=\"\" default-y=\"155\" relative-x=\"155\" font-family=\"DEF\" font-weight=\"bold\" color=\"#494A4948\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 155.1 ) );
	object.setDefaultY( MxNumberTenths( 155.1 ) );
	object.setRelativeX( MxNumberTenths( 155.1 ) );
	object.setRelativeY( MxNumberTenths( 155.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<root-step relative-x=\"155.1\" font-family=\"XYZ\" color=\"#4C4B4A\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 155.2 ) );
	object.setDefaultY( MxNumberTenths( 155.2 ) );
	object.setRelativeX( MxNumberTenths( 155.2 ) );
	object.setRelativeY( MxNumberTenths( 155.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<root-step text=\"\" default-x=\"155.2\" font-family=\"ABC\" font-style=\"italic\" color=\"#4D4E4D4C\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 155.3 ) );
	object.setDefaultY( MxNumberTenths( 155.3 ) );
	object.setRelativeX( MxNumberTenths( 155.3 ) );
	object.setRelativeY( MxNumberTenths( 155.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<root-step default-x=\"155.3\" font-family=\"DEF\" font-style=\"normal\" color=\"#504F4E\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 155.4 ) );
	object.setDefaultY( MxNumberTenths( 155.4 ) );
	object.setRelativeX( MxNumberTenths( 155.4 ) );
	object.setRelativeY( MxNumberTenths( 155.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<root-step text=\"\" default-y=\"155.4\" relative-y=\"155.4\" font-style=\"italic\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 155.5 ) );
	object.setDefaultY( MxNumberTenths( 155.5 ) );
	object.setRelativeX( MxNumberTenths( 155.5 ) );
	object.setRelativeY( MxNumberTenths( 155.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<root-step default-y=\"155.5\" relative-y=\"155.5\" font-style=\"normal\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 155.6 ) );
	object.setDefaultY( MxNumberTenths( 155.6 ) );
	object.setRelativeX( MxNumberTenths( 155.6 ) );
	object.setRelativeY( MxNumberTenths( 155.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#55565554" ) );
	expected = "<root-step text=\"\" default-x=\"155.6\" default-y=\"155.6\" relative-x=\"155.6\" relative-y=\"155.6\" font-style=\"italic\" font-size=\"1.1\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 155.7 ) );
	object.setDefaultY( MxNumberTenths( 155.7 ) );
	object.setRelativeX( MxNumberTenths( 155.7 ) );
	object.setRelativeY( MxNumberTenths( 155.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#585756" ) );
	expected = "<root-step default-x=\"155.7\" relative-x=\"155.7\" relative-y=\"155.7\" font-style=\"normal\" font-size=\"large\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 155.8 ) );
	object.setDefaultY( MxNumberTenths( 155.8 ) );
	object.setRelativeX( MxNumberTenths( 155.8 ) );
	object.setRelativeY( MxNumberTenths( 155.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#595A5958" ) );
	expected = "<root-step text=\"\" relative-x=\"155.8\" relative-y=\"155.8\" font-style=\"italic\" font-size=\"1.1\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 155.9 ) );
	object.setDefaultY( MxNumberTenths( 155.9 ) );
	object.setRelativeX( MxNumberTenths( 155.9 ) );
	object.setRelativeY( MxNumberTenths( 155.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	expected = "<root-step relative-x=\"155.9\" font-size=\"large\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 156 ) );
	object.setDefaultY( MxNumberTenths( 156 ) );
	object.setRelativeX( MxNumberTenths( 156 ) );
	object.setRelativeY( MxNumberTenths( 156 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	expected = "<root-step text=\"\" default-x=\"156\" default-y=\"156\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 156.1 ) );
	object.setDefaultY( MxNumberTenths( 156.1 ) );
	object.setRelativeX( MxNumberTenths( 156.1 ) );
	object.setRelativeY( MxNumberTenths( 156.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#605F5E" ) );
	expected = "<root-step default-x=\"156.1\" default-y=\"156.1\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 156.2 ) );
	object.setDefaultY( MxNumberTenths( 156.2 ) );
	object.setRelativeX( MxNumberTenths( 156.2 ) );
	object.setRelativeY( MxNumberTenths( 156.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<root-step text=\"\" default-y=\"156.2\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 156.3 ) );
	object.setDefaultY( MxNumberTenths( 156.3 ) );
	object.setRelativeX( MxNumberTenths( 156.3 ) );
	object.setRelativeY( MxNumberTenths( 156.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<root-step font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 156.4 ) );
	object.setDefaultY( MxNumberTenths( 156.4 ) );
	object.setRelativeX( MxNumberTenths( 156.4 ) );
	object.setRelativeY( MxNumberTenths( 156.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<root-step text=\"\" default-x=\"156.4\" relative-x=\"156.4\" relative-y=\"156.4\" font-family=\"ABC\" font-weight=\"bold\" color=\"#65666564\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 156.5 ) );
	object.setDefaultY( MxNumberTenths( 156.5 ) );
	object.setRelativeX( MxNumberTenths( 156.5 ) );
	object.setRelativeY( MxNumberTenths( 156.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<root-step default-x=\"156.5\" relative-x=\"156.5\" relative-y=\"156.5\" font-family=\"DEF\" font-weight=\"normal\" color=\"#686766\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 156.6 ) );
	object.setDefaultY( MxNumberTenths( 156.6 ) );
	object.setRelativeX( MxNumberTenths( 156.6 ) );
	object.setRelativeY( MxNumberTenths( 156.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<root-step text=\"\" default-y=\"156.6\" relative-x=\"156.6\" relative-y=\"156.6\" font-style=\"italic\" font-weight=\"bold\" color=\"#696A6968\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 156.7 ) );
	object.setDefaultY( MxNumberTenths( 156.7 ) );
	object.setRelativeX( MxNumberTenths( 156.7 ) );
	object.setRelativeY( MxNumberTenths( 156.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<root-step default-y=\"156.7\" relative-x=\"156.7\" relative-y=\"156.7\" font-style=\"normal\" font-weight=\"normal\" color=\"#6C6B6A\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
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
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 156.8 ) );
	object.setDefaultY( MxNumberTenths( 156.8 ) );
	object.setRelativeX( MxNumberTenths( 156.8 ) );
	object.setRelativeY( MxNumberTenths( 156.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<root-step text=\"\" default-x=\"156.8\" default-y=\"156.8\" relative-y=\"156.8\" font-style=\"italic\" font-weight=\"bold\" color=\"#6D6E6D6C\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 156.9 ) );
	object.setDefaultY( MxNumberTenths( 156.9 ) );
	object.setRelativeX( MxNumberTenths( 156.9 ) );
	object.setRelativeY( MxNumberTenths( 156.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<root-step default-x=\"156.9\" font-style=\"normal\" color=\"#706F6E\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 157 ) );
	object.setDefaultY( MxNumberTenths( 157 ) );
	object.setRelativeX( MxNumberTenths( 157 ) );
	object.setRelativeY( MxNumberTenths( 157 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<root-step text=\"\" font-style=\"italic\" color=\"#71727170\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 157.1 ) );
	object.setDefaultY( MxNumberTenths( 157.1 ) );
	object.setRelativeX( MxNumberTenths( 157.1 ) );
	object.setRelativeY( MxNumberTenths( 157.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<root-step font-style=\"normal\" color=\"#747372\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 157.2 ) );
	object.setDefaultY( MxNumberTenths( 157.2 ) );
	object.setRelativeX( MxNumberTenths( 157.2 ) );
	object.setRelativeY( MxNumberTenths( 157.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<root-step text=\"\" default-x=\"157.2\" default-y=\"157.2\" relative-x=\"157.2\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#75767574\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
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
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 157.3 ) );
	object.setDefaultY( MxNumberTenths( 157.3 ) );
	object.setRelativeX( MxNumberTenths( 157.3 ) );
	object.setRelativeY( MxNumberTenths( 157.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<root-step default-x=\"157.3\" default-y=\"157.3\" relative-x=\"157.3\" font-family=\"ABC\" font-size=\"large\" color=\"#787776\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 157.4 ) );
	object.setDefaultY( MxNumberTenths( 157.4 ) );
	object.setRelativeX( MxNumberTenths( 157.4 ) );
	object.setRelativeY( MxNumberTenths( 157.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<root-step text=\"\" default-y=\"157.4\" relative-x=\"157.4\" relative-y=\"157.4\" font-family=\"DEF\" font-size=\"1.1\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 157.5 ) );
	object.setDefaultY( MxNumberTenths( 157.5 ) );
	object.setRelativeX( MxNumberTenths( 157.5 ) );
	object.setRelativeY( MxNumberTenths( 157.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<root-step relative-x=\"157.5\" relative-y=\"157.5\" font-family=\"XYZ\" font-size=\"large\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 157.6 ) );
	object.setDefaultY( MxNumberTenths( 157.6 ) );
	object.setRelativeX( MxNumberTenths( 157.6 ) );
	object.setRelativeY( MxNumberTenths( 157.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<root-step text=\"\" default-x=\"157.6\" relative-y=\"157.6\" font-family=\"ABC\" font-size=\"1.1\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 157.7 ) );
	object.setDefaultY( MxNumberTenths( 157.7 ) );
	object.setRelativeX( MxNumberTenths( 157.7 ) );
	object.setRelativeY( MxNumberTenths( 157.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<root-step default-x=\"157.7\" relative-y=\"157.7\" font-family=\"DEF\" font-size=\"large\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 157.8 ) );
	object.setDefaultY( MxNumberTenths( 157.8 ) );
	object.setRelativeX( MxNumberTenths( 157.8 ) );
	object.setRelativeY( MxNumberTenths( 157.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<root-step text=\"\" default-y=\"157.8\" relative-y=\"157.8\" font-size=\"1.1\" font-weight=\"bold\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 157.9 ) );
	object.setDefaultY( MxNumberTenths( 157.9 ) );
	object.setRelativeX( MxNumberTenths( 157.9 ) );
	object.setRelativeY( MxNumberTenths( 157.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<root-step default-y=\"157.9\" font-size=\"large\" font-weight=\"normal\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 158 ) );
	object.setDefaultY( MxNumberTenths( 158 ) );
	object.setRelativeX( MxNumberTenths( 158 ) );
	object.setRelativeY( MxNumberTenths( 158 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<root-step text=\"\" default-x=\"158\" default-y=\"158\" relative-x=\"158\" font-style=\"italic\" font-weight=\"bold\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 158.1 ) );
	object.setDefaultY( MxNumberTenths( 158.1 ) );
	object.setRelativeX( MxNumberTenths( 158.1 ) );
	object.setRelativeY( MxNumberTenths( 158.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<root-step default-x=\"158.1\" relative-x=\"158.1\" font-style=\"normal\" font-weight=\"normal\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 158.2 ) );
	object.setDefaultY( MxNumberTenths( 158.2 ) );
	object.setRelativeX( MxNumberTenths( 158.2 ) );
	object.setRelativeY( MxNumberTenths( 158.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<root-step text=\"\" relative-x=\"158.2\" font-style=\"italic\" font-weight=\"bold\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 158.3 ) );
	object.setDefaultY( MxNumberTenths( 158.3 ) );
	object.setRelativeX( MxNumberTenths( 158.3 ) );
	object.setRelativeY( MxNumberTenths( 158.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<root-step relative-x=\"158.3\" font-style=\"normal\" font-weight=\"normal\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
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
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 158.4 ) );
	object.setDefaultY( MxNumberTenths( 158.4 ) );
	object.setRelativeX( MxNumberTenths( 158.4 ) );
	object.setRelativeY( MxNumberTenths( 158.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<root-step text=\"\" default-x=\"158.4\" default-y=\"158.4\" relative-y=\"158.4\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" color=\"#8D8E8D8C\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 158.5 ) );
	object.setDefaultY( MxNumberTenths( 158.5 ) );
	object.setRelativeX( MxNumberTenths( 158.5 ) );
	object.setRelativeY( MxNumberTenths( 158.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<root-step default-x=\"158.5\" default-y=\"158.5\" relative-y=\"158.5\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" color=\"#908F8E\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 158.6 ) );
	object.setDefaultY( MxNumberTenths( 158.6 ) );
	object.setRelativeX( MxNumberTenths( 158.6 ) );
	object.setRelativeY( MxNumberTenths( 158.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<root-step text=\"\" default-y=\"158.6\" relative-y=\"158.6\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" color=\"#91929190\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 158.7 ) );
	object.setDefaultY( MxNumberTenths( 158.7 ) );
	object.setRelativeX( MxNumberTenths( 158.7 ) );
	object.setRelativeY( MxNumberTenths( 158.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<root-step relative-y=\"158.7\" font-family=\"XYZ\" color=\"#949392\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 158.8 ) );
	object.setDefaultY( MxNumberTenths( 158.8 ) );
	object.setRelativeX( MxNumberTenths( 158.8 ) );
	object.setRelativeY( MxNumberTenths( 158.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<root-step text=\"\" default-x=\"158.8\" relative-x=\"158.8\" relative-y=\"158.8\" font-family=\"ABC\" font-size=\"1.1\" color=\"#95969594\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 158.9 ) );
	object.setDefaultY( MxNumberTenths( 158.9 ) );
	object.setRelativeX( MxNumberTenths( 158.9 ) );
	object.setRelativeY( MxNumberTenths( 158.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<root-step default-x=\"158.9\" relative-x=\"158.9\" font-family=\"DEF\" font-size=\"large\" color=\"#989796\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 159 ) );
	object.setDefaultY( MxNumberTenths( 159 ) );
	object.setRelativeX( MxNumberTenths( 159 ) );
	object.setRelativeY( MxNumberTenths( 159 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<root-step text=\"\" default-y=\"159\" relative-x=\"159\" font-size=\"1.1\" color=\"#999A9998\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 159.1 ) );
	object.setDefaultY( MxNumberTenths( 159.1 ) );
	object.setRelativeX( MxNumberTenths( 159.1 ) );
	object.setRelativeY( MxNumberTenths( 159.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<root-step default-y=\"159.1\" relative-x=\"159.1\" font-size=\"large\" color=\"#9C9B9A\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 159.2 ) );
	object.setDefaultY( MxNumberTenths( 159.2 ) );
	object.setRelativeX( MxNumberTenths( 159.2 ) );
	object.setRelativeY( MxNumberTenths( 159.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<root-step text=\"\" default-x=\"159.2\" default-y=\"159.2\" font-size=\"1.1\" color=\"#9D9E9D9C\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 159.3 ) );
	object.setDefaultY( MxNumberTenths( 159.3 ) );
	object.setRelativeX( MxNumberTenths( 159.3 ) );
	object.setRelativeY( MxNumberTenths( 159.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<root-step default-x=\"159.3\" font-size=\"large\" color=\"#A09F9E\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 159.4 ) );
	object.setDefaultY( MxNumberTenths( 159.4 ) );
	object.setRelativeX( MxNumberTenths( 159.4 ) );
	object.setRelativeY( MxNumberTenths( 159.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<root-step text=\"\" relative-y=\"159.4\" font-style=\"italic\" font-size=\"1.1\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
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
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 159.5 ) );
	object.setDefaultY( MxNumberTenths( 159.5 ) );
	object.setRelativeX( MxNumberTenths( 159.5 ) );
	object.setRelativeY( MxNumberTenths( 159.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<root-step relative-y=\"159.5\" font-style=\"normal\" font-size=\"large\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 159.6 ) );
	object.setDefaultY( MxNumberTenths( 159.6 ) );
	object.setRelativeX( MxNumberTenths( 159.6 ) );
	object.setRelativeY( MxNumberTenths( 159.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<root-step text=\"\" default-x=\"159.6\" default-y=\"159.6\" relative-x=\"159.6\" relative-y=\"159.6\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 159.7 ) );
	object.setDefaultY( MxNumberTenths( 159.7 ) );
	object.setRelativeX( MxNumberTenths( 159.7 ) );
	object.setRelativeY( MxNumberTenths( 159.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<root-step default-x=\"159.7\" default-y=\"159.7\" relative-x=\"159.7\" relative-y=\"159.7\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 159.8 ) );
	object.setDefaultY( MxNumberTenths( 159.8 ) );
	object.setRelativeX( MxNumberTenths( 159.8 ) );
	object.setRelativeY( MxNumberTenths( 159.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<root-step text=\"\" default-y=\"159.8\" relative-x=\"159.8\" relative-y=\"159.8\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 159.9 ) );
	object.setDefaultY( MxNumberTenths( 159.9 ) );
	object.setRelativeX( MxNumberTenths( 159.9 ) );
	object.setRelativeY( MxNumberTenths( 159.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<root-step relative-x=\"159.9\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 160 ) );
	object.setDefaultY( MxNumberTenths( 160 ) );
	object.setRelativeX( MxNumberTenths( 160 ) );
	object.setRelativeY( MxNumberTenths( 160 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<root-step text=\"\" default-x=\"160\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 160.1 ) );
	object.setDefaultY( MxNumberTenths( 160.1 ) );
	object.setRelativeX( MxNumberTenths( 160.1 ) );
	object.setRelativeY( MxNumberTenths( 160.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<root-step default-x=\"160.1\" font-family=\"DEF\" font-weight=\"normal\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 160.2 ) );
	object.setDefaultY( MxNumberTenths( 160.2 ) );
	object.setRelativeX( MxNumberTenths( 160.2 ) );
	object.setRelativeY( MxNumberTenths( 160.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<root-step text=\"\" default-y=\"160.2\" font-weight=\"bold\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 160.3 ) );
	object.setDefaultY( MxNumberTenths( 160.3 ) );
	object.setRelativeX( MxNumberTenths( 160.3 ) );
	object.setRelativeY( MxNumberTenths( 160.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<root-step default-y=\"160.3\" font-weight=\"normal\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
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
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 160.4 ) );
	object.setDefaultY( MxNumberTenths( 160.4 ) );
	object.setRelativeX( MxNumberTenths( 160.4 ) );
	object.setRelativeY( MxNumberTenths( 160.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<root-step text=\"\" default-x=\"160.4\" default-y=\"160.4\" relative-x=\"160.4\" relative-y=\"160.4\" font-size=\"1.1\" font-weight=\"bold\" color=\"#B5B6B5B4\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 160.5 ) );
	object.setDefaultY( MxNumberTenths( 160.5 ) );
	object.setRelativeX( MxNumberTenths( 160.5 ) );
	object.setRelativeY( MxNumberTenths( 160.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<root-step default-x=\"160.5\" relative-x=\"160.5\" relative-y=\"160.5\" font-size=\"large\" color=\"#B8B7B6\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 160.6 ) );
	object.setDefaultY( MxNumberTenths( 160.6 ) );
	object.setRelativeX( MxNumberTenths( 160.6 ) );
	object.setRelativeY( MxNumberTenths( 160.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<root-step text=\"\" relative-x=\"160.6\" relative-y=\"160.6\" font-size=\"1.1\" color=\"#B9BAB9B8\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 160.7 ) );
	object.setDefaultY( MxNumberTenths( 160.7 ) );
	object.setRelativeX( MxNumberTenths( 160.7 ) );
	object.setRelativeY( MxNumberTenths( 160.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<root-step relative-x=\"160.7\" relative-y=\"160.7\" font-size=\"large\" color=\"#BCBBBA\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 160.8 ) );
	object.setDefaultY( MxNumberTenths( 160.8 ) );
	object.setRelativeX( MxNumberTenths( 160.8 ) );
	object.setRelativeY( MxNumberTenths( 160.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<root-step text=\"\" default-x=\"160.8\" default-y=\"160.8\" relative-y=\"160.8\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#BDBEBDBC\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 160.9 ) );
	object.setDefaultY( MxNumberTenths( 160.9 ) );
	object.setRelativeX( MxNumberTenths( 160.9 ) );
	object.setRelativeY( MxNumberTenths( 160.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<root-step default-x=\"160.9\" default-y=\"160.9\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#C0BFBE\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 161 ) );
	object.setDefaultY( MxNumberTenths( 161 ) );
	object.setRelativeX( MxNumberTenths( 161 ) );
	object.setRelativeY( MxNumberTenths( 161 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<root-step text=\"\" default-y=\"161\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#C1C2C1C0\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 161.1 ) );
	object.setDefaultY( MxNumberTenths( 161.1 ) );
	object.setRelativeX( MxNumberTenths( 161.1 ) );
	object.setRelativeY( MxNumberTenths( 161.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<root-step font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#C4C3C2\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 161.2 ) );
	object.setDefaultY( MxNumberTenths( 161.2 ) );
	object.setRelativeX( MxNumberTenths( 161.2 ) );
	object.setRelativeY( MxNumberTenths( 161.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<root-step text=\"\" default-x=\"161.2\" relative-x=\"161.2\" font-family=\"ABC\" font-style=\"italic\" color=\"#C5C6C5C4\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 161.3 ) );
	object.setDefaultY( MxNumberTenths( 161.3 ) );
	object.setRelativeX( MxNumberTenths( 161.3 ) );
	object.setRelativeY( MxNumberTenths( 161.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<root-step default-x=\"161.3\" relative-x=\"161.3\" font-family=\"DEF\" font-style=\"normal\" color=\"#C8C7C6\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
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
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 161.4 ) );
	object.setDefaultY( MxNumberTenths( 161.4 ) );
	object.setRelativeX( MxNumberTenths( 161.4 ) );
	object.setRelativeY( MxNumberTenths( 161.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<root-step text=\"\" default-y=\"161.4\" relative-x=\"161.4\" relative-y=\"161.4\" font-style=\"italic\" font-weight=\"bold\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 161.5 ) );
	object.setDefaultY( MxNumberTenths( 161.5 ) );
	object.setRelativeX( MxNumberTenths( 161.5 ) );
	object.setRelativeY( MxNumberTenths( 161.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<root-step default-y=\"161.5\" relative-x=\"161.5\" relative-y=\"161.5\" font-weight=\"normal\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 161.6 ) );
	object.setDefaultY( MxNumberTenths( 161.6 ) );
	object.setRelativeX( MxNumberTenths( 161.6 ) );
	object.setRelativeY( MxNumberTenths( 161.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<root-step text=\"\" default-x=\"161.6\" default-y=\"161.6\" relative-y=\"161.6\" font-weight=\"bold\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 161.7 ) );
	object.setDefaultY( MxNumberTenths( 161.7 ) );
	object.setRelativeX( MxNumberTenths( 161.7 ) );
	object.setRelativeY( MxNumberTenths( 161.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<root-step default-x=\"161.7\" relative-y=\"161.7\" font-weight=\"normal\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 161.8 ) );
	object.setDefaultY( MxNumberTenths( 161.8 ) );
	object.setRelativeX( MxNumberTenths( 161.8 ) );
	object.setRelativeY( MxNumberTenths( 161.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<root-step text=\"\" relative-y=\"161.8\" font-weight=\"bold\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 161.9 ) );
	object.setDefaultY( MxNumberTenths( 161.9 ) );
	object.setRelativeX( MxNumberTenths( 161.9 ) );
	object.setRelativeY( MxNumberTenths( 161.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<root-step font-weight=\"normal\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 162 ) );
	object.setDefaultY( MxNumberTenths( 162 ) );
	object.setRelativeX( MxNumberTenths( 162 ) );
	object.setRelativeY( MxNumberTenths( 162 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<root-step text=\"\" default-x=\"162\" default-y=\"162\" relative-x=\"162\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
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
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 162.1 ) );
	object.setDefaultY( MxNumberTenths( 162.1 ) );
	object.setRelativeX( MxNumberTenths( 162.1 ) );
	object.setRelativeY( MxNumberTenths( 162.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<root-step default-x=\"162.1\" default-y=\"162.1\" relative-x=\"162.1\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 162.2 ) );
	object.setDefaultY( MxNumberTenths( 162.2 ) );
	object.setRelativeX( MxNumberTenths( 162.2 ) );
	object.setRelativeY( MxNumberTenths( 162.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<root-step text=\"\" default-y=\"162.2\" relative-x=\"162.2\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setIsTextPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 162.3 ) );
	object.setDefaultY( MxNumberTenths( 162.3 ) );
	object.setRelativeX( MxNumberTenths( 162.3 ) );
	object.setRelativeY( MxNumberTenths( 162.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<root-step relative-x=\"162.3\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\">D</root-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEsRootStep )
{
	MxEsRootStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
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
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 162.4 ) );
	object.setDefaultY( MxNumberTenths( 162.4 ) );
	object.setRelativeX( MxNumberTenths( 162.4 ) );
	object.setRelativeY( MxNumberTenths( 162.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<root-step>D</root-step>";
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


