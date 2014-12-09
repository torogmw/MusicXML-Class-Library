/** *******************************************************
  * 
  * MxEsGroupAbbreviationTest.cpp
  * Created: 2014-12-05 20:57:58
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsGroupAbbreviation.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getJustify().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "" ) );
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
TEST( ctorValue2, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
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
TEST( ctorValue4, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "X,Y,Z" ) );
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
TEST( ctorValue6, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
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
TEST( ctorValue8, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "X,Y,Z" ) );
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

TEST( getClassName, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	std::string expected = "MxEsGroupAbbreviation";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	std::string expected = "group-abbreviation";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setDefaultX0, MxEsGroupAbbreviation )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsGroupAbbreviation object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY1, MxEsGroupAbbreviation )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsGroupAbbreviation object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX2, MxEsGroupAbbreviation )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsGroupAbbreviation object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY3, MxEsGroupAbbreviation )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsGroupAbbreviation object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily4, MxEsGroupAbbreviation )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEsGroupAbbreviation object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle5, MxEsGroupAbbreviation )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEsGroupAbbreviation object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize6, MxEsGroupAbbreviation )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEsGroupAbbreviation object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight7, MxEsGroupAbbreviation )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEsGroupAbbreviation object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor8, MxEsGroupAbbreviation )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsGroupAbbreviation object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setJustify9, MxEsGroupAbbreviation )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxEsGroupAbbreviation object;
	object.setJustify( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getJustify();
	CHECK_EQUAL( expected, actual )
	object.setJustify( value2 );
	expected = value2;
	actual = object.getJustify();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsDefaultXRequired0, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired1, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired2, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired3, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired4, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired5, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired6, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired7, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired8, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsJustifyRequired9, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsJustifyRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsDefaultXPresent0, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
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
TEST( getIsDefaultYPresent1, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
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
TEST( getIsRelativeXPresent2, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
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
TEST( getIsRelativeYPresent3, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
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
TEST( getIsFontFamilyPresent4, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
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
TEST( getIsFontStylePresent5, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
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
TEST( getIsFontSizePresent6, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
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
TEST( getIsFontWeightPresent7, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
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
TEST( getIsColorPresent8, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
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
TEST( getIsJustifyPresent9, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
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

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsDefaultXDefaultDefined, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsJustifyDefaultDefined, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	bool expected = false;
	bool actual = object.getIsJustifyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getDefaultXDefaultValue, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getJustifyDefaultValue, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getJustifyDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setDefaultX( MxNumberTenths( 354.4 ) );
	object.setDefaultY( MxNumberTenths( 354.4 ) );
	object.setRelativeX( MxNumberTenths( 354.4 ) );
	object.setRelativeY( MxNumberTenths( 354.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	expected = "<group-abbreviation default-x=\"354.4\" default-y=\"354.4\" relative-x=\"354.4\" relative-y=\"354.4\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#4D4E4D4C\" justify=\"left\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 354.5 ) );
	object.setDefaultY( MxNumberTenths( 354.5 ) );
	object.setRelativeX( MxNumberTenths( 354.5 ) );
	object.setRelativeY( MxNumberTenths( 354.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-y=\"354.5\" relative-x=\"354.5\" relative-y=\"354.5\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#504F4E\" justify=\"center\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 354.6 ) );
	object.setDefaultY( MxNumberTenths( 354.6 ) );
	object.setRelativeX( MxNumberTenths( 354.6 ) );
	object.setRelativeY( MxNumberTenths( 354.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-x=\"354.6\" relative-x=\"354.6\" relative-y=\"354.6\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#51525150\" justify=\"right\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 354.7 ) );
	object.setDefaultY( MxNumberTenths( 354.7 ) );
	object.setRelativeX( MxNumberTenths( 354.7 ) );
	object.setRelativeY( MxNumberTenths( 354.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#545352" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation relative-y=\"354.7\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#545352\" justify=\"left\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 354.8 ) );
	object.setDefaultY( MxNumberTenths( 354.8 ) );
	object.setRelativeX( MxNumberTenths( 354.8 ) );
	object.setRelativeY( MxNumberTenths( 354.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-x=\"354.8\" default-y=\"354.8\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#55565554\" justify=\"center\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 354.9 ) );
	object.setDefaultY( MxNumberTenths( 354.9 ) );
	object.setRelativeX( MxNumberTenths( 354.9 ) );
	object.setRelativeY( MxNumberTenths( 354.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#585756" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-y=\"354.9\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#585756\" justify=\"right\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 355 ) );
	object.setDefaultY( MxNumberTenths( 355 ) );
	object.setRelativeX( MxNumberTenths( 355 ) );
	object.setRelativeY( MxNumberTenths( 355 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-x=\"355\" relative-x=\"355\" font-size=\"1.1\" font-weight=\"bold\" color=\"#595A5958\" justify=\"left\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 355.1 ) );
	object.setDefaultY( MxNumberTenths( 355.1 ) );
	object.setRelativeX( MxNumberTenths( 355.1 ) );
	object.setRelativeY( MxNumberTenths( 355.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation relative-x=\"355.1\" font-weight=\"normal\" color=\"#5C5B5A\" justify=\"center\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 355.2 ) );
	object.setDefaultY( MxNumberTenths( 355.2 ) );
	object.setRelativeX( MxNumberTenths( 355.2 ) );
	object.setRelativeY( MxNumberTenths( 355.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-x=\"355.2\" default-y=\"355.2\" relative-x=\"355.2\" relative-y=\"355.2\" color=\"#5D5E5D5C\" justify=\"right\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 355.3 ) );
	object.setDefaultY( MxNumberTenths( 355.3 ) );
	object.setRelativeX( MxNumberTenths( 355.3 ) );
	object.setRelativeY( MxNumberTenths( 355.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-y=\"355.3\" relative-y=\"355.3\" justify=\"left\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 355.4 ) );
	object.setDefaultY( MxNumberTenths( 355.4 ) );
	object.setRelativeX( MxNumberTenths( 355.4 ) );
	object.setRelativeY( MxNumberTenths( 355.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-x=\"355.4\" relative-y=\"355.4\" font-family=\"XYZ\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 355.5 ) );
	object.setDefaultY( MxNumberTenths( 355.5 ) );
	object.setRelativeX( MxNumberTenths( 355.5 ) );
	object.setRelativeY( MxNumberTenths( 355.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation relative-y=\"355.5\" font-family=\"ABC\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 355.6 ) );
	object.setDefaultY( MxNumberTenths( 355.6 ) );
	object.setRelativeX( MxNumberTenths( 355.6 ) );
	object.setRelativeY( MxNumberTenths( 355.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-x=\"355.6\" default-y=\"355.6\" relative-x=\"355.6\" font-family=\"DEF\" font-style=\"italic\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 355.7 ) );
	object.setDefaultY( MxNumberTenths( 355.7 ) );
	object.setRelativeX( MxNumberTenths( 355.7 ) );
	object.setRelativeY( MxNumberTenths( 355.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-y=\"355.7\" relative-x=\"355.7\" font-family=\"XYZ\" font-style=\"normal\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 355.8 ) );
	object.setDefaultY( MxNumberTenths( 355.8 ) );
	object.setRelativeX( MxNumberTenths( 355.8 ) );
	object.setRelativeY( MxNumberTenths( 355.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-x=\"355.8\" relative-x=\"355.8\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 355.9 ) );
	object.setDefaultY( MxNumberTenths( 355.9 ) );
	object.setRelativeX( MxNumberTenths( 355.9 ) );
	object.setRelativeY( MxNumberTenths( 355.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation font-style=\"normal\" font-size=\"large\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 356 ) );
	object.setDefaultY( MxNumberTenths( 356 ) );
	object.setRelativeX( MxNumberTenths( 356 ) );
	object.setRelativeY( MxNumberTenths( 356 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-x=\"356\" default-y=\"356\" relative-y=\"356\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 356.1 ) );
	object.setDefaultY( MxNumberTenths( 356.1 ) );
	object.setRelativeX( MxNumberTenths( 356.1 ) );
	object.setRelativeY( MxNumberTenths( 356.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-y=\"356.1\" relative-y=\"356.1\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 356.2 ) );
	object.setDefaultY( MxNumberTenths( 356.2 ) );
	object.setRelativeX( MxNumberTenths( 356.2 ) );
	object.setRelativeY( MxNumberTenths( 356.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-x=\"356.2\" relative-x=\"356.2\" relative-y=\"356.2\" font-size=\"1.1\" font-weight=\"bold\" color=\"#71727170\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 356.3 ) );
	object.setDefaultY( MxNumberTenths( 356.3 ) );
	object.setRelativeX( MxNumberTenths( 356.3 ) );
	object.setRelativeY( MxNumberTenths( 356.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation relative-x=\"356.3\" relative-y=\"356.3\" font-size=\"large\" font-weight=\"normal\" color=\"#747372\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 356.4 ) );
	object.setDefaultY( MxNumberTenths( 356.4 ) );
	object.setRelativeX( MxNumberTenths( 356.4 ) );
	object.setRelativeY( MxNumberTenths( 356.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-x=\"356.4\" default-y=\"356.4\" relative-x=\"356.4\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" color=\"#75767574\" justify=\"right\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 356.5 ) );
	object.setDefaultY( MxNumberTenths( 356.5 ) );
	object.setRelativeX( MxNumberTenths( 356.5 ) );
	object.setRelativeY( MxNumberTenths( 356.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-y=\"356.5\" font-family=\"DEF\" font-weight=\"normal\" color=\"#787776\" justify=\"left\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 356.6 ) );
	object.setDefaultY( MxNumberTenths( 356.6 ) );
	object.setRelativeX( MxNumberTenths( 356.6 ) );
	object.setRelativeY( MxNumberTenths( 356.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-x=\"356.6\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#797A7978\" justify=\"center\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 356.7 ) );
	object.setDefaultY( MxNumberTenths( 356.7 ) );
	object.setRelativeX( MxNumberTenths( 356.7 ) );
	object.setRelativeY( MxNumberTenths( 356.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation font-family=\"ABC\" font-weight=\"normal\" color=\"#7C7B7A\" justify=\"right\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 356.8 ) );
	object.setDefaultY( MxNumberTenths( 356.8 ) );
	object.setRelativeX( MxNumberTenths( 356.8 ) );
	object.setRelativeY( MxNumberTenths( 356.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-x=\"356.8\" default-y=\"356.8\" relative-x=\"356.8\" relative-y=\"356.8\" font-family=\"DEF\" font-style=\"italic\" color=\"#7D7E7D7C\" justify=\"left\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 356.9 ) );
	object.setDefaultY( MxNumberTenths( 356.9 ) );
	object.setRelativeX( MxNumberTenths( 356.9 ) );
	object.setRelativeY( MxNumberTenths( 356.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-y=\"356.9\" relative-x=\"356.9\" relative-y=\"356.9\" font-style=\"normal\" color=\"#807F7E\" justify=\"center\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 357 ) );
	object.setDefaultY( MxNumberTenths( 357 ) );
	object.setRelativeX( MxNumberTenths( 357 ) );
	object.setRelativeY( MxNumberTenths( 357 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-x=\"357\" relative-x=\"357\" relative-y=\"357\" font-style=\"italic\" color=\"#81828180\" justify=\"right\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 357.1 ) );
	object.setDefaultY( MxNumberTenths( 357.1 ) );
	object.setRelativeX( MxNumberTenths( 357.1 ) );
	object.setRelativeY( MxNumberTenths( 357.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation relative-y=\"357.1\" font-style=\"normal\" justify=\"left\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 357.2 ) );
	object.setDefaultY( MxNumberTenths( 357.2 ) );
	object.setRelativeX( MxNumberTenths( 357.2 ) );
	object.setRelativeY( MxNumberTenths( 357.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-x=\"357.2\" default-y=\"357.2\" font-style=\"italic\" font-size=\"1.1\" justify=\"center\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 357.3 ) );
	object.setDefaultY( MxNumberTenths( 357.3 ) );
	object.setRelativeX( MxNumberTenths( 357.3 ) );
	object.setRelativeY( MxNumberTenths( 357.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-y=\"357.3\" font-style=\"normal\" font-size=\"large\" justify=\"right\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 357.4 ) );
	object.setDefaultY( MxNumberTenths( 357.4 ) );
	object.setRelativeX( MxNumberTenths( 357.4 ) );
	object.setRelativeY( MxNumberTenths( 357.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-x=\"357.4\" relative-x=\"357.4\" font-family=\"DEF\" font-size=\"1.1\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 357.5 ) );
	object.setDefaultY( MxNumberTenths( 357.5 ) );
	object.setRelativeX( MxNumberTenths( 357.5 ) );
	object.setRelativeY( MxNumberTenths( 357.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation relative-x=\"357.5\" font-family=\"XYZ\" font-size=\"large\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 357.6 ) );
	object.setDefaultY( MxNumberTenths( 357.6 ) );
	object.setRelativeX( MxNumberTenths( 357.6 ) );
	object.setRelativeY( MxNumberTenths( 357.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-x=\"357.6\" default-y=\"357.6\" relative-x=\"357.6\" relative-y=\"357.6\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 357.7 ) );
	object.setDefaultY( MxNumberTenths( 357.7 ) );
	object.setRelativeX( MxNumberTenths( 357.7 ) );
	object.setRelativeY( MxNumberTenths( 357.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-y=\"357.7\" relative-y=\"357.7\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 357.8 ) );
	object.setDefaultY( MxNumberTenths( 357.8 ) );
	object.setRelativeX( MxNumberTenths( 357.8 ) );
	object.setRelativeY( MxNumberTenths( 357.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-x=\"357.8\" relative-y=\"357.8\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 357.9 ) );
	object.setDefaultY( MxNumberTenths( 357.9 ) );
	object.setRelativeX( MxNumberTenths( 357.9 ) );
	object.setRelativeY( MxNumberTenths( 357.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation relative-y=\"357.9\" font-weight=\"normal\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 358 ) );
	object.setDefaultY( MxNumberTenths( 358 ) );
	object.setRelativeX( MxNumberTenths( 358 ) );
	object.setRelativeY( MxNumberTenths( 358 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-x=\"358\" default-y=\"358\" relative-x=\"358\" font-style=\"italic\" font-weight=\"bold\" color=\"#95969594\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 358.1 ) );
	object.setDefaultY( MxNumberTenths( 358.1 ) );
	object.setRelativeX( MxNumberTenths( 358.1 ) );
	object.setRelativeY( MxNumberTenths( 358.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-y=\"358.1\" relative-x=\"358.1\" font-style=\"normal\" font-weight=\"normal\" color=\"#989796\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 358.2 ) );
	object.setDefaultY( MxNumberTenths( 358.2 ) );
	object.setRelativeX( MxNumberTenths( 358.2 ) );
	object.setRelativeY( MxNumberTenths( 358.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-x=\"358.2\" relative-x=\"358.2\" font-style=\"italic\" font-weight=\"bold\" color=\"#999A9998\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 358.3 ) );
	object.setDefaultY( MxNumberTenths( 358.3 ) );
	object.setRelativeX( MxNumberTenths( 358.3 ) );
	object.setRelativeY( MxNumberTenths( 358.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation font-style=\"normal\" font-weight=\"normal\" color=\"#9C9B9A\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 358.4 ) );
	object.setDefaultY( MxNumberTenths( 358.4 ) );
	object.setRelativeX( MxNumberTenths( 358.4 ) );
	object.setRelativeY( MxNumberTenths( 358.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-x=\"358.4\" default-y=\"358.4\" relative-y=\"358.4\" font-family=\"XYZ\" font-style=\"italic\" color=\"#9D9E9D9C\" justify=\"center\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 358.5 ) );
	object.setDefaultY( MxNumberTenths( 358.5 ) );
	object.setRelativeX( MxNumberTenths( 358.5 ) );
	object.setRelativeY( MxNumberTenths( 358.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-y=\"358.5\" relative-y=\"358.5\" font-family=\"ABC\" font-style=\"normal\" color=\"#A09F9E\" justify=\"right\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 358.6 ) );
	object.setDefaultY( MxNumberTenths( 358.6 ) );
	object.setRelativeX( MxNumberTenths( 358.6 ) );
	object.setRelativeY( MxNumberTenths( 358.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-x=\"358.6\" relative-x=\"358.6\" relative-y=\"358.6\" font-family=\"DEF\" font-size=\"1.1\" color=\"#A1A2A1A0\" justify=\"left\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 358.7 ) );
	object.setDefaultY( MxNumberTenths( 358.7 ) );
	object.setRelativeX( MxNumberTenths( 358.7 ) );
	object.setRelativeY( MxNumberTenths( 358.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation relative-x=\"358.7\" relative-y=\"358.7\" font-family=\"XYZ\" font-size=\"large\" color=\"#A4A3A2\" justify=\"center\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 358.8 ) );
	object.setDefaultY( MxNumberTenths( 358.8 ) );
	object.setRelativeX( MxNumberTenths( 358.8 ) );
	object.setRelativeY( MxNumberTenths( 358.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-x=\"358.8\" default-y=\"358.8\" relative-x=\"358.8\" font-family=\"ABC\" font-size=\"1.1\" color=\"#A5A6A5A4\" justify=\"right\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 358.9 ) );
	object.setDefaultY( MxNumberTenths( 358.9 ) );
	object.setRelativeX( MxNumberTenths( 358.9 ) );
	object.setRelativeY( MxNumberTenths( 358.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-y=\"358.9\" font-size=\"large\" justify=\"left\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 359 ) );
	object.setDefaultY( MxNumberTenths( 359 ) );
	object.setRelativeX( MxNumberTenths( 359 ) );
	object.setRelativeY( MxNumberTenths( 359 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-x=\"359\" font-size=\"1.1\" justify=\"center\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 359.1 ) );
	object.setDefaultY( MxNumberTenths( 359.1 ) );
	object.setRelativeX( MxNumberTenths( 359.1 ) );
	object.setRelativeY( MxNumberTenths( 359.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation font-size=\"large\" justify=\"right\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 359.2 ) );
	object.setDefaultY( MxNumberTenths( 359.2 ) );
	object.setRelativeX( MxNumberTenths( 359.2 ) );
	object.setRelativeY( MxNumberTenths( 359.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-x=\"359.2\" default-y=\"359.2\" relative-x=\"359.2\" relative-y=\"359.2\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" justify=\"left\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 359.3 ) );
	object.setDefaultY( MxNumberTenths( 359.3 ) );
	object.setRelativeX( MxNumberTenths( 359.3 ) );
	object.setRelativeY( MxNumberTenths( 359.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-y=\"359.3\" relative-x=\"359.3\" relative-y=\"359.3\" font-style=\"normal\" font-weight=\"normal\" justify=\"center\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 359.4 ) );
	object.setDefaultY( MxNumberTenths( 359.4 ) );
	object.setRelativeX( MxNumberTenths( 359.4 ) );
	object.setRelativeY( MxNumberTenths( 359.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-x=\"359.4\" relative-x=\"359.4\" relative-y=\"359.4\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 359.5 ) );
	object.setDefaultY( MxNumberTenths( 359.5 ) );
	object.setRelativeX( MxNumberTenths( 359.5 ) );
	object.setRelativeY( MxNumberTenths( 359.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation relative-y=\"359.5\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 359.6 ) );
	object.setDefaultY( MxNumberTenths( 359.6 ) );
	object.setRelativeX( MxNumberTenths( 359.6 ) );
	object.setRelativeY( MxNumberTenths( 359.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-x=\"359.6\" default-y=\"359.6\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 359.7 ) );
	object.setDefaultY( MxNumberTenths( 359.7 ) );
	object.setRelativeX( MxNumberTenths( 359.7 ) );
	object.setRelativeY( MxNumberTenths( 359.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-y=\"359.7\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 359.8 ) );
	object.setDefaultY( MxNumberTenths( 359.8 ) );
	object.setRelativeX( MxNumberTenths( 359.8 ) );
	object.setRelativeY( MxNumberTenths( 359.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-x=\"359.8\" relative-x=\"359.8\" font-family=\"DEF\" font-weight=\"bold\" color=\"#B9BAB9B8\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 359.9 ) );
	object.setDefaultY( MxNumberTenths( 359.9 ) );
	object.setRelativeX( MxNumberTenths( 359.9 ) );
	object.setRelativeY( MxNumberTenths( 359.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation relative-x=\"359.9\" font-weight=\"normal\" color=\"#BCBBBA\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 360 ) );
	object.setDefaultY( MxNumberTenths( 360 ) );
	object.setRelativeX( MxNumberTenths( 360 ) );
	object.setRelativeY( MxNumberTenths( 360 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-x=\"360\" default-y=\"360\" relative-x=\"360\" relative-y=\"360\" font-size=\"1.1\" color=\"#BDBEBDBC\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 360.1 ) );
	object.setDefaultY( MxNumberTenths( 360.1 ) );
	object.setRelativeX( MxNumberTenths( 360.1 ) );
	object.setRelativeY( MxNumberTenths( 360.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-y=\"360.1\" relative-y=\"360.1\" font-size=\"large\" color=\"#C0BFBE\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 360.2 ) );
	object.setDefaultY( MxNumberTenths( 360.2 ) );
	object.setRelativeX( MxNumberTenths( 360.2 ) );
	object.setRelativeY( MxNumberTenths( 360.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-x=\"360.2\" relative-y=\"360.2\" font-size=\"1.1\" color=\"#C1C2C1C0\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 360.3 ) );
	object.setDefaultY( MxNumberTenths( 360.3 ) );
	object.setRelativeX( MxNumberTenths( 360.3 ) );
	object.setRelativeY( MxNumberTenths( 360.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation relative-y=\"360.3\" font-size=\"large\" color=\"#C4C3C2\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 360.4 ) );
	object.setDefaultY( MxNumberTenths( 360.4 ) );
	object.setRelativeX( MxNumberTenths( 360.4 ) );
	object.setRelativeY( MxNumberTenths( 360.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-x=\"360.4\" default-y=\"360.4\" relative-x=\"360.4\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#C5C6C5C4\" justify=\"left\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 360.5 ) );
	object.setDefaultY( MxNumberTenths( 360.5 ) );
	object.setRelativeX( MxNumberTenths( 360.5 ) );
	object.setRelativeY( MxNumberTenths( 360.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-y=\"360.5\" relative-x=\"360.5\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#C8C7C6\" justify=\"center\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 360.6 ) );
	object.setDefaultY( MxNumberTenths( 360.6 ) );
	object.setRelativeX( MxNumberTenths( 360.6 ) );
	object.setRelativeY( MxNumberTenths( 360.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-x=\"360.6\" relative-x=\"360.6\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#C9CAC9C8\" justify=\"right\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 360.7 ) );
	object.setDefaultY( MxNumberTenths( 360.7 ) );
	object.setRelativeX( MxNumberTenths( 360.7 ) );
	object.setRelativeY( MxNumberTenths( 360.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation font-family=\"DEF\" font-style=\"normal\" justify=\"left\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 360.8 ) );
	object.setDefaultY( MxNumberTenths( 360.8 ) );
	object.setRelativeX( MxNumberTenths( 360.8 ) );
	object.setRelativeY( MxNumberTenths( 360.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-x=\"360.8\" default-y=\"360.8\" relative-y=\"360.8\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" justify=\"center\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 360.9 ) );
	object.setDefaultY( MxNumberTenths( 360.9 ) );
	object.setRelativeX( MxNumberTenths( 360.9 ) );
	object.setRelativeY( MxNumberTenths( 360.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-y=\"360.9\" relative-y=\"360.9\" font-style=\"normal\" font-weight=\"normal\" justify=\"right\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 361 ) );
	object.setDefaultY( MxNumberTenths( 361 ) );
	object.setRelativeX( MxNumberTenths( 361 ) );
	object.setRelativeY( MxNumberTenths( 361 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-x=\"361\" relative-x=\"361\" relative-y=\"361\" font-weight=\"bold\" justify=\"left\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 361.1 ) );
	object.setDefaultY( MxNumberTenths( 361.1 ) );
	object.setRelativeX( MxNumberTenths( 361.1 ) );
	object.setRelativeY( MxNumberTenths( 361.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation relative-x=\"361.1\" relative-y=\"361.1\" font-weight=\"normal\" justify=\"center\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 361.2 ) );
	object.setDefaultY( MxNumberTenths( 361.2 ) );
	object.setRelativeX( MxNumberTenths( 361.2 ) );
	object.setRelativeY( MxNumberTenths( 361.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-x=\"361.2\" default-y=\"361.2\" relative-x=\"361.2\" font-weight=\"bold\" justify=\"right\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 361.3 ) );
	object.setDefaultY( MxNumberTenths( 361.3 ) );
	object.setRelativeX( MxNumberTenths( 361.3 ) );
	object.setRelativeY( MxNumberTenths( 361.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-y=\"361.3\" font-weight=\"normal\" justify=\"left\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 361.4 ) );
	object.setDefaultY( MxNumberTenths( 361.4 ) );
	object.setRelativeX( MxNumberTenths( 361.4 ) );
	object.setRelativeY( MxNumberTenths( 361.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-x=\"361.4\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 361.5 ) );
	object.setDefaultY( MxNumberTenths( 361.5 ) );
	object.setRelativeX( MxNumberTenths( 361.5 ) );
	object.setRelativeY( MxNumberTenths( 361.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 361.6 ) );
	object.setDefaultY( MxNumberTenths( 361.6 ) );
	object.setRelativeX( MxNumberTenths( 361.6 ) );
	object.setRelativeY( MxNumberTenths( 361.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-x=\"361.6\" default-y=\"361.6\" relative-x=\"361.6\" relative-y=\"361.6\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#DDDEDDDC\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 361.7 ) );
	object.setDefaultY( MxNumberTenths( 361.7 ) );
	object.setRelativeX( MxNumberTenths( 361.7 ) );
	object.setRelativeY( MxNumberTenths( 361.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-y=\"361.7\" relative-x=\"361.7\" relative-y=\"361.7\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#E0DFDE\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 361.8 ) );
	object.setDefaultY( MxNumberTenths( 361.8 ) );
	object.setRelativeX( MxNumberTenths( 361.8 ) );
	object.setRelativeY( MxNumberTenths( 361.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-x=\"361.8\" relative-x=\"361.8\" relative-y=\"361.8\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#E1E2E1E0\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 361.9 ) );
	object.setDefaultY( MxNumberTenths( 361.9 ) );
	object.setRelativeX( MxNumberTenths( 361.9 ) );
	object.setRelativeY( MxNumberTenths( 361.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation relative-y=\"361.9\" font-style=\"normal\" font-size=\"large\" color=\"#E4E3E2\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 362 ) );
	object.setDefaultY( MxNumberTenths( 362 ) );
	object.setRelativeX( MxNumberTenths( 362 ) );
	object.setRelativeY( MxNumberTenths( 362 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-x=\"362\" default-y=\"362\" font-style=\"italic\" font-size=\"1.1\" color=\"#E5E6E5E4\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 362.1 ) );
	object.setDefaultY( MxNumberTenths( 362.1 ) );
	object.setRelativeX( MxNumberTenths( 362.1 ) );
	object.setRelativeY( MxNumberTenths( 362.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-y=\"362.1\" font-style=\"normal\" color=\"#E8E7E6\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 362.2 ) );
	object.setDefaultY( MxNumberTenths( 362.2 ) );
	object.setRelativeX( MxNumberTenths( 362.2 ) );
	object.setRelativeY( MxNumberTenths( 362.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-x=\"362.2\" relative-x=\"362.2\" color=\"#E9EAE9E8\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 362.3 ) );
	object.setDefaultY( MxNumberTenths( 362.3 ) );
	object.setRelativeX( MxNumberTenths( 362.3 ) );
	object.setRelativeY( MxNumberTenths( 362.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation relative-x=\"362.3\" color=\"#ECEBEA\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 362.4 ) );
	object.setDefaultY( MxNumberTenths( 362.4 ) );
	object.setRelativeX( MxNumberTenths( 362.4 ) );
	object.setRelativeY( MxNumberTenths( 362.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-x=\"362.4\" default-y=\"362.4\" relative-x=\"362.4\" relative-y=\"362.4\" font-family=\"ABC\" font-weight=\"bold\" color=\"#EDEEEDEC\" justify=\"right\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 362.5 ) );
	object.setDefaultY( MxNumberTenths( 362.5 ) );
	object.setRelativeX( MxNumberTenths( 362.5 ) );
	object.setRelativeY( MxNumberTenths( 362.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-y=\"362.5\" relative-y=\"362.5\" font-family=\"DEF\" font-weight=\"normal\" justify=\"left\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 362.6 ) );
	object.setDefaultY( MxNumberTenths( 362.6 ) );
	object.setRelativeX( MxNumberTenths( 362.6 ) );
	object.setRelativeY( MxNumberTenths( 362.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-x=\"362.6\" relative-y=\"362.6\" font-family=\"XYZ\" font-weight=\"bold\" justify=\"center\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 362.7 ) );
	object.setDefaultY( MxNumberTenths( 362.7 ) );
	object.setRelativeX( MxNumberTenths( 362.7 ) );
	object.setRelativeY( MxNumberTenths( 362.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation relative-y=\"362.7\" font-family=\"ABC\" font-weight=\"normal\" justify=\"right\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 362.8 ) );
	object.setDefaultY( MxNumberTenths( 362.8 ) );
	object.setRelativeX( MxNumberTenths( 362.8 ) );
	object.setRelativeY( MxNumberTenths( 362.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-x=\"362.8\" default-y=\"362.8\" relative-x=\"362.8\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" justify=\"left\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 362.9 ) );
	object.setDefaultY( MxNumberTenths( 362.9 ) );
	object.setRelativeX( MxNumberTenths( 362.9 ) );
	object.setRelativeY( MxNumberTenths( 362.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-y=\"362.9\" relative-x=\"362.9\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" justify=\"center\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 363 ) );
	object.setDefaultY( MxNumberTenths( 363 ) );
	object.setRelativeX( MxNumberTenths( 363 ) );
	object.setRelativeY( MxNumberTenths( 363 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-x=\"363\" relative-x=\"363\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" justify=\"right\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 363.1 ) );
	object.setDefaultY( MxNumberTenths( 363.1 ) );
	object.setRelativeX( MxNumberTenths( 363.1 ) );
	object.setRelativeY( MxNumberTenths( 363.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" justify=\"left\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 363.2 ) );
	object.setDefaultY( MxNumberTenths( 363.2 ) );
	object.setRelativeX( MxNumberTenths( 363.2 ) );
	object.setRelativeY( MxNumberTenths( 363.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-x=\"363.2\" default-y=\"363.2\" relative-y=\"363.2\" font-style=\"italic\" font-size=\"1.1\" justify=\"center\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 363.3 ) );
	object.setDefaultY( MxNumberTenths( 363.3 ) );
	object.setRelativeX( MxNumberTenths( 363.3 ) );
	object.setRelativeY( MxNumberTenths( 363.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-y=\"363.3\" relative-y=\"363.3\" font-style=\"normal\" font-size=\"large\" justify=\"right\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 363.4 ) );
	object.setDefaultY( MxNumberTenths( 363.4 ) );
	object.setRelativeX( MxNumberTenths( 363.4 ) );
	object.setRelativeY( MxNumberTenths( 363.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-x=\"363.4\" relative-x=\"363.4\" relative-y=\"363.4\" font-family=\"DEF\" font-size=\"1.1\" color=\"#01020100\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 363.5 ) );
	object.setDefaultY( MxNumberTenths( 363.5 ) );
	object.setRelativeX( MxNumberTenths( 363.5 ) );
	object.setRelativeY( MxNumberTenths( 363.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#040302" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation relative-x=\"363.5\" relative-y=\"363.5\" font-family=\"XYZ\" color=\"#040302\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 363.6 ) );
	object.setDefaultY( MxNumberTenths( 363.6 ) );
	object.setRelativeX( MxNumberTenths( 363.6 ) );
	object.setRelativeY( MxNumberTenths( 363.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-x=\"363.6\" default-y=\"363.6\" relative-x=\"363.6\" font-family=\"ABC\" color=\"#05060504\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 363.7 ) );
	object.setDefaultY( MxNumberTenths( 363.7 ) );
	object.setRelativeX( MxNumberTenths( 363.7 ) );
	object.setRelativeY( MxNumberTenths( 363.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#080706" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-y=\"363.7\" font-family=\"DEF\" color=\"#080706\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 363.8 ) );
	object.setDefaultY( MxNumberTenths( 363.8 ) );
	object.setRelativeX( MxNumberTenths( 363.8 ) );
	object.setRelativeY( MxNumberTenths( 363.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-x=\"363.8\" font-family=\"XYZ\" color=\"#090A0908\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 363.9 ) );
	object.setDefaultY( MxNumberTenths( 363.9 ) );
	object.setRelativeX( MxNumberTenths( 363.9 ) );
	object.setRelativeY( MxNumberTenths( 363.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation color=\"#0C0B0A\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 364 ) );
	object.setDefaultY( MxNumberTenths( 364 ) );
	object.setRelativeX( MxNumberTenths( 364 ) );
	object.setRelativeY( MxNumberTenths( 364 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation default-x=\"364\" default-y=\"364\" relative-x=\"364\" relative-y=\"364\" font-style=\"italic\" font-weight=\"bold\" color=\"#0D0E0D0C\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 364.1 ) );
	object.setDefaultY( MxNumberTenths( 364.1 ) );
	object.setRelativeX( MxNumberTenths( 364.1 ) );
	object.setRelativeY( MxNumberTenths( 364.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation default-y=\"364.1\" relative-x=\"364.1\" relative-y=\"364.1\" font-style=\"normal\" font-weight=\"normal\" color=\"#100F0E\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 364.2 ) );
	object.setDefaultY( MxNumberTenths( 364.2 ) );
	object.setRelativeX( MxNumberTenths( 364.2 ) );
	object.setRelativeY( MxNumberTenths( 364.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<group-abbreviation default-x=\"364.2\" relative-x=\"364.2\" relative-y=\"364.2\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#11121110\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 364.3 ) );
	object.setDefaultY( MxNumberTenths( 364.3 ) );
	object.setRelativeX( MxNumberTenths( 364.3 ) );
	object.setRelativeY( MxNumberTenths( 364.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#141312" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<group-abbreviation relative-y=\"364.3\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">D,E,F</group-abbreviation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEsGroupAbbreviation )
{
	MxEsGroupAbbreviation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 364.4 ) );
	object.setDefaultY( MxNumberTenths( 364.4 ) );
	object.setRelativeX( MxNumberTenths( 364.4 ) );
	object.setRelativeY( MxNumberTenths( 364.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<group-abbreviation>D,E,F</group-abbreviation>";
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


