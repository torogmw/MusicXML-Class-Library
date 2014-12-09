/** *******************************************************
  * 
  * MxEsDegreeAlterTest.cpp
  * Created: 2014-12-05 20:57:51
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsDegreeAlter.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::no ) ).toString();
	std::string actual = object.getPlusMinus().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	std::string expected = "MxEsDegreeAlter";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	std::string expected = "degree-alter";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setDefaultX0, MxEsDegreeAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeAlter object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY1, MxEsDegreeAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeAlter object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX2, MxEsDegreeAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeAlter object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY3, MxEsDegreeAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeAlter object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily4, MxEsDegreeAlter )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeAlter object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle5, MxEsDegreeAlter )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeAlter object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize6, MxEsDegreeAlter )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeAlter object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight7, MxEsDegreeAlter )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeAlter object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor8, MxEsDegreeAlter )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeAlter object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setPlusMinus9, MxEsDegreeAlter )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsDegreeAlter object;
	object.setPlusMinus( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getPlusMinus();
	CHECK_EQUAL( expected, actual )
	object.setPlusMinus( value2 );
	expected = value2;
	actual = object.getPlusMinus();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsDefaultXRequired0, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired1, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired2, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired3, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired4, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired5, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired6, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired7, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired8, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlusMinusRequired9, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsPlusMinusRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsDefaultXPresent0, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
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
TEST( getIsDefaultYPresent1, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
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
TEST( getIsRelativeXPresent2, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
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
TEST( getIsRelativeYPresent3, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
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
TEST( getIsFontFamilyPresent4, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
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
TEST( getIsFontStylePresent5, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
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
TEST( getIsFontSizePresent6, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
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
TEST( getIsFontWeightPresent7, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
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
TEST( getIsColorPresent8, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
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
TEST( getIsPlusMinusPresent9, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsPlusMinusPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPlusMinusPresent( true );
	expected = true;
	actual = object.getIsPlusMinusPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPlusMinusPresent( false );
	expected = false;
	actual = object.getIsPlusMinusPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsDefaultXDefaultDefined, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlusMinusDefaultDefined, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	bool expected = true;
	bool actual = object.getIsPlusMinusDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getDefaultXDefaultValue, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPlusMinusDefaultValue, MxEsDegreeAlter )
{
	MxEsDegreeAlter object;
	MxEnumYesNo expected( lexicon::enums::YesNo::no );
	MxEnumYesNo actual = object.getPlusMinusDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setDefaultX( MxNumberTenths( 61.5 ) );
	object.setDefaultY( MxNumberTenths( 61.5 ) );
	object.setRelativeX( MxNumberTenths( 61.5 ) );
	object.setRelativeY( MxNumberTenths( 61.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlusMinusPresent( true );
	expected = "<degree-alter default-x=\"61.5\" default-y=\"61.5\" relative-x=\"61.5\" relative-y=\"61.5\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#BDBEBDBC\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 61.6 ) );
	object.setDefaultY( MxNumberTenths( 61.6 ) );
	object.setRelativeX( MxNumberTenths( 61.6 ) );
	object.setRelativeY( MxNumberTenths( 61.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"61.6\" relative-x=\"61.6\" relative-y=\"61.6\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#C0BFBE\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 61.7 ) );
	object.setDefaultY( MxNumberTenths( 61.7 ) );
	object.setRelativeX( MxNumberTenths( 61.7 ) );
	object.setRelativeY( MxNumberTenths( 61.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"61.7\" relative-x=\"61.7\" relative-y=\"61.7\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#C1C2C1C0\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 61.8 ) );
	object.setDefaultY( MxNumberTenths( 61.8 ) );
	object.setRelativeX( MxNumberTenths( 61.8 ) );
	object.setRelativeY( MxNumberTenths( 61.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter relative-y=\"61.8\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#C4C3C2\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 61.9 ) );
	object.setDefaultY( MxNumberTenths( 61.9 ) );
	object.setRelativeX( MxNumberTenths( 61.9 ) );
	object.setRelativeY( MxNumberTenths( 61.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"61.9\" default-y=\"61.9\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#C5C6C5C4\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 62 ) );
	object.setDefaultY( MxNumberTenths( 62 ) );
	object.setRelativeX( MxNumberTenths( 62 ) );
	object.setRelativeY( MxNumberTenths( 62 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"62\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#C8C7C6\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 62.1 ) );
	object.setDefaultY( MxNumberTenths( 62.1 ) );
	object.setRelativeX( MxNumberTenths( 62.1 ) );
	object.setRelativeY( MxNumberTenths( 62.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"62.1\" relative-x=\"62.1\" font-size=\"large\" font-weight=\"normal\" color=\"#C9CAC9C8\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 62.2 ) );
	object.setDefaultY( MxNumberTenths( 62.2 ) );
	object.setRelativeX( MxNumberTenths( 62.2 ) );
	object.setRelativeY( MxNumberTenths( 62.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter relative-x=\"62.2\" font-weight=\"bold\" color=\"#CCCBCA\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 62.3 ) );
	object.setDefaultY( MxNumberTenths( 62.3 ) );
	object.setRelativeX( MxNumberTenths( 62.3 ) );
	object.setRelativeY( MxNumberTenths( 62.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"62.3\" default-y=\"62.3\" relative-x=\"62.3\" relative-y=\"62.3\" color=\"#CDCECDCC\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 62.4 ) );
	object.setDefaultY( MxNumberTenths( 62.4 ) );
	object.setRelativeX( MxNumberTenths( 62.4 ) );
	object.setRelativeY( MxNumberTenths( 62.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"62.4\" relative-y=\"62.4\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 62.5 ) );
	object.setDefaultY( MxNumberTenths( 62.5 ) );
	object.setRelativeX( MxNumberTenths( 62.5 ) );
	object.setRelativeY( MxNumberTenths( 62.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"62.5\" relative-y=\"62.5\" font-family=\"XYZ\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 62.6 ) );
	object.setDefaultY( MxNumberTenths( 62.6 ) );
	object.setRelativeX( MxNumberTenths( 62.6 ) );
	object.setRelativeY( MxNumberTenths( 62.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter relative-y=\"62.6\" font-family=\"ABC\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 62.7 ) );
	object.setDefaultY( MxNumberTenths( 62.7 ) );
	object.setRelativeX( MxNumberTenths( 62.7 ) );
	object.setRelativeY( MxNumberTenths( 62.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"62.7\" default-y=\"62.7\" relative-x=\"62.7\" font-family=\"DEF\" font-style=\"normal\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 62.8 ) );
	object.setDefaultY( MxNumberTenths( 62.8 ) );
	object.setRelativeX( MxNumberTenths( 62.8 ) );
	object.setRelativeY( MxNumberTenths( 62.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"62.8\" relative-x=\"62.8\" font-family=\"XYZ\" font-style=\"italic\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 62.9 ) );
	object.setDefaultY( MxNumberTenths( 62.9 ) );
	object.setRelativeX( MxNumberTenths( 62.9 ) );
	object.setRelativeY( MxNumberTenths( 62.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"62.9\" relative-x=\"62.9\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 63 ) );
	object.setDefaultY( MxNumberTenths( 63 ) );
	object.setRelativeX( MxNumberTenths( 63 ) );
	object.setRelativeY( MxNumberTenths( 63 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter font-style=\"italic\" font-size=\"1.1\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 63.1 ) );
	object.setDefaultY( MxNumberTenths( 63.1 ) );
	object.setRelativeX( MxNumberTenths( 63.1 ) );
	object.setRelativeY( MxNumberTenths( 63.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"63.1\" default-y=\"63.1\" relative-y=\"63.1\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 63.2 ) );
	object.setDefaultY( MxNumberTenths( 63.2 ) );
	object.setRelativeX( MxNumberTenths( 63.2 ) );
	object.setRelativeY( MxNumberTenths( 63.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"63.2\" relative-y=\"63.2\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 63.3 ) );
	object.setDefaultY( MxNumberTenths( 63.3 ) );
	object.setRelativeX( MxNumberTenths( 63.3 ) );
	object.setRelativeY( MxNumberTenths( 63.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"63.3\" relative-x=\"63.3\" relative-y=\"63.3\" font-size=\"large\" font-weight=\"normal\" color=\"#E1E2E1E0\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 63.4 ) );
	object.setDefaultY( MxNumberTenths( 63.4 ) );
	object.setRelativeX( MxNumberTenths( 63.4 ) );
	object.setRelativeY( MxNumberTenths( 63.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter relative-x=\"63.4\" relative-y=\"63.4\" font-size=\"1.1\" font-weight=\"bold\" color=\"#E4E3E2\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 63.5 ) );
	object.setDefaultY( MxNumberTenths( 63.5 ) );
	object.setRelativeX( MxNumberTenths( 63.5 ) );
	object.setRelativeY( MxNumberTenths( 63.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"63.5\" default-y=\"63.5\" relative-x=\"63.5\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" color=\"#E5E6E5E4\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 63.6 ) );
	object.setDefaultY( MxNumberTenths( 63.6 ) );
	object.setRelativeX( MxNumberTenths( 63.6 ) );
	object.setRelativeY( MxNumberTenths( 63.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"63.6\" font-family=\"DEF\" font-weight=\"bold\" color=\"#E8E7E6\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 63.7 ) );
	object.setDefaultY( MxNumberTenths( 63.7 ) );
	object.setRelativeX( MxNumberTenths( 63.7 ) );
	object.setRelativeY( MxNumberTenths( 63.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"63.7\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#E9EAE9E8\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 63.8 ) );
	object.setDefaultY( MxNumberTenths( 63.8 ) );
	object.setRelativeX( MxNumberTenths( 63.8 ) );
	object.setRelativeY( MxNumberTenths( 63.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter font-family=\"ABC\" font-weight=\"bold\" color=\"#ECEBEA\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 63.9 ) );
	object.setDefaultY( MxNumberTenths( 63.9 ) );
	object.setRelativeX( MxNumberTenths( 63.9 ) );
	object.setRelativeY( MxNumberTenths( 63.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"63.9\" default-y=\"63.9\" relative-x=\"63.9\" relative-y=\"63.9\" font-family=\"DEF\" font-style=\"normal\" color=\"#EDEEEDEC\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 64 ) );
	object.setDefaultY( MxNumberTenths( 64 ) );
	object.setRelativeX( MxNumberTenths( 64 ) );
	object.setRelativeY( MxNumberTenths( 64 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"64\" relative-x=\"64\" relative-y=\"64\" font-style=\"italic\" color=\"#F0EFEE\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 64.1 ) );
	object.setDefaultY( MxNumberTenths( 64.1 ) );
	object.setRelativeX( MxNumberTenths( 64.1 ) );
	object.setRelativeY( MxNumberTenths( 64.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"64.1\" relative-x=\"64.1\" relative-y=\"64.1\" font-style=\"normal\" color=\"#F1F2F1F0\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 64.2 ) );
	object.setDefaultY( MxNumberTenths( 64.2 ) );
	object.setRelativeX( MxNumberTenths( 64.2 ) );
	object.setRelativeY( MxNumberTenths( 64.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter relative-y=\"64.2\" font-style=\"italic\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 64.3 ) );
	object.setDefaultY( MxNumberTenths( 64.3 ) );
	object.setRelativeX( MxNumberTenths( 64.3 ) );
	object.setRelativeY( MxNumberTenths( 64.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"64.3\" default-y=\"64.3\" font-style=\"normal\" font-size=\"large\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 64.4 ) );
	object.setDefaultY( MxNumberTenths( 64.4 ) );
	object.setRelativeX( MxNumberTenths( 64.4 ) );
	object.setRelativeY( MxNumberTenths( 64.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"64.4\" font-style=\"italic\" font-size=\"1.1\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 64.5 ) );
	object.setDefaultY( MxNumberTenths( 64.5 ) );
	object.setRelativeX( MxNumberTenths( 64.5 ) );
	object.setRelativeY( MxNumberTenths( 64.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"64.5\" relative-x=\"64.5\" font-family=\"DEF\" font-size=\"large\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 64.6 ) );
	object.setDefaultY( MxNumberTenths( 64.6 ) );
	object.setRelativeX( MxNumberTenths( 64.6 ) );
	object.setRelativeY( MxNumberTenths( 64.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter relative-x=\"64.6\" font-family=\"XYZ\" font-size=\"1.1\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 64.7 ) );
	object.setDefaultY( MxNumberTenths( 64.7 ) );
	object.setRelativeX( MxNumberTenths( 64.7 ) );
	object.setRelativeY( MxNumberTenths( 64.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"64.7\" default-y=\"64.7\" relative-x=\"64.7\" relative-y=\"64.7\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 64.8 ) );
	object.setDefaultY( MxNumberTenths( 64.8 ) );
	object.setRelativeX( MxNumberTenths( 64.8 ) );
	object.setRelativeY( MxNumberTenths( 64.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"64.8\" relative-y=\"64.8\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 64.9 ) );
	object.setDefaultY( MxNumberTenths( 64.9 ) );
	object.setRelativeX( MxNumberTenths( 64.9 ) );
	object.setRelativeY( MxNumberTenths( 64.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"64.9\" relative-y=\"64.9\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 65 ) );
	object.setDefaultY( MxNumberTenths( 65 ) );
	object.setRelativeX( MxNumberTenths( 65 ) );
	object.setRelativeY( MxNumberTenths( 65 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#040302" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter relative-y=\"65\" font-weight=\"bold\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 65.1 ) );
	object.setDefaultY( MxNumberTenths( 65.1 ) );
	object.setRelativeX( MxNumberTenths( 65.1 ) );
	object.setRelativeY( MxNumberTenths( 65.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"65.1\" default-y=\"65.1\" relative-x=\"65.1\" font-style=\"normal\" font-weight=\"normal\" color=\"#05060504\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 65.2 ) );
	object.setDefaultY( MxNumberTenths( 65.2 ) );
	object.setRelativeX( MxNumberTenths( 65.2 ) );
	object.setRelativeY( MxNumberTenths( 65.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#080706" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"65.2\" relative-x=\"65.2\" font-style=\"italic\" font-weight=\"bold\" color=\"#080706\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 65.3 ) );
	object.setDefaultY( MxNumberTenths( 65.3 ) );
	object.setRelativeX( MxNumberTenths( 65.3 ) );
	object.setRelativeY( MxNumberTenths( 65.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"65.3\" relative-x=\"65.3\" font-style=\"normal\" font-weight=\"normal\" color=\"#090A0908\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 65.4 ) );
	object.setDefaultY( MxNumberTenths( 65.4 ) );
	object.setRelativeX( MxNumberTenths( 65.4 ) );
	object.setRelativeY( MxNumberTenths( 65.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter font-style=\"italic\" font-weight=\"bold\" color=\"#0C0B0A\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 65.5 ) );
	object.setDefaultY( MxNumberTenths( 65.5 ) );
	object.setRelativeX( MxNumberTenths( 65.5 ) );
	object.setRelativeY( MxNumberTenths( 65.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"65.5\" default-y=\"65.5\" relative-y=\"65.5\" font-family=\"XYZ\" font-style=\"normal\" color=\"#0D0E0D0C\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 65.6 ) );
	object.setDefaultY( MxNumberTenths( 65.6 ) );
	object.setRelativeX( MxNumberTenths( 65.6 ) );
	object.setRelativeY( MxNumberTenths( 65.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"65.6\" relative-y=\"65.6\" font-family=\"ABC\" font-style=\"italic\" color=\"#100F0E\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 65.7 ) );
	object.setDefaultY( MxNumberTenths( 65.7 ) );
	object.setRelativeX( MxNumberTenths( 65.7 ) );
	object.setRelativeY( MxNumberTenths( 65.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"65.7\" relative-x=\"65.7\" relative-y=\"65.7\" font-family=\"DEF\" font-size=\"large\" color=\"#11121110\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 65.8 ) );
	object.setDefaultY( MxNumberTenths( 65.8 ) );
	object.setRelativeX( MxNumberTenths( 65.8 ) );
	object.setRelativeY( MxNumberTenths( 65.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#141312" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter relative-x=\"65.8\" relative-y=\"65.8\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#141312\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 65.9 ) );
	object.setDefaultY( MxNumberTenths( 65.9 ) );
	object.setRelativeX( MxNumberTenths( 65.9 ) );
	object.setRelativeY( MxNumberTenths( 65.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"65.9\" default-y=\"65.9\" relative-x=\"65.9\" font-family=\"ABC\" font-size=\"large\" color=\"#15161514\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 66 ) );
	object.setDefaultY( MxNumberTenths( 66 ) );
	object.setRelativeX( MxNumberTenths( 66 ) );
	object.setRelativeY( MxNumberTenths( 66 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"66\" font-size=\"1.1\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 66.1 ) );
	object.setDefaultY( MxNumberTenths( 66.1 ) );
	object.setRelativeX( MxNumberTenths( 66.1 ) );
	object.setRelativeY( MxNumberTenths( 66.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"66.1\" font-size=\"large\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 66.2 ) );
	object.setDefaultY( MxNumberTenths( 66.2 ) );
	object.setRelativeX( MxNumberTenths( 66.2 ) );
	object.setRelativeY( MxNumberTenths( 66.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter font-size=\"1.1\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 66.3 ) );
	object.setDefaultY( MxNumberTenths( 66.3 ) );
	object.setRelativeX( MxNumberTenths( 66.3 ) );
	object.setRelativeY( MxNumberTenths( 66.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"66.3\" default-y=\"66.3\" relative-x=\"66.3\" relative-y=\"66.3\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 66.4 ) );
	object.setDefaultY( MxNumberTenths( 66.4 ) );
	object.setRelativeX( MxNumberTenths( 66.4 ) );
	object.setRelativeY( MxNumberTenths( 66.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"66.4\" relative-x=\"66.4\" relative-y=\"66.4\" font-style=\"italic\" font-weight=\"bold\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 66.5 ) );
	object.setDefaultY( MxNumberTenths( 66.5 ) );
	object.setRelativeX( MxNumberTenths( 66.5 ) );
	object.setRelativeY( MxNumberTenths( 66.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"66.5\" relative-x=\"66.5\" relative-y=\"66.5\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 66.6 ) );
	object.setDefaultY( MxNumberTenths( 66.6 ) );
	object.setRelativeX( MxNumberTenths( 66.6 ) );
	object.setRelativeY( MxNumberTenths( 66.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#242322" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter relative-y=\"66.6\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 66.7 ) );
	object.setDefaultY( MxNumberTenths( 66.7 ) );
	object.setRelativeX( MxNumberTenths( 66.7 ) );
	object.setRelativeY( MxNumberTenths( 66.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"66.7\" default-y=\"66.7\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 66.8 ) );
	object.setDefaultY( MxNumberTenths( 66.8 ) );
	object.setRelativeX( MxNumberTenths( 66.8 ) );
	object.setRelativeY( MxNumberTenths( 66.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#282726" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"66.8\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 66.9 ) );
	object.setDefaultY( MxNumberTenths( 66.9 ) );
	object.setRelativeX( MxNumberTenths( 66.9 ) );
	object.setRelativeY( MxNumberTenths( 66.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"66.9\" relative-x=\"66.9\" font-family=\"DEF\" font-weight=\"normal\" color=\"#292A2928\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 67 ) );
	object.setDefaultY( MxNumberTenths( 67 ) );
	object.setRelativeX( MxNumberTenths( 67 ) );
	object.setRelativeY( MxNumberTenths( 67 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter relative-x=\"67\" font-weight=\"bold\" color=\"#2C2B2A\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 67.1 ) );
	object.setDefaultY( MxNumberTenths( 67.1 ) );
	object.setRelativeX( MxNumberTenths( 67.1 ) );
	object.setRelativeY( MxNumberTenths( 67.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"67.1\" default-y=\"67.1\" relative-x=\"67.1\" relative-y=\"67.1\" font-size=\"large\" color=\"#2D2E2D2C\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 67.2 ) );
	object.setDefaultY( MxNumberTenths( 67.2 ) );
	object.setRelativeX( MxNumberTenths( 67.2 ) );
	object.setRelativeY( MxNumberTenths( 67.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"67.2\" relative-y=\"67.2\" font-size=\"1.1\" color=\"#302F2E\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 67.3 ) );
	object.setDefaultY( MxNumberTenths( 67.3 ) );
	object.setRelativeX( MxNumberTenths( 67.3 ) );
	object.setRelativeY( MxNumberTenths( 67.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"67.3\" relative-y=\"67.3\" font-size=\"large\" color=\"#31323130\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 67.4 ) );
	object.setDefaultY( MxNumberTenths( 67.4 ) );
	object.setRelativeX( MxNumberTenths( 67.4 ) );
	object.setRelativeY( MxNumberTenths( 67.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter relative-y=\"67.4\" font-size=\"1.1\" color=\"#343332\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 67.5 ) );
	object.setDefaultY( MxNumberTenths( 67.5 ) );
	object.setRelativeX( MxNumberTenths( 67.5 ) );
	object.setRelativeY( MxNumberTenths( 67.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"67.5\" default-y=\"67.5\" relative-x=\"67.5\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#35363534\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 67.6 ) );
	object.setDefaultY( MxNumberTenths( 67.6 ) );
	object.setRelativeX( MxNumberTenths( 67.6 ) );
	object.setRelativeY( MxNumberTenths( 67.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"67.6\" relative-x=\"67.6\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#383736\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 67.7 ) );
	object.setDefaultY( MxNumberTenths( 67.7 ) );
	object.setRelativeX( MxNumberTenths( 67.7 ) );
	object.setRelativeY( MxNumberTenths( 67.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"67.7\" relative-x=\"67.7\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#393A3938\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 67.8 ) );
	object.setDefaultY( MxNumberTenths( 67.8 ) );
	object.setRelativeX( MxNumberTenths( 67.8 ) );
	object.setRelativeY( MxNumberTenths( 67.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter font-family=\"DEF\" font-style=\"italic\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 67.9 ) );
	object.setDefaultY( MxNumberTenths( 67.9 ) );
	object.setRelativeX( MxNumberTenths( 67.9 ) );
	object.setRelativeY( MxNumberTenths( 67.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"67.9\" default-y=\"67.9\" relative-y=\"67.9\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 68 ) );
	object.setDefaultY( MxNumberTenths( 68 ) );
	object.setRelativeX( MxNumberTenths( 68 ) );
	object.setRelativeY( MxNumberTenths( 68 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"68\" relative-y=\"68\" font-style=\"italic\" font-weight=\"bold\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 68.1 ) );
	object.setDefaultY( MxNumberTenths( 68.1 ) );
	object.setRelativeX( MxNumberTenths( 68.1 ) );
	object.setRelativeY( MxNumberTenths( 68.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"68.1\" relative-x=\"68.1\" relative-y=\"68.1\" font-weight=\"normal\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 68.2 ) );
	object.setDefaultY( MxNumberTenths( 68.2 ) );
	object.setRelativeX( MxNumberTenths( 68.2 ) );
	object.setRelativeY( MxNumberTenths( 68.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter relative-x=\"68.2\" relative-y=\"68.2\" font-weight=\"bold\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 68.3 ) );
	object.setDefaultY( MxNumberTenths( 68.3 ) );
	object.setRelativeX( MxNumberTenths( 68.3 ) );
	object.setRelativeY( MxNumberTenths( 68.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"68.3\" default-y=\"68.3\" relative-x=\"68.3\" font-weight=\"normal\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 68.4 ) );
	object.setDefaultY( MxNumberTenths( 68.4 ) );
	object.setRelativeX( MxNumberTenths( 68.4 ) );
	object.setRelativeY( MxNumberTenths( 68.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"68.4\" font-weight=\"bold\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 68.5 ) );
	object.setDefaultY( MxNumberTenths( 68.5 ) );
	object.setRelativeX( MxNumberTenths( 68.5 ) );
	object.setRelativeY( MxNumberTenths( 68.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"68.5\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 68.6 ) );
	object.setDefaultY( MxNumberTenths( 68.6 ) );
	object.setRelativeX( MxNumberTenths( 68.6 ) );
	object.setRelativeY( MxNumberTenths( 68.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 68.7 ) );
	object.setDefaultY( MxNumberTenths( 68.7 ) );
	object.setRelativeX( MxNumberTenths( 68.7 ) );
	object.setRelativeY( MxNumberTenths( 68.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"68.7\" default-y=\"68.7\" relative-x=\"68.7\" relative-y=\"68.7\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#4D4E4D4C\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 68.8 ) );
	object.setDefaultY( MxNumberTenths( 68.8 ) );
	object.setRelativeX( MxNumberTenths( 68.8 ) );
	object.setRelativeY( MxNumberTenths( 68.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"68.8\" relative-x=\"68.8\" relative-y=\"68.8\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#504F4E\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 68.9 ) );
	object.setDefaultY( MxNumberTenths( 68.9 ) );
	object.setRelativeX( MxNumberTenths( 68.9 ) );
	object.setRelativeY( MxNumberTenths( 68.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"68.9\" relative-x=\"68.9\" relative-y=\"68.9\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#51525150\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 69 ) );
	object.setDefaultY( MxNumberTenths( 69 ) );
	object.setRelativeX( MxNumberTenths( 69 ) );
	object.setRelativeY( MxNumberTenths( 69 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#545352" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter relative-y=\"69\" font-style=\"italic\" font-size=\"1.1\" color=\"#545352\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 69.1 ) );
	object.setDefaultY( MxNumberTenths( 69.1 ) );
	object.setRelativeX( MxNumberTenths( 69.1 ) );
	object.setRelativeY( MxNumberTenths( 69.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"69.1\" default-y=\"69.1\" font-style=\"normal\" font-size=\"large\" color=\"#55565554\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 69.2 ) );
	object.setDefaultY( MxNumberTenths( 69.2 ) );
	object.setRelativeX( MxNumberTenths( 69.2 ) );
	object.setRelativeY( MxNumberTenths( 69.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#585756" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"69.2\" font-style=\"italic\" color=\"#585756\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 69.3 ) );
	object.setDefaultY( MxNumberTenths( 69.3 ) );
	object.setRelativeX( MxNumberTenths( 69.3 ) );
	object.setRelativeY( MxNumberTenths( 69.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"69.3\" relative-x=\"69.3\" color=\"#595A5958\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 69.4 ) );
	object.setDefaultY( MxNumberTenths( 69.4 ) );
	object.setRelativeX( MxNumberTenths( 69.4 ) );
	object.setRelativeY( MxNumberTenths( 69.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter relative-x=\"69.4\" color=\"#5C5B5A\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 69.5 ) );
	object.setDefaultY( MxNumberTenths( 69.5 ) );
	object.setRelativeX( MxNumberTenths( 69.5 ) );
	object.setRelativeY( MxNumberTenths( 69.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"69.5\" default-y=\"69.5\" relative-x=\"69.5\" relative-y=\"69.5\" font-family=\"ABC\" font-weight=\"normal\" color=\"#5D5E5D5C\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 69.6 ) );
	object.setDefaultY( MxNumberTenths( 69.6 ) );
	object.setRelativeX( MxNumberTenths( 69.6 ) );
	object.setRelativeY( MxNumberTenths( 69.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"69.6\" relative-y=\"69.6\" font-family=\"DEF\" font-weight=\"bold\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 69.7 ) );
	object.setDefaultY( MxNumberTenths( 69.7 ) );
	object.setRelativeX( MxNumberTenths( 69.7 ) );
	object.setRelativeY( MxNumberTenths( 69.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"69.7\" relative-y=\"69.7\" font-family=\"XYZ\" font-weight=\"normal\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 69.8 ) );
	object.setDefaultY( MxNumberTenths( 69.8 ) );
	object.setRelativeX( MxNumberTenths( 69.8 ) );
	object.setRelativeY( MxNumberTenths( 69.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#646362" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter relative-y=\"69.8\" font-family=\"ABC\" font-weight=\"bold\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 69.9 ) );
	object.setDefaultY( MxNumberTenths( 69.9 ) );
	object.setRelativeX( MxNumberTenths( 69.9 ) );
	object.setRelativeY( MxNumberTenths( 69.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"69.9\" default-y=\"69.9\" relative-x=\"69.9\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 70 ) );
	object.setDefaultY( MxNumberTenths( 70 ) );
	object.setRelativeX( MxNumberTenths( 70 ) );
	object.setRelativeY( MxNumberTenths( 70 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#686766" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"70\" relative-x=\"70\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 70.1 ) );
	object.setDefaultY( MxNumberTenths( 70.1 ) );
	object.setRelativeX( MxNumberTenths( 70.1 ) );
	object.setRelativeY( MxNumberTenths( 70.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"70.1\" relative-x=\"70.1\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 70.2 ) );
	object.setDefaultY( MxNumberTenths( 70.2 ) );
	object.setRelativeX( MxNumberTenths( 70.2 ) );
	object.setRelativeY( MxNumberTenths( 70.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 70.3 ) );
	object.setDefaultY( MxNumberTenths( 70.3 ) );
	object.setRelativeX( MxNumberTenths( 70.3 ) );
	object.setRelativeY( MxNumberTenths( 70.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"70.3\" default-y=\"70.3\" relative-y=\"70.3\" font-style=\"normal\" font-size=\"large\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( true );
	object.setDefaultX( MxNumberTenths( 70.4 ) );
	object.setDefaultY( MxNumberTenths( 70.4 ) );
	object.setRelativeX( MxNumberTenths( 70.4 ) );
	object.setRelativeY( MxNumberTenths( 70.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"70.4\" relative-y=\"70.4\" font-style=\"italic\" font-size=\"1.1\" plus-minus=\"yes\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 70.5 ) );
	object.setDefaultY( MxNumberTenths( 70.5 ) );
	object.setRelativeX( MxNumberTenths( 70.5 ) );
	object.setRelativeY( MxNumberTenths( 70.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"70.5\" relative-x=\"70.5\" relative-y=\"70.5\" font-family=\"DEF\" font-size=\"large\" color=\"#71727170\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 70.6 ) );
	object.setDefaultY( MxNumberTenths( 70.6 ) );
	object.setRelativeX( MxNumberTenths( 70.6 ) );
	object.setRelativeY( MxNumberTenths( 70.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#747372" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter relative-x=\"70.6\" relative-y=\"70.6\" font-family=\"XYZ\" color=\"#747372\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 70.7 ) );
	object.setDefaultY( MxNumberTenths( 70.7 ) );
	object.setRelativeX( MxNumberTenths( 70.7 ) );
	object.setRelativeY( MxNumberTenths( 70.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"70.7\" default-y=\"70.7\" relative-x=\"70.7\" font-family=\"ABC\" color=\"#75767574\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 70.8 ) );
	object.setDefaultY( MxNumberTenths( 70.8 ) );
	object.setRelativeX( MxNumberTenths( 70.8 ) );
	object.setRelativeY( MxNumberTenths( 70.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#787776" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"70.8\" font-family=\"DEF\" color=\"#787776\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 70.9 ) );
	object.setDefaultY( MxNumberTenths( 70.9 ) );
	object.setRelativeX( MxNumberTenths( 70.9 ) );
	object.setRelativeY( MxNumberTenths( 70.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"70.9\" font-family=\"XYZ\" color=\"#797A7978\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 71 ) );
	object.setDefaultY( MxNumberTenths( 71 ) );
	object.setRelativeX( MxNumberTenths( 71 ) );
	object.setRelativeY( MxNumberTenths( 71 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter color=\"#7C7B7A\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 71.1 ) );
	object.setDefaultY( MxNumberTenths( 71.1 ) );
	object.setRelativeX( MxNumberTenths( 71.1 ) );
	object.setRelativeY( MxNumberTenths( 71.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"71.1\" default-y=\"71.1\" relative-x=\"71.1\" relative-y=\"71.1\" font-style=\"normal\" font-weight=\"normal\" color=\"#7D7E7D7C\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 71.2 ) );
	object.setDefaultY( MxNumberTenths( 71.2 ) );
	object.setRelativeX( MxNumberTenths( 71.2 ) );
	object.setRelativeY( MxNumberTenths( 71.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-y=\"71.2\" relative-x=\"71.2\" relative-y=\"71.2\" font-style=\"italic\" font-weight=\"bold\" color=\"#807F7E\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 71.3 ) );
	object.setDefaultY( MxNumberTenths( 71.3 ) );
	object.setRelativeX( MxNumberTenths( 71.3 ) );
	object.setRelativeY( MxNumberTenths( 71.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter default-x=\"71.3\" relative-x=\"71.3\" relative-y=\"71.3\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#81828180\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 71.4 ) );
	object.setDefaultY( MxNumberTenths( 71.4 ) );
	object.setRelativeX( MxNumberTenths( 71.4 ) );
	object.setRelativeY( MxNumberTenths( 71.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter relative-y=\"71.4\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">-1000</degree-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEsDegreeAlter )
{
	MxEsDegreeAlter object( -1000 );
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
	object.setIsPlusMinusPresent( false );
	object.setDefaultX( MxNumberTenths( 71.5 ) );
	object.setDefaultY( MxNumberTenths( 71.5 ) );
	object.setRelativeX( MxNumberTenths( 71.5 ) );
	object.setRelativeY( MxNumberTenths( 71.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setPlusMinus( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<degree-alter>-1000</degree-alter>";
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


