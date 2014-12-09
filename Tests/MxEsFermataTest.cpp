/** *******************************************************
  * 
  * MxEsFermataTest.cpp
  * Created: 2014-12-05 20:57:50
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsFermata.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsFermata )
{
	MxEsFermata object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsFermata )
{
	MxEsFermata object;
	std::string expected = ( MxEnumUprightInverted(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsFermata )
{
	MxEsFermata object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsFermata )
{
	MxEsFermata object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsFermata )
{
	MxEsFermata object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEsFermata )
{
	MxEsFermata object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEsFermata )
{
	MxEsFermata object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEsFermata )
{
	MxEsFermata object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEsFermata )
{
	MxEsFermata object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEsFermata )
{
	MxEsFermata object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEsFermata )
{
	MxEsFermata object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsFermata )
{
	MxEsFermata object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsFermata )
{
	MxEsFermata object;
	int expected = 2;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::normal );
	std::string expected;
	std::string actual;
	expected = "normal";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumFermataShape( lexicon::enums::FermataShape::angled ) );
	expected = "angled";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	expected = "square";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumFermataShape( lexicon::enums::FermataShape::empty ) );
	expected = "";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::normal );
	std::string expected;
	std::string actual;
	expected = "normal";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumFermataShape( lexicon::enums::FermataShape::angled ) );
	expected = "angled";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	expected = "square";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumFermataShape( lexicon::enums::FermataShape::empty ) );
	expected = "";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::normal );
	std::string expected;
	std::string actual;
	expected = "normal";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumFermataShape( lexicon::enums::FermataShape::angled ) );
	expected = "angled";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEsFermata )
{
	MxEsFermata object;
	std::string expected = "MxEsFermata";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsFermata )
{
	MxEsFermata object;
	std::string expected = "fermata";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsFermata )
{
	MxEsFermata object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxEsFermata )
{
	MxEnumUprightInverted value1( lexicon::enums::UprightInverted::inverted );
	MxEnumUprightInverted value2( lexicon::enums::UprightInverted::upright );
	CHECK( ( value1 != value2 ) )
	MxEsFermata object;
	object.setType( value1 );
	MxEnumUprightInverted expected = value1;
	MxEnumUprightInverted actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX1, MxEsFermata )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsFermata object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY2, MxEsFermata )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsFermata object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX3, MxEsFermata )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsFermata object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY4, MxEsFermata )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsFermata object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily5, MxEsFermata )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEsFermata object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle6, MxEsFermata )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEsFermata object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize7, MxEsFermata )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEsFermata object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight8, MxEsFermata )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEsFermata object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor9, MxEsFermata )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsFermata object;
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

TEST( getIsTypeRequired0, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired1, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired2, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired3, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired4, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired5, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired6, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired7, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired8, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired9, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTypePresent( true );
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTypePresent( false );
	expected = false;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXPresent1, MxEsFermata )
{
	MxEsFermata object;
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
TEST( getIsDefaultYPresent2, MxEsFermata )
{
	MxEsFermata object;
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
TEST( getIsRelativeXPresent3, MxEsFermata )
{
	MxEsFermata object;
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
TEST( getIsRelativeYPresent4, MxEsFermata )
{
	MxEsFermata object;
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
TEST( getIsFontFamilyPresent5, MxEsFermata )
{
	MxEsFermata object;
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
TEST( getIsFontStylePresent6, MxEsFermata )
{
	MxEsFermata object;
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
TEST( getIsFontSizePresent7, MxEsFermata )
{
	MxEsFermata object;
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
TEST( getIsFontWeightPresent8, MxEsFermata )
{
	MxEsFermata object;
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
TEST( getIsColorPresent9, MxEsFermata )
{
	MxEsFermata object;
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

TEST( getIsTypeDefaultDefined, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsFermata )
{
	MxEsFermata object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxEsFermata )
{
	MxEsFermata object;
	MxEnumUprightInverted expected;
	MxEnumUprightInverted actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEsFermata )
{
	MxEsFermata object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEsFermata )
{
	MxEsFermata object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEsFermata )
{
	MxEsFermata object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEsFermata )
{
	MxEsFermata object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEsFermata )
{
	MxEsFermata object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEsFermata )
{
	MxEsFermata object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEsFermata )
{
	MxEsFermata object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEsFermata )
{
	MxEsFermata object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsFermata )
{
	MxEsFermata object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 11 ) );
	object.setDefaultY( MxNumberTenths( 11 ) );
	object.setRelativeX( MxNumberTenths( 11 ) );
	object.setRelativeY( MxNumberTenths( 11 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	expected = "<fermata type=\"upright\" default-x=\"11\" default-y=\"11\" relative-x=\"11\" relative-y=\"11\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#CCCBCA\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 11.1 ) );
	object.setDefaultY( MxNumberTenths( 11.1 ) );
	object.setRelativeX( MxNumberTenths( 11.1 ) );
	object.setRelativeY( MxNumberTenths( 11.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<fermata default-x=\"11.1\" default-y=\"11.1\" relative-x=\"11.1\" relative-y=\"11.1\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#CDCECDCC\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 11.2 ) );
	object.setDefaultY( MxNumberTenths( 11.2 ) );
	object.setRelativeX( MxNumberTenths( 11.2 ) );
	object.setRelativeY( MxNumberTenths( 11.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<fermata type=\"upright\" default-y=\"11.2\" relative-x=\"11.2\" relative-y=\"11.2\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#D0CFCE\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 11.3 ) );
	object.setDefaultY( MxNumberTenths( 11.3 ) );
	object.setRelativeX( MxNumberTenths( 11.3 ) );
	object.setRelativeY( MxNumberTenths( 11.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<fermata relative-x=\"11.3\" relative-y=\"11.3\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#D1D2D1D0\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 11.4 ) );
	object.setDefaultY( MxNumberTenths( 11.4 ) );
	object.setRelativeX( MxNumberTenths( 11.4 ) );
	object.setRelativeY( MxNumberTenths( 11.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<fermata type=\"upright\" default-x=\"11.4\" relative-y=\"11.4\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#D4D3D2\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 11.5 ) );
	object.setDefaultY( MxNumberTenths( 11.5 ) );
	object.setRelativeX( MxNumberTenths( 11.5 ) );
	object.setRelativeY( MxNumberTenths( 11.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<fermata default-x=\"11.5\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#D5D6D5D4\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 11.6 ) );
	object.setDefaultY( MxNumberTenths( 11.6 ) );
	object.setRelativeX( MxNumberTenths( 11.6 ) );
	object.setRelativeY( MxNumberTenths( 11.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<fermata type=\"upright\" default-y=\"11.6\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#D8D7D6\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 11.7 ) );
	object.setDefaultY( MxNumberTenths( 11.7 ) );
	object.setRelativeX( MxNumberTenths( 11.7 ) );
	object.setRelativeY( MxNumberTenths( 11.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<fermata default-y=\"11.7\" font-size=\"large\" font-weight=\"normal\" color=\"#D9DAD9D8\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 11.8 ) );
	object.setDefaultY( MxNumberTenths( 11.8 ) );
	object.setRelativeX( MxNumberTenths( 11.8 ) );
	object.setRelativeY( MxNumberTenths( 11.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<fermata type=\"upright\" default-x=\"11.8\" default-y=\"11.8\" relative-x=\"11.8\" font-weight=\"bold\" color=\"#DCDBDA\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 11.9 ) );
	object.setDefaultY( MxNumberTenths( 11.9 ) );
	object.setRelativeX( MxNumberTenths( 11.9 ) );
	object.setRelativeY( MxNumberTenths( 11.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<fermata default-x=\"11.9\" relative-x=\"11.9\" color=\"#DDDEDDDC\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 12 ) );
	object.setDefaultY( MxNumberTenths( 12 ) );
	object.setRelativeX( MxNumberTenths( 12 ) );
	object.setRelativeY( MxNumberTenths( 12 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<fermata type=\"upright\" relative-x=\"12\" relative-y=\"12\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 12.1 ) );
	object.setDefaultY( MxNumberTenths( 12.1 ) );
	object.setRelativeX( MxNumberTenths( 12.1 ) );
	object.setRelativeY( MxNumberTenths( 12.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<fermata relative-x=\"12.1\" relative-y=\"12.1\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 12.2 ) );
	object.setDefaultY( MxNumberTenths( 12.2 ) );
	object.setRelativeX( MxNumberTenths( 12.2 ) );
	object.setRelativeY( MxNumberTenths( 12.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<fermata type=\"upright\" default-x=\"12.2\" default-y=\"12.2\" relative-y=\"12.2\" font-family=\"ABC\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 12.3 ) );
	object.setDefaultY( MxNumberTenths( 12.3 ) );
	object.setRelativeX( MxNumberTenths( 12.3 ) );
	object.setRelativeY( MxNumberTenths( 12.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	expected = "<fermata default-x=\"12.3\" default-y=\"12.3\" relative-y=\"12.3\" font-family=\"DEF\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 12.4 ) );
	object.setDefaultY( MxNumberTenths( 12.4 ) );
	object.setRelativeX( MxNumberTenths( 12.4 ) );
	object.setRelativeY( MxNumberTenths( 12.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	expected = "<fermata type=\"upright\" default-y=\"12.4\" relative-y=\"12.4\" font-family=\"XYZ\" font-style=\"italic\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 12.5 ) );
	object.setDefaultY( MxNumberTenths( 12.5 ) );
	object.setRelativeX( MxNumberTenths( 12.5 ) );
	object.setRelativeY( MxNumberTenths( 12.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	expected = "<fermata font-family=\"ABC\" font-style=\"normal\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 12.6 ) );
	object.setDefaultY( MxNumberTenths( 12.6 ) );
	object.setRelativeX( MxNumberTenths( 12.6 ) );
	object.setRelativeY( MxNumberTenths( 12.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	expected = "<fermata type=\"upright\" default-x=\"12.6\" relative-x=\"12.6\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 12.7 ) );
	object.setDefaultY( MxNumberTenths( 12.7 ) );
	object.setRelativeX( MxNumberTenths( 12.7 ) );
	object.setRelativeY( MxNumberTenths( 12.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	expected = "<fermata default-x=\"12.7\" relative-x=\"12.7\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 12.8 ) );
	object.setDefaultY( MxNumberTenths( 12.8 ) );
	object.setRelativeX( MxNumberTenths( 12.8 ) );
	object.setRelativeY( MxNumberTenths( 12.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	expected = "<fermata type=\"upright\" default-y=\"12.8\" relative-x=\"12.8\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 12.9 ) );
	object.setDefaultY( MxNumberTenths( 12.9 ) );
	object.setRelativeX( MxNumberTenths( 12.9 ) );
	object.setRelativeY( MxNumberTenths( 12.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	expected = "<fermata default-y=\"12.9\" relative-x=\"12.9\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 13 ) );
	object.setDefaultY( MxNumberTenths( 13 ) );
	object.setRelativeX( MxNumberTenths( 13 ) );
	object.setRelativeY( MxNumberTenths( 13 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	expected = "<fermata type=\"upright\" default-x=\"13\" default-y=\"13\" relative-y=\"13\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F4F3F2\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 13.1 ) );
	object.setDefaultY( MxNumberTenths( 13.1 ) );
	object.setRelativeX( MxNumberTenths( 13.1 ) );
	object.setRelativeY( MxNumberTenths( 13.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<fermata default-x=\"13.1\" relative-y=\"13.1\" font-size=\"large\" font-weight=\"normal\" color=\"#F5F6F5F4\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 13.2 ) );
	object.setDefaultY( MxNumberTenths( 13.2 ) );
	object.setRelativeX( MxNumberTenths( 13.2 ) );
	object.setRelativeY( MxNumberTenths( 13.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	expected = "<fermata type=\"upright\" relative-y=\"13.2\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F8F7F6\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 13.3 ) );
	object.setDefaultY( MxNumberTenths( 13.3 ) );
	object.setRelativeX( MxNumberTenths( 13.3 ) );
	object.setRelativeY( MxNumberTenths( 13.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<fermata relative-y=\"13.3\" font-size=\"large\" font-weight=\"normal\" color=\"#F9FAF9F8\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 13.4 ) );
	object.setDefaultY( MxNumberTenths( 13.4 ) );
	object.setRelativeX( MxNumberTenths( 13.4 ) );
	object.setRelativeY( MxNumberTenths( 13.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<fermata type=\"upright\" default-x=\"13.4\" default-y=\"13.4\" relative-x=\"13.4\" relative-y=\"13.4\" font-family=\"ABC\" font-weight=\"bold\" color=\"#FCFBFA\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 13.5 ) );
	object.setDefaultY( MxNumberTenths( 13.5 ) );
	object.setRelativeX( MxNumberTenths( 13.5 ) );
	object.setRelativeY( MxNumberTenths( 13.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<fermata default-x=\"13.5\" default-y=\"13.5\" relative-x=\"13.5\" font-family=\"DEF\" font-weight=\"normal\" color=\"#FDFEFDFC\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 13.6 ) );
	object.setDefaultY( MxNumberTenths( 13.6 ) );
	object.setRelativeX( MxNumberTenths( 13.6 ) );
	object.setRelativeY( MxNumberTenths( 13.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<fermata type=\"upright\" default-y=\"13.6\" relative-x=\"13.6\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#00FFFE\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 13.7 ) );
	object.setDefaultY( MxNumberTenths( 13.7 ) );
	object.setRelativeX( MxNumberTenths( 13.7 ) );
	object.setRelativeY( MxNumberTenths( 13.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#01020100" ) );
	expected = "<fermata relative-x=\"13.7\" font-family=\"ABC\" color=\"#01020100\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 13.8 ) );
	object.setDefaultY( MxNumberTenths( 13.8 ) );
	object.setRelativeX( MxNumberTenths( 13.8 ) );
	object.setRelativeY( MxNumberTenths( 13.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#040302" ) );
	expected = "<fermata type=\"upright\" default-x=\"13.8\" font-family=\"DEF\" font-style=\"italic\" color=\"#040302\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 13.9 ) );
	object.setDefaultY( MxNumberTenths( 13.9 ) );
	object.setRelativeX( MxNumberTenths( 13.9 ) );
	object.setRelativeY( MxNumberTenths( 13.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#05060504" ) );
	expected = "<fermata default-x=\"13.9\" font-family=\"XYZ\" font-style=\"normal\" color=\"#05060504\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 14 ) );
	object.setDefaultY( MxNumberTenths( 14 ) );
	object.setRelativeX( MxNumberTenths( 14 ) );
	object.setRelativeY( MxNumberTenths( 14 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#080706" ) );
	expected = "<fermata type=\"upright\" default-y=\"14\" relative-y=\"14\" font-style=\"italic\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 14.1 ) );
	object.setDefaultY( MxNumberTenths( 14.1 ) );
	object.setRelativeX( MxNumberTenths( 14.1 ) );
	object.setRelativeY( MxNumberTenths( 14.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#090A0908" ) );
	expected = "<fermata default-y=\"14.1\" relative-y=\"14.1\" font-style=\"normal\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 14.2 ) );
	object.setDefaultY( MxNumberTenths( 14.2 ) );
	object.setRelativeX( MxNumberTenths( 14.2 ) );
	object.setRelativeY( MxNumberTenths( 14.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	expected = "<fermata type=\"upright\" default-x=\"14.2\" default-y=\"14.2\" relative-x=\"14.2\" relative-y=\"14.2\" font-style=\"italic\" font-size=\"1.1\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 14.3 ) );
	object.setDefaultY( MxNumberTenths( 14.3 ) );
	object.setRelativeX( MxNumberTenths( 14.3 ) );
	object.setRelativeY( MxNumberTenths( 14.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	expected = "<fermata default-x=\"14.3\" relative-x=\"14.3\" relative-y=\"14.3\" font-style=\"normal\" font-size=\"large\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 14.4 ) );
	object.setDefaultY( MxNumberTenths( 14.4 ) );
	object.setRelativeX( MxNumberTenths( 14.4 ) );
	object.setRelativeY( MxNumberTenths( 14.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#100F0E" ) );
	expected = "<fermata type=\"upright\" relative-x=\"14.4\" relative-y=\"14.4\" font-style=\"italic\" font-size=\"1.1\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 14.5 ) );
	object.setDefaultY( MxNumberTenths( 14.5 ) );
	object.setRelativeX( MxNumberTenths( 14.5 ) );
	object.setRelativeY( MxNumberTenths( 14.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#11121110" ) );
	expected = "<fermata relative-x=\"14.5\" font-size=\"large\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 14.6 ) );
	object.setDefaultY( MxNumberTenths( 14.6 ) );
	object.setRelativeX( MxNumberTenths( 14.6 ) );
	object.setRelativeY( MxNumberTenths( 14.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#141312" ) );
	expected = "<fermata type=\"upright\" default-x=\"14.6\" default-y=\"14.6\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 14.7 ) );
	object.setDefaultY( MxNumberTenths( 14.7 ) );
	object.setRelativeX( MxNumberTenths( 14.7 ) );
	object.setRelativeY( MxNumberTenths( 14.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#15161514" ) );
	expected = "<fermata default-x=\"14.7\" default-y=\"14.7\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 14.8 ) );
	object.setDefaultY( MxNumberTenths( 14.8 ) );
	object.setRelativeX( MxNumberTenths( 14.8 ) );
	object.setRelativeY( MxNumberTenths( 14.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
	expected = "<fermata type=\"upright\" default-y=\"14.8\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 14.9 ) );
	object.setDefaultY( MxNumberTenths( 14.9 ) );
	object.setRelativeX( MxNumberTenths( 14.9 ) );
	object.setRelativeY( MxNumberTenths( 14.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<fermata font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 15 ) );
	object.setDefaultY( MxNumberTenths( 15 ) );
	object.setRelativeX( MxNumberTenths( 15 ) );
	object.setRelativeY( MxNumberTenths( 15 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<fermata type=\"upright\" default-x=\"15\" relative-x=\"15\" relative-y=\"15\" font-family=\"DEF\" font-weight=\"bold\" color=\"#1C1B1A\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 15.1 ) );
	object.setDefaultY( MxNumberTenths( 15.1 ) );
	object.setRelativeX( MxNumberTenths( 15.1 ) );
	object.setRelativeY( MxNumberTenths( 15.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<fermata default-x=\"15.1\" relative-x=\"15.1\" relative-y=\"15.1\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#1D1E1D1C\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 15.2 ) );
	object.setDefaultY( MxNumberTenths( 15.2 ) );
	object.setRelativeX( MxNumberTenths( 15.2 ) );
	object.setRelativeY( MxNumberTenths( 15.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<fermata type=\"upright\" default-y=\"15.2\" relative-x=\"15.2\" relative-y=\"15.2\" font-style=\"italic\" font-weight=\"bold\" color=\"#201F1E\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 15.3 ) );
	object.setDefaultY( MxNumberTenths( 15.3 ) );
	object.setRelativeX( MxNumberTenths( 15.3 ) );
	object.setRelativeY( MxNumberTenths( 15.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<fermata default-y=\"15.3\" relative-x=\"15.3\" relative-y=\"15.3\" font-style=\"normal\" font-weight=\"normal\" color=\"#21222120\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 15.4 ) );
	object.setDefaultY( MxNumberTenths( 15.4 ) );
	object.setRelativeX( MxNumberTenths( 15.4 ) );
	object.setRelativeY( MxNumberTenths( 15.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<fermata type=\"upright\" default-x=\"15.4\" default-y=\"15.4\" relative-y=\"15.4\" font-style=\"italic\" font-weight=\"bold\" color=\"#242322\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 15.5 ) );
	object.setDefaultY( MxNumberTenths( 15.5 ) );
	object.setRelativeX( MxNumberTenths( 15.5 ) );
	object.setRelativeY( MxNumberTenths( 15.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<fermata default-x=\"15.5\" font-style=\"normal\" color=\"#25262524\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 15.6 ) );
	object.setDefaultY( MxNumberTenths( 15.6 ) );
	object.setRelativeX( MxNumberTenths( 15.6 ) );
	object.setRelativeY( MxNumberTenths( 15.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<fermata type=\"upright\" font-style=\"italic\" color=\"#282726\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 15.7 ) );
	object.setDefaultY( MxNumberTenths( 15.7 ) );
	object.setRelativeX( MxNumberTenths( 15.7 ) );
	object.setRelativeY( MxNumberTenths( 15.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<fermata font-style=\"normal\" color=\"#292A2928\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 15.8 ) );
	object.setDefaultY( MxNumberTenths( 15.8 ) );
	object.setRelativeX( MxNumberTenths( 15.8 ) );
	object.setRelativeY( MxNumberTenths( 15.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<fermata type=\"upright\" default-x=\"15.8\" default-y=\"15.8\" relative-x=\"15.8\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#2C2B2A\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 15.9 ) );
	object.setDefaultY( MxNumberTenths( 15.9 ) );
	object.setRelativeX( MxNumberTenths( 15.9 ) );
	object.setRelativeY( MxNumberTenths( 15.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<fermata default-x=\"15.9\" default-y=\"15.9\" relative-x=\"15.9\" font-family=\"DEF\" font-size=\"large\" color=\"#2D2E2D2C\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 16 ) );
	object.setDefaultY( MxNumberTenths( 16 ) );
	object.setRelativeX( MxNumberTenths( 16 ) );
	object.setRelativeY( MxNumberTenths( 16 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<fermata type=\"upright\" default-y=\"16\" relative-x=\"16\" relative-y=\"16\" font-family=\"XYZ\" font-size=\"1.1\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 16.1 ) );
	object.setDefaultY( MxNumberTenths( 16.1 ) );
	object.setRelativeX( MxNumberTenths( 16.1 ) );
	object.setRelativeY( MxNumberTenths( 16.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<fermata relative-x=\"16.1\" relative-y=\"16.1\" font-family=\"ABC\" font-size=\"large\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 16.2 ) );
	object.setDefaultY( MxNumberTenths( 16.2 ) );
	object.setRelativeX( MxNumberTenths( 16.2 ) );
	object.setRelativeY( MxNumberTenths( 16.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<fermata type=\"upright\" default-x=\"16.2\" relative-y=\"16.2\" font-family=\"DEF\" font-size=\"1.1\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 16.3 ) );
	object.setDefaultY( MxNumberTenths( 16.3 ) );
	object.setRelativeX( MxNumberTenths( 16.3 ) );
	object.setRelativeY( MxNumberTenths( 16.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<fermata default-x=\"16.3\" relative-y=\"16.3\" font-family=\"XYZ\" font-size=\"large\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 16.4 ) );
	object.setDefaultY( MxNumberTenths( 16.4 ) );
	object.setRelativeX( MxNumberTenths( 16.4 ) );
	object.setRelativeY( MxNumberTenths( 16.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<fermata type=\"upright\" default-y=\"16.4\" relative-y=\"16.4\" font-size=\"1.1\" font-weight=\"bold\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 16.5 ) );
	object.setDefaultY( MxNumberTenths( 16.5 ) );
	object.setRelativeX( MxNumberTenths( 16.5 ) );
	object.setRelativeY( MxNumberTenths( 16.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<fermata default-y=\"16.5\" font-size=\"large\" font-weight=\"normal\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 16.6 ) );
	object.setDefaultY( MxNumberTenths( 16.6 ) );
	object.setRelativeX( MxNumberTenths( 16.6 ) );
	object.setRelativeY( MxNumberTenths( 16.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<fermata type=\"upright\" default-x=\"16.6\" default-y=\"16.6\" relative-x=\"16.6\" font-style=\"italic\" font-weight=\"bold\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 16.7 ) );
	object.setDefaultY( MxNumberTenths( 16.7 ) );
	object.setRelativeX( MxNumberTenths( 16.7 ) );
	object.setRelativeY( MxNumberTenths( 16.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<fermata default-x=\"16.7\" relative-x=\"16.7\" font-style=\"normal\" font-weight=\"normal\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 16.8 ) );
	object.setDefaultY( MxNumberTenths( 16.8 ) );
	object.setRelativeX( MxNumberTenths( 16.8 ) );
	object.setRelativeY( MxNumberTenths( 16.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<fermata type=\"upright\" relative-x=\"16.8\" font-style=\"italic\" font-weight=\"bold\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 16.9 ) );
	object.setDefaultY( MxNumberTenths( 16.9 ) );
	object.setRelativeX( MxNumberTenths( 16.9 ) );
	object.setRelativeY( MxNumberTenths( 16.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<fermata relative-x=\"16.9\" font-style=\"normal\" font-weight=\"normal\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 17 ) );
	object.setDefaultY( MxNumberTenths( 17 ) );
	object.setRelativeX( MxNumberTenths( 17 ) );
	object.setRelativeY( MxNumberTenths( 17 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<fermata type=\"upright\" default-x=\"17\" default-y=\"17\" relative-y=\"17\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" color=\"#444342\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 17.1 ) );
	object.setDefaultY( MxNumberTenths( 17.1 ) );
	object.setRelativeX( MxNumberTenths( 17.1 ) );
	object.setRelativeY( MxNumberTenths( 17.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<fermata default-x=\"17.1\" default-y=\"17.1\" relative-y=\"17.1\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" color=\"#45464544\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 17.2 ) );
	object.setDefaultY( MxNumberTenths( 17.2 ) );
	object.setRelativeX( MxNumberTenths( 17.2 ) );
	object.setRelativeY( MxNumberTenths( 17.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<fermata type=\"upright\" default-y=\"17.2\" relative-y=\"17.2\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" color=\"#484746\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 17.3 ) );
	object.setDefaultY( MxNumberTenths( 17.3 ) );
	object.setRelativeX( MxNumberTenths( 17.3 ) );
	object.setRelativeY( MxNumberTenths( 17.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<fermata relative-y=\"17.3\" font-family=\"ABC\" color=\"#494A4948\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 17.4 ) );
	object.setDefaultY( MxNumberTenths( 17.4 ) );
	object.setRelativeX( MxNumberTenths( 17.4 ) );
	object.setRelativeY( MxNumberTenths( 17.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<fermata type=\"upright\" default-x=\"17.4\" relative-x=\"17.4\" relative-y=\"17.4\" font-family=\"DEF\" font-size=\"1.1\" color=\"#4C4B4A\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 17.5 ) );
	object.setDefaultY( MxNumberTenths( 17.5 ) );
	object.setRelativeX( MxNumberTenths( 17.5 ) );
	object.setRelativeY( MxNumberTenths( 17.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<fermata default-x=\"17.5\" relative-x=\"17.5\" font-family=\"XYZ\" font-size=\"large\" color=\"#4D4E4D4C\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 17.6 ) );
	object.setDefaultY( MxNumberTenths( 17.6 ) );
	object.setRelativeX( MxNumberTenths( 17.6 ) );
	object.setRelativeY( MxNumberTenths( 17.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<fermata type=\"upright\" default-y=\"17.6\" relative-x=\"17.6\" font-size=\"1.1\" color=\"#504F4E\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 17.7 ) );
	object.setDefaultY( MxNumberTenths( 17.7 ) );
	object.setRelativeX( MxNumberTenths( 17.7 ) );
	object.setRelativeY( MxNumberTenths( 17.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<fermata default-y=\"17.7\" relative-x=\"17.7\" font-size=\"large\" color=\"#51525150\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 17.8 ) );
	object.setDefaultY( MxNumberTenths( 17.8 ) );
	object.setRelativeX( MxNumberTenths( 17.8 ) );
	object.setRelativeY( MxNumberTenths( 17.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<fermata type=\"upright\" default-x=\"17.8\" default-y=\"17.8\" font-size=\"1.1\" color=\"#545352\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 17.9 ) );
	object.setDefaultY( MxNumberTenths( 17.9 ) );
	object.setRelativeX( MxNumberTenths( 17.9 ) );
	object.setRelativeY( MxNumberTenths( 17.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#55565554" ) );
	expected = "<fermata default-x=\"17.9\" font-size=\"large\" color=\"#55565554\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 18 ) );
	object.setDefaultY( MxNumberTenths( 18 ) );
	object.setRelativeX( MxNumberTenths( 18 ) );
	object.setRelativeY( MxNumberTenths( 18 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#585756" ) );
	expected = "<fermata type=\"upright\" relative-y=\"18\" font-style=\"italic\" font-size=\"1.1\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 18.1 ) );
	object.setDefaultY( MxNumberTenths( 18.1 ) );
	object.setRelativeX( MxNumberTenths( 18.1 ) );
	object.setRelativeY( MxNumberTenths( 18.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
	expected = "<fermata relative-y=\"18.1\" font-style=\"normal\" font-size=\"large\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 18.2 ) );
	object.setDefaultY( MxNumberTenths( 18.2 ) );
	object.setRelativeX( MxNumberTenths( 18.2 ) );
	object.setRelativeY( MxNumberTenths( 18.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	expected = "<fermata type=\"upright\" default-x=\"18.2\" default-y=\"18.2\" relative-x=\"18.2\" relative-y=\"18.2\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 18.3 ) );
	object.setDefaultY( MxNumberTenths( 18.3 ) );
	object.setRelativeX( MxNumberTenths( 18.3 ) );
	object.setRelativeY( MxNumberTenths( 18.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	expected = "<fermata default-x=\"18.3\" default-y=\"18.3\" relative-x=\"18.3\" relative-y=\"18.3\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 18.4 ) );
	object.setDefaultY( MxNumberTenths( 18.4 ) );
	object.setRelativeX( MxNumberTenths( 18.4 ) );
	object.setRelativeY( MxNumberTenths( 18.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
	expected = "<fermata type=\"upright\" default-y=\"18.4\" relative-x=\"18.4\" relative-y=\"18.4\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 18.5 ) );
	object.setDefaultY( MxNumberTenths( 18.5 ) );
	object.setRelativeX( MxNumberTenths( 18.5 ) );
	object.setRelativeY( MxNumberTenths( 18.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<fermata relative-x=\"18.5\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 18.6 ) );
	object.setDefaultY( MxNumberTenths( 18.6 ) );
	object.setRelativeX( MxNumberTenths( 18.6 ) );
	object.setRelativeY( MxNumberTenths( 18.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<fermata type=\"upright\" default-x=\"18.6\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 18.7 ) );
	object.setDefaultY( MxNumberTenths( 18.7 ) );
	object.setRelativeX( MxNumberTenths( 18.7 ) );
	object.setRelativeY( MxNumberTenths( 18.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<fermata default-x=\"18.7\" font-family=\"XYZ\" font-weight=\"normal\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 18.8 ) );
	object.setDefaultY( MxNumberTenths( 18.8 ) );
	object.setRelativeX( MxNumberTenths( 18.8 ) );
	object.setRelativeY( MxNumberTenths( 18.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<fermata type=\"upright\" default-y=\"18.8\" font-weight=\"bold\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 18.9 ) );
	object.setDefaultY( MxNumberTenths( 18.9 ) );
	object.setRelativeX( MxNumberTenths( 18.9 ) );
	object.setRelativeY( MxNumberTenths( 18.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<fermata default-y=\"18.9\" font-weight=\"normal\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 19 ) );
	object.setDefaultY( MxNumberTenths( 19 ) );
	object.setRelativeX( MxNumberTenths( 19 ) );
	object.setRelativeY( MxNumberTenths( 19 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<fermata type=\"upright\" default-x=\"19\" default-y=\"19\" relative-x=\"19\" relative-y=\"19\" font-size=\"1.1\" font-weight=\"bold\" color=\"#6C6B6A\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 19.1 ) );
	object.setDefaultY( MxNumberTenths( 19.1 ) );
	object.setRelativeX( MxNumberTenths( 19.1 ) );
	object.setRelativeY( MxNumberTenths( 19.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<fermata default-x=\"19.1\" relative-x=\"19.1\" relative-y=\"19.1\" font-size=\"large\" color=\"#6D6E6D6C\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 19.2 ) );
	object.setDefaultY( MxNumberTenths( 19.2 ) );
	object.setRelativeX( MxNumberTenths( 19.2 ) );
	object.setRelativeY( MxNumberTenths( 19.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<fermata type=\"upright\" relative-x=\"19.2\" relative-y=\"19.2\" font-size=\"1.1\" color=\"#706F6E\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 19.3 ) );
	object.setDefaultY( MxNumberTenths( 19.3 ) );
	object.setRelativeX( MxNumberTenths( 19.3 ) );
	object.setRelativeY( MxNumberTenths( 19.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<fermata relative-x=\"19.3\" relative-y=\"19.3\" font-size=\"large\" color=\"#71727170\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 19.4 ) );
	object.setDefaultY( MxNumberTenths( 19.4 ) );
	object.setRelativeX( MxNumberTenths( 19.4 ) );
	object.setRelativeY( MxNumberTenths( 19.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<fermata type=\"upright\" default-x=\"19.4\" default-y=\"19.4\" relative-y=\"19.4\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#747372\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 19.5 ) );
	object.setDefaultY( MxNumberTenths( 19.5 ) );
	object.setRelativeX( MxNumberTenths( 19.5 ) );
	object.setRelativeY( MxNumberTenths( 19.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<fermata default-x=\"19.5\" default-y=\"19.5\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#75767574\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 19.6 ) );
	object.setDefaultY( MxNumberTenths( 19.6 ) );
	object.setRelativeX( MxNumberTenths( 19.6 ) );
	object.setRelativeY( MxNumberTenths( 19.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<fermata type=\"upright\" default-y=\"19.6\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#787776\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 19.7 ) );
	object.setDefaultY( MxNumberTenths( 19.7 ) );
	object.setRelativeX( MxNumberTenths( 19.7 ) );
	object.setRelativeY( MxNumberTenths( 19.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<fermata font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#797A7978\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 19.8 ) );
	object.setDefaultY( MxNumberTenths( 19.8 ) );
	object.setRelativeX( MxNumberTenths( 19.8 ) );
	object.setRelativeY( MxNumberTenths( 19.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<fermata type=\"upright\" default-x=\"19.8\" relative-x=\"19.8\" font-family=\"DEF\" font-style=\"italic\" color=\"#7C7B7A\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 19.9 ) );
	object.setDefaultY( MxNumberTenths( 19.9 ) );
	object.setRelativeX( MxNumberTenths( 19.9 ) );
	object.setRelativeY( MxNumberTenths( 19.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<fermata default-x=\"19.9\" relative-x=\"19.9\" font-family=\"XYZ\" font-style=\"normal\" color=\"#7D7E7D7C\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 20 ) );
	object.setDefaultY( MxNumberTenths( 20 ) );
	object.setRelativeX( MxNumberTenths( 20 ) );
	object.setRelativeY( MxNumberTenths( 20 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<fermata type=\"upright\" default-y=\"20\" relative-x=\"20\" relative-y=\"20\" font-style=\"italic\" font-weight=\"bold\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 20.1 ) );
	object.setDefaultY( MxNumberTenths( 20.1 ) );
	object.setRelativeX( MxNumberTenths( 20.1 ) );
	object.setRelativeY( MxNumberTenths( 20.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<fermata default-y=\"20.1\" relative-x=\"20.1\" relative-y=\"20.1\" font-weight=\"normal\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 20.2 ) );
	object.setDefaultY( MxNumberTenths( 20.2 ) );
	object.setRelativeX( MxNumberTenths( 20.2 ) );
	object.setRelativeY( MxNumberTenths( 20.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<fermata type=\"upright\" default-x=\"20.2\" default-y=\"20.2\" relative-y=\"20.2\" font-weight=\"bold\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 20.3 ) );
	object.setDefaultY( MxNumberTenths( 20.3 ) );
	object.setRelativeX( MxNumberTenths( 20.3 ) );
	object.setRelativeY( MxNumberTenths( 20.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<fermata default-x=\"20.3\" relative-y=\"20.3\" font-weight=\"normal\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 20.4 ) );
	object.setDefaultY( MxNumberTenths( 20.4 ) );
	object.setRelativeX( MxNumberTenths( 20.4 ) );
	object.setRelativeY( MxNumberTenths( 20.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<fermata type=\"upright\" relative-y=\"20.4\" font-weight=\"bold\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 20.5 ) );
	object.setDefaultY( MxNumberTenths( 20.5 ) );
	object.setRelativeX( MxNumberTenths( 20.5 ) );
	object.setRelativeY( MxNumberTenths( 20.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<fermata font-weight=\"normal\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 20.6 ) );
	object.setDefaultY( MxNumberTenths( 20.6 ) );
	object.setRelativeX( MxNumberTenths( 20.6 ) );
	object.setRelativeY( MxNumberTenths( 20.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<fermata type=\"upright\" default-x=\"20.6\" default-y=\"20.6\" relative-x=\"20.6\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 20.7 ) );
	object.setDefaultY( MxNumberTenths( 20.7 ) );
	object.setRelativeX( MxNumberTenths( 20.7 ) );
	object.setRelativeY( MxNumberTenths( 20.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<fermata default-x=\"20.7\" default-y=\"20.7\" relative-x=\"20.7\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 20.8 ) );
	object.setDefaultY( MxNumberTenths( 20.8 ) );
	object.setRelativeX( MxNumberTenths( 20.8 ) );
	object.setRelativeY( MxNumberTenths( 20.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<fermata type=\"upright\" default-y=\"20.8\" relative-x=\"20.8\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 20.9 ) );
	object.setDefaultY( MxNumberTenths( 20.9 ) );
	object.setRelativeX( MxNumberTenths( 20.9 ) );
	object.setRelativeY( MxNumberTenths( 20.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<fermata relative-x=\"20.9\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\">square</fermata>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEsFermata )
{
	MxEsFermata object( lexicon::enums::FermataShape::square );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUprightInverted( lexicon::enums::UprightInverted::upright ) );
	object.setDefaultX( MxNumberTenths( 21 ) );
	object.setDefaultY( MxNumberTenths( 21 ) );
	object.setRelativeX( MxNumberTenths( 21 ) );
	object.setRelativeY( MxNumberTenths( 21 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<fermata>square</fermata>";
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


