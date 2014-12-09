/** *******************************************************
  * 
  * MxEsBassStepTest.cpp
  * Created: 2014-12-05 20:57:50
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsBassStep.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsBassStep )
{
	MxEsBassStep object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsBassStep )
{
	MxEsBassStep object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getText().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsBassStep )
{
	MxEsBassStep object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsBassStep )
{
	MxEsBassStep object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsBassStep )
{
	MxEsBassStep object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEsBassStep )
{
	MxEsBassStep object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEsBassStep )
{
	MxEsBassStep object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEsBassStep )
{
	MxEsBassStep object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEsBassStep )
{
	MxEsBassStep object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEsBassStep )
{
	MxEsBassStep object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEsBassStep )
{
	MxEsBassStep object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsBassStep )
{
	MxEsBassStep object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsBassStep )
{
	MxEsBassStep object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::a );
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
TEST( ctorValue2, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::c );
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
TEST( ctorValue4, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::e );
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
TEST( ctorValue6, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::g );
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
TEST( ctorValue8, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::b );
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

TEST( getClassName, MxEsBassStep )
{
	MxEsBassStep object;
	std::string expected = "MxEsBassStep";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsBassStep )
{
	MxEsBassStep object;
	std::string expected = "bass-step";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsBassStep )
{
	MxEsBassStep object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setText0, MxEsBassStep )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxEsBassStep object;
	object.setText( value1 );
	XsToken expected = value1;
	XsToken actual = object.getText();
	CHECK_EQUAL( expected, actual )
	object.setText( value2 );
	expected = value2;
	actual = object.getText();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX1, MxEsBassStep )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsBassStep object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY2, MxEsBassStep )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsBassStep object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX3, MxEsBassStep )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsBassStep object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY4, MxEsBassStep )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsBassStep object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily5, MxEsBassStep )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEsBassStep object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle6, MxEsBassStep )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEsBassStep object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize7, MxEsBassStep )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEsBassStep object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight8, MxEsBassStep )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEsBassStep object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor9, MxEsBassStep )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsBassStep object;
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

TEST( getIsTextRequired0, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsTextRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired1, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired2, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired3, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired4, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired5, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired6, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired7, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired8, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired9, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTextPresent0, MxEsBassStep )
{
	MxEsBassStep object;
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
TEST( getIsDefaultXPresent1, MxEsBassStep )
{
	MxEsBassStep object;
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
TEST( getIsDefaultYPresent2, MxEsBassStep )
{
	MxEsBassStep object;
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
TEST( getIsRelativeXPresent3, MxEsBassStep )
{
	MxEsBassStep object;
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
TEST( getIsRelativeYPresent4, MxEsBassStep )
{
	MxEsBassStep object;
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
TEST( getIsFontFamilyPresent5, MxEsBassStep )
{
	MxEsBassStep object;
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
TEST( getIsFontStylePresent6, MxEsBassStep )
{
	MxEsBassStep object;
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
TEST( getIsFontSizePresent7, MxEsBassStep )
{
	MxEsBassStep object;
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
TEST( getIsFontWeightPresent8, MxEsBassStep )
{
	MxEsBassStep object;
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
TEST( getIsColorPresent9, MxEsBassStep )
{
	MxEsBassStep object;
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

TEST( getIsTextDefaultDefined, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsTextDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsBassStep )
{
	MxEsBassStep object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTextDefaultValue, MxEsBassStep )
{
	MxEsBassStep object;
	XsToken expected;
	XsToken actual = object.getTextDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEsBassStep )
{
	MxEsBassStep object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEsBassStep )
{
	MxEsBassStep object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEsBassStep )
{
	MxEsBassStep object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEsBassStep )
{
	MxEsBassStep object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEsBassStep )
{
	MxEsBassStep object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEsBassStep )
{
	MxEsBassStep object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEsBassStep )
{
	MxEsBassStep object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEsBassStep )
{
	MxEsBassStep object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsBassStep )
{
	MxEsBassStep object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
	std::string expected;
	std::string actual;
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 31.2 ) );
	object.setDefaultY( MxNumberTenths( 31.2 ) );
	object.setRelativeX( MxNumberTenths( 31.2 ) );
	object.setRelativeY( MxNumberTenths( 31.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
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
	expected = "<bass-step text=\"\" default-x=\"31.2\" default-y=\"31.2\" relative-x=\"31.2\" relative-y=\"31.2\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#605F5E\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 31.3 ) );
	object.setDefaultY( MxNumberTenths( 31.3 ) );
	object.setRelativeX( MxNumberTenths( 31.3 ) );
	object.setRelativeY( MxNumberTenths( 31.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<bass-step default-x=\"31.3\" default-y=\"31.3\" relative-x=\"31.3\" relative-y=\"31.3\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#61626160\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 31.4 ) );
	object.setDefaultY( MxNumberTenths( 31.4 ) );
	object.setRelativeX( MxNumberTenths( 31.4 ) );
	object.setRelativeY( MxNumberTenths( 31.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<bass-step text=\"\" default-y=\"31.4\" relative-x=\"31.4\" relative-y=\"31.4\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#646362\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 31.5 ) );
	object.setDefaultY( MxNumberTenths( 31.5 ) );
	object.setRelativeX( MxNumberTenths( 31.5 ) );
	object.setRelativeY( MxNumberTenths( 31.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<bass-step relative-x=\"31.5\" relative-y=\"31.5\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#65666564\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 31.6 ) );
	object.setDefaultY( MxNumberTenths( 31.6 ) );
	object.setRelativeX( MxNumberTenths( 31.6 ) );
	object.setRelativeY( MxNumberTenths( 31.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<bass-step text=\"\" default-x=\"31.6\" relative-y=\"31.6\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#686766\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 31.7 ) );
	object.setDefaultY( MxNumberTenths( 31.7 ) );
	object.setRelativeX( MxNumberTenths( 31.7 ) );
	object.setRelativeY( MxNumberTenths( 31.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<bass-step default-x=\"31.7\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#696A6968\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 31.8 ) );
	object.setDefaultY( MxNumberTenths( 31.8 ) );
	object.setRelativeX( MxNumberTenths( 31.8 ) );
	object.setRelativeY( MxNumberTenths( 31.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<bass-step text=\"\" default-y=\"31.8\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#6C6B6A\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 31.9 ) );
	object.setDefaultY( MxNumberTenths( 31.9 ) );
	object.setRelativeX( MxNumberTenths( 31.9 ) );
	object.setRelativeY( MxNumberTenths( 31.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<bass-step default-y=\"31.9\" font-size=\"large\" font-weight=\"normal\" color=\"#6D6E6D6C\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 32 ) );
	object.setDefaultY( MxNumberTenths( 32 ) );
	object.setRelativeX( MxNumberTenths( 32 ) );
	object.setRelativeY( MxNumberTenths( 32 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<bass-step text=\"\" default-x=\"32\" default-y=\"32\" relative-x=\"32\" font-weight=\"bold\" color=\"#706F6E\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 32.1 ) );
	object.setDefaultY( MxNumberTenths( 32.1 ) );
	object.setRelativeX( MxNumberTenths( 32.1 ) );
	object.setRelativeY( MxNumberTenths( 32.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<bass-step default-x=\"32.1\" relative-x=\"32.1\" color=\"#71727170\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 32.2 ) );
	object.setDefaultY( MxNumberTenths( 32.2 ) );
	object.setRelativeX( MxNumberTenths( 32.2 ) );
	object.setRelativeY( MxNumberTenths( 32.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<bass-step text=\"\" relative-x=\"32.2\" relative-y=\"32.2\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 32.3 ) );
	object.setDefaultY( MxNumberTenths( 32.3 ) );
	object.setRelativeX( MxNumberTenths( 32.3 ) );
	object.setRelativeY( MxNumberTenths( 32.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<bass-step relative-x=\"32.3\" relative-y=\"32.3\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 32.4 ) );
	object.setDefaultY( MxNumberTenths( 32.4 ) );
	object.setRelativeX( MxNumberTenths( 32.4 ) );
	object.setRelativeY( MxNumberTenths( 32.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<bass-step text=\"\" default-x=\"32.4\" default-y=\"32.4\" relative-y=\"32.4\" font-family=\"DEF\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 32.5 ) );
	object.setDefaultY( MxNumberTenths( 32.5 ) );
	object.setRelativeX( MxNumberTenths( 32.5 ) );
	object.setRelativeY( MxNumberTenths( 32.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<bass-step default-x=\"32.5\" default-y=\"32.5\" relative-y=\"32.5\" font-family=\"XYZ\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 32.6 ) );
	object.setDefaultY( MxNumberTenths( 32.6 ) );
	object.setRelativeX( MxNumberTenths( 32.6 ) );
	object.setRelativeY( MxNumberTenths( 32.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<bass-step text=\"\" default-y=\"32.6\" relative-y=\"32.6\" font-family=\"ABC\" font-style=\"italic\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 32.7 ) );
	object.setDefaultY( MxNumberTenths( 32.7 ) );
	object.setRelativeX( MxNumberTenths( 32.7 ) );
	object.setRelativeY( MxNumberTenths( 32.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<bass-step font-family=\"DEF\" font-style=\"normal\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 32.8 ) );
	object.setDefaultY( MxNumberTenths( 32.8 ) );
	object.setRelativeX( MxNumberTenths( 32.8 ) );
	object.setRelativeY( MxNumberTenths( 32.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<bass-step text=\"\" default-x=\"32.8\" relative-x=\"32.8\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 32.9 ) );
	object.setDefaultY( MxNumberTenths( 32.9 ) );
	object.setRelativeX( MxNumberTenths( 32.9 ) );
	object.setRelativeY( MxNumberTenths( 32.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<bass-step default-x=\"32.9\" relative-x=\"32.9\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 33 ) );
	object.setDefaultY( MxNumberTenths( 33 ) );
	object.setRelativeX( MxNumberTenths( 33 ) );
	object.setRelativeY( MxNumberTenths( 33 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<bass-step text=\"\" default-y=\"33\" relative-x=\"33\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 33.1 ) );
	object.setDefaultY( MxNumberTenths( 33.1 ) );
	object.setRelativeX( MxNumberTenths( 33.1 ) );
	object.setRelativeY( MxNumberTenths( 33.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<bass-step default-y=\"33.1\" relative-x=\"33.1\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 33.2 ) );
	object.setDefaultY( MxNumberTenths( 33.2 ) );
	object.setRelativeX( MxNumberTenths( 33.2 ) );
	object.setRelativeY( MxNumberTenths( 33.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<bass-step text=\"\" default-x=\"33.2\" default-y=\"33.2\" relative-y=\"33.2\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#888786\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 33.3 ) );
	object.setDefaultY( MxNumberTenths( 33.3 ) );
	object.setRelativeX( MxNumberTenths( 33.3 ) );
	object.setRelativeY( MxNumberTenths( 33.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<bass-step default-x=\"33.3\" relative-y=\"33.3\" font-size=\"large\" font-weight=\"normal\" color=\"#898A8988\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 33.4 ) );
	object.setDefaultY( MxNumberTenths( 33.4 ) );
	object.setRelativeX( MxNumberTenths( 33.4 ) );
	object.setRelativeY( MxNumberTenths( 33.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<bass-step text=\"\" relative-y=\"33.4\" font-size=\"1.1\" font-weight=\"bold\" color=\"#8C8B8A\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 33.5 ) );
	object.setDefaultY( MxNumberTenths( 33.5 ) );
	object.setRelativeX( MxNumberTenths( 33.5 ) );
	object.setRelativeY( MxNumberTenths( 33.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<bass-step relative-y=\"33.5\" font-size=\"large\" font-weight=\"normal\" color=\"#8D8E8D8C\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 33.6 ) );
	object.setDefaultY( MxNumberTenths( 33.6 ) );
	object.setRelativeX( MxNumberTenths( 33.6 ) );
	object.setRelativeY( MxNumberTenths( 33.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<bass-step text=\"\" default-x=\"33.6\" default-y=\"33.6\" relative-x=\"33.6\" relative-y=\"33.6\" font-family=\"DEF\" font-weight=\"bold\" color=\"#908F8E\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 33.7 ) );
	object.setDefaultY( MxNumberTenths( 33.7 ) );
	object.setRelativeX( MxNumberTenths( 33.7 ) );
	object.setRelativeY( MxNumberTenths( 33.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<bass-step default-x=\"33.7\" default-y=\"33.7\" relative-x=\"33.7\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#91929190\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 33.8 ) );
	object.setDefaultY( MxNumberTenths( 33.8 ) );
	object.setRelativeX( MxNumberTenths( 33.8 ) );
	object.setRelativeY( MxNumberTenths( 33.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<bass-step text=\"\" default-y=\"33.8\" relative-x=\"33.8\" font-family=\"ABC\" font-weight=\"bold\" color=\"#949392\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 33.9 ) );
	object.setDefaultY( MxNumberTenths( 33.9 ) );
	object.setRelativeX( MxNumberTenths( 33.9 ) );
	object.setRelativeY( MxNumberTenths( 33.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<bass-step relative-x=\"33.9\" font-family=\"DEF\" color=\"#95969594\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 34 ) );
	object.setDefaultY( MxNumberTenths( 34 ) );
	object.setRelativeX( MxNumberTenths( 34 ) );
	object.setRelativeY( MxNumberTenths( 34 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<bass-step text=\"\" default-x=\"34\" font-family=\"XYZ\" font-style=\"italic\" color=\"#989796\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 34.1 ) );
	object.setDefaultY( MxNumberTenths( 34.1 ) );
	object.setRelativeX( MxNumberTenths( 34.1 ) );
	object.setRelativeY( MxNumberTenths( 34.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<bass-step default-x=\"34.1\" font-family=\"ABC\" font-style=\"normal\" color=\"#999A9998\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 34.2 ) );
	object.setDefaultY( MxNumberTenths( 34.2 ) );
	object.setRelativeX( MxNumberTenths( 34.2 ) );
	object.setRelativeY( MxNumberTenths( 34.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<bass-step text=\"\" default-y=\"34.2\" relative-y=\"34.2\" font-style=\"italic\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 34.3 ) );
	object.setDefaultY( MxNumberTenths( 34.3 ) );
	object.setRelativeX( MxNumberTenths( 34.3 ) );
	object.setRelativeY( MxNumberTenths( 34.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<bass-step default-y=\"34.3\" relative-y=\"34.3\" font-style=\"normal\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 34.4 ) );
	object.setDefaultY( MxNumberTenths( 34.4 ) );
	object.setRelativeX( MxNumberTenths( 34.4 ) );
	object.setRelativeY( MxNumberTenths( 34.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<bass-step text=\"\" default-x=\"34.4\" default-y=\"34.4\" relative-x=\"34.4\" relative-y=\"34.4\" font-style=\"italic\" font-size=\"1.1\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 34.5 ) );
	object.setDefaultY( MxNumberTenths( 34.5 ) );
	object.setRelativeX( MxNumberTenths( 34.5 ) );
	object.setRelativeY( MxNumberTenths( 34.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<bass-step default-x=\"34.5\" relative-x=\"34.5\" relative-y=\"34.5\" font-style=\"normal\" font-size=\"large\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 34.6 ) );
	object.setDefaultY( MxNumberTenths( 34.6 ) );
	object.setRelativeX( MxNumberTenths( 34.6 ) );
	object.setRelativeY( MxNumberTenths( 34.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<bass-step text=\"\" relative-x=\"34.6\" relative-y=\"34.6\" font-style=\"italic\" font-size=\"1.1\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 34.7 ) );
	object.setDefaultY( MxNumberTenths( 34.7 ) );
	object.setRelativeX( MxNumberTenths( 34.7 ) );
	object.setRelativeY( MxNumberTenths( 34.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<bass-step relative-x=\"34.7\" font-size=\"large\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 34.8 ) );
	object.setDefaultY( MxNumberTenths( 34.8 ) );
	object.setRelativeX( MxNumberTenths( 34.8 ) );
	object.setRelativeY( MxNumberTenths( 34.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<bass-step text=\"\" default-x=\"34.8\" default-y=\"34.8\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 34.9 ) );
	object.setDefaultY( MxNumberTenths( 34.9 ) );
	object.setRelativeX( MxNumberTenths( 34.9 ) );
	object.setRelativeY( MxNumberTenths( 34.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<bass-step default-x=\"34.9\" default-y=\"34.9\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 35 ) );
	object.setDefaultY( MxNumberTenths( 35 ) );
	object.setRelativeX( MxNumberTenths( 35 ) );
	object.setRelativeY( MxNumberTenths( 35 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<bass-step text=\"\" default-y=\"35\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 35.1 ) );
	object.setDefaultY( MxNumberTenths( 35.1 ) );
	object.setRelativeX( MxNumberTenths( 35.1 ) );
	object.setRelativeY( MxNumberTenths( 35.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<bass-step font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 35.2 ) );
	object.setDefaultY( MxNumberTenths( 35.2 ) );
	object.setRelativeX( MxNumberTenths( 35.2 ) );
	object.setRelativeY( MxNumberTenths( 35.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<bass-step text=\"\" default-x=\"35.2\" relative-x=\"35.2\" relative-y=\"35.2\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#B0AFAE\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 35.3 ) );
	object.setDefaultY( MxNumberTenths( 35.3 ) );
	object.setRelativeX( MxNumberTenths( 35.3 ) );
	object.setRelativeY( MxNumberTenths( 35.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<bass-step default-x=\"35.3\" relative-x=\"35.3\" relative-y=\"35.3\" font-family=\"ABC\" font-weight=\"normal\" color=\"#B1B2B1B0\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 35.4 ) );
	object.setDefaultY( MxNumberTenths( 35.4 ) );
	object.setRelativeX( MxNumberTenths( 35.4 ) );
	object.setRelativeY( MxNumberTenths( 35.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<bass-step text=\"\" default-y=\"35.4\" relative-x=\"35.4\" relative-y=\"35.4\" font-style=\"italic\" font-weight=\"bold\" color=\"#B4B3B2\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 35.5 ) );
	object.setDefaultY( MxNumberTenths( 35.5 ) );
	object.setRelativeX( MxNumberTenths( 35.5 ) );
	object.setRelativeY( MxNumberTenths( 35.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<bass-step default-y=\"35.5\" relative-x=\"35.5\" relative-y=\"35.5\" font-style=\"normal\" font-weight=\"normal\" color=\"#B5B6B5B4\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 35.6 ) );
	object.setDefaultY( MxNumberTenths( 35.6 ) );
	object.setRelativeX( MxNumberTenths( 35.6 ) );
	object.setRelativeY( MxNumberTenths( 35.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<bass-step text=\"\" default-x=\"35.6\" default-y=\"35.6\" relative-y=\"35.6\" font-style=\"italic\" font-weight=\"bold\" color=\"#B8B7B6\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 35.7 ) );
	object.setDefaultY( MxNumberTenths( 35.7 ) );
	object.setRelativeX( MxNumberTenths( 35.7 ) );
	object.setRelativeY( MxNumberTenths( 35.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<bass-step default-x=\"35.7\" font-style=\"normal\" color=\"#B9BAB9B8\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 35.8 ) );
	object.setDefaultY( MxNumberTenths( 35.8 ) );
	object.setRelativeX( MxNumberTenths( 35.8 ) );
	object.setRelativeY( MxNumberTenths( 35.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<bass-step text=\"\" font-style=\"italic\" color=\"#BCBBBA\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 35.9 ) );
	object.setDefaultY( MxNumberTenths( 35.9 ) );
	object.setRelativeX( MxNumberTenths( 35.9 ) );
	object.setRelativeY( MxNumberTenths( 35.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<bass-step font-style=\"normal\" color=\"#BDBEBDBC\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 36 ) );
	object.setDefaultY( MxNumberTenths( 36 ) );
	object.setRelativeX( MxNumberTenths( 36 ) );
	object.setRelativeY( MxNumberTenths( 36 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<bass-step text=\"\" default-x=\"36\" default-y=\"36\" relative-x=\"36\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#C0BFBE\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 36.1 ) );
	object.setDefaultY( MxNumberTenths( 36.1 ) );
	object.setRelativeX( MxNumberTenths( 36.1 ) );
	object.setRelativeY( MxNumberTenths( 36.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<bass-step default-x=\"36.1\" default-y=\"36.1\" relative-x=\"36.1\" font-family=\"XYZ\" font-size=\"large\" color=\"#C1C2C1C0\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 36.2 ) );
	object.setDefaultY( MxNumberTenths( 36.2 ) );
	object.setRelativeX( MxNumberTenths( 36.2 ) );
	object.setRelativeY( MxNumberTenths( 36.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<bass-step text=\"\" default-y=\"36.2\" relative-x=\"36.2\" relative-y=\"36.2\" font-family=\"ABC\" font-size=\"1.1\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 36.3 ) );
	object.setDefaultY( MxNumberTenths( 36.3 ) );
	object.setRelativeX( MxNumberTenths( 36.3 ) );
	object.setRelativeY( MxNumberTenths( 36.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<bass-step relative-x=\"36.3\" relative-y=\"36.3\" font-family=\"DEF\" font-size=\"large\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 36.4 ) );
	object.setDefaultY( MxNumberTenths( 36.4 ) );
	object.setRelativeX( MxNumberTenths( 36.4 ) );
	object.setRelativeY( MxNumberTenths( 36.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<bass-step text=\"\" default-x=\"36.4\" relative-y=\"36.4\" font-family=\"XYZ\" font-size=\"1.1\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 36.5 ) );
	object.setDefaultY( MxNumberTenths( 36.5 ) );
	object.setRelativeX( MxNumberTenths( 36.5 ) );
	object.setRelativeY( MxNumberTenths( 36.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<bass-step default-x=\"36.5\" relative-y=\"36.5\" font-family=\"ABC\" font-size=\"large\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 36.6 ) );
	object.setDefaultY( MxNumberTenths( 36.6 ) );
	object.setRelativeX( MxNumberTenths( 36.6 ) );
	object.setRelativeY( MxNumberTenths( 36.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<bass-step text=\"\" default-y=\"36.6\" relative-y=\"36.6\" font-size=\"1.1\" font-weight=\"bold\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 36.7 ) );
	object.setDefaultY( MxNumberTenths( 36.7 ) );
	object.setRelativeX( MxNumberTenths( 36.7 ) );
	object.setRelativeY( MxNumberTenths( 36.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<bass-step default-y=\"36.7\" font-size=\"large\" font-weight=\"normal\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 36.8 ) );
	object.setDefaultY( MxNumberTenths( 36.8 ) );
	object.setRelativeX( MxNumberTenths( 36.8 ) );
	object.setRelativeY( MxNumberTenths( 36.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<bass-step text=\"\" default-x=\"36.8\" default-y=\"36.8\" relative-x=\"36.8\" font-style=\"italic\" font-weight=\"bold\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 36.9 ) );
	object.setDefaultY( MxNumberTenths( 36.9 ) );
	object.setRelativeX( MxNumberTenths( 36.9 ) );
	object.setRelativeY( MxNumberTenths( 36.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<bass-step default-x=\"36.9\" relative-x=\"36.9\" font-style=\"normal\" font-weight=\"normal\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 37 ) );
	object.setDefaultY( MxNumberTenths( 37 ) );
	object.setRelativeX( MxNumberTenths( 37 ) );
	object.setRelativeY( MxNumberTenths( 37 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<bass-step text=\"\" relative-x=\"37\" font-style=\"italic\" font-weight=\"bold\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 37.1 ) );
	object.setDefaultY( MxNumberTenths( 37.1 ) );
	object.setRelativeX( MxNumberTenths( 37.1 ) );
	object.setRelativeY( MxNumberTenths( 37.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<bass-step relative-x=\"37.1\" font-style=\"normal\" font-weight=\"normal\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 37.2 ) );
	object.setDefaultY( MxNumberTenths( 37.2 ) );
	object.setRelativeX( MxNumberTenths( 37.2 ) );
	object.setRelativeY( MxNumberTenths( 37.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<bass-step text=\"\" default-x=\"37.2\" default-y=\"37.2\" relative-y=\"37.2\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" color=\"#D8D7D6\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 37.3 ) );
	object.setDefaultY( MxNumberTenths( 37.3 ) );
	object.setRelativeX( MxNumberTenths( 37.3 ) );
	object.setRelativeY( MxNumberTenths( 37.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<bass-step default-x=\"37.3\" default-y=\"37.3\" relative-y=\"37.3\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" color=\"#D9DAD9D8\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 37.4 ) );
	object.setDefaultY( MxNumberTenths( 37.4 ) );
	object.setRelativeX( MxNumberTenths( 37.4 ) );
	object.setRelativeY( MxNumberTenths( 37.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<bass-step text=\"\" default-y=\"37.4\" relative-y=\"37.4\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" color=\"#DCDBDA\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 37.5 ) );
	object.setDefaultY( MxNumberTenths( 37.5 ) );
	object.setRelativeX( MxNumberTenths( 37.5 ) );
	object.setRelativeY( MxNumberTenths( 37.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<bass-step relative-y=\"37.5\" font-family=\"DEF\" color=\"#DDDEDDDC\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 37.6 ) );
	object.setDefaultY( MxNumberTenths( 37.6 ) );
	object.setRelativeX( MxNumberTenths( 37.6 ) );
	object.setRelativeY( MxNumberTenths( 37.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<bass-step text=\"\" default-x=\"37.6\" relative-x=\"37.6\" relative-y=\"37.6\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#E0DFDE\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 37.7 ) );
	object.setDefaultY( MxNumberTenths( 37.7 ) );
	object.setRelativeX( MxNumberTenths( 37.7 ) );
	object.setRelativeY( MxNumberTenths( 37.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<bass-step default-x=\"37.7\" relative-x=\"37.7\" font-family=\"ABC\" font-size=\"large\" color=\"#E1E2E1E0\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 37.8 ) );
	object.setDefaultY( MxNumberTenths( 37.8 ) );
	object.setRelativeX( MxNumberTenths( 37.8 ) );
	object.setRelativeY( MxNumberTenths( 37.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<bass-step text=\"\" default-y=\"37.8\" relative-x=\"37.8\" font-size=\"1.1\" color=\"#E4E3E2\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 37.9 ) );
	object.setDefaultY( MxNumberTenths( 37.9 ) );
	object.setRelativeX( MxNumberTenths( 37.9 ) );
	object.setRelativeY( MxNumberTenths( 37.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	expected = "<bass-step default-y=\"37.9\" relative-x=\"37.9\" font-size=\"large\" color=\"#E5E6E5E4\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 38 ) );
	object.setDefaultY( MxNumberTenths( 38 ) );
	object.setRelativeX( MxNumberTenths( 38 ) );
	object.setRelativeY( MxNumberTenths( 38 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	expected = "<bass-step text=\"\" default-x=\"38\" default-y=\"38\" font-size=\"1.1\" color=\"#E8E7E6\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 38.1 ) );
	object.setDefaultY( MxNumberTenths( 38.1 ) );
	object.setRelativeX( MxNumberTenths( 38.1 ) );
	object.setRelativeY( MxNumberTenths( 38.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	expected = "<bass-step default-x=\"38.1\" font-size=\"large\" color=\"#E9EAE9E8\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 38.2 ) );
	object.setDefaultY( MxNumberTenths( 38.2 ) );
	object.setRelativeX( MxNumberTenths( 38.2 ) );
	object.setRelativeY( MxNumberTenths( 38.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	expected = "<bass-step text=\"\" relative-y=\"38.2\" font-style=\"italic\" font-size=\"1.1\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 38.3 ) );
	object.setDefaultY( MxNumberTenths( 38.3 ) );
	object.setRelativeX( MxNumberTenths( 38.3 ) );
	object.setRelativeY( MxNumberTenths( 38.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	expected = "<bass-step relative-y=\"38.3\" font-style=\"normal\" font-size=\"large\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 38.4 ) );
	object.setDefaultY( MxNumberTenths( 38.4 ) );
	object.setRelativeX( MxNumberTenths( 38.4 ) );
	object.setRelativeY( MxNumberTenths( 38.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	expected = "<bass-step text=\"\" default-x=\"38.4\" default-y=\"38.4\" relative-x=\"38.4\" relative-y=\"38.4\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 38.5 ) );
	object.setDefaultY( MxNumberTenths( 38.5 ) );
	object.setRelativeX( MxNumberTenths( 38.5 ) );
	object.setRelativeY( MxNumberTenths( 38.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	expected = "<bass-step default-x=\"38.5\" default-y=\"38.5\" relative-x=\"38.5\" relative-y=\"38.5\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 38.6 ) );
	object.setDefaultY( MxNumberTenths( 38.6 ) );
	object.setRelativeX( MxNumberTenths( 38.6 ) );
	object.setRelativeY( MxNumberTenths( 38.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	expected = "<bass-step text=\"\" default-y=\"38.6\" relative-x=\"38.6\" relative-y=\"38.6\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 38.7 ) );
	object.setDefaultY( MxNumberTenths( 38.7 ) );
	object.setRelativeX( MxNumberTenths( 38.7 ) );
	object.setRelativeY( MxNumberTenths( 38.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<bass-step relative-x=\"38.7\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 38.8 ) );
	object.setDefaultY( MxNumberTenths( 38.8 ) );
	object.setRelativeX( MxNumberTenths( 38.8 ) );
	object.setRelativeY( MxNumberTenths( 38.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	expected = "<bass-step text=\"\" default-x=\"38.8\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 38.9 ) );
	object.setDefaultY( MxNumberTenths( 38.9 ) );
	object.setRelativeX( MxNumberTenths( 38.9 ) );
	object.setRelativeY( MxNumberTenths( 38.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<bass-step default-x=\"38.9\" font-family=\"ABC\" font-weight=\"normal\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 39 ) );
	object.setDefaultY( MxNumberTenths( 39 ) );
	object.setRelativeX( MxNumberTenths( 39 ) );
	object.setRelativeY( MxNumberTenths( 39 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<bass-step text=\"\" default-y=\"39\" font-weight=\"bold\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 39.1 ) );
	object.setDefaultY( MxNumberTenths( 39.1 ) );
	object.setRelativeX( MxNumberTenths( 39.1 ) );
	object.setRelativeY( MxNumberTenths( 39.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<bass-step default-y=\"39.1\" font-weight=\"normal\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 39.2 ) );
	object.setDefaultY( MxNumberTenths( 39.2 ) );
	object.setRelativeX( MxNumberTenths( 39.2 ) );
	object.setRelativeY( MxNumberTenths( 39.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<bass-step text=\"\" default-x=\"39.2\" default-y=\"39.2\" relative-x=\"39.2\" relative-y=\"39.2\" font-size=\"1.1\" font-weight=\"bold\" color=\"#00FFFE\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 39.3 ) );
	object.setDefaultY( MxNumberTenths( 39.3 ) );
	object.setRelativeX( MxNumberTenths( 39.3 ) );
	object.setRelativeY( MxNumberTenths( 39.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#01020100" ) );
	expected = "<bass-step default-x=\"39.3\" relative-x=\"39.3\" relative-y=\"39.3\" font-size=\"large\" color=\"#01020100\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 39.4 ) );
	object.setDefaultY( MxNumberTenths( 39.4 ) );
	object.setRelativeX( MxNumberTenths( 39.4 ) );
	object.setRelativeY( MxNumberTenths( 39.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#040302" ) );
	expected = "<bass-step text=\"\" relative-x=\"39.4\" relative-y=\"39.4\" font-size=\"1.1\" color=\"#040302\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 39.5 ) );
	object.setDefaultY( MxNumberTenths( 39.5 ) );
	object.setRelativeX( MxNumberTenths( 39.5 ) );
	object.setRelativeY( MxNumberTenths( 39.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#05060504" ) );
	expected = "<bass-step relative-x=\"39.5\" relative-y=\"39.5\" font-size=\"large\" color=\"#05060504\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 39.6 ) );
	object.setDefaultY( MxNumberTenths( 39.6 ) );
	object.setRelativeX( MxNumberTenths( 39.6 ) );
	object.setRelativeY( MxNumberTenths( 39.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#080706" ) );
	expected = "<bass-step text=\"\" default-x=\"39.6\" default-y=\"39.6\" relative-y=\"39.6\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#080706\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 39.7 ) );
	object.setDefaultY( MxNumberTenths( 39.7 ) );
	object.setRelativeX( MxNumberTenths( 39.7 ) );
	object.setRelativeY( MxNumberTenths( 39.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#090A0908" ) );
	expected = "<bass-step default-x=\"39.7\" default-y=\"39.7\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#090A0908\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 39.8 ) );
	object.setDefaultY( MxNumberTenths( 39.8 ) );
	object.setRelativeX( MxNumberTenths( 39.8 ) );
	object.setRelativeY( MxNumberTenths( 39.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	expected = "<bass-step text=\"\" default-y=\"39.8\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#0C0B0A\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 39.9 ) );
	object.setDefaultY( MxNumberTenths( 39.9 ) );
	object.setRelativeX( MxNumberTenths( 39.9 ) );
	object.setRelativeY( MxNumberTenths( 39.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	expected = "<bass-step font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#0D0E0D0C\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 40 ) );
	object.setDefaultY( MxNumberTenths( 40 ) );
	object.setRelativeX( MxNumberTenths( 40 ) );
	object.setRelativeY( MxNumberTenths( 40 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#100F0E" ) );
	expected = "<bass-step text=\"\" default-x=\"40\" relative-x=\"40\" font-family=\"XYZ\" font-style=\"italic\" color=\"#100F0E\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 40.1 ) );
	object.setDefaultY( MxNumberTenths( 40.1 ) );
	object.setRelativeX( MxNumberTenths( 40.1 ) );
	object.setRelativeY( MxNumberTenths( 40.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#11121110" ) );
	expected = "<bass-step default-x=\"40.1\" relative-x=\"40.1\" font-family=\"ABC\" font-style=\"normal\" color=\"#11121110\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 40.2 ) );
	object.setDefaultY( MxNumberTenths( 40.2 ) );
	object.setRelativeX( MxNumberTenths( 40.2 ) );
	object.setRelativeY( MxNumberTenths( 40.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#141312" ) );
	expected = "<bass-step text=\"\" default-y=\"40.2\" relative-x=\"40.2\" relative-y=\"40.2\" font-style=\"italic\" font-weight=\"bold\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 40.3 ) );
	object.setDefaultY( MxNumberTenths( 40.3 ) );
	object.setRelativeX( MxNumberTenths( 40.3 ) );
	object.setRelativeY( MxNumberTenths( 40.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#15161514" ) );
	expected = "<bass-step default-y=\"40.3\" relative-x=\"40.3\" relative-y=\"40.3\" font-weight=\"normal\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 40.4 ) );
	object.setDefaultY( MxNumberTenths( 40.4 ) );
	object.setRelativeX( MxNumberTenths( 40.4 ) );
	object.setRelativeY( MxNumberTenths( 40.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
	expected = "<bass-step text=\"\" default-x=\"40.4\" default-y=\"40.4\" relative-y=\"40.4\" font-weight=\"bold\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 40.5 ) );
	object.setDefaultY( MxNumberTenths( 40.5 ) );
	object.setRelativeX( MxNumberTenths( 40.5 ) );
	object.setRelativeY( MxNumberTenths( 40.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<bass-step default-x=\"40.5\" relative-y=\"40.5\" font-weight=\"normal\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 40.6 ) );
	object.setDefaultY( MxNumberTenths( 40.6 ) );
	object.setRelativeX( MxNumberTenths( 40.6 ) );
	object.setRelativeY( MxNumberTenths( 40.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<bass-step text=\"\" relative-y=\"40.6\" font-weight=\"bold\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 40.7 ) );
	object.setDefaultY( MxNumberTenths( 40.7 ) );
	object.setRelativeX( MxNumberTenths( 40.7 ) );
	object.setRelativeY( MxNumberTenths( 40.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<bass-step font-weight=\"normal\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 40.8 ) );
	object.setDefaultY( MxNumberTenths( 40.8 ) );
	object.setRelativeX( MxNumberTenths( 40.8 ) );
	object.setRelativeY( MxNumberTenths( 40.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<bass-step text=\"\" default-x=\"40.8\" default-y=\"40.8\" relative-x=\"40.8\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 40.9 ) );
	object.setDefaultY( MxNumberTenths( 40.9 ) );
	object.setRelativeX( MxNumberTenths( 40.9 ) );
	object.setRelativeY( MxNumberTenths( 40.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<bass-step default-x=\"40.9\" default-y=\"40.9\" relative-x=\"40.9\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 41 ) );
	object.setDefaultY( MxNumberTenths( 41 ) );
	object.setRelativeX( MxNumberTenths( 41 ) );
	object.setRelativeY( MxNumberTenths( 41 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<bass-step text=\"\" default-y=\"41\" relative-x=\"41\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 41.1 ) );
	object.setDefaultY( MxNumberTenths( 41.1 ) );
	object.setRelativeX( MxNumberTenths( 41.1 ) );
	object.setRelativeY( MxNumberTenths( 41.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<bass-step relative-x=\"41.1\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\">D</bass-step>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEsBassStep )
{
	MxEsBassStep object( lexicon::enums::Step::d );
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
	object.setDefaultX( MxNumberTenths( 41.2 ) );
	object.setDefaultY( MxNumberTenths( 41.2 ) );
	object.setRelativeX( MxNumberTenths( 41.2 ) );
	object.setRelativeY( MxNumberTenths( 41.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<bass-step>D</bass-step>";
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


