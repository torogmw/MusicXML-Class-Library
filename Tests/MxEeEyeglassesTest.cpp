/** *******************************************************
  * 
  * MxEeEyeglassesTest.cpp
  * Created: 2014-12-05 16:47:05
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeEyeglasses.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getHalign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	std::string expected = ( MxEnumValign(  ) ).toString();
	std::string actual = object.getValign().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	std::string expected = "MxEeEyeglasses";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	std::string expected = "eyeglasses";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	std::string expected = "The eyeglasses element specifies the eyeglasses symbol, common in commercial music.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setDefaultX0, MxEeEyeglasses )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeEyeglasses object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY1, MxEeEyeglasses )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeEyeglasses object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX2, MxEeEyeglasses )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeEyeglasses object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY3, MxEeEyeglasses )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeEyeglasses object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily4, MxEeEyeglasses )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEeEyeglasses object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle5, MxEeEyeglasses )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEeEyeglasses object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize6, MxEeEyeglasses )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEeEyeglasses object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight7, MxEeEyeglasses )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEeEyeglasses object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor8, MxEeEyeglasses )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEeEyeglasses object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setHalign9, MxEeEyeglasses )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxEeEyeglasses object;
	object.setHalign( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
	object.setHalign( value2 );
	expected = value2;
	actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
}
TEST( setValign10, MxEeEyeglasses )
{
	MxEnumValign value1( lexicon::enums::Valign::baseline );
	MxEnumValign value2( lexicon::enums::Valign::bottom );
	CHECK( ( value1 != value2 ) )
	MxEeEyeglasses object;
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

TEST( getIsDefaultXRequired0, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired1, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired2, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired3, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired4, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired5, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired6, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired7, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired8, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignRequired9, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsHalignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignRequired10, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsValignRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsDefaultXPresent0, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
TEST( getIsDefaultYPresent1, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
TEST( getIsRelativeXPresent2, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
TEST( getIsRelativeYPresent3, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
TEST( getIsFontFamilyPresent4, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
TEST( getIsFontStylePresent5, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
TEST( getIsFontSizePresent6, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
TEST( getIsFontWeightPresent7, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
TEST( getIsColorPresent8, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
TEST( getIsHalignPresent9, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
TEST( getIsValignPresent10, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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

TEST( getIsDefaultXDefaultDefined, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignDefaultDefined, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsHalignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignDefaultDefined, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	bool expected = false;
	bool actual = object.getIsValignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getDefaultXDefaultValue, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getHalignDefaultValue, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getHalignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValignDefaultValue, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	MxEnumValign expected;
	MxEnumValign actual = object.getValignDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeEyeglasses )
{
	MxEeEyeglasses object;
	std::string expected;
	std::string actual;
	object.setDefaultX( MxNumberTenths( 122.3 ) );
	object.setDefaultY( MxNumberTenths( 122.3 ) );
	object.setRelativeX( MxNumberTenths( 122.3 ) );
	object.setRelativeY( MxNumberTenths( 122.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
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
	expected = "<eyeglasses default-x=\"122.3\" default-y=\"122.3\" relative-x=\"122.3\" relative-y=\"122.3\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#797A7978\" halign=\"left\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 122.4 ) );
	object.setDefaultY( MxNumberTenths( 122.4 ) );
	object.setRelativeX( MxNumberTenths( 122.4 ) );
	object.setRelativeY( MxNumberTenths( 122.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"122.4\" relative-x=\"122.4\" relative-y=\"122.4\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#7C7B7A\" halign=\"center\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 122.5 ) );
	object.setDefaultY( MxNumberTenths( 122.5 ) );
	object.setRelativeX( MxNumberTenths( 122.5 ) );
	object.setRelativeY( MxNumberTenths( 122.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"122.5\" relative-x=\"122.5\" relative-y=\"122.5\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#7D7E7D7C\" halign=\"right\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 122.6 ) );
	object.setDefaultY( MxNumberTenths( 122.6 ) );
	object.setRelativeX( MxNumberTenths( 122.6 ) );
	object.setRelativeY( MxNumberTenths( 122.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses relative-y=\"122.6\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#807F7E\" halign=\"left\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 122.7 ) );
	object.setDefaultY( MxNumberTenths( 122.7 ) );
	object.setRelativeX( MxNumberTenths( 122.7 ) );
	object.setRelativeY( MxNumberTenths( 122.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"122.7\" default-y=\"122.7\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#81828180\" halign=\"center\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 122.8 ) );
	object.setDefaultY( MxNumberTenths( 122.8 ) );
	object.setRelativeX( MxNumberTenths( 122.8 ) );
	object.setRelativeY( MxNumberTenths( 122.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"122.8\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#848382\" halign=\"right\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 122.9 ) );
	object.setDefaultY( MxNumberTenths( 122.9 ) );
	object.setRelativeX( MxNumberTenths( 122.9 ) );
	object.setRelativeY( MxNumberTenths( 122.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"122.9\" relative-x=\"122.9\" font-size=\"1.1\" font-weight=\"bold\" color=\"#85868584\" halign=\"left\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 123 ) );
	object.setDefaultY( MxNumberTenths( 123 ) );
	object.setRelativeX( MxNumberTenths( 123 ) );
	object.setRelativeY( MxNumberTenths( 123 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses relative-x=\"123\" font-weight=\"normal\" color=\"#888786\" halign=\"center\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 123.1 ) );
	object.setDefaultY( MxNumberTenths( 123.1 ) );
	object.setRelativeX( MxNumberTenths( 123.1 ) );
	object.setRelativeY( MxNumberTenths( 123.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"123.1\" default-y=\"123.1\" relative-x=\"123.1\" relative-y=\"123.1\" color=\"#898A8988\" halign=\"right\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 123.2 ) );
	object.setDefaultY( MxNumberTenths( 123.2 ) );
	object.setRelativeX( MxNumberTenths( 123.2 ) );
	object.setRelativeY( MxNumberTenths( 123.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"123.2\" relative-y=\"123.2\" halign=\"left\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 123.3 ) );
	object.setDefaultY( MxNumberTenths( 123.3 ) );
	object.setRelativeX( MxNumberTenths( 123.3 ) );
	object.setRelativeY( MxNumberTenths( 123.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"123.3\" relative-y=\"123.3\" font-family=\"XYZ\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 123.4 ) );
	object.setDefaultY( MxNumberTenths( 123.4 ) );
	object.setRelativeX( MxNumberTenths( 123.4 ) );
	object.setRelativeY( MxNumberTenths( 123.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses relative-y=\"123.4\" font-family=\"ABC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 123.5 ) );
	object.setDefaultY( MxNumberTenths( 123.5 ) );
	object.setRelativeX( MxNumberTenths( 123.5 ) );
	object.setRelativeY( MxNumberTenths( 123.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"123.5\" default-y=\"123.5\" relative-x=\"123.5\" font-family=\"DEF\" font-style=\"italic\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 123.6 ) );
	object.setDefaultY( MxNumberTenths( 123.6 ) );
	object.setRelativeX( MxNumberTenths( 123.6 ) );
	object.setRelativeY( MxNumberTenths( 123.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"123.6\" relative-x=\"123.6\" font-family=\"XYZ\" font-style=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 123.7 ) );
	object.setDefaultY( MxNumberTenths( 123.7 ) );
	object.setRelativeX( MxNumberTenths( 123.7 ) );
	object.setRelativeY( MxNumberTenths( 123.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"123.7\" relative-x=\"123.7\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 123.8 ) );
	object.setDefaultY( MxNumberTenths( 123.8 ) );
	object.setRelativeX( MxNumberTenths( 123.8 ) );
	object.setRelativeY( MxNumberTenths( 123.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 123.9 ) );
	object.setDefaultY( MxNumberTenths( 123.9 ) );
	object.setRelativeX( MxNumberTenths( 123.9 ) );
	object.setRelativeY( MxNumberTenths( 123.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"123.9\" default-y=\"123.9\" relative-y=\"123.9\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 124 ) );
	object.setDefaultY( MxNumberTenths( 124 ) );
	object.setRelativeX( MxNumberTenths( 124 ) );
	object.setRelativeY( MxNumberTenths( 124 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"124\" relative-y=\"124\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 124.1 ) );
	object.setDefaultY( MxNumberTenths( 124.1 ) );
	object.setRelativeX( MxNumberTenths( 124.1 ) );
	object.setRelativeY( MxNumberTenths( 124.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"124.1\" relative-x=\"124.1\" relative-y=\"124.1\" font-size=\"1.1\" font-weight=\"bold\" color=\"#9D9E9D9C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 124.2 ) );
	object.setDefaultY( MxNumberTenths( 124.2 ) );
	object.setRelativeX( MxNumberTenths( 124.2 ) );
	object.setRelativeY( MxNumberTenths( 124.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses relative-x=\"124.2\" relative-y=\"124.2\" font-size=\"large\" font-weight=\"normal\" color=\"#A09F9E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 124.3 ) );
	object.setDefaultY( MxNumberTenths( 124.3 ) );
	object.setRelativeX( MxNumberTenths( 124.3 ) );
	object.setRelativeY( MxNumberTenths( 124.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"124.3\" default-y=\"124.3\" relative-x=\"124.3\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" color=\"#A1A2A1A0\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 124.4 ) );
	object.setDefaultY( MxNumberTenths( 124.4 ) );
	object.setRelativeX( MxNumberTenths( 124.4 ) );
	object.setRelativeY( MxNumberTenths( 124.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"124.4\" font-family=\"DEF\" font-weight=\"normal\" color=\"#A4A3A2\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 124.5 ) );
	object.setDefaultY( MxNumberTenths( 124.5 ) );
	object.setRelativeX( MxNumberTenths( 124.5 ) );
	object.setRelativeY( MxNumberTenths( 124.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"124.5\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#A5A6A5A4\" halign=\"center\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 124.6 ) );
	object.setDefaultY( MxNumberTenths( 124.6 ) );
	object.setRelativeX( MxNumberTenths( 124.6 ) );
	object.setRelativeY( MxNumberTenths( 124.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses font-family=\"ABC\" font-weight=\"normal\" color=\"#A8A7A6\" halign=\"right\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 124.7 ) );
	object.setDefaultY( MxNumberTenths( 124.7 ) );
	object.setRelativeX( MxNumberTenths( 124.7 ) );
	object.setRelativeY( MxNumberTenths( 124.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"124.7\" default-y=\"124.7\" relative-x=\"124.7\" relative-y=\"124.7\" font-family=\"DEF\" font-style=\"italic\" color=\"#A9AAA9A8\" halign=\"left\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 124.8 ) );
	object.setDefaultY( MxNumberTenths( 124.8 ) );
	object.setRelativeX( MxNumberTenths( 124.8 ) );
	object.setRelativeY( MxNumberTenths( 124.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"124.8\" relative-x=\"124.8\" relative-y=\"124.8\" font-style=\"normal\" color=\"#ACABAA\" halign=\"center\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 124.9 ) );
	object.setDefaultY( MxNumberTenths( 124.9 ) );
	object.setRelativeX( MxNumberTenths( 124.9 ) );
	object.setRelativeY( MxNumberTenths( 124.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"124.9\" relative-x=\"124.9\" relative-y=\"124.9\" font-style=\"italic\" color=\"#ADAEADAC\" halign=\"right\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 125 ) );
	object.setDefaultY( MxNumberTenths( 125 ) );
	object.setRelativeX( MxNumberTenths( 125 ) );
	object.setRelativeY( MxNumberTenths( 125 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses relative-y=\"125\" font-style=\"normal\" halign=\"left\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 125.1 ) );
	object.setDefaultY( MxNumberTenths( 125.1 ) );
	object.setRelativeX( MxNumberTenths( 125.1 ) );
	object.setRelativeY( MxNumberTenths( 125.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"125.1\" default-y=\"125.1\" font-style=\"italic\" font-size=\"1.1\" halign=\"center\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 125.2 ) );
	object.setDefaultY( MxNumberTenths( 125.2 ) );
	object.setRelativeX( MxNumberTenths( 125.2 ) );
	object.setRelativeY( MxNumberTenths( 125.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"125.2\" font-style=\"normal\" font-size=\"large\" halign=\"right\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 125.3 ) );
	object.setDefaultY( MxNumberTenths( 125.3 ) );
	object.setRelativeX( MxNumberTenths( 125.3 ) );
	object.setRelativeY( MxNumberTenths( 125.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"125.3\" relative-x=\"125.3\" font-family=\"DEF\" font-size=\"1.1\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 125.4 ) );
	object.setDefaultY( MxNumberTenths( 125.4 ) );
	object.setRelativeX( MxNumberTenths( 125.4 ) );
	object.setRelativeY( MxNumberTenths( 125.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses relative-x=\"125.4\" font-family=\"XYZ\" font-size=\"large\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 125.5 ) );
	object.setDefaultY( MxNumberTenths( 125.5 ) );
	object.setRelativeX( MxNumberTenths( 125.5 ) );
	object.setRelativeY( MxNumberTenths( 125.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"125.5\" default-y=\"125.5\" relative-x=\"125.5\" relative-y=\"125.5\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 125.6 ) );
	object.setDefaultY( MxNumberTenths( 125.6 ) );
	object.setRelativeX( MxNumberTenths( 125.6 ) );
	object.setRelativeY( MxNumberTenths( 125.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"125.6\" relative-y=\"125.6\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 125.7 ) );
	object.setDefaultY( MxNumberTenths( 125.7 ) );
	object.setRelativeX( MxNumberTenths( 125.7 ) );
	object.setRelativeY( MxNumberTenths( 125.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"125.7\" relative-y=\"125.7\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 125.8 ) );
	object.setDefaultY( MxNumberTenths( 125.8 ) );
	object.setRelativeX( MxNumberTenths( 125.8 ) );
	object.setRelativeY( MxNumberTenths( 125.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses relative-y=\"125.8\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 125.9 ) );
	object.setDefaultY( MxNumberTenths( 125.9 ) );
	object.setRelativeX( MxNumberTenths( 125.9 ) );
	object.setRelativeY( MxNumberTenths( 125.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"125.9\" default-y=\"125.9\" relative-x=\"125.9\" font-style=\"italic\" font-weight=\"bold\" color=\"#C1C2C1C0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 126 ) );
	object.setDefaultY( MxNumberTenths( 126 ) );
	object.setRelativeX( MxNumberTenths( 126 ) );
	object.setRelativeY( MxNumberTenths( 126 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"126\" relative-x=\"126\" font-style=\"normal\" font-weight=\"normal\" color=\"#C4C3C2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 126.1 ) );
	object.setDefaultY( MxNumberTenths( 126.1 ) );
	object.setRelativeX( MxNumberTenths( 126.1 ) );
	object.setRelativeY( MxNumberTenths( 126.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"126.1\" relative-x=\"126.1\" font-style=\"italic\" font-weight=\"bold\" color=\"#C5C6C5C4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 126.2 ) );
	object.setDefaultY( MxNumberTenths( 126.2 ) );
	object.setRelativeX( MxNumberTenths( 126.2 ) );
	object.setRelativeY( MxNumberTenths( 126.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses font-style=\"normal\" font-weight=\"normal\" color=\"#C8C7C6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 126.3 ) );
	object.setDefaultY( MxNumberTenths( 126.3 ) );
	object.setRelativeX( MxNumberTenths( 126.3 ) );
	object.setRelativeY( MxNumberTenths( 126.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"126.3\" default-y=\"126.3\" relative-y=\"126.3\" font-family=\"XYZ\" font-style=\"italic\" color=\"#C9CAC9C8\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 126.4 ) );
	object.setDefaultY( MxNumberTenths( 126.4 ) );
	object.setRelativeX( MxNumberTenths( 126.4 ) );
	object.setRelativeY( MxNumberTenths( 126.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"126.4\" relative-y=\"126.4\" font-family=\"ABC\" font-style=\"normal\" color=\"#CCCBCA\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 126.5 ) );
	object.setDefaultY( MxNumberTenths( 126.5 ) );
	object.setRelativeX( MxNumberTenths( 126.5 ) );
	object.setRelativeY( MxNumberTenths( 126.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"126.5\" relative-x=\"126.5\" relative-y=\"126.5\" font-family=\"DEF\" font-size=\"1.1\" color=\"#CDCECDCC\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 126.6 ) );
	object.setDefaultY( MxNumberTenths( 126.6 ) );
	object.setRelativeX( MxNumberTenths( 126.6 ) );
	object.setRelativeY( MxNumberTenths( 126.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses relative-x=\"126.6\" relative-y=\"126.6\" font-family=\"XYZ\" font-size=\"large\" color=\"#D0CFCE\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 126.7 ) );
	object.setDefaultY( MxNumberTenths( 126.7 ) );
	object.setRelativeX( MxNumberTenths( 126.7 ) );
	object.setRelativeY( MxNumberTenths( 126.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"126.7\" default-y=\"126.7\" relative-x=\"126.7\" font-family=\"ABC\" font-size=\"1.1\" color=\"#D1D2D1D0\" halign=\"right\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 126.8 ) );
	object.setDefaultY( MxNumberTenths( 126.8 ) );
	object.setRelativeX( MxNumberTenths( 126.8 ) );
	object.setRelativeY( MxNumberTenths( 126.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"126.8\" font-size=\"large\" halign=\"left\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 126.9 ) );
	object.setDefaultY( MxNumberTenths( 126.9 ) );
	object.setRelativeX( MxNumberTenths( 126.9 ) );
	object.setRelativeY( MxNumberTenths( 126.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"126.9\" font-size=\"1.1\" halign=\"center\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 127 ) );
	object.setDefaultY( MxNumberTenths( 127 ) );
	object.setRelativeX( MxNumberTenths( 127 ) );
	object.setRelativeY( MxNumberTenths( 127 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses font-size=\"large\" halign=\"right\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 127.1 ) );
	object.setDefaultY( MxNumberTenths( 127.1 ) );
	object.setRelativeX( MxNumberTenths( 127.1 ) );
	object.setRelativeY( MxNumberTenths( 127.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"127.1\" default-y=\"127.1\" relative-x=\"127.1\" relative-y=\"127.1\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" halign=\"left\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 127.2 ) );
	object.setDefaultY( MxNumberTenths( 127.2 ) );
	object.setRelativeX( MxNumberTenths( 127.2 ) );
	object.setRelativeY( MxNumberTenths( 127.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"127.2\" relative-x=\"127.2\" relative-y=\"127.2\" font-style=\"normal\" font-weight=\"normal\" halign=\"center\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 127.3 ) );
	object.setDefaultY( MxNumberTenths( 127.3 ) );
	object.setRelativeX( MxNumberTenths( 127.3 ) );
	object.setRelativeY( MxNumberTenths( 127.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"127.3\" relative-x=\"127.3\" relative-y=\"127.3\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 127.4 ) );
	object.setDefaultY( MxNumberTenths( 127.4 ) );
	object.setRelativeX( MxNumberTenths( 127.4 ) );
	object.setRelativeY( MxNumberTenths( 127.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses relative-y=\"127.4\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 127.5 ) );
	object.setDefaultY( MxNumberTenths( 127.5 ) );
	object.setRelativeX( MxNumberTenths( 127.5 ) );
	object.setRelativeY( MxNumberTenths( 127.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"127.5\" default-y=\"127.5\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 127.6 ) );
	object.setDefaultY( MxNumberTenths( 127.6 ) );
	object.setRelativeX( MxNumberTenths( 127.6 ) );
	object.setRelativeY( MxNumberTenths( 127.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"127.6\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 127.7 ) );
	object.setDefaultY( MxNumberTenths( 127.7 ) );
	object.setRelativeX( MxNumberTenths( 127.7 ) );
	object.setRelativeY( MxNumberTenths( 127.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"127.7\" relative-x=\"127.7\" font-family=\"DEF\" font-weight=\"bold\" color=\"#E5E6E5E4\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 127.8 ) );
	object.setDefaultY( MxNumberTenths( 127.8 ) );
	object.setRelativeX( MxNumberTenths( 127.8 ) );
	object.setRelativeY( MxNumberTenths( 127.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses relative-x=\"127.8\" font-weight=\"normal\" color=\"#E8E7E6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 127.9 ) );
	object.setDefaultY( MxNumberTenths( 127.9 ) );
	object.setRelativeX( MxNumberTenths( 127.9 ) );
	object.setRelativeY( MxNumberTenths( 127.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"127.9\" default-y=\"127.9\" relative-x=\"127.9\" relative-y=\"127.9\" font-size=\"1.1\" color=\"#E9EAE9E8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 128 ) );
	object.setDefaultY( MxNumberTenths( 128 ) );
	object.setRelativeX( MxNumberTenths( 128 ) );
	object.setRelativeY( MxNumberTenths( 128 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"128\" relative-y=\"128\" font-size=\"large\" color=\"#ECEBEA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 128.1 ) );
	object.setDefaultY( MxNumberTenths( 128.1 ) );
	object.setRelativeX( MxNumberTenths( 128.1 ) );
	object.setRelativeY( MxNumberTenths( 128.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"128.1\" relative-y=\"128.1\" font-size=\"1.1\" color=\"#EDEEEDEC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 128.2 ) );
	object.setDefaultY( MxNumberTenths( 128.2 ) );
	object.setRelativeX( MxNumberTenths( 128.2 ) );
	object.setRelativeY( MxNumberTenths( 128.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses relative-y=\"128.2\" font-size=\"large\" color=\"#F0EFEE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 128.3 ) );
	object.setDefaultY( MxNumberTenths( 128.3 ) );
	object.setRelativeX( MxNumberTenths( 128.3 ) );
	object.setRelativeY( MxNumberTenths( 128.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"128.3\" default-y=\"128.3\" relative-x=\"128.3\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#F1F2F1F0\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 128.4 ) );
	object.setDefaultY( MxNumberTenths( 128.4 ) );
	object.setRelativeX( MxNumberTenths( 128.4 ) );
	object.setRelativeY( MxNumberTenths( 128.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"128.4\" relative-x=\"128.4\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#F4F3F2\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 128.5 ) );
	object.setDefaultY( MxNumberTenths( 128.5 ) );
	object.setRelativeX( MxNumberTenths( 128.5 ) );
	object.setRelativeY( MxNumberTenths( 128.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"128.5\" relative-x=\"128.5\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#F5F6F5F4\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 128.6 ) );
	object.setDefaultY( MxNumberTenths( 128.6 ) );
	object.setRelativeX( MxNumberTenths( 128.6 ) );
	object.setRelativeY( MxNumberTenths( 128.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses font-family=\"DEF\" font-style=\"normal\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 128.7 ) );
	object.setDefaultY( MxNumberTenths( 128.7 ) );
	object.setRelativeX( MxNumberTenths( 128.7 ) );
	object.setRelativeY( MxNumberTenths( 128.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"128.7\" default-y=\"128.7\" relative-y=\"128.7\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 128.8 ) );
	object.setDefaultY( MxNumberTenths( 128.8 ) );
	object.setRelativeX( MxNumberTenths( 128.8 ) );
	object.setRelativeY( MxNumberTenths( 128.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"128.8\" relative-y=\"128.8\" font-style=\"normal\" font-weight=\"normal\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 128.9 ) );
	object.setDefaultY( MxNumberTenths( 128.9 ) );
	object.setRelativeX( MxNumberTenths( 128.9 ) );
	object.setRelativeY( MxNumberTenths( 128.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"128.9\" relative-x=\"128.9\" relative-y=\"128.9\" font-weight=\"bold\" halign=\"left\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 129 ) );
	object.setDefaultY( MxNumberTenths( 129 ) );
	object.setRelativeX( MxNumberTenths( 129 ) );
	object.setRelativeY( MxNumberTenths( 129 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses relative-x=\"129\" relative-y=\"129\" font-weight=\"normal\" halign=\"center\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 129.1 ) );
	object.setDefaultY( MxNumberTenths( 129.1 ) );
	object.setRelativeX( MxNumberTenths( 129.1 ) );
	object.setRelativeY( MxNumberTenths( 129.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"129.1\" default-y=\"129.1\" relative-x=\"129.1\" font-weight=\"bold\" halign=\"right\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 129.2 ) );
	object.setDefaultY( MxNumberTenths( 129.2 ) );
	object.setRelativeX( MxNumberTenths( 129.2 ) );
	object.setRelativeY( MxNumberTenths( 129.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#040302" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"129.2\" font-weight=\"normal\" halign=\"left\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 129.3 ) );
	object.setDefaultY( MxNumberTenths( 129.3 ) );
	object.setRelativeX( MxNumberTenths( 129.3 ) );
	object.setRelativeY( MxNumberTenths( 129.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"129.3\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 129.4 ) );
	object.setDefaultY( MxNumberTenths( 129.4 ) );
	object.setRelativeX( MxNumberTenths( 129.4 ) );
	object.setRelativeY( MxNumberTenths( 129.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#080706" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 129.5 ) );
	object.setDefaultY( MxNumberTenths( 129.5 ) );
	object.setRelativeX( MxNumberTenths( 129.5 ) );
	object.setRelativeY( MxNumberTenths( 129.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"129.5\" default-y=\"129.5\" relative-x=\"129.5\" relative-y=\"129.5\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#090A0908\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 129.6 ) );
	object.setDefaultY( MxNumberTenths( 129.6 ) );
	object.setRelativeX( MxNumberTenths( 129.6 ) );
	object.setRelativeY( MxNumberTenths( 129.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"129.6\" relative-x=\"129.6\" relative-y=\"129.6\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#0C0B0A\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 129.7 ) );
	object.setDefaultY( MxNumberTenths( 129.7 ) );
	object.setRelativeX( MxNumberTenths( 129.7 ) );
	object.setRelativeY( MxNumberTenths( 129.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"129.7\" relative-x=\"129.7\" relative-y=\"129.7\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#0D0E0D0C\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 129.8 ) );
	object.setDefaultY( MxNumberTenths( 129.8 ) );
	object.setRelativeX( MxNumberTenths( 129.8 ) );
	object.setRelativeY( MxNumberTenths( 129.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses relative-y=\"129.8\" font-style=\"normal\" font-size=\"large\" color=\"#100F0E\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 129.9 ) );
	object.setDefaultY( MxNumberTenths( 129.9 ) );
	object.setRelativeX( MxNumberTenths( 129.9 ) );
	object.setRelativeY( MxNumberTenths( 129.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"129.9\" default-y=\"129.9\" font-style=\"italic\" font-size=\"1.1\" color=\"#11121110\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 130 ) );
	object.setDefaultY( MxNumberTenths( 130 ) );
	object.setRelativeX( MxNumberTenths( 130 ) );
	object.setRelativeY( MxNumberTenths( 130 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#141312" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"130\" font-style=\"normal\" color=\"#141312\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 130.1 ) );
	object.setDefaultY( MxNumberTenths( 130.1 ) );
	object.setRelativeX( MxNumberTenths( 130.1 ) );
	object.setRelativeY( MxNumberTenths( 130.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"130.1\" relative-x=\"130.1\" color=\"#15161514\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 130.2 ) );
	object.setDefaultY( MxNumberTenths( 130.2 ) );
	object.setRelativeX( MxNumberTenths( 130.2 ) );
	object.setRelativeY( MxNumberTenths( 130.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#181716" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses relative-x=\"130.2\" color=\"#181716\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 130.3 ) );
	object.setDefaultY( MxNumberTenths( 130.3 ) );
	object.setRelativeX( MxNumberTenths( 130.3 ) );
	object.setRelativeY( MxNumberTenths( 130.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"130.3\" default-y=\"130.3\" relative-x=\"130.3\" relative-y=\"130.3\" font-family=\"ABC\" font-weight=\"bold\" color=\"#191A1918\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 130.4 ) );
	object.setDefaultY( MxNumberTenths( 130.4 ) );
	object.setRelativeX( MxNumberTenths( 130.4 ) );
	object.setRelativeY( MxNumberTenths( 130.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"130.4\" relative-y=\"130.4\" font-family=\"DEF\" font-weight=\"normal\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 130.5 ) );
	object.setDefaultY( MxNumberTenths( 130.5 ) );
	object.setRelativeX( MxNumberTenths( 130.5 ) );
	object.setRelativeY( MxNumberTenths( 130.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"130.5\" relative-y=\"130.5\" font-family=\"XYZ\" font-weight=\"bold\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 130.6 ) );
	object.setDefaultY( MxNumberTenths( 130.6 ) );
	object.setRelativeX( MxNumberTenths( 130.6 ) );
	object.setRelativeY( MxNumberTenths( 130.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses relative-y=\"130.6\" font-family=\"ABC\" font-weight=\"normal\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 130.7 ) );
	object.setDefaultY( MxNumberTenths( 130.7 ) );
	object.setRelativeX( MxNumberTenths( 130.7 ) );
	object.setRelativeY( MxNumberTenths( 130.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"130.7\" default-y=\"130.7\" relative-x=\"130.7\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 130.8 ) );
	object.setDefaultY( MxNumberTenths( 130.8 ) );
	object.setRelativeX( MxNumberTenths( 130.8 ) );
	object.setRelativeY( MxNumberTenths( 130.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#242322" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"130.8\" relative-x=\"130.8\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 130.9 ) );
	object.setDefaultY( MxNumberTenths( 130.9 ) );
	object.setRelativeX( MxNumberTenths( 130.9 ) );
	object.setRelativeY( MxNumberTenths( 130.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"130.9\" relative-x=\"130.9\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 131 ) );
	object.setDefaultY( MxNumberTenths( 131 ) );
	object.setRelativeX( MxNumberTenths( 131 ) );
	object.setRelativeY( MxNumberTenths( 131 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#282726" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 131.1 ) );
	object.setDefaultY( MxNumberTenths( 131.1 ) );
	object.setRelativeX( MxNumberTenths( 131.1 ) );
	object.setRelativeY( MxNumberTenths( 131.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"131.1\" default-y=\"131.1\" relative-y=\"131.1\" font-style=\"italic\" font-size=\"1.1\" halign=\"center\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 131.2 ) );
	object.setDefaultY( MxNumberTenths( 131.2 ) );
	object.setRelativeX( MxNumberTenths( 131.2 ) );
	object.setRelativeY( MxNumberTenths( 131.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"131.2\" relative-y=\"131.2\" font-style=\"normal\" font-size=\"large\" halign=\"right\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 131.3 ) );
	object.setDefaultY( MxNumberTenths( 131.3 ) );
	object.setRelativeX( MxNumberTenths( 131.3 ) );
	object.setRelativeY( MxNumberTenths( 131.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"131.3\" relative-x=\"131.3\" relative-y=\"131.3\" font-family=\"DEF\" font-size=\"1.1\" color=\"#2D2E2D2C\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 131.4 ) );
	object.setDefaultY( MxNumberTenths( 131.4 ) );
	object.setRelativeX( MxNumberTenths( 131.4 ) );
	object.setRelativeY( MxNumberTenths( 131.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses relative-x=\"131.4\" relative-y=\"131.4\" font-family=\"XYZ\" color=\"#302F2E\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 131.5 ) );
	object.setDefaultY( MxNumberTenths( 131.5 ) );
	object.setRelativeX( MxNumberTenths( 131.5 ) );
	object.setRelativeY( MxNumberTenths( 131.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"131.5\" default-y=\"131.5\" relative-x=\"131.5\" font-family=\"ABC\" color=\"#31323130\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 131.6 ) );
	object.setDefaultY( MxNumberTenths( 131.6 ) );
	object.setRelativeX( MxNumberTenths( 131.6 ) );
	object.setRelativeY( MxNumberTenths( 131.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#343332" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"131.6\" font-family=\"DEF\" color=\"#343332\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 131.7 ) );
	object.setDefaultY( MxNumberTenths( 131.7 ) );
	object.setRelativeX( MxNumberTenths( 131.7 ) );
	object.setRelativeY( MxNumberTenths( 131.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"131.7\" font-family=\"XYZ\" color=\"#35363534\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 131.8 ) );
	object.setDefaultY( MxNumberTenths( 131.8 ) );
	object.setRelativeX( MxNumberTenths( 131.8 ) );
	object.setRelativeY( MxNumberTenths( 131.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#383736" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses color=\"#383736\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 131.9 ) );
	object.setDefaultY( MxNumberTenths( 131.9 ) );
	object.setRelativeX( MxNumberTenths( 131.9 ) );
	object.setRelativeY( MxNumberTenths( 131.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses default-x=\"131.9\" default-y=\"131.9\" relative-x=\"131.9\" relative-y=\"131.9\" font-style=\"italic\" font-weight=\"bold\" color=\"#393A3938\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 132 ) );
	object.setDefaultY( MxNumberTenths( 132 ) );
	object.setRelativeX( MxNumberTenths( 132 ) );
	object.setRelativeY( MxNumberTenths( 132 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<eyeglasses default-y=\"132\" relative-x=\"132\" relative-y=\"132\" font-style=\"normal\" font-weight=\"normal\" color=\"#3C3B3A\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setDefaultX( MxNumberTenths( 132.1 ) );
	object.setDefaultY( MxNumberTenths( 132.1 ) );
	object.setRelativeX( MxNumberTenths( 132.1 ) );
	object.setRelativeY( MxNumberTenths( 132.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<eyeglasses default-x=\"132.1\" relative-x=\"132.1\" relative-y=\"132.1\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#3D3E3D3C\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 132.2 ) );
	object.setDefaultY( MxNumberTenths( 132.2 ) );
	object.setRelativeX( MxNumberTenths( 132.2 ) );
	object.setRelativeY( MxNumberTenths( 132.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<eyeglasses relative-y=\"132.2\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEeEyeglasses )
{
	MxEeEyeglasses object;
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
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setDefaultX( MxNumberTenths( 132.3 ) );
	object.setDefaultY( MxNumberTenths( 132.3 ) );
	object.setRelativeX( MxNumberTenths( 132.3 ) );
	object.setRelativeY( MxNumberTenths( 132.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<eyeglasses/>";
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


