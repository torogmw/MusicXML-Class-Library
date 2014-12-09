/** *******************************************************
  * 
  * MxEeStaccatoTest.cpp
  * Created: 2014-12-05 16:47:05
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeStaccato.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeStaccato )
{
	MxEeStaccato object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEeStaccato )
{
	MxEeStaccato object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEeStaccato )
{
	MxEeStaccato object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEeStaccato )
{
	MxEeStaccato object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEeStaccato )
{
	MxEeStaccato object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEeStaccato )
{
	MxEeStaccato object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEeStaccato )
{
	MxEeStaccato object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEeStaccato )
{
	MxEeStaccato object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEeStaccato )
{
	MxEeStaccato object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEeStaccato )
{
	MxEeStaccato object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEeStaccato )
{
	MxEeStaccato object;
	std::string expected = ( MxEnumAboveBelow(  ) ).toString();
	std::string actual = object.getPlacement().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeStaccato )
{
	MxEeStaccato object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeStaccato )
{
	MxEeStaccato object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeStaccato )
{
	MxEeStaccato object;
	std::string expected = "MxEeStaccato";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeStaccato )
{
	MxEeStaccato object;
	std::string expected = "staccato";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeStaccato )
{
	MxEeStaccato object;
	std::string expected = "The staccato element is used for a dot articulation, as opposed to a stroke or a wedge.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setDefaultX0, MxEeStaccato )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeStaccato object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY1, MxEeStaccato )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeStaccato object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX2, MxEeStaccato )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeStaccato object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY3, MxEeStaccato )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeStaccato object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily4, MxEeStaccato )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEeStaccato object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle5, MxEeStaccato )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEeStaccato object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize6, MxEeStaccato )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEeStaccato object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight7, MxEeStaccato )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEeStaccato object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor8, MxEeStaccato )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEeStaccato object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setPlacement9, MxEeStaccato )
{
	MxEnumAboveBelow value1( lexicon::enums::AboveBelow::below );
	MxEnumAboveBelow value2( lexicon::enums::AboveBelow::above );
	CHECK( ( value1 != value2 ) )
	MxEeStaccato object;
	object.setPlacement( value1 );
	MxEnumAboveBelow expected = value1;
	MxEnumAboveBelow actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
	object.setPlacement( value2 );
	expected = value2;
	actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsDefaultXRequired0, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired1, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired2, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired3, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired4, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired5, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired6, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired7, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired8, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementRequired9, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsPlacementRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsDefaultXPresent0, MxEeStaccato )
{
	MxEeStaccato object;
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
TEST( getIsDefaultYPresent1, MxEeStaccato )
{
	MxEeStaccato object;
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
TEST( getIsRelativeXPresent2, MxEeStaccato )
{
	MxEeStaccato object;
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
TEST( getIsRelativeYPresent3, MxEeStaccato )
{
	MxEeStaccato object;
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
TEST( getIsFontFamilyPresent4, MxEeStaccato )
{
	MxEeStaccato object;
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
TEST( getIsFontStylePresent5, MxEeStaccato )
{
	MxEeStaccato object;
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
TEST( getIsFontSizePresent6, MxEeStaccato )
{
	MxEeStaccato object;
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
TEST( getIsFontWeightPresent7, MxEeStaccato )
{
	MxEeStaccato object;
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
TEST( getIsColorPresent8, MxEeStaccato )
{
	MxEeStaccato object;
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
TEST( getIsPlacementPresent9, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsPlacementPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPlacementPresent( true );
	expected = true;
	actual = object.getIsPlacementPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPlacementPresent( false );
	expected = false;
	actual = object.getIsPlacementPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsDefaultXDefaultDefined, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementDefaultDefined, MxEeStaccato )
{
	MxEeStaccato object;
	bool expected = false;
	bool actual = object.getIsPlacementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getDefaultXDefaultValue, MxEeStaccato )
{
	MxEeStaccato object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEeStaccato )
{
	MxEeStaccato object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEeStaccato )
{
	MxEeStaccato object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEeStaccato )
{
	MxEeStaccato object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEeStaccato )
{
	MxEeStaccato object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEeStaccato )
{
	MxEeStaccato object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEeStaccato )
{
	MxEeStaccato object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEeStaccato )
{
	MxEeStaccato object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEeStaccato )
{
	MxEeStaccato object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPlacementDefaultValue, MxEeStaccato )
{
	MxEeStaccato object;
	MxEnumAboveBelow expected;
	MxEnumAboveBelow actual = object.getPlacementDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeStaccato )
{
	MxEeStaccato object;
	std::string expected;
	std::string actual;
	object.setDefaultX( MxNumberTenths( 182.8 ) );
	object.setDefaultY( MxNumberTenths( 182.8 ) );
	object.setRelativeX( MxNumberTenths( 182.8 ) );
	object.setRelativeY( MxNumberTenths( 182.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	expected = "<staccato default-x=\"182.8\" default-y=\"182.8\" relative-x=\"182.8\" relative-y=\"182.8\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#747372\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 182.9 ) );
	object.setDefaultY( MxNumberTenths( 182.9 ) );
	object.setRelativeX( MxNumberTenths( 182.9 ) );
	object.setRelativeY( MxNumberTenths( 182.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"182.9\" relative-x=\"182.9\" relative-y=\"182.9\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#75767574\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 183 ) );
	object.setDefaultY( MxNumberTenths( 183 ) );
	object.setRelativeX( MxNumberTenths( 183 ) );
	object.setRelativeY( MxNumberTenths( 183 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"183\" relative-x=\"183\" relative-y=\"183\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#787776\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 183.1 ) );
	object.setDefaultY( MxNumberTenths( 183.1 ) );
	object.setRelativeX( MxNumberTenths( 183.1 ) );
	object.setRelativeY( MxNumberTenths( 183.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato relative-y=\"183.1\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#797A7978\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 183.2 ) );
	object.setDefaultY( MxNumberTenths( 183.2 ) );
	object.setRelativeX( MxNumberTenths( 183.2 ) );
	object.setRelativeY( MxNumberTenths( 183.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"183.2\" default-y=\"183.2\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#7C7B7A\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 183.3 ) );
	object.setDefaultY( MxNumberTenths( 183.3 ) );
	object.setRelativeX( MxNumberTenths( 183.3 ) );
	object.setRelativeY( MxNumberTenths( 183.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"183.3\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#7D7E7D7C\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 183.4 ) );
	object.setDefaultY( MxNumberTenths( 183.4 ) );
	object.setRelativeX( MxNumberTenths( 183.4 ) );
	object.setRelativeY( MxNumberTenths( 183.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"183.4\" relative-x=\"183.4\" font-size=\"large\" font-weight=\"normal\" color=\"#807F7E\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 183.5 ) );
	object.setDefaultY( MxNumberTenths( 183.5 ) );
	object.setRelativeX( MxNumberTenths( 183.5 ) );
	object.setRelativeY( MxNumberTenths( 183.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato relative-x=\"183.5\" font-weight=\"bold\" color=\"#81828180\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 183.6 ) );
	object.setDefaultY( MxNumberTenths( 183.6 ) );
	object.setRelativeX( MxNumberTenths( 183.6 ) );
	object.setRelativeY( MxNumberTenths( 183.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"183.6\" default-y=\"183.6\" relative-x=\"183.6\" relative-y=\"183.6\" color=\"#848382\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 183.7 ) );
	object.setDefaultY( MxNumberTenths( 183.7 ) );
	object.setRelativeX( MxNumberTenths( 183.7 ) );
	object.setRelativeY( MxNumberTenths( 183.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"183.7\" relative-y=\"183.7\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 183.8 ) );
	object.setDefaultY( MxNumberTenths( 183.8 ) );
	object.setRelativeX( MxNumberTenths( 183.8 ) );
	object.setRelativeY( MxNumberTenths( 183.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"183.8\" relative-y=\"183.8\" font-family=\"ABC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 183.9 ) );
	object.setDefaultY( MxNumberTenths( 183.9 ) );
	object.setRelativeX( MxNumberTenths( 183.9 ) );
	object.setRelativeY( MxNumberTenths( 183.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato relative-y=\"183.9\" font-family=\"DEF\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 184 ) );
	object.setDefaultY( MxNumberTenths( 184 ) );
	object.setRelativeX( MxNumberTenths( 184 ) );
	object.setRelativeY( MxNumberTenths( 184 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"184\" default-y=\"184\" relative-x=\"184\" font-family=\"XYZ\" font-style=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 184.1 ) );
	object.setDefaultY( MxNumberTenths( 184.1 ) );
	object.setRelativeX( MxNumberTenths( 184.1 ) );
	object.setRelativeY( MxNumberTenths( 184.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"184.1\" relative-x=\"184.1\" font-family=\"ABC\" font-style=\"italic\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 184.2 ) );
	object.setDefaultY( MxNumberTenths( 184.2 ) );
	object.setRelativeX( MxNumberTenths( 184.2 ) );
	object.setRelativeY( MxNumberTenths( 184.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"184.2\" relative-x=\"184.2\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 184.3 ) );
	object.setDefaultY( MxNumberTenths( 184.3 ) );
	object.setRelativeX( MxNumberTenths( 184.3 ) );
	object.setRelativeY( MxNumberTenths( 184.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 184.4 ) );
	object.setDefaultY( MxNumberTenths( 184.4 ) );
	object.setRelativeX( MxNumberTenths( 184.4 ) );
	object.setRelativeY( MxNumberTenths( 184.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"184.4\" default-y=\"184.4\" relative-y=\"184.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 184.5 ) );
	object.setDefaultY( MxNumberTenths( 184.5 ) );
	object.setRelativeX( MxNumberTenths( 184.5 ) );
	object.setRelativeY( MxNumberTenths( 184.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"184.5\" relative-y=\"184.5\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 184.6 ) );
	object.setDefaultY( MxNumberTenths( 184.6 ) );
	object.setRelativeX( MxNumberTenths( 184.6 ) );
	object.setRelativeY( MxNumberTenths( 184.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"184.6\" relative-x=\"184.6\" relative-y=\"184.6\" font-size=\"large\" font-weight=\"normal\" color=\"#989796\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 184.7 ) );
	object.setDefaultY( MxNumberTenths( 184.7 ) );
	object.setRelativeX( MxNumberTenths( 184.7 ) );
	object.setRelativeY( MxNumberTenths( 184.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato relative-x=\"184.7\" relative-y=\"184.7\" font-size=\"1.1\" font-weight=\"bold\" color=\"#999A9998\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 184.8 ) );
	object.setDefaultY( MxNumberTenths( 184.8 ) );
	object.setRelativeX( MxNumberTenths( 184.8 ) );
	object.setRelativeY( MxNumberTenths( 184.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"184.8\" default-y=\"184.8\" relative-x=\"184.8\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" color=\"#9C9B9A\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 184.9 ) );
	object.setDefaultY( MxNumberTenths( 184.9 ) );
	object.setRelativeX( MxNumberTenths( 184.9 ) );
	object.setRelativeY( MxNumberTenths( 184.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"184.9\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#9D9E9D9C\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 185 ) );
	object.setDefaultY( MxNumberTenths( 185 ) );
	object.setRelativeX( MxNumberTenths( 185 ) );
	object.setRelativeY( MxNumberTenths( 185 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"185\" font-family=\"ABC\" font-weight=\"normal\" color=\"#A09F9E\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 185.1 ) );
	object.setDefaultY( MxNumberTenths( 185.1 ) );
	object.setRelativeX( MxNumberTenths( 185.1 ) );
	object.setRelativeY( MxNumberTenths( 185.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato font-family=\"DEF\" font-weight=\"bold\" color=\"#A1A2A1A0\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 185.2 ) );
	object.setDefaultY( MxNumberTenths( 185.2 ) );
	object.setRelativeX( MxNumberTenths( 185.2 ) );
	object.setRelativeY( MxNumberTenths( 185.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"185.2\" default-y=\"185.2\" relative-x=\"185.2\" relative-y=\"185.2\" font-family=\"XYZ\" font-style=\"normal\" color=\"#A4A3A2\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 185.3 ) );
	object.setDefaultY( MxNumberTenths( 185.3 ) );
	object.setRelativeX( MxNumberTenths( 185.3 ) );
	object.setRelativeY( MxNumberTenths( 185.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"185.3\" relative-x=\"185.3\" relative-y=\"185.3\" font-style=\"italic\" color=\"#A5A6A5A4\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 185.4 ) );
	object.setDefaultY( MxNumberTenths( 185.4 ) );
	object.setRelativeX( MxNumberTenths( 185.4 ) );
	object.setRelativeY( MxNumberTenths( 185.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"185.4\" relative-x=\"185.4\" relative-y=\"185.4\" font-style=\"normal\" color=\"#A8A7A6\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 185.5 ) );
	object.setDefaultY( MxNumberTenths( 185.5 ) );
	object.setRelativeX( MxNumberTenths( 185.5 ) );
	object.setRelativeY( MxNumberTenths( 185.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato relative-y=\"185.5\" font-style=\"italic\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 185.6 ) );
	object.setDefaultY( MxNumberTenths( 185.6 ) );
	object.setRelativeX( MxNumberTenths( 185.6 ) );
	object.setRelativeY( MxNumberTenths( 185.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"185.6\" default-y=\"185.6\" font-style=\"normal\" font-size=\"large\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 185.7 ) );
	object.setDefaultY( MxNumberTenths( 185.7 ) );
	object.setRelativeX( MxNumberTenths( 185.7 ) );
	object.setRelativeY( MxNumberTenths( 185.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"185.7\" font-style=\"italic\" font-size=\"1.1\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 185.8 ) );
	object.setDefaultY( MxNumberTenths( 185.8 ) );
	object.setRelativeX( MxNumberTenths( 185.8 ) );
	object.setRelativeY( MxNumberTenths( 185.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"185.8\" relative-x=\"185.8\" font-family=\"XYZ\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 185.9 ) );
	object.setDefaultY( MxNumberTenths( 185.9 ) );
	object.setRelativeX( MxNumberTenths( 185.9 ) );
	object.setRelativeY( MxNumberTenths( 185.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato relative-x=\"185.9\" font-family=\"ABC\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 186 ) );
	object.setDefaultY( MxNumberTenths( 186 ) );
	object.setRelativeX( MxNumberTenths( 186 ) );
	object.setRelativeY( MxNumberTenths( 186 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"186\" default-y=\"186\" relative-x=\"186\" relative-y=\"186\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 186.1 ) );
	object.setDefaultY( MxNumberTenths( 186.1 ) );
	object.setRelativeX( MxNumberTenths( 186.1 ) );
	object.setRelativeY( MxNumberTenths( 186.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"186.1\" relative-y=\"186.1\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 186.2 ) );
	object.setDefaultY( MxNumberTenths( 186.2 ) );
	object.setRelativeX( MxNumberTenths( 186.2 ) );
	object.setRelativeY( MxNumberTenths( 186.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"186.2\" relative-y=\"186.2\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 186.3 ) );
	object.setDefaultY( MxNumberTenths( 186.3 ) );
	object.setRelativeX( MxNumberTenths( 186.3 ) );
	object.setRelativeY( MxNumberTenths( 186.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato relative-y=\"186.3\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 186.4 ) );
	object.setDefaultY( MxNumberTenths( 186.4 ) );
	object.setRelativeX( MxNumberTenths( 186.4 ) );
	object.setRelativeY( MxNumberTenths( 186.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"186.4\" default-y=\"186.4\" relative-x=\"186.4\" font-style=\"normal\" font-weight=\"normal\" color=\"#BCBBBA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 186.5 ) );
	object.setDefaultY( MxNumberTenths( 186.5 ) );
	object.setRelativeX( MxNumberTenths( 186.5 ) );
	object.setRelativeY( MxNumberTenths( 186.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"186.5\" relative-x=\"186.5\" font-style=\"italic\" font-weight=\"bold\" color=\"#BDBEBDBC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 186.6 ) );
	object.setDefaultY( MxNumberTenths( 186.6 ) );
	object.setRelativeX( MxNumberTenths( 186.6 ) );
	object.setRelativeY( MxNumberTenths( 186.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"186.6\" relative-x=\"186.6\" font-style=\"normal\" font-weight=\"normal\" color=\"#C0BFBE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 186.7 ) );
	object.setDefaultY( MxNumberTenths( 186.7 ) );
	object.setRelativeX( MxNumberTenths( 186.7 ) );
	object.setRelativeY( MxNumberTenths( 186.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato font-style=\"italic\" font-weight=\"bold\" color=\"#C1C2C1C0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 186.8 ) );
	object.setDefaultY( MxNumberTenths( 186.8 ) );
	object.setRelativeX( MxNumberTenths( 186.8 ) );
	object.setRelativeY( MxNumberTenths( 186.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"186.8\" default-y=\"186.8\" relative-y=\"186.8\" font-family=\"ABC\" font-style=\"normal\" color=\"#C4C3C2\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 186.9 ) );
	object.setDefaultY( MxNumberTenths( 186.9 ) );
	object.setRelativeX( MxNumberTenths( 186.9 ) );
	object.setRelativeY( MxNumberTenths( 186.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"186.9\" relative-y=\"186.9\" font-family=\"DEF\" font-style=\"italic\" color=\"#C5C6C5C4\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 187 ) );
	object.setDefaultY( MxNumberTenths( 187 ) );
	object.setRelativeX( MxNumberTenths( 187 ) );
	object.setRelativeY( MxNumberTenths( 187 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"187\" relative-x=\"187\" relative-y=\"187\" font-family=\"XYZ\" font-size=\"large\" color=\"#C8C7C6\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 187.1 ) );
	object.setDefaultY( MxNumberTenths( 187.1 ) );
	object.setRelativeX( MxNumberTenths( 187.1 ) );
	object.setRelativeY( MxNumberTenths( 187.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato relative-x=\"187.1\" relative-y=\"187.1\" font-family=\"ABC\" font-size=\"1.1\" color=\"#C9CAC9C8\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 187.2 ) );
	object.setDefaultY( MxNumberTenths( 187.2 ) );
	object.setRelativeX( MxNumberTenths( 187.2 ) );
	object.setRelativeY( MxNumberTenths( 187.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"187.2\" default-y=\"187.2\" relative-x=\"187.2\" font-family=\"DEF\" font-size=\"large\" color=\"#CCCBCA\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 187.3 ) );
	object.setDefaultY( MxNumberTenths( 187.3 ) );
	object.setRelativeX( MxNumberTenths( 187.3 ) );
	object.setRelativeY( MxNumberTenths( 187.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"187.3\" font-size=\"1.1\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 187.4 ) );
	object.setDefaultY( MxNumberTenths( 187.4 ) );
	object.setRelativeX( MxNumberTenths( 187.4 ) );
	object.setRelativeY( MxNumberTenths( 187.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"187.4\" font-size=\"large\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 187.5 ) );
	object.setDefaultY( MxNumberTenths( 187.5 ) );
	object.setRelativeX( MxNumberTenths( 187.5 ) );
	object.setRelativeY( MxNumberTenths( 187.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato font-size=\"1.1\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 187.6 ) );
	object.setDefaultY( MxNumberTenths( 187.6 ) );
	object.setRelativeX( MxNumberTenths( 187.6 ) );
	object.setRelativeY( MxNumberTenths( 187.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"187.6\" default-y=\"187.6\" relative-x=\"187.6\" relative-y=\"187.6\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 187.7 ) );
	object.setDefaultY( MxNumberTenths( 187.7 ) );
	object.setRelativeX( MxNumberTenths( 187.7 ) );
	object.setRelativeY( MxNumberTenths( 187.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"187.7\" relative-x=\"187.7\" relative-y=\"187.7\" font-style=\"italic\" font-weight=\"bold\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 187.8 ) );
	object.setDefaultY( MxNumberTenths( 187.8 ) );
	object.setRelativeX( MxNumberTenths( 187.8 ) );
	object.setRelativeY( MxNumberTenths( 187.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"187.8\" relative-x=\"187.8\" relative-y=\"187.8\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 187.9 ) );
	object.setDefaultY( MxNumberTenths( 187.9 ) );
	object.setRelativeX( MxNumberTenths( 187.9 ) );
	object.setRelativeY( MxNumberTenths( 187.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato relative-y=\"187.9\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 188 ) );
	object.setDefaultY( MxNumberTenths( 188 ) );
	object.setRelativeX( MxNumberTenths( 188 ) );
	object.setRelativeY( MxNumberTenths( 188 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"188\" default-y=\"188\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 188.1 ) );
	object.setDefaultY( MxNumberTenths( 188.1 ) );
	object.setRelativeX( MxNumberTenths( 188.1 ) );
	object.setRelativeY( MxNumberTenths( 188.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"188.1\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 188.2 ) );
	object.setDefaultY( MxNumberTenths( 188.2 ) );
	object.setRelativeX( MxNumberTenths( 188.2 ) );
	object.setRelativeY( MxNumberTenths( 188.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"188.2\" relative-x=\"188.2\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#E0DFDE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 188.3 ) );
	object.setDefaultY( MxNumberTenths( 188.3 ) );
	object.setRelativeX( MxNumberTenths( 188.3 ) );
	object.setRelativeY( MxNumberTenths( 188.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato relative-x=\"188.3\" font-weight=\"bold\" color=\"#E1E2E1E0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 188.4 ) );
	object.setDefaultY( MxNumberTenths( 188.4 ) );
	object.setRelativeX( MxNumberTenths( 188.4 ) );
	object.setRelativeY( MxNumberTenths( 188.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"188.4\" default-y=\"188.4\" relative-x=\"188.4\" relative-y=\"188.4\" font-size=\"large\" color=\"#E4E3E2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 188.5 ) );
	object.setDefaultY( MxNumberTenths( 188.5 ) );
	object.setRelativeX( MxNumberTenths( 188.5 ) );
	object.setRelativeY( MxNumberTenths( 188.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"188.5\" relative-y=\"188.5\" font-size=\"1.1\" color=\"#E5E6E5E4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 188.6 ) );
	object.setDefaultY( MxNumberTenths( 188.6 ) );
	object.setRelativeX( MxNumberTenths( 188.6 ) );
	object.setRelativeY( MxNumberTenths( 188.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"188.6\" relative-y=\"188.6\" font-size=\"large\" color=\"#E8E7E6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 188.7 ) );
	object.setDefaultY( MxNumberTenths( 188.7 ) );
	object.setRelativeX( MxNumberTenths( 188.7 ) );
	object.setRelativeY( MxNumberTenths( 188.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato relative-y=\"188.7\" font-size=\"1.1\" color=\"#E9EAE9E8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 188.8 ) );
	object.setDefaultY( MxNumberTenths( 188.8 ) );
	object.setRelativeX( MxNumberTenths( 188.8 ) );
	object.setRelativeY( MxNumberTenths( 188.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"188.8\" default-y=\"188.8\" relative-x=\"188.8\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#ECEBEA\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 188.9 ) );
	object.setDefaultY( MxNumberTenths( 188.9 ) );
	object.setRelativeX( MxNumberTenths( 188.9 ) );
	object.setRelativeY( MxNumberTenths( 188.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"188.9\" relative-x=\"188.9\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#EDEEEDEC\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 189 ) );
	object.setDefaultY( MxNumberTenths( 189 ) );
	object.setRelativeX( MxNumberTenths( 189 ) );
	object.setRelativeY( MxNumberTenths( 189 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"189\" relative-x=\"189\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#F0EFEE\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 189.1 ) );
	object.setDefaultY( MxNumberTenths( 189.1 ) );
	object.setRelativeX( MxNumberTenths( 189.1 ) );
	object.setRelativeY( MxNumberTenths( 189.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato font-family=\"XYZ\" font-style=\"italic\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 189.2 ) );
	object.setDefaultY( MxNumberTenths( 189.2 ) );
	object.setRelativeX( MxNumberTenths( 189.2 ) );
	object.setRelativeY( MxNumberTenths( 189.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"189.2\" default-y=\"189.2\" relative-y=\"189.2\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 189.3 ) );
	object.setDefaultY( MxNumberTenths( 189.3 ) );
	object.setRelativeX( MxNumberTenths( 189.3 ) );
	object.setRelativeY( MxNumberTenths( 189.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"189.3\" relative-y=\"189.3\" font-style=\"italic\" font-weight=\"bold\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 189.4 ) );
	object.setDefaultY( MxNumberTenths( 189.4 ) );
	object.setRelativeX( MxNumberTenths( 189.4 ) );
	object.setRelativeY( MxNumberTenths( 189.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"189.4\" relative-x=\"189.4\" relative-y=\"189.4\" font-weight=\"normal\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 189.5 ) );
	object.setDefaultY( MxNumberTenths( 189.5 ) );
	object.setRelativeX( MxNumberTenths( 189.5 ) );
	object.setRelativeY( MxNumberTenths( 189.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato relative-x=\"189.5\" relative-y=\"189.5\" font-weight=\"bold\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 189.6 ) );
	object.setDefaultY( MxNumberTenths( 189.6 ) );
	object.setRelativeX( MxNumberTenths( 189.6 ) );
	object.setRelativeY( MxNumberTenths( 189.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"189.6\" default-y=\"189.6\" relative-x=\"189.6\" font-weight=\"normal\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 189.7 ) );
	object.setDefaultY( MxNumberTenths( 189.7 ) );
	object.setRelativeX( MxNumberTenths( 189.7 ) );
	object.setRelativeY( MxNumberTenths( 189.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"189.7\" font-weight=\"bold\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 189.8 ) );
	object.setDefaultY( MxNumberTenths( 189.8 ) );
	object.setRelativeX( MxNumberTenths( 189.8 ) );
	object.setRelativeY( MxNumberTenths( 189.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"189.8\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 189.9 ) );
	object.setDefaultY( MxNumberTenths( 189.9 ) );
	object.setRelativeX( MxNumberTenths( 189.9 ) );
	object.setRelativeY( MxNumberTenths( 189.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 190 ) );
	object.setDefaultY( MxNumberTenths( 190 ) );
	object.setRelativeX( MxNumberTenths( 190 ) );
	object.setRelativeY( MxNumberTenths( 190 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#040302" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"190\" default-y=\"190\" relative-x=\"190\" relative-y=\"190\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#040302\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 190.1 ) );
	object.setDefaultY( MxNumberTenths( 190.1 ) );
	object.setRelativeX( MxNumberTenths( 190.1 ) );
	object.setRelativeY( MxNumberTenths( 190.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"190.1\" relative-x=\"190.1\" relative-y=\"190.1\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#05060504\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 190.2 ) );
	object.setDefaultY( MxNumberTenths( 190.2 ) );
	object.setRelativeX( MxNumberTenths( 190.2 ) );
	object.setRelativeY( MxNumberTenths( 190.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#080706" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"190.2\" relative-x=\"190.2\" relative-y=\"190.2\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#080706\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 190.3 ) );
	object.setDefaultY( MxNumberTenths( 190.3 ) );
	object.setRelativeX( MxNumberTenths( 190.3 ) );
	object.setRelativeY( MxNumberTenths( 190.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato relative-y=\"190.3\" font-style=\"italic\" font-size=\"1.1\" color=\"#090A0908\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 190.4 ) );
	object.setDefaultY( MxNumberTenths( 190.4 ) );
	object.setRelativeX( MxNumberTenths( 190.4 ) );
	object.setRelativeY( MxNumberTenths( 190.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"190.4\" default-y=\"190.4\" font-style=\"normal\" font-size=\"large\" color=\"#0C0B0A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 190.5 ) );
	object.setDefaultY( MxNumberTenths( 190.5 ) );
	object.setRelativeX( MxNumberTenths( 190.5 ) );
	object.setRelativeY( MxNumberTenths( 190.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"190.5\" font-style=\"italic\" color=\"#0D0E0D0C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 190.6 ) );
	object.setDefaultY( MxNumberTenths( 190.6 ) );
	object.setRelativeX( MxNumberTenths( 190.6 ) );
	object.setRelativeY( MxNumberTenths( 190.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"190.6\" relative-x=\"190.6\" color=\"#100F0E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 190.7 ) );
	object.setDefaultY( MxNumberTenths( 190.7 ) );
	object.setRelativeX( MxNumberTenths( 190.7 ) );
	object.setRelativeY( MxNumberTenths( 190.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato relative-x=\"190.7\" color=\"#11121110\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 190.8 ) );
	object.setDefaultY( MxNumberTenths( 190.8 ) );
	object.setRelativeX( MxNumberTenths( 190.8 ) );
	object.setRelativeY( MxNumberTenths( 190.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#141312" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"190.8\" default-y=\"190.8\" relative-x=\"190.8\" relative-y=\"190.8\" font-family=\"DEF\" font-weight=\"normal\" color=\"#141312\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 190.9 ) );
	object.setDefaultY( MxNumberTenths( 190.9 ) );
	object.setRelativeX( MxNumberTenths( 190.9 ) );
	object.setRelativeY( MxNumberTenths( 190.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"190.9\" relative-y=\"190.9\" font-family=\"XYZ\" font-weight=\"bold\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 191 ) );
	object.setDefaultY( MxNumberTenths( 191 ) );
	object.setRelativeX( MxNumberTenths( 191 ) );
	object.setRelativeY( MxNumberTenths( 191 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#181716" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"191\" relative-y=\"191\" font-family=\"ABC\" font-weight=\"normal\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 191.1 ) );
	object.setDefaultY( MxNumberTenths( 191.1 ) );
	object.setRelativeX( MxNumberTenths( 191.1 ) );
	object.setRelativeY( MxNumberTenths( 191.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato relative-y=\"191.1\" font-family=\"DEF\" font-weight=\"bold\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 191.2 ) );
	object.setDefaultY( MxNumberTenths( 191.2 ) );
	object.setRelativeX( MxNumberTenths( 191.2 ) );
	object.setRelativeY( MxNumberTenths( 191.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"191.2\" default-y=\"191.2\" relative-x=\"191.2\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 191.3 ) );
	object.setDefaultY( MxNumberTenths( 191.3 ) );
	object.setRelativeX( MxNumberTenths( 191.3 ) );
	object.setRelativeY( MxNumberTenths( 191.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"191.3\" relative-x=\"191.3\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 191.4 ) );
	object.setDefaultY( MxNumberTenths( 191.4 ) );
	object.setRelativeX( MxNumberTenths( 191.4 ) );
	object.setRelativeY( MxNumberTenths( 191.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"191.4\" relative-x=\"191.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 191.5 ) );
	object.setDefaultY( MxNumberTenths( 191.5 ) );
	object.setRelativeX( MxNumberTenths( 191.5 ) );
	object.setRelativeY( MxNumberTenths( 191.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 191.6 ) );
	object.setDefaultY( MxNumberTenths( 191.6 ) );
	object.setRelativeX( MxNumberTenths( 191.6 ) );
	object.setRelativeY( MxNumberTenths( 191.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#242322" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"191.6\" default-y=\"191.6\" relative-y=\"191.6\" font-style=\"normal\" font-size=\"large\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( true );
	object.setDefaultX( MxNumberTenths( 191.7 ) );
	object.setDefaultY( MxNumberTenths( 191.7 ) );
	object.setRelativeX( MxNumberTenths( 191.7 ) );
	object.setRelativeY( MxNumberTenths( 191.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"191.7\" relative-y=\"191.7\" font-style=\"italic\" font-size=\"1.1\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 191.8 ) );
	object.setDefaultY( MxNumberTenths( 191.8 ) );
	object.setRelativeX( MxNumberTenths( 191.8 ) );
	object.setRelativeY( MxNumberTenths( 191.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#282726" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"191.8\" relative-x=\"191.8\" relative-y=\"191.8\" font-family=\"XYZ\" font-size=\"large\" color=\"#282726\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 191.9 ) );
	object.setDefaultY( MxNumberTenths( 191.9 ) );
	object.setRelativeX( MxNumberTenths( 191.9 ) );
	object.setRelativeY( MxNumberTenths( 191.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato relative-x=\"191.9\" relative-y=\"191.9\" font-family=\"ABC\" color=\"#292A2928\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 192 ) );
	object.setDefaultY( MxNumberTenths( 192 ) );
	object.setRelativeX( MxNumberTenths( 192 ) );
	object.setRelativeY( MxNumberTenths( 192 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"192\" default-y=\"192\" relative-x=\"192\" font-family=\"DEF\" color=\"#2C2B2A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 192.1 ) );
	object.setDefaultY( MxNumberTenths( 192.1 ) );
	object.setRelativeX( MxNumberTenths( 192.1 ) );
	object.setRelativeY( MxNumberTenths( 192.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"192.1\" font-family=\"XYZ\" color=\"#2D2E2D2C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 192.2 ) );
	object.setDefaultY( MxNumberTenths( 192.2 ) );
	object.setRelativeX( MxNumberTenths( 192.2 ) );
	object.setRelativeY( MxNumberTenths( 192.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"192.2\" font-family=\"ABC\" color=\"#302F2E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 192.3 ) );
	object.setDefaultY( MxNumberTenths( 192.3 ) );
	object.setRelativeX( MxNumberTenths( 192.3 ) );
	object.setRelativeY( MxNumberTenths( 192.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato color=\"#31323130\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 192.4 ) );
	object.setDefaultY( MxNumberTenths( 192.4 ) );
	object.setRelativeX( MxNumberTenths( 192.4 ) );
	object.setRelativeY( MxNumberTenths( 192.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#343332" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"192.4\" default-y=\"192.4\" relative-x=\"192.4\" relative-y=\"192.4\" font-style=\"normal\" font-weight=\"normal\" color=\"#343332\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 192.5 ) );
	object.setDefaultY( MxNumberTenths( 192.5 ) );
	object.setRelativeX( MxNumberTenths( 192.5 ) );
	object.setRelativeY( MxNumberTenths( 192.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato default-y=\"192.5\" relative-x=\"192.5\" relative-y=\"192.5\" font-style=\"italic\" font-weight=\"bold\" color=\"#35363534\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 192.6 ) );
	object.setDefaultY( MxNumberTenths( 192.6 ) );
	object.setRelativeX( MxNumberTenths( 192.6 ) );
	object.setRelativeY( MxNumberTenths( 192.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#383736" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato default-x=\"192.6\" relative-x=\"192.6\" relative-y=\"192.6\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#383736\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 192.7 ) );
	object.setDefaultY( MxNumberTenths( 192.7 ) );
	object.setRelativeX( MxNumberTenths( 192.7 ) );
	object.setRelativeY( MxNumberTenths( 192.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<staccato relative-y=\"192.7\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEeStaccato )
{
	MxEeStaccato object;
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
	object.setIsPlacementPresent( false );
	object.setDefaultX( MxNumberTenths( 192.8 ) );
	object.setDefaultY( MxNumberTenths( 192.8 ) );
	object.setRelativeX( MxNumberTenths( 192.8 ) );
	object.setRelativeY( MxNumberTenths( 192.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<staccato/>";
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


