/** *******************************************************
  * 
  * MxEsDegreeTypeTest.cpp
  * Created: 2014-12-05 20:57:51
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsDegreeType.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsDegreeType )
{
	MxEsDegreeType object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsDegreeType )
{
	MxEsDegreeType object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getText().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsDegreeType )
{
	MxEsDegreeType object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsDegreeType )
{
	MxEsDegreeType object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsDegreeType )
{
	MxEsDegreeType object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEsDegreeType )
{
	MxEsDegreeType object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEsDegreeType )
{
	MxEsDegreeType object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEsDegreeType )
{
	MxEsDegreeType object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEsDegreeType )
{
	MxEsDegreeType object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEsDegreeType )
{
	MxEsDegreeType object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEsDegreeType )
{
	MxEsDegreeType object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsDegreeType )
{
	MxEsDegreeType object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsDegreeType )
{
	MxEsDegreeType object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::add );
	std::string expected;
	std::string actual;
	expected = "add";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
	expected = "alter";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::subtract );
	std::string expected;
	std::string actual;
	expected = "subtract";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::add ) );
	expected = "add";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
	std::string expected;
	std::string actual;
	expected = "alter";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::subtract ) );
	expected = "subtract";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::add );
	std::string expected;
	std::string actual;
	expected = "add";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::alter ) );
	expected = "alter";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::subtract );
	std::string expected;
	std::string actual;
	expected = "subtract";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumDegreeTypeValue( lexicon::enums::DegreeTypeValue::add ) );
	expected = "add";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEsDegreeType )
{
	MxEsDegreeType object;
	std::string expected = "MxEsDegreeType";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsDegreeType )
{
	MxEsDegreeType object;
	std::string expected = "degree-type";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsDegreeType )
{
	MxEsDegreeType object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setText0, MxEsDegreeType )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeType object;
	object.setText( value1 );
	XsToken expected = value1;
	XsToken actual = object.getText();
	CHECK_EQUAL( expected, actual )
	object.setText( value2 );
	expected = value2;
	actual = object.getText();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX1, MxEsDegreeType )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeType object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY2, MxEsDegreeType )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeType object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX3, MxEsDegreeType )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeType object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY4, MxEsDegreeType )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeType object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily5, MxEsDegreeType )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeType object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle6, MxEsDegreeType )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeType object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize7, MxEsDegreeType )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeType object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight8, MxEsDegreeType )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeType object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor9, MxEsDegreeType )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeType object;
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

TEST( getIsTextRequired0, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsTextRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired1, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired2, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired3, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired4, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired5, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired6, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired7, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired8, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired9, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTextPresent0, MxEsDegreeType )
{
	MxEsDegreeType object;
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
TEST( getIsDefaultXPresent1, MxEsDegreeType )
{
	MxEsDegreeType object;
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
TEST( getIsDefaultYPresent2, MxEsDegreeType )
{
	MxEsDegreeType object;
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
TEST( getIsRelativeXPresent3, MxEsDegreeType )
{
	MxEsDegreeType object;
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
TEST( getIsRelativeYPresent4, MxEsDegreeType )
{
	MxEsDegreeType object;
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
TEST( getIsFontFamilyPresent5, MxEsDegreeType )
{
	MxEsDegreeType object;
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
TEST( getIsFontStylePresent6, MxEsDegreeType )
{
	MxEsDegreeType object;
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
TEST( getIsFontSizePresent7, MxEsDegreeType )
{
	MxEsDegreeType object;
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
TEST( getIsFontWeightPresent8, MxEsDegreeType )
{
	MxEsDegreeType object;
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
TEST( getIsColorPresent9, MxEsDegreeType )
{
	MxEsDegreeType object;
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

TEST( getIsTextDefaultDefined, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsTextDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsDegreeType )
{
	MxEsDegreeType object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTextDefaultValue, MxEsDegreeType )
{
	MxEsDegreeType object;
	XsToken expected;
	XsToken actual = object.getTextDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEsDegreeType )
{
	MxEsDegreeType object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEsDegreeType )
{
	MxEsDegreeType object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEsDegreeType )
{
	MxEsDegreeType object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEsDegreeType )
{
	MxEsDegreeType object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEsDegreeType )
{
	MxEsDegreeType object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEsDegreeType )
{
	MxEsDegreeType object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEsDegreeType )
{
	MxEsDegreeType object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEsDegreeType )
{
	MxEsDegreeType object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsDegreeType )
{
	MxEsDegreeType object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
	std::string expected;
	std::string actual;
	object.setText( XsToken( "" ) );
	object.setDefaultX( MxNumberTenths( 71.6 ) );
	object.setDefaultY( MxNumberTenths( 71.6 ) );
	object.setRelativeX( MxNumberTenths( 71.6 ) );
	object.setRelativeY( MxNumberTenths( 71.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
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
	expected = "<degree-type text=\"\" default-x=\"71.6\" default-y=\"71.6\" relative-x=\"71.6\" relative-y=\"71.6\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#888786\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 71.7 ) );
	object.setDefaultY( MxNumberTenths( 71.7 ) );
	object.setRelativeX( MxNumberTenths( 71.7 ) );
	object.setRelativeY( MxNumberTenths( 71.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<degree-type default-x=\"71.7\" default-y=\"71.7\" relative-x=\"71.7\" relative-y=\"71.7\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#898A8988\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 71.8 ) );
	object.setDefaultY( MxNumberTenths( 71.8 ) );
	object.setRelativeX( MxNumberTenths( 71.8 ) );
	object.setRelativeY( MxNumberTenths( 71.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<degree-type text=\"\" default-y=\"71.8\" relative-x=\"71.8\" relative-y=\"71.8\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#8C8B8A\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 71.9 ) );
	object.setDefaultY( MxNumberTenths( 71.9 ) );
	object.setRelativeX( MxNumberTenths( 71.9 ) );
	object.setRelativeY( MxNumberTenths( 71.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<degree-type relative-x=\"71.9\" relative-y=\"71.9\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#8D8E8D8C\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 72 ) );
	object.setDefaultY( MxNumberTenths( 72 ) );
	object.setRelativeX( MxNumberTenths( 72 ) );
	object.setRelativeY( MxNumberTenths( 72 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<degree-type text=\"\" default-x=\"72\" relative-y=\"72\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#908F8E\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 72.1 ) );
	object.setDefaultY( MxNumberTenths( 72.1 ) );
	object.setRelativeX( MxNumberTenths( 72.1 ) );
	object.setRelativeY( MxNumberTenths( 72.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<degree-type default-x=\"72.1\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#91929190\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 72.2 ) );
	object.setDefaultY( MxNumberTenths( 72.2 ) );
	object.setRelativeX( MxNumberTenths( 72.2 ) );
	object.setRelativeY( MxNumberTenths( 72.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<degree-type text=\"\" default-y=\"72.2\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#949392\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 72.3 ) );
	object.setDefaultY( MxNumberTenths( 72.3 ) );
	object.setRelativeX( MxNumberTenths( 72.3 ) );
	object.setRelativeY( MxNumberTenths( 72.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<degree-type default-y=\"72.3\" font-size=\"large\" font-weight=\"normal\" color=\"#95969594\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 72.4 ) );
	object.setDefaultY( MxNumberTenths( 72.4 ) );
	object.setRelativeX( MxNumberTenths( 72.4 ) );
	object.setRelativeY( MxNumberTenths( 72.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<degree-type text=\"\" default-x=\"72.4\" default-y=\"72.4\" relative-x=\"72.4\" font-weight=\"bold\" color=\"#989796\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 72.5 ) );
	object.setDefaultY( MxNumberTenths( 72.5 ) );
	object.setRelativeX( MxNumberTenths( 72.5 ) );
	object.setRelativeY( MxNumberTenths( 72.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<degree-type default-x=\"72.5\" relative-x=\"72.5\" color=\"#999A9998\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 72.6 ) );
	object.setDefaultY( MxNumberTenths( 72.6 ) );
	object.setRelativeX( MxNumberTenths( 72.6 ) );
	object.setRelativeY( MxNumberTenths( 72.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<degree-type text=\"\" relative-x=\"72.6\" relative-y=\"72.6\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 72.7 ) );
	object.setDefaultY( MxNumberTenths( 72.7 ) );
	object.setRelativeX( MxNumberTenths( 72.7 ) );
	object.setRelativeY( MxNumberTenths( 72.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<degree-type relative-x=\"72.7\" relative-y=\"72.7\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 72.8 ) );
	object.setDefaultY( MxNumberTenths( 72.8 ) );
	object.setRelativeX( MxNumberTenths( 72.8 ) );
	object.setRelativeY( MxNumberTenths( 72.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<degree-type text=\"\" default-x=\"72.8\" default-y=\"72.8\" relative-y=\"72.8\" font-family=\"ABC\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 72.9 ) );
	object.setDefaultY( MxNumberTenths( 72.9 ) );
	object.setRelativeX( MxNumberTenths( 72.9 ) );
	object.setRelativeY( MxNumberTenths( 72.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<degree-type default-x=\"72.9\" default-y=\"72.9\" relative-y=\"72.9\" font-family=\"DEF\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 73 ) );
	object.setDefaultY( MxNumberTenths( 73 ) );
	object.setRelativeX( MxNumberTenths( 73 ) );
	object.setRelativeY( MxNumberTenths( 73 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<degree-type text=\"\" default-y=\"73\" relative-y=\"73\" font-family=\"XYZ\" font-style=\"italic\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 73.1 ) );
	object.setDefaultY( MxNumberTenths( 73.1 ) );
	object.setRelativeX( MxNumberTenths( 73.1 ) );
	object.setRelativeY( MxNumberTenths( 73.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<degree-type font-family=\"ABC\" font-style=\"normal\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 73.2 ) );
	object.setDefaultY( MxNumberTenths( 73.2 ) );
	object.setRelativeX( MxNumberTenths( 73.2 ) );
	object.setRelativeY( MxNumberTenths( 73.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<degree-type text=\"\" default-x=\"73.2\" relative-x=\"73.2\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 73.3 ) );
	object.setDefaultY( MxNumberTenths( 73.3 ) );
	object.setRelativeX( MxNumberTenths( 73.3 ) );
	object.setRelativeY( MxNumberTenths( 73.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<degree-type default-x=\"73.3\" relative-x=\"73.3\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 73.4 ) );
	object.setDefaultY( MxNumberTenths( 73.4 ) );
	object.setRelativeX( MxNumberTenths( 73.4 ) );
	object.setRelativeY( MxNumberTenths( 73.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<degree-type text=\"\" default-y=\"73.4\" relative-x=\"73.4\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 73.5 ) );
	object.setDefaultY( MxNumberTenths( 73.5 ) );
	object.setRelativeX( MxNumberTenths( 73.5 ) );
	object.setRelativeY( MxNumberTenths( 73.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<degree-type default-y=\"73.5\" relative-x=\"73.5\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 73.6 ) );
	object.setDefaultY( MxNumberTenths( 73.6 ) );
	object.setRelativeX( MxNumberTenths( 73.6 ) );
	object.setRelativeY( MxNumberTenths( 73.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<degree-type text=\"\" default-x=\"73.6\" default-y=\"73.6\" relative-y=\"73.6\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#B0AFAE\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 73.7 ) );
	object.setDefaultY( MxNumberTenths( 73.7 ) );
	object.setRelativeX( MxNumberTenths( 73.7 ) );
	object.setRelativeY( MxNumberTenths( 73.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<degree-type default-x=\"73.7\" relative-y=\"73.7\" font-size=\"large\" font-weight=\"normal\" color=\"#B1B2B1B0\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 73.8 ) );
	object.setDefaultY( MxNumberTenths( 73.8 ) );
	object.setRelativeX( MxNumberTenths( 73.8 ) );
	object.setRelativeY( MxNumberTenths( 73.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<degree-type text=\"\" relative-y=\"73.8\" font-size=\"1.1\" font-weight=\"bold\" color=\"#B4B3B2\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 73.9 ) );
	object.setDefaultY( MxNumberTenths( 73.9 ) );
	object.setRelativeX( MxNumberTenths( 73.9 ) );
	object.setRelativeY( MxNumberTenths( 73.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<degree-type relative-y=\"73.9\" font-size=\"large\" font-weight=\"normal\" color=\"#B5B6B5B4\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 74 ) );
	object.setDefaultY( MxNumberTenths( 74 ) );
	object.setRelativeX( MxNumberTenths( 74 ) );
	object.setRelativeY( MxNumberTenths( 74 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<degree-type text=\"\" default-x=\"74\" default-y=\"74\" relative-x=\"74\" relative-y=\"74\" font-family=\"ABC\" font-weight=\"bold\" color=\"#B8B7B6\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 74.1 ) );
	object.setDefaultY( MxNumberTenths( 74.1 ) );
	object.setRelativeX( MxNumberTenths( 74.1 ) );
	object.setRelativeY( MxNumberTenths( 74.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<degree-type default-x=\"74.1\" default-y=\"74.1\" relative-x=\"74.1\" font-family=\"DEF\" font-weight=\"normal\" color=\"#B9BAB9B8\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 74.2 ) );
	object.setDefaultY( MxNumberTenths( 74.2 ) );
	object.setRelativeX( MxNumberTenths( 74.2 ) );
	object.setRelativeY( MxNumberTenths( 74.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<degree-type text=\"\" default-y=\"74.2\" relative-x=\"74.2\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#BCBBBA\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 74.3 ) );
	object.setDefaultY( MxNumberTenths( 74.3 ) );
	object.setRelativeX( MxNumberTenths( 74.3 ) );
	object.setRelativeY( MxNumberTenths( 74.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<degree-type relative-x=\"74.3\" font-family=\"ABC\" color=\"#BDBEBDBC\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 74.4 ) );
	object.setDefaultY( MxNumberTenths( 74.4 ) );
	object.setRelativeX( MxNumberTenths( 74.4 ) );
	object.setRelativeY( MxNumberTenths( 74.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<degree-type text=\"\" default-x=\"74.4\" font-family=\"DEF\" font-style=\"italic\" color=\"#C0BFBE\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 74.5 ) );
	object.setDefaultY( MxNumberTenths( 74.5 ) );
	object.setRelativeX( MxNumberTenths( 74.5 ) );
	object.setRelativeY( MxNumberTenths( 74.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<degree-type default-x=\"74.5\" font-family=\"XYZ\" font-style=\"normal\" color=\"#C1C2C1C0\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 74.6 ) );
	object.setDefaultY( MxNumberTenths( 74.6 ) );
	object.setRelativeX( MxNumberTenths( 74.6 ) );
	object.setRelativeY( MxNumberTenths( 74.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<degree-type text=\"\" default-y=\"74.6\" relative-y=\"74.6\" font-style=\"italic\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 74.7 ) );
	object.setDefaultY( MxNumberTenths( 74.7 ) );
	object.setRelativeX( MxNumberTenths( 74.7 ) );
	object.setRelativeY( MxNumberTenths( 74.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<degree-type default-y=\"74.7\" relative-y=\"74.7\" font-style=\"normal\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 74.8 ) );
	object.setDefaultY( MxNumberTenths( 74.8 ) );
	object.setRelativeX( MxNumberTenths( 74.8 ) );
	object.setRelativeY( MxNumberTenths( 74.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<degree-type text=\"\" default-x=\"74.8\" default-y=\"74.8\" relative-x=\"74.8\" relative-y=\"74.8\" font-style=\"italic\" font-size=\"1.1\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 74.9 ) );
	object.setDefaultY( MxNumberTenths( 74.9 ) );
	object.setRelativeX( MxNumberTenths( 74.9 ) );
	object.setRelativeY( MxNumberTenths( 74.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<degree-type default-x=\"74.9\" relative-x=\"74.9\" relative-y=\"74.9\" font-style=\"normal\" font-size=\"large\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 75 ) );
	object.setDefaultY( MxNumberTenths( 75 ) );
	object.setRelativeX( MxNumberTenths( 75 ) );
	object.setRelativeY( MxNumberTenths( 75 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<degree-type text=\"\" relative-x=\"75\" relative-y=\"75\" font-style=\"italic\" font-size=\"1.1\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 75.1 ) );
	object.setDefaultY( MxNumberTenths( 75.1 ) );
	object.setRelativeX( MxNumberTenths( 75.1 ) );
	object.setRelativeY( MxNumberTenths( 75.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<degree-type relative-x=\"75.1\" font-size=\"large\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 75.2 ) );
	object.setDefaultY( MxNumberTenths( 75.2 ) );
	object.setRelativeX( MxNumberTenths( 75.2 ) );
	object.setRelativeY( MxNumberTenths( 75.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<degree-type text=\"\" default-x=\"75.2\" default-y=\"75.2\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 75.3 ) );
	object.setDefaultY( MxNumberTenths( 75.3 ) );
	object.setRelativeX( MxNumberTenths( 75.3 ) );
	object.setRelativeY( MxNumberTenths( 75.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<degree-type default-x=\"75.3\" default-y=\"75.3\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 75.4 ) );
	object.setDefaultY( MxNumberTenths( 75.4 ) );
	object.setRelativeX( MxNumberTenths( 75.4 ) );
	object.setRelativeY( MxNumberTenths( 75.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<degree-type text=\"\" default-y=\"75.4\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 75.5 ) );
	object.setDefaultY( MxNumberTenths( 75.5 ) );
	object.setRelativeX( MxNumberTenths( 75.5 ) );
	object.setRelativeY( MxNumberTenths( 75.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<degree-type font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 75.6 ) );
	object.setDefaultY( MxNumberTenths( 75.6 ) );
	object.setRelativeX( MxNumberTenths( 75.6 ) );
	object.setRelativeY( MxNumberTenths( 75.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<degree-type text=\"\" default-x=\"75.6\" relative-x=\"75.6\" relative-y=\"75.6\" font-family=\"DEF\" font-weight=\"bold\" color=\"#D8D7D6\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 75.7 ) );
	object.setDefaultY( MxNumberTenths( 75.7 ) );
	object.setRelativeX( MxNumberTenths( 75.7 ) );
	object.setRelativeY( MxNumberTenths( 75.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<degree-type default-x=\"75.7\" relative-x=\"75.7\" relative-y=\"75.7\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#D9DAD9D8\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 75.8 ) );
	object.setDefaultY( MxNumberTenths( 75.8 ) );
	object.setRelativeX( MxNumberTenths( 75.8 ) );
	object.setRelativeY( MxNumberTenths( 75.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<degree-type text=\"\" default-y=\"75.8\" relative-x=\"75.8\" relative-y=\"75.8\" font-style=\"italic\" font-weight=\"bold\" color=\"#DCDBDA\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 75.9 ) );
	object.setDefaultY( MxNumberTenths( 75.9 ) );
	object.setRelativeX( MxNumberTenths( 75.9 ) );
	object.setRelativeY( MxNumberTenths( 75.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<degree-type default-y=\"75.9\" relative-x=\"75.9\" relative-y=\"75.9\" font-style=\"normal\" font-weight=\"normal\" color=\"#DDDEDDDC\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 76 ) );
	object.setDefaultY( MxNumberTenths( 76 ) );
	object.setRelativeX( MxNumberTenths( 76 ) );
	object.setRelativeY( MxNumberTenths( 76 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<degree-type text=\"\" default-x=\"76\" default-y=\"76\" relative-y=\"76\" font-style=\"italic\" font-weight=\"bold\" color=\"#E0DFDE\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 76.1 ) );
	object.setDefaultY( MxNumberTenths( 76.1 ) );
	object.setRelativeX( MxNumberTenths( 76.1 ) );
	object.setRelativeY( MxNumberTenths( 76.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<degree-type default-x=\"76.1\" font-style=\"normal\" color=\"#E1E2E1E0\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 76.2 ) );
	object.setDefaultY( MxNumberTenths( 76.2 ) );
	object.setRelativeX( MxNumberTenths( 76.2 ) );
	object.setRelativeY( MxNumberTenths( 76.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<degree-type text=\"\" font-style=\"italic\" color=\"#E4E3E2\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 76.3 ) );
	object.setDefaultY( MxNumberTenths( 76.3 ) );
	object.setRelativeX( MxNumberTenths( 76.3 ) );
	object.setRelativeY( MxNumberTenths( 76.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	expected = "<degree-type font-style=\"normal\" color=\"#E5E6E5E4\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 76.4 ) );
	object.setDefaultY( MxNumberTenths( 76.4 ) );
	object.setRelativeX( MxNumberTenths( 76.4 ) );
	object.setRelativeY( MxNumberTenths( 76.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	expected = "<degree-type text=\"\" default-x=\"76.4\" default-y=\"76.4\" relative-x=\"76.4\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#E8E7E6\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 76.5 ) );
	object.setDefaultY( MxNumberTenths( 76.5 ) );
	object.setRelativeX( MxNumberTenths( 76.5 ) );
	object.setRelativeY( MxNumberTenths( 76.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	expected = "<degree-type default-x=\"76.5\" default-y=\"76.5\" relative-x=\"76.5\" font-family=\"DEF\" font-size=\"large\" color=\"#E9EAE9E8\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 76.6 ) );
	object.setDefaultY( MxNumberTenths( 76.6 ) );
	object.setRelativeX( MxNumberTenths( 76.6 ) );
	object.setRelativeY( MxNumberTenths( 76.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	expected = "<degree-type text=\"\" default-y=\"76.6\" relative-x=\"76.6\" relative-y=\"76.6\" font-family=\"XYZ\" font-size=\"1.1\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 76.7 ) );
	object.setDefaultY( MxNumberTenths( 76.7 ) );
	object.setRelativeX( MxNumberTenths( 76.7 ) );
	object.setRelativeY( MxNumberTenths( 76.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	expected = "<degree-type relative-x=\"76.7\" relative-y=\"76.7\" font-family=\"ABC\" font-size=\"large\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 76.8 ) );
	object.setDefaultY( MxNumberTenths( 76.8 ) );
	object.setRelativeX( MxNumberTenths( 76.8 ) );
	object.setRelativeY( MxNumberTenths( 76.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	expected = "<degree-type text=\"\" default-x=\"76.8\" relative-y=\"76.8\" font-family=\"DEF\" font-size=\"1.1\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 76.9 ) );
	object.setDefaultY( MxNumberTenths( 76.9 ) );
	object.setRelativeX( MxNumberTenths( 76.9 ) );
	object.setRelativeY( MxNumberTenths( 76.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	expected = "<degree-type default-x=\"76.9\" relative-y=\"76.9\" font-family=\"XYZ\" font-size=\"large\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 77 ) );
	object.setDefaultY( MxNumberTenths( 77 ) );
	object.setRelativeX( MxNumberTenths( 77 ) );
	object.setRelativeY( MxNumberTenths( 77 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	expected = "<degree-type text=\"\" default-y=\"77\" relative-y=\"77\" font-size=\"1.1\" font-weight=\"bold\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 77.1 ) );
	object.setDefaultY( MxNumberTenths( 77.1 ) );
	object.setRelativeX( MxNumberTenths( 77.1 ) );
	object.setRelativeY( MxNumberTenths( 77.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<degree-type default-y=\"77.1\" font-size=\"large\" font-weight=\"normal\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 77.2 ) );
	object.setDefaultY( MxNumberTenths( 77.2 ) );
	object.setRelativeX( MxNumberTenths( 77.2 ) );
	object.setRelativeY( MxNumberTenths( 77.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	expected = "<degree-type text=\"\" default-x=\"77.2\" default-y=\"77.2\" relative-x=\"77.2\" font-style=\"italic\" font-weight=\"bold\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 77.3 ) );
	object.setDefaultY( MxNumberTenths( 77.3 ) );
	object.setRelativeX( MxNumberTenths( 77.3 ) );
	object.setRelativeY( MxNumberTenths( 77.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<degree-type default-x=\"77.3\" relative-x=\"77.3\" font-style=\"normal\" font-weight=\"normal\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 77.4 ) );
	object.setDefaultY( MxNumberTenths( 77.4 ) );
	object.setRelativeX( MxNumberTenths( 77.4 ) );
	object.setRelativeY( MxNumberTenths( 77.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<degree-type text=\"\" relative-x=\"77.4\" font-style=\"italic\" font-weight=\"bold\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 77.5 ) );
	object.setDefaultY( MxNumberTenths( 77.5 ) );
	object.setRelativeX( MxNumberTenths( 77.5 ) );
	object.setRelativeY( MxNumberTenths( 77.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<degree-type relative-x=\"77.5\" font-style=\"normal\" font-weight=\"normal\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 77.6 ) );
	object.setDefaultY( MxNumberTenths( 77.6 ) );
	object.setRelativeX( MxNumberTenths( 77.6 ) );
	object.setRelativeY( MxNumberTenths( 77.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<degree-type text=\"\" default-x=\"77.6\" default-y=\"77.6\" relative-y=\"77.6\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" color=\"#00FFFE\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 77.7 ) );
	object.setDefaultY( MxNumberTenths( 77.7 ) );
	object.setRelativeX( MxNumberTenths( 77.7 ) );
	object.setRelativeY( MxNumberTenths( 77.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#01020100" ) );
	expected = "<degree-type default-x=\"77.7\" default-y=\"77.7\" relative-y=\"77.7\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" color=\"#01020100\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 77.8 ) );
	object.setDefaultY( MxNumberTenths( 77.8 ) );
	object.setRelativeX( MxNumberTenths( 77.8 ) );
	object.setRelativeY( MxNumberTenths( 77.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#040302" ) );
	expected = "<degree-type text=\"\" default-y=\"77.8\" relative-y=\"77.8\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" color=\"#040302\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 77.9 ) );
	object.setDefaultY( MxNumberTenths( 77.9 ) );
	object.setRelativeX( MxNumberTenths( 77.9 ) );
	object.setRelativeY( MxNumberTenths( 77.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#05060504" ) );
	expected = "<degree-type relative-y=\"77.9\" font-family=\"ABC\" color=\"#05060504\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 78 ) );
	object.setDefaultY( MxNumberTenths( 78 ) );
	object.setRelativeX( MxNumberTenths( 78 ) );
	object.setRelativeY( MxNumberTenths( 78 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#080706" ) );
	expected = "<degree-type text=\"\" default-x=\"78\" relative-x=\"78\" relative-y=\"78\" font-family=\"DEF\" font-size=\"1.1\" color=\"#080706\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 78.1 ) );
	object.setDefaultY( MxNumberTenths( 78.1 ) );
	object.setRelativeX( MxNumberTenths( 78.1 ) );
	object.setRelativeY( MxNumberTenths( 78.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#090A0908" ) );
	expected = "<degree-type default-x=\"78.1\" relative-x=\"78.1\" font-family=\"XYZ\" font-size=\"large\" color=\"#090A0908\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 78.2 ) );
	object.setDefaultY( MxNumberTenths( 78.2 ) );
	object.setRelativeX( MxNumberTenths( 78.2 ) );
	object.setRelativeY( MxNumberTenths( 78.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	expected = "<degree-type text=\"\" default-y=\"78.2\" relative-x=\"78.2\" font-size=\"1.1\" color=\"#0C0B0A\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 78.3 ) );
	object.setDefaultY( MxNumberTenths( 78.3 ) );
	object.setRelativeX( MxNumberTenths( 78.3 ) );
	object.setRelativeY( MxNumberTenths( 78.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	expected = "<degree-type default-y=\"78.3\" relative-x=\"78.3\" font-size=\"large\" color=\"#0D0E0D0C\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 78.4 ) );
	object.setDefaultY( MxNumberTenths( 78.4 ) );
	object.setRelativeX( MxNumberTenths( 78.4 ) );
	object.setRelativeY( MxNumberTenths( 78.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#100F0E" ) );
	expected = "<degree-type text=\"\" default-x=\"78.4\" default-y=\"78.4\" font-size=\"1.1\" color=\"#100F0E\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 78.5 ) );
	object.setDefaultY( MxNumberTenths( 78.5 ) );
	object.setRelativeX( MxNumberTenths( 78.5 ) );
	object.setRelativeY( MxNumberTenths( 78.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#11121110" ) );
	expected = "<degree-type default-x=\"78.5\" font-size=\"large\" color=\"#11121110\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 78.6 ) );
	object.setDefaultY( MxNumberTenths( 78.6 ) );
	object.setRelativeX( MxNumberTenths( 78.6 ) );
	object.setRelativeY( MxNumberTenths( 78.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#141312" ) );
	expected = "<degree-type text=\"\" relative-y=\"78.6\" font-style=\"italic\" font-size=\"1.1\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 78.7 ) );
	object.setDefaultY( MxNumberTenths( 78.7 ) );
	object.setRelativeX( MxNumberTenths( 78.7 ) );
	object.setRelativeY( MxNumberTenths( 78.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#15161514" ) );
	expected = "<degree-type relative-y=\"78.7\" font-style=\"normal\" font-size=\"large\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 78.8 ) );
	object.setDefaultY( MxNumberTenths( 78.8 ) );
	object.setRelativeX( MxNumberTenths( 78.8 ) );
	object.setRelativeY( MxNumberTenths( 78.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
	expected = "<degree-type text=\"\" default-x=\"78.8\" default-y=\"78.8\" relative-x=\"78.8\" relative-y=\"78.8\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 78.9 ) );
	object.setDefaultY( MxNumberTenths( 78.9 ) );
	object.setRelativeX( MxNumberTenths( 78.9 ) );
	object.setRelativeY( MxNumberTenths( 78.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<degree-type default-x=\"78.9\" default-y=\"78.9\" relative-x=\"78.9\" relative-y=\"78.9\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 79 ) );
	object.setDefaultY( MxNumberTenths( 79 ) );
	object.setRelativeX( MxNumberTenths( 79 ) );
	object.setRelativeY( MxNumberTenths( 79 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<degree-type text=\"\" default-y=\"79\" relative-x=\"79\" relative-y=\"79\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 79.1 ) );
	object.setDefaultY( MxNumberTenths( 79.1 ) );
	object.setRelativeX( MxNumberTenths( 79.1 ) );
	object.setRelativeY( MxNumberTenths( 79.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<degree-type relative-x=\"79.1\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 79.2 ) );
	object.setDefaultY( MxNumberTenths( 79.2 ) );
	object.setRelativeX( MxNumberTenths( 79.2 ) );
	object.setRelativeY( MxNumberTenths( 79.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<degree-type text=\"\" default-x=\"79.2\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 79.3 ) );
	object.setDefaultY( MxNumberTenths( 79.3 ) );
	object.setRelativeX( MxNumberTenths( 79.3 ) );
	object.setRelativeY( MxNumberTenths( 79.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<degree-type default-x=\"79.3\" font-family=\"XYZ\" font-weight=\"normal\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 79.4 ) );
	object.setDefaultY( MxNumberTenths( 79.4 ) );
	object.setRelativeX( MxNumberTenths( 79.4 ) );
	object.setRelativeY( MxNumberTenths( 79.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<degree-type text=\"\" default-y=\"79.4\" font-weight=\"bold\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 79.5 ) );
	object.setDefaultY( MxNumberTenths( 79.5 ) );
	object.setRelativeX( MxNumberTenths( 79.5 ) );
	object.setRelativeY( MxNumberTenths( 79.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<degree-type default-y=\"79.5\" font-weight=\"normal\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 79.6 ) );
	object.setDefaultY( MxNumberTenths( 79.6 ) );
	object.setRelativeX( MxNumberTenths( 79.6 ) );
	object.setRelativeY( MxNumberTenths( 79.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<degree-type text=\"\" default-x=\"79.6\" default-y=\"79.6\" relative-x=\"79.6\" relative-y=\"79.6\" font-size=\"1.1\" font-weight=\"bold\" color=\"#282726\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 79.7 ) );
	object.setDefaultY( MxNumberTenths( 79.7 ) );
	object.setRelativeX( MxNumberTenths( 79.7 ) );
	object.setRelativeY( MxNumberTenths( 79.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<degree-type default-x=\"79.7\" relative-x=\"79.7\" relative-y=\"79.7\" font-size=\"large\" color=\"#292A2928\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 79.8 ) );
	object.setDefaultY( MxNumberTenths( 79.8 ) );
	object.setRelativeX( MxNumberTenths( 79.8 ) );
	object.setRelativeY( MxNumberTenths( 79.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<degree-type text=\"\" relative-x=\"79.8\" relative-y=\"79.8\" font-size=\"1.1\" color=\"#2C2B2A\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 79.9 ) );
	object.setDefaultY( MxNumberTenths( 79.9 ) );
	object.setRelativeX( MxNumberTenths( 79.9 ) );
	object.setRelativeY( MxNumberTenths( 79.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<degree-type relative-x=\"79.9\" relative-y=\"79.9\" font-size=\"large\" color=\"#2D2E2D2C\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 80 ) );
	object.setDefaultY( MxNumberTenths( 80 ) );
	object.setRelativeX( MxNumberTenths( 80 ) );
	object.setRelativeY( MxNumberTenths( 80 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<degree-type text=\"\" default-x=\"80\" default-y=\"80\" relative-y=\"80\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#302F2E\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 80.1 ) );
	object.setDefaultY( MxNumberTenths( 80.1 ) );
	object.setRelativeX( MxNumberTenths( 80.1 ) );
	object.setRelativeY( MxNumberTenths( 80.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<degree-type default-x=\"80.1\" default-y=\"80.1\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#31323130\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 80.2 ) );
	object.setDefaultY( MxNumberTenths( 80.2 ) );
	object.setRelativeX( MxNumberTenths( 80.2 ) );
	object.setRelativeY( MxNumberTenths( 80.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<degree-type text=\"\" default-y=\"80.2\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#343332\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 80.3 ) );
	object.setDefaultY( MxNumberTenths( 80.3 ) );
	object.setRelativeX( MxNumberTenths( 80.3 ) );
	object.setRelativeY( MxNumberTenths( 80.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<degree-type font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#35363534\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 80.4 ) );
	object.setDefaultY( MxNumberTenths( 80.4 ) );
	object.setRelativeX( MxNumberTenths( 80.4 ) );
	object.setRelativeY( MxNumberTenths( 80.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<degree-type text=\"\" default-x=\"80.4\" relative-x=\"80.4\" font-family=\"DEF\" font-style=\"italic\" color=\"#383736\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 80.5 ) );
	object.setDefaultY( MxNumberTenths( 80.5 ) );
	object.setRelativeX( MxNumberTenths( 80.5 ) );
	object.setRelativeY( MxNumberTenths( 80.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<degree-type default-x=\"80.5\" relative-x=\"80.5\" font-family=\"XYZ\" font-style=\"normal\" color=\"#393A3938\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 80.6 ) );
	object.setDefaultY( MxNumberTenths( 80.6 ) );
	object.setRelativeX( MxNumberTenths( 80.6 ) );
	object.setRelativeY( MxNumberTenths( 80.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<degree-type text=\"\" default-y=\"80.6\" relative-x=\"80.6\" relative-y=\"80.6\" font-style=\"italic\" font-weight=\"bold\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 80.7 ) );
	object.setDefaultY( MxNumberTenths( 80.7 ) );
	object.setRelativeX( MxNumberTenths( 80.7 ) );
	object.setRelativeY( MxNumberTenths( 80.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<degree-type default-y=\"80.7\" relative-x=\"80.7\" relative-y=\"80.7\" font-weight=\"normal\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 80.8 ) );
	object.setDefaultY( MxNumberTenths( 80.8 ) );
	object.setRelativeX( MxNumberTenths( 80.8 ) );
	object.setRelativeY( MxNumberTenths( 80.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<degree-type text=\"\" default-x=\"80.8\" default-y=\"80.8\" relative-y=\"80.8\" font-weight=\"bold\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 80.9 ) );
	object.setDefaultY( MxNumberTenths( 80.9 ) );
	object.setRelativeX( MxNumberTenths( 80.9 ) );
	object.setRelativeY( MxNumberTenths( 80.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<degree-type default-x=\"80.9\" relative-y=\"80.9\" font-weight=\"normal\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 81 ) );
	object.setDefaultY( MxNumberTenths( 81 ) );
	object.setRelativeX( MxNumberTenths( 81 ) );
	object.setRelativeY( MxNumberTenths( 81 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<degree-type text=\"\" relative-y=\"81\" font-weight=\"bold\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 81.1 ) );
	object.setDefaultY( MxNumberTenths( 81.1 ) );
	object.setRelativeX( MxNumberTenths( 81.1 ) );
	object.setRelativeY( MxNumberTenths( 81.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<degree-type font-weight=\"normal\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 81.2 ) );
	object.setDefaultY( MxNumberTenths( 81.2 ) );
	object.setRelativeX( MxNumberTenths( 81.2 ) );
	object.setRelativeY( MxNumberTenths( 81.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<degree-type text=\"\" default-x=\"81.2\" default-y=\"81.2\" relative-x=\"81.2\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 81.3 ) );
	object.setDefaultY( MxNumberTenths( 81.3 ) );
	object.setRelativeX( MxNumberTenths( 81.3 ) );
	object.setRelativeY( MxNumberTenths( 81.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<degree-type default-x=\"81.3\" default-y=\"81.3\" relative-x=\"81.3\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 81.4 ) );
	object.setDefaultY( MxNumberTenths( 81.4 ) );
	object.setRelativeX( MxNumberTenths( 81.4 ) );
	object.setRelativeY( MxNumberTenths( 81.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<degree-type text=\"\" default-y=\"81.4\" relative-x=\"81.4\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 81.5 ) );
	object.setDefaultY( MxNumberTenths( 81.5 ) );
	object.setRelativeX( MxNumberTenths( 81.5 ) );
	object.setRelativeY( MxNumberTenths( 81.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<degree-type relative-x=\"81.5\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\">alter</degree-type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEsDegreeType )
{
	MxEsDegreeType object( lexicon::enums::DegreeTypeValue::alter );
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
	object.setDefaultX( MxNumberTenths( 81.6 ) );
	object.setDefaultY( MxNumberTenths( 81.6 ) );
	object.setRelativeX( MxNumberTenths( 81.6 ) );
	object.setRelativeY( MxNumberTenths( 81.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<degree-type>alter</degree-type>";
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


