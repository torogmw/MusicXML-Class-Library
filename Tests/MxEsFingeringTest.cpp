/** *******************************************************
  * 
  * MxEsFingeringTest.cpp
  * Created: 2014-12-05 20:57:56
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsFingering.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsFingering )
{
	MxEsFingering object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsFingering )
{
	MxEsFingering object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getSubstitution().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsFingering )
{
	MxEsFingering object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getAlternate().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsFingering )
{
	MxEsFingering object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsFingering )
{
	MxEsFingering object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEsFingering )
{
	MxEsFingering object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEsFingering )
{
	MxEsFingering object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEsFingering )
{
	MxEsFingering object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEsFingering )
{
	MxEsFingering object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEsFingering )
{
	MxEsFingering object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEsFingering )
{
	MxEsFingering object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxEsFingering )
{
	MxEsFingering object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxEsFingering )
{
	MxEsFingering object;
	std::string expected = ( MxEnumAboveBelow(  ) ).toString();
	std::string actual = object.getPlacement().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsFingering )
{
	MxEsFingering object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsFingering )
{
	MxEsFingering object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsFingering )
{
	MxEsFingering object( XsString( "" ) );
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
TEST( ctorValue2, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
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
TEST( ctorValue4, MxEsFingering )
{
	MxEsFingering object( XsString( "X,Y,Z" ) );
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
TEST( ctorValue6, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
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
TEST( ctorValue8, MxEsFingering )
{
	MxEsFingering object( XsString( "X,Y,Z" ) );
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

TEST( getClassName, MxEsFingering )
{
	MxEsFingering object;
	std::string expected = "MxEsFingering";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsFingering )
{
	MxEsFingering object;
	std::string expected = "fingering";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsFingering )
{
	MxEsFingering object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setSubstitution0, MxEsFingering )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsFingering object;
	object.setSubstitution( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getSubstitution();
	CHECK_EQUAL( expected, actual )
	object.setSubstitution( value2 );
	expected = value2;
	actual = object.getSubstitution();
	CHECK_EQUAL( expected, actual )
}
TEST( setAlternate1, MxEsFingering )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsFingering object;
	object.setAlternate( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getAlternate();
	CHECK_EQUAL( expected, actual )
	object.setAlternate( value2 );
	expected = value2;
	actual = object.getAlternate();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX2, MxEsFingering )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsFingering object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY3, MxEsFingering )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsFingering object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX4, MxEsFingering )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsFingering object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY5, MxEsFingering )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsFingering object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily6, MxEsFingering )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEsFingering object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle7, MxEsFingering )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEsFingering object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize8, MxEsFingering )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEsFingering object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight9, MxEsFingering )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEsFingering object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor10, MxEsFingering )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsFingering object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setPlacement11, MxEsFingering )
{
	MxEnumAboveBelow value1( lexicon::enums::AboveBelow::below );
	MxEnumAboveBelow value2( lexicon::enums::AboveBelow::above );
	CHECK( ( value1 != value2 ) )
	MxEsFingering object;
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

TEST( getIsSubstitutionRequired0, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsSubstitutionRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsAlternateRequired1, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsAlternateRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired2, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired3, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired4, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired5, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired6, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired7, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired8, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired9, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired10, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementRequired11, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsPlacementRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsSubstitutionPresent0, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsSubstitutionPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSubstitutionPresent( true );
	expected = true;
	actual = object.getIsSubstitutionPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSubstitutionPresent( false );
	expected = false;
	actual = object.getIsSubstitutionPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsAlternatePresent1, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsAlternatePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsAlternatePresent( true );
	expected = true;
	actual = object.getIsAlternatePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsAlternatePresent( false );
	expected = false;
	actual = object.getIsAlternatePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXPresent2, MxEsFingering )
{
	MxEsFingering object;
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
TEST( getIsDefaultYPresent3, MxEsFingering )
{
	MxEsFingering object;
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
TEST( getIsRelativeXPresent4, MxEsFingering )
{
	MxEsFingering object;
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
TEST( getIsRelativeYPresent5, MxEsFingering )
{
	MxEsFingering object;
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
TEST( getIsFontFamilyPresent6, MxEsFingering )
{
	MxEsFingering object;
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
TEST( getIsFontStylePresent7, MxEsFingering )
{
	MxEsFingering object;
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
TEST( getIsFontSizePresent8, MxEsFingering )
{
	MxEsFingering object;
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
TEST( getIsFontWeightPresent9, MxEsFingering )
{
	MxEsFingering object;
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
TEST( getIsColorPresent10, MxEsFingering )
{
	MxEsFingering object;
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
TEST( getIsPlacementPresent11, MxEsFingering )
{
	MxEsFingering object;
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

TEST( getIsSubstitutionDefaultDefined, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsSubstitutionDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsAlternateDefaultDefined, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsAlternateDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementDefaultDefined, MxEsFingering )
{
	MxEsFingering object;
	bool expected = false;
	bool actual = object.getIsPlacementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getSubstitutionDefaultValue, MxEsFingering )
{
	MxEsFingering object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getSubstitutionDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getAlternateDefaultValue, MxEsFingering )
{
	MxEsFingering object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getAlternateDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEsFingering )
{
	MxEsFingering object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEsFingering )
{
	MxEsFingering object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEsFingering )
{
	MxEsFingering object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEsFingering )
{
	MxEsFingering object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEsFingering )
{
	MxEsFingering object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEsFingering )
{
	MxEsFingering object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEsFingering )
{
	MxEsFingering object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEsFingering )
{
	MxEsFingering object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsFingering )
{
	MxEsFingering object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPlacementDefaultValue, MxEsFingering )
{
	MxEsFingering object;
	MxEnumAboveBelow expected;
	MxEnumAboveBelow actual = object.getPlacementDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 253.4 ) );
	object.setDefaultY( MxNumberTenths( 253.4 ) );
	object.setRelativeX( MxNumberTenths( 253.4 ) );
	object.setRelativeY( MxNumberTenths( 253.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
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
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-x=\"253.4\" default-y=\"253.4\" relative-x=\"253.4\" relative-y=\"253.4\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#B0AFAE\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
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
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 253.5 ) );
	object.setDefaultY( MxNumberTenths( 253.5 ) );
	object.setRelativeX( MxNumberTenths( 253.5 ) );
	object.setRelativeY( MxNumberTenths( 253.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" default-x=\"253.5\" default-y=\"253.5\" relative-x=\"253.5\" relative-y=\"253.5\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#B1B2B1B0\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
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
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 253.6 ) );
	object.setDefaultY( MxNumberTenths( 253.6 ) );
	object.setRelativeX( MxNumberTenths( 253.6 ) );
	object.setRelativeY( MxNumberTenths( 253.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-x=\"253.6\" default-y=\"253.6\" relative-x=\"253.6\" relative-y=\"253.6\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#B4B3B2\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
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
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 253.7 ) );
	object.setDefaultY( MxNumberTenths( 253.7 ) );
	object.setRelativeX( MxNumberTenths( 253.7 ) );
	object.setRelativeY( MxNumberTenths( 253.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering default-y=\"253.7\" relative-x=\"253.7\" relative-y=\"253.7\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#B5B6B5B4\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 253.8 ) );
	object.setDefaultY( MxNumberTenths( 253.8 ) );
	object.setRelativeX( MxNumberTenths( 253.8 ) );
	object.setRelativeY( MxNumberTenths( 253.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" relative-x=\"253.8\" relative-y=\"253.8\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#B8B7B6\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
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
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 253.9 ) );
	object.setDefaultY( MxNumberTenths( 253.9 ) );
	object.setRelativeX( MxNumberTenths( 253.9 ) );
	object.setRelativeY( MxNumberTenths( 253.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" relative-y=\"253.9\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#B9BAB9B8\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 254 ) );
	object.setDefaultY( MxNumberTenths( 254 ) );
	object.setRelativeX( MxNumberTenths( 254 ) );
	object.setRelativeY( MxNumberTenths( 254 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-x=\"254\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#BCBBBA\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 254.1 ) );
	object.setDefaultY( MxNumberTenths( 254.1 ) );
	object.setRelativeX( MxNumberTenths( 254.1 ) );
	object.setRelativeY( MxNumberTenths( 254.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering default-x=\"254.1\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#BDBEBDBC\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 254.2 ) );
	object.setDefaultY( MxNumberTenths( 254.2 ) );
	object.setRelativeX( MxNumberTenths( 254.2 ) );
	object.setRelativeY( MxNumberTenths( 254.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-x=\"254.2\" default-y=\"254.2\" font-size=\"large\" font-weight=\"normal\" color=\"#C0BFBE\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 254.3 ) );
	object.setDefaultY( MxNumberTenths( 254.3 ) );
	object.setRelativeX( MxNumberTenths( 254.3 ) );
	object.setRelativeY( MxNumberTenths( 254.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" default-y=\"254.3\" font-weight=\"bold\" color=\"#C1C2C1C0\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 254.4 ) );
	object.setDefaultY( MxNumberTenths( 254.4 ) );
	object.setRelativeX( MxNumberTenths( 254.4 ) );
	object.setRelativeY( MxNumberTenths( 254.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-y=\"254.4\" relative-x=\"254.4\" color=\"#C4C3C2\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 254.5 ) );
	object.setDefaultY( MxNumberTenths( 254.5 ) );
	object.setRelativeX( MxNumberTenths( 254.5 ) );
	object.setRelativeY( MxNumberTenths( 254.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering default-y=\"254.5\" relative-x=\"254.5\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 254.6 ) );
	object.setDefaultY( MxNumberTenths( 254.6 ) );
	object.setRelativeX( MxNumberTenths( 254.6 ) );
	object.setRelativeY( MxNumberTenths( 254.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-x=\"254.6\" relative-x=\"254.6\" relative-y=\"254.6\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 254.7 ) );
	object.setDefaultY( MxNumberTenths( 254.7 ) );
	object.setRelativeX( MxNumberTenths( 254.7 ) );
	object.setRelativeY( MxNumberTenths( 254.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" default-x=\"254.7\" relative-x=\"254.7\" relative-y=\"254.7\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 254.8 ) );
	object.setDefaultY( MxNumberTenths( 254.8 ) );
	object.setRelativeX( MxNumberTenths( 254.8 ) );
	object.setRelativeY( MxNumberTenths( 254.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-x=\"254.8\" relative-x=\"254.8\" relative-y=\"254.8\" font-family=\"DEF\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
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
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 254.9 ) );
	object.setDefaultY( MxNumberTenths( 254.9 ) );
	object.setRelativeX( MxNumberTenths( 254.9 ) );
	object.setRelativeY( MxNumberTenths( 254.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering relative-y=\"254.9\" font-family=\"XYZ\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 255 ) );
	object.setDefaultY( MxNumberTenths( 255 ) );
	object.setRelativeX( MxNumberTenths( 255 ) );
	object.setRelativeY( MxNumberTenths( 255 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-y=\"255\" relative-y=\"255\" font-family=\"ABC\" font-style=\"normal\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 255.1 ) );
	object.setDefaultY( MxNumberTenths( 255.1 ) );
	object.setRelativeX( MxNumberTenths( 255.1 ) );
	object.setRelativeY( MxNumberTenths( 255.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" default-y=\"255.1\" relative-y=\"255.1\" font-family=\"DEF\" font-style=\"italic\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 255.2 ) );
	object.setDefaultY( MxNumberTenths( 255.2 ) );
	object.setRelativeX( MxNumberTenths( 255.2 ) );
	object.setRelativeY( MxNumberTenths( 255.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-x=\"255.2\" default-y=\"255.2\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 255.3 ) );
	object.setDefaultY( MxNumberTenths( 255.3 ) );
	object.setRelativeX( MxNumberTenths( 255.3 ) );
	object.setRelativeY( MxNumberTenths( 255.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering default-x=\"255.3\" default-y=\"255.3\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 255.4 ) );
	object.setDefaultY( MxNumberTenths( 255.4 ) );
	object.setRelativeX( MxNumberTenths( 255.4 ) );
	object.setRelativeY( MxNumberTenths( 255.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-x=\"255.4\" relative-x=\"255.4\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 255.5 ) );
	object.setDefaultY( MxNumberTenths( 255.5 ) );
	object.setRelativeX( MxNumberTenths( 255.5 ) );
	object.setRelativeY( MxNumberTenths( 255.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" relative-x=\"255.5\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 255.6 ) );
	object.setDefaultY( MxNumberTenths( 255.6 ) );
	object.setRelativeX( MxNumberTenths( 255.6 ) );
	object.setRelativeY( MxNumberTenths( 255.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" relative-x=\"255.6\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#DCDBDA\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 255.7 ) );
	object.setDefaultY( MxNumberTenths( 255.7 ) );
	object.setRelativeX( MxNumberTenths( 255.7 ) );
	object.setRelativeY( MxNumberTenths( 255.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering relative-x=\"255.7\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#DDDEDDDC\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 255.8 ) );
	object.setDefaultY( MxNumberTenths( 255.8 ) );
	object.setRelativeX( MxNumberTenths( 255.8 ) );
	object.setRelativeY( MxNumberTenths( 255.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-x=\"255.8\" default-y=\"255.8\" relative-x=\"255.8\" relative-y=\"255.8\" font-size=\"large\" font-weight=\"normal\" color=\"#E0DFDE\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 255.9 ) );
	object.setDefaultY( MxNumberTenths( 255.9 ) );
	object.setRelativeX( MxNumberTenths( 255.9 ) );
	object.setRelativeY( MxNumberTenths( 255.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" default-x=\"255.9\" default-y=\"255.9\" relative-y=\"255.9\" font-size=\"1.1\" font-weight=\"bold\" color=\"#E1E2E1E0\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 256 ) );
	object.setDefaultY( MxNumberTenths( 256 ) );
	object.setRelativeX( MxNumberTenths( 256 ) );
	object.setRelativeY( MxNumberTenths( 256 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-x=\"256\" default-y=\"256\" relative-y=\"256\" font-size=\"large\" font-weight=\"normal\" color=\"#E4E3E2\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 256.1 ) );
	object.setDefaultY( MxNumberTenths( 256.1 ) );
	object.setRelativeX( MxNumberTenths( 256.1 ) );
	object.setRelativeY( MxNumberTenths( 256.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering default-y=\"256.1\" relative-y=\"256.1\" font-weight=\"bold\" color=\"#E5E6E5E4\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 256.2 ) );
	object.setDefaultY( MxNumberTenths( 256.2 ) );
	object.setRelativeX( MxNumberTenths( 256.2 ) );
	object.setRelativeY( MxNumberTenths( 256.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" relative-y=\"256.2\" font-family=\"ABC\" font-weight=\"normal\" color=\"#E8E7E6\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 256.3 ) );
	object.setDefaultY( MxNumberTenths( 256.3 ) );
	object.setRelativeX( MxNumberTenths( 256.3 ) );
	object.setRelativeY( MxNumberTenths( 256.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" relative-y=\"256.3\" font-family=\"DEF\" font-weight=\"bold\" color=\"#E9EAE9E8\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 256.4 ) );
	object.setDefaultY( MxNumberTenths( 256.4 ) );
	object.setRelativeX( MxNumberTenths( 256.4 ) );
	object.setRelativeY( MxNumberTenths( 256.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-x=\"256.4\" relative-x=\"256.4\" font-family=\"XYZ\" color=\"#ECEBEA\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 256.5 ) );
	object.setDefaultY( MxNumberTenths( 256.5 ) );
	object.setRelativeX( MxNumberTenths( 256.5 ) );
	object.setRelativeY( MxNumberTenths( 256.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering default-x=\"256.5\" relative-x=\"256.5\" font-family=\"ABC\" color=\"#EDEEEDEC\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 256.6 ) );
	object.setDefaultY( MxNumberTenths( 256.6 ) );
	object.setRelativeX( MxNumberTenths( 256.6 ) );
	object.setRelativeY( MxNumberTenths( 256.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-x=\"256.6\" default-y=\"256.6\" relative-x=\"256.6\" font-family=\"DEF\" font-style=\"normal\" color=\"#F0EFEE\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 256.7 ) );
	object.setDefaultY( MxNumberTenths( 256.7 ) );
	object.setRelativeX( MxNumberTenths( 256.7 ) );
	object.setRelativeY( MxNumberTenths( 256.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" default-y=\"256.7\" relative-x=\"256.7\" font-family=\"XYZ\" font-style=\"italic\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 256.8 ) );
	object.setDefaultY( MxNumberTenths( 256.8 ) );
	object.setRelativeX( MxNumberTenths( 256.8 ) );
	object.setRelativeY( MxNumberTenths( 256.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-y=\"256.8\" relative-x=\"256.8\" font-family=\"ABC\" font-style=\"normal\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 256.9 ) );
	object.setDefaultY( MxNumberTenths( 256.9 ) );
	object.setRelativeX( MxNumberTenths( 256.9 ) );
	object.setRelativeY( MxNumberTenths( 256.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering default-y=\"256.9\" font-style=\"italic\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 257 ) );
	object.setDefaultY( MxNumberTenths( 257 ) );
	object.setRelativeX( MxNumberTenths( 257 ) );
	object.setRelativeY( MxNumberTenths( 257 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-x=\"257\" relative-y=\"257\" font-style=\"normal\" font-size=\"large\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 257.1 ) );
	object.setDefaultY( MxNumberTenths( 257.1 ) );
	object.setRelativeX( MxNumberTenths( 257.1 ) );
	object.setRelativeY( MxNumberTenths( 257.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" default-x=\"257.1\" relative-y=\"257.1\" font-style=\"italic\" font-size=\"1.1\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 257.2 ) );
	object.setDefaultY( MxNumberTenths( 257.2 ) );
	object.setRelativeX( MxNumberTenths( 257.2 ) );
	object.setRelativeY( MxNumberTenths( 257.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-x=\"257.2\" relative-y=\"257.2\" font-style=\"normal\" font-size=\"large\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 257.3 ) );
	object.setDefaultY( MxNumberTenths( 257.3 ) );
	object.setRelativeX( MxNumberTenths( 257.3 ) );
	object.setRelativeY( MxNumberTenths( 257.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering relative-y=\"257.3\" font-style=\"italic\" font-size=\"1.1\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 257.4 ) );
	object.setDefaultY( MxNumberTenths( 257.4 ) );
	object.setRelativeX( MxNumberTenths( 257.4 ) );
	object.setRelativeY( MxNumberTenths( 257.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-y=\"257.4\" relative-x=\"257.4\" relative-y=\"257.4\" font-size=\"large\" font-weight=\"normal\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 257.5 ) );
	object.setDefaultY( MxNumberTenths( 257.5 ) );
	object.setRelativeX( MxNumberTenths( 257.5 ) );
	object.setRelativeY( MxNumberTenths( 257.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" default-y=\"257.5\" relative-x=\"257.5\" relative-y=\"257.5\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 257.6 ) );
	object.setDefaultY( MxNumberTenths( 257.6 ) );
	object.setRelativeX( MxNumberTenths( 257.6 ) );
	object.setRelativeY( MxNumberTenths( 257.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#040302" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-x=\"257.6\" default-y=\"257.6\" relative-x=\"257.6\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 257.7 ) );
	object.setDefaultY( MxNumberTenths( 257.7 ) );
	object.setRelativeX( MxNumberTenths( 257.7 ) );
	object.setRelativeY( MxNumberTenths( 257.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering default-x=\"257.7\" default-y=\"257.7\" relative-x=\"257.7\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 257.8 ) );
	object.setDefaultY( MxNumberTenths( 257.8 ) );
	object.setRelativeX( MxNumberTenths( 257.8 ) );
	object.setRelativeY( MxNumberTenths( 257.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#080706" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-x=\"257.8\" relative-x=\"257.8\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" color=\"#080706\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 257.9 ) );
	object.setDefaultY( MxNumberTenths( 257.9 ) );
	object.setRelativeX( MxNumberTenths( 257.9 ) );
	object.setRelativeY( MxNumberTenths( 257.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#090A0908\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 258 ) );
	object.setDefaultY( MxNumberTenths( 258 ) );
	object.setRelativeX( MxNumberTenths( 258 ) );
	object.setRelativeY( MxNumberTenths( 258 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" font-family=\"ABC\" font-weight=\"normal\" color=\"#0C0B0A\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 258.1 ) );
	object.setDefaultY( MxNumberTenths( 258.1 ) );
	object.setRelativeX( MxNumberTenths( 258.1 ) );
	object.setRelativeY( MxNumberTenths( 258.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering font-family=\"DEF\" font-weight=\"bold\" color=\"#0D0E0D0C\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 258.2 ) );
	object.setDefaultY( MxNumberTenths( 258.2 ) );
	object.setRelativeX( MxNumberTenths( 258.2 ) );
	object.setRelativeY( MxNumberTenths( 258.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-x=\"258.2\" default-y=\"258.2\" relative-y=\"258.2\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" color=\"#100F0E\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 258.3 ) );
	object.setDefaultY( MxNumberTenths( 258.3 ) );
	object.setRelativeX( MxNumberTenths( 258.3 ) );
	object.setRelativeY( MxNumberTenths( 258.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" default-x=\"258.3\" default-y=\"258.3\" relative-y=\"258.3\" font-style=\"italic\" font-weight=\"bold\" color=\"#11121110\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 258.4 ) );
	object.setDefaultY( MxNumberTenths( 258.4 ) );
	object.setRelativeX( MxNumberTenths( 258.4 ) );
	object.setRelativeY( MxNumberTenths( 258.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#141312" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-x=\"258.4\" default-y=\"258.4\" relative-x=\"258.4\" relative-y=\"258.4\" font-style=\"normal\" color=\"#141312\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
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
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 258.5 ) );
	object.setDefaultY( MxNumberTenths( 258.5 ) );
	object.setRelativeX( MxNumberTenths( 258.5 ) );
	object.setRelativeY( MxNumberTenths( 258.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering default-y=\"258.5\" relative-x=\"258.5\" relative-y=\"258.5\" font-style=\"italic\" color=\"#15161514\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 258.6 ) );
	object.setDefaultY( MxNumberTenths( 258.6 ) );
	object.setRelativeX( MxNumberTenths( 258.6 ) );
	object.setRelativeY( MxNumberTenths( 258.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#181716" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" relative-x=\"258.6\" relative-y=\"258.6\" font-style=\"normal\" color=\"#181716\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 258.7 ) );
	object.setDefaultY( MxNumberTenths( 258.7 ) );
	object.setRelativeX( MxNumberTenths( 258.7 ) );
	object.setRelativeY( MxNumberTenths( 258.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" relative-x=\"258.7\" relative-y=\"258.7\" font-style=\"italic\" color=\"#191A1918\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 258.8 ) );
	object.setDefaultY( MxNumberTenths( 258.8 ) );
	object.setRelativeX( MxNumberTenths( 258.8 ) );
	object.setRelativeY( MxNumberTenths( 258.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-x=\"258.8\" relative-x=\"258.8\" font-style=\"normal\" font-size=\"large\" color=\"#1C1B1A\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 258.9 ) );
	object.setDefaultY( MxNumberTenths( 258.9 ) );
	object.setRelativeX( MxNumberTenths( 258.9 ) );
	object.setRelativeY( MxNumberTenths( 258.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering default-x=\"258.9\" font-style=\"italic\" font-size=\"1.1\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 259 ) );
	object.setDefaultY( MxNumberTenths( 259 ) );
	object.setRelativeX( MxNumberTenths( 259 ) );
	object.setRelativeY( MxNumberTenths( 259 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-x=\"259\" default-y=\"259\" font-family=\"DEF\" font-size=\"large\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 259.1 ) );
	object.setDefaultY( MxNumberTenths( 259.1 ) );
	object.setRelativeX( MxNumberTenths( 259.1 ) );
	object.setRelativeY( MxNumberTenths( 259.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" default-y=\"259.1\" font-family=\"XYZ\" font-size=\"1.1\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 259.2 ) );
	object.setDefaultY( MxNumberTenths( 259.2 ) );
	object.setRelativeX( MxNumberTenths( 259.2 ) );
	object.setRelativeY( MxNumberTenths( 259.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#242322" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-y=\"259.2\" font-family=\"ABC\" font-size=\"large\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 259.3 ) );
	object.setDefaultY( MxNumberTenths( 259.3 ) );
	object.setRelativeX( MxNumberTenths( 259.3 ) );
	object.setRelativeY( MxNumberTenths( 259.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering default-y=\"259.3\" font-family=\"DEF\" font-size=\"1.1\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 259.4 ) );
	object.setDefaultY( MxNumberTenths( 259.4 ) );
	object.setRelativeX( MxNumberTenths( 259.4 ) );
	object.setRelativeY( MxNumberTenths( 259.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#282726" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-x=\"259.4\" relative-x=\"259.4\" relative-y=\"259.4\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 259.5 ) );
	object.setDefaultY( MxNumberTenths( 259.5 ) );
	object.setRelativeX( MxNumberTenths( 259.5 ) );
	object.setRelativeY( MxNumberTenths( 259.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" default-x=\"259.5\" relative-x=\"259.5\" relative-y=\"259.5\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 259.6 ) );
	object.setDefaultY( MxNumberTenths( 259.6 ) );
	object.setRelativeX( MxNumberTenths( 259.6 ) );
	object.setRelativeY( MxNumberTenths( 259.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-x=\"259.6\" relative-x=\"259.6\" relative-y=\"259.6\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 259.7 ) );
	object.setDefaultY( MxNumberTenths( 259.7 ) );
	object.setRelativeX( MxNumberTenths( 259.7 ) );
	object.setRelativeY( MxNumberTenths( 259.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering relative-x=\"259.7\" relative-y=\"259.7\" font-weight=\"bold\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 259.8 ) );
	object.setDefaultY( MxNumberTenths( 259.8 ) );
	object.setRelativeX( MxNumberTenths( 259.8 ) );
	object.setRelativeY( MxNumberTenths( 259.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-y=\"259.8\" relative-x=\"259.8\" relative-y=\"259.8\" font-style=\"normal\" font-weight=\"normal\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 259.9 ) );
	object.setDefaultY( MxNumberTenths( 259.9 ) );
	object.setRelativeX( MxNumberTenths( 259.9 ) );
	object.setRelativeY( MxNumberTenths( 259.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" default-y=\"259.9\" relative-y=\"259.9\" font-style=\"italic\" font-weight=\"bold\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 260 ) );
	object.setDefaultY( MxNumberTenths( 260 ) );
	object.setRelativeX( MxNumberTenths( 260 ) );
	object.setRelativeY( MxNumberTenths( 260 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#343332" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-x=\"260\" default-y=\"260\" font-style=\"normal\" font-weight=\"normal\" color=\"#343332\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 260.1 ) );
	object.setDefaultY( MxNumberTenths( 260.1 ) );
	object.setRelativeX( MxNumberTenths( 260.1 ) );
	object.setRelativeY( MxNumberTenths( 260.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering default-x=\"260.1\" default-y=\"260.1\" font-style=\"italic\" font-weight=\"bold\" color=\"#35363534\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 260.2 ) );
	object.setDefaultY( MxNumberTenths( 260.2 ) );
	object.setRelativeX( MxNumberTenths( 260.2 ) );
	object.setRelativeY( MxNumberTenths( 260.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#383736" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-x=\"260.2\" font-style=\"normal\" font-weight=\"normal\" color=\"#383736\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
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
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 260.3 ) );
	object.setDefaultY( MxNumberTenths( 260.3 ) );
	object.setRelativeX( MxNumberTenths( 260.3 ) );
	object.setRelativeY( MxNumberTenths( 260.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" font-style=\"italic\" font-weight=\"bold\" color=\"#393A3938\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 260.4 ) );
	object.setDefaultY( MxNumberTenths( 260.4 ) );
	object.setRelativeX( MxNumberTenths( 260.4 ) );
	object.setRelativeY( MxNumberTenths( 260.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" relative-x=\"260.4\" font-family=\"ABC\" font-style=\"normal\" color=\"#3C3B3A\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 260.5 ) );
	object.setDefaultY( MxNumberTenths( 260.5 ) );
	object.setRelativeX( MxNumberTenths( 260.5 ) );
	object.setRelativeY( MxNumberTenths( 260.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering relative-x=\"260.5\" font-family=\"DEF\" font-style=\"italic\" color=\"#3D3E3D3C\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 260.6 ) );
	object.setDefaultY( MxNumberTenths( 260.6 ) );
	object.setRelativeX( MxNumberTenths( 260.6 ) );
	object.setRelativeY( MxNumberTenths( 260.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-x=\"260.6\" default-y=\"260.6\" relative-x=\"260.6\" relative-y=\"260.6\" font-family=\"XYZ\" font-size=\"large\" color=\"#403F3E\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 260.7 ) );
	object.setDefaultY( MxNumberTenths( 260.7 ) );
	object.setRelativeX( MxNumberTenths( 260.7 ) );
	object.setRelativeY( MxNumberTenths( 260.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" default-x=\"260.7\" default-y=\"260.7\" relative-x=\"260.7\" relative-y=\"260.7\" font-family=\"ABC\" font-size=\"1.1\" color=\"#41424140\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 260.8 ) );
	object.setDefaultY( MxNumberTenths( 260.8 ) );
	object.setRelativeX( MxNumberTenths( 260.8 ) );
	object.setRelativeY( MxNumberTenths( 260.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#444342" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-x=\"260.8\" default-y=\"260.8\" relative-x=\"260.8\" relative-y=\"260.8\" font-family=\"DEF\" font-size=\"large\" color=\"#444342\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 260.9 ) );
	object.setDefaultY( MxNumberTenths( 260.9 ) );
	object.setRelativeX( MxNumberTenths( 260.9 ) );
	object.setRelativeY( MxNumberTenths( 260.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering default-y=\"260.9\" relative-y=\"260.9\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#45464544\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 261 ) );
	object.setDefaultY( MxNumberTenths( 261 ) );
	object.setRelativeX( MxNumberTenths( 261 ) );
	object.setRelativeY( MxNumberTenths( 261 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#484746" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" relative-y=\"261\" font-family=\"ABC\" font-size=\"large\" color=\"#484746\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 261.1 ) );
	object.setDefaultY( MxNumberTenths( 261.1 ) );
	object.setRelativeX( MxNumberTenths( 261.1 ) );
	object.setRelativeY( MxNumberTenths( 261.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" relative-y=\"261.1\" font-size=\"1.1\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
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
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 261.2 ) );
	object.setDefaultY( MxNumberTenths( 261.2 ) );
	object.setRelativeX( MxNumberTenths( 261.2 ) );
	object.setRelativeY( MxNumberTenths( 261.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-x=\"261.2\" font-size=\"large\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
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
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 261.3 ) );
	object.setDefaultY( MxNumberTenths( 261.3 ) );
	object.setRelativeX( MxNumberTenths( 261.3 ) );
	object.setRelativeY( MxNumberTenths( 261.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering default-x=\"261.3\" font-size=\"1.1\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 261.4 ) );
	object.setDefaultY( MxNumberTenths( 261.4 ) );
	object.setRelativeX( MxNumberTenths( 261.4 ) );
	object.setRelativeY( MxNumberTenths( 261.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-x=\"261.4\" default-y=\"261.4\" relative-x=\"261.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 261.5 ) );
	object.setDefaultY( MxNumberTenths( 261.5 ) );
	object.setRelativeX( MxNumberTenths( 261.5 ) );
	object.setRelativeY( MxNumberTenths( 261.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" default-y=\"261.5\" relative-x=\"261.5\" font-style=\"italic\" font-weight=\"bold\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 261.6 ) );
	object.setDefaultY( MxNumberTenths( 261.6 ) );
	object.setRelativeX( MxNumberTenths( 261.6 ) );
	object.setRelativeY( MxNumberTenths( 261.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#545352" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-y=\"261.6\" relative-x=\"261.6\" font-style=\"normal\" font-weight=\"normal\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 261.7 ) );
	object.setDefaultY( MxNumberTenths( 261.7 ) );
	object.setRelativeX( MxNumberTenths( 261.7 ) );
	object.setRelativeY( MxNumberTenths( 261.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering default-y=\"261.7\" relative-x=\"261.7\" font-style=\"italic\" font-weight=\"bold\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
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
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 261.8 ) );
	object.setDefaultY( MxNumberTenths( 261.8 ) );
	object.setRelativeX( MxNumberTenths( 261.8 ) );
	object.setRelativeY( MxNumberTenths( 261.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#585756" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-x=\"261.8\" relative-x=\"261.8\" relative-y=\"261.8\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 261.9 ) );
	object.setDefaultY( MxNumberTenths( 261.9 ) );
	object.setRelativeX( MxNumberTenths( 261.9 ) );
	object.setRelativeY( MxNumberTenths( 261.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" default-x=\"261.9\" relative-y=\"261.9\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 262 ) );
	object.setDefaultY( MxNumberTenths( 262 ) );
	object.setRelativeX( MxNumberTenths( 262 ) );
	object.setRelativeY( MxNumberTenths( 262 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-x=\"262\" relative-y=\"262\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
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
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 262.1 ) );
	object.setDefaultY( MxNumberTenths( 262.1 ) );
	object.setRelativeX( MxNumberTenths( 262.1 ) );
	object.setRelativeY( MxNumberTenths( 262.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering relative-y=\"262.1\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 262.2 ) );
	object.setDefaultY( MxNumberTenths( 262.2 ) );
	object.setRelativeX( MxNumberTenths( 262.2 ) );
	object.setRelativeY( MxNumberTenths( 262.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-y=\"262.2\" relative-y=\"262.2\" font-family=\"ABC\" font-weight=\"normal\" color=\"#605F5E\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 262.3 ) );
	object.setDefaultY( MxNumberTenths( 262.3 ) );
	object.setRelativeX( MxNumberTenths( 262.3 ) );
	object.setRelativeY( MxNumberTenths( 262.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" default-y=\"262.3\" relative-y=\"262.3\" font-family=\"DEF\" font-weight=\"bold\" color=\"#61626160\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 262.4 ) );
	object.setDefaultY( MxNumberTenths( 262.4 ) );
	object.setRelativeX( MxNumberTenths( 262.4 ) );
	object.setRelativeY( MxNumberTenths( 262.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-x=\"262.4\" default-y=\"262.4\" relative-x=\"262.4\" font-family=\"XYZ\" font-size=\"large\" color=\"#646362\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 262.5 ) );
	object.setDefaultY( MxNumberTenths( 262.5 ) );
	object.setRelativeX( MxNumberTenths( 262.5 ) );
	object.setRelativeY( MxNumberTenths( 262.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering default-x=\"262.5\" default-y=\"262.5\" relative-x=\"262.5\" font-size=\"1.1\" color=\"#65666564\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 262.6 ) );
	object.setDefaultY( MxNumberTenths( 262.6 ) );
	object.setRelativeX( MxNumberTenths( 262.6 ) );
	object.setRelativeY( MxNumberTenths( 262.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-x=\"262.6\" relative-x=\"262.6\" font-size=\"large\" color=\"#686766\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 262.7 ) );
	object.setDefaultY( MxNumberTenths( 262.7 ) );
	object.setRelativeX( MxNumberTenths( 262.7 ) );
	object.setRelativeY( MxNumberTenths( 262.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" relative-x=\"262.7\" font-size=\"1.1\" color=\"#696A6968\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 262.8 ) );
	object.setDefaultY( MxNumberTenths( 262.8 ) );
	object.setRelativeX( MxNumberTenths( 262.8 ) );
	object.setRelativeY( MxNumberTenths( 262.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" relative-x=\"262.8\" font-size=\"large\" color=\"#6C6B6A\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 262.9 ) );
	object.setDefaultY( MxNumberTenths( 262.9 ) );
	object.setRelativeX( MxNumberTenths( 262.9 ) );
	object.setRelativeY( MxNumberTenths( 262.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering font-size=\"1.1\" color=\"#6D6E6D6C\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 263 ) );
	object.setDefaultY( MxNumberTenths( 263 ) );
	object.setRelativeX( MxNumberTenths( 263 ) );
	object.setRelativeY( MxNumberTenths( 263 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" alternate=\"yes\" default-x=\"263\" default-y=\"263\" relative-y=\"263\" font-style=\"normal\" font-size=\"large\" color=\"#706F6E\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 263.1 ) );
	object.setDefaultY( MxNumberTenths( 263.1 ) );
	object.setRelativeX( MxNumberTenths( 263.1 ) );
	object.setRelativeY( MxNumberTenths( 263.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering alternate=\"yes\" default-x=\"263.1\" default-y=\"263.1\" relative-y=\"263.1\" font-style=\"italic\" font-size=\"1.1\" color=\"#71727170\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( true );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 263.2 ) );
	object.setDefaultY( MxNumberTenths( 263.2 ) );
	object.setRelativeX( MxNumberTenths( 263.2 ) );
	object.setRelativeY( MxNumberTenths( 263.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering substitution=\"yes\" default-x=\"263.2\" default-y=\"263.2\" relative-y=\"263.2\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#747372\" placement=\"below\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 263.3 ) );
	object.setDefaultY( MxNumberTenths( 263.3 ) );
	object.setRelativeX( MxNumberTenths( 263.3 ) );
	object.setRelativeY( MxNumberTenths( 263.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<fingering default-y=\"263.3\" relative-y=\"263.3\" font-family=\"XYZ\" font-style=\"italic\" placement=\"above\">D,E,F</fingering>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEsFingering )
{
	MxEsFingering object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsSubstitutionPresent( false );
	object.setIsAlternatePresent( false );
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
	object.setSubstitution( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setAlternate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 263.4 ) );
	object.setDefaultY( MxNumberTenths( 263.4 ) );
	object.setRelativeX( MxNumberTenths( 263.4 ) );
	object.setRelativeY( MxNumberTenths( 263.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<fingering>D,E,F</fingering>";
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


