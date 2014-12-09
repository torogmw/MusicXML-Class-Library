/** *******************************************************
  * 
  * MxEeDoitTest.cpp
  * Created: 2014-12-05 16:47:06
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeDoit.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeDoit )
{
	MxEeDoit object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEeDoit )
{
	MxEeDoit object;
	std::string expected = ( MxEnumLineShape(  ) ).toString();
	std::string actual = object.getLineShape().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEeDoit )
{
	MxEeDoit object;
	std::string expected = ( MxEnumLineType(  ) ).toString();
	std::string actual = object.getLineType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEeDoit )
{
	MxEeDoit object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDashLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEeDoit )
{
	MxEeDoit object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getSpaceLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEeDoit )
{
	MxEeDoit object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEeDoit )
{
	MxEeDoit object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEeDoit )
{
	MxEeDoit object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEeDoit )
{
	MxEeDoit object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEeDoit )
{
	MxEeDoit object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEeDoit )
{
	MxEeDoit object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxEeDoit )
{
	MxEeDoit object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxEeDoit )
{
	MxEeDoit object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxEeDoit )
{
	MxEeDoit object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxEeDoit )
{
	MxEeDoit object;
	std::string expected = ( MxEnumAboveBelow(  ) ).toString();
	std::string actual = object.getPlacement().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeDoit )
{
	MxEeDoit object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeDoit )
{
	MxEeDoit object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeDoit )
{
	MxEeDoit object;
	std::string expected = "MxEeDoit";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeDoit )
{
	MxEeDoit object;
	std::string expected = "doit";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeDoit )
{
	MxEeDoit object;
	std::string expected = "The doit element is an indeterminate slide attached to a single note. The doit element appears after the main note and goes above the main pitch.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setLineShape0, MxEeDoit )
{
	MxEnumLineShape value1( lexicon::enums::LineShape::curved );
	MxEnumLineShape value2( lexicon::enums::LineShape::straight );
	CHECK( ( value1 != value2 ) )
	MxEeDoit object;
	object.setLineShape( value1 );
	MxEnumLineShape expected = value1;
	MxEnumLineShape actual = object.getLineShape();
	CHECK_EQUAL( expected, actual )
	object.setLineShape( value2 );
	expected = value2;
	actual = object.getLineShape();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineType1, MxEeDoit )
{
	MxEnumLineType value1( lexicon::enums::LineType::wavy );
	MxEnumLineType value2( lexicon::enums::LineType::dotted );
	CHECK( ( value1 != value2 ) )
	MxEeDoit object;
	object.setLineType( value1 );
	MxEnumLineType expected = value1;
	MxEnumLineType actual = object.getLineType();
	CHECK_EQUAL( expected, actual )
	object.setLineType( value2 );
	expected = value2;
	actual = object.getLineType();
	CHECK_EQUAL( expected, actual )
}
TEST( setDashLength2, MxEeDoit )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeDoit object;
	object.setDashLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
	object.setDashLength( value2 );
	expected = value2;
	actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setSpaceLength3, MxEeDoit )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeDoit object;
	object.setSpaceLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
	object.setSpaceLength( value2 );
	expected = value2;
	actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX4, MxEeDoit )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeDoit object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY5, MxEeDoit )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeDoit object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX6, MxEeDoit )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeDoit object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY7, MxEeDoit )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeDoit object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily8, MxEeDoit )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEeDoit object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle9, MxEeDoit )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEeDoit object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize10, MxEeDoit )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEeDoit object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight11, MxEeDoit )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEeDoit object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor12, MxEeDoit )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEeDoit object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setPlacement13, MxEeDoit )
{
	MxEnumAboveBelow value1( lexicon::enums::AboveBelow::below );
	MxEnumAboveBelow value2( lexicon::enums::AboveBelow::above );
	CHECK( ( value1 != value2 ) )
	MxEeDoit object;
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

TEST( getIsLineShapeRequired0, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsLineShapeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineTypeRequired1, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsLineTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthRequired2, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsDashLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthRequired3, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired4, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired5, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired6, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired7, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired8, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired9, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired10, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired11, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired12, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementRequired13, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsPlacementRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsLineShapePresent0, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsLineShapePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLineShapePresent( true );
	expected = true;
	actual = object.getIsLineShapePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLineShapePresent( false );
	expected = false;
	actual = object.getIsLineShapePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineTypePresent1, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsLineTypePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLineTypePresent( true );
	expected = true;
	actual = object.getIsLineTypePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLineTypePresent( false );
	expected = false;
	actual = object.getIsLineTypePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthPresent2, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsDashLengthPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDashLengthPresent( true );
	expected = true;
	actual = object.getIsDashLengthPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDashLengthPresent( false );
	expected = false;
	actual = object.getIsDashLengthPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthPresent3, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSpaceLengthPresent( true );
	expected = true;
	actual = object.getIsSpaceLengthPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSpaceLengthPresent( false );
	expected = false;
	actual = object.getIsSpaceLengthPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXPresent4, MxEeDoit )
{
	MxEeDoit object;
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
TEST( getIsDefaultYPresent5, MxEeDoit )
{
	MxEeDoit object;
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
TEST( getIsRelativeXPresent6, MxEeDoit )
{
	MxEeDoit object;
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
TEST( getIsRelativeYPresent7, MxEeDoit )
{
	MxEeDoit object;
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
TEST( getIsFontFamilyPresent8, MxEeDoit )
{
	MxEeDoit object;
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
TEST( getIsFontStylePresent9, MxEeDoit )
{
	MxEeDoit object;
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
TEST( getIsFontSizePresent10, MxEeDoit )
{
	MxEeDoit object;
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
TEST( getIsFontWeightPresent11, MxEeDoit )
{
	MxEeDoit object;
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
TEST( getIsColorPresent12, MxEeDoit )
{
	MxEeDoit object;
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
TEST( getIsPlacementPresent13, MxEeDoit )
{
	MxEeDoit object;
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

TEST( getIsLineShapeDefaultDefined, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsLineShapeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineTypeDefaultDefined, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsLineTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthDefaultDefined, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsDashLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthDefaultDefined, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementDefaultDefined, MxEeDoit )
{
	MxEeDoit object;
	bool expected = false;
	bool actual = object.getIsPlacementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getLineShapeDefaultValue, MxEeDoit )
{
	MxEeDoit object;
	MxEnumLineShape expected;
	MxEnumLineShape actual = object.getLineShapeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineTypeDefaultValue, MxEeDoit )
{
	MxEeDoit object;
	MxEnumLineType expected;
	MxEnumLineType actual = object.getLineTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDashLengthDefaultValue, MxEeDoit )
{
	MxEeDoit object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDashLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSpaceLengthDefaultValue, MxEeDoit )
{
	MxEeDoit object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getSpaceLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEeDoit )
{
	MxEeDoit object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEeDoit )
{
	MxEeDoit object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEeDoit )
{
	MxEeDoit object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEeDoit )
{
	MxEeDoit object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEeDoit )
{
	MxEeDoit object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEeDoit )
{
	MxEeDoit object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEeDoit )
{
	MxEeDoit object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEeDoit )
{
	MxEeDoit object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEeDoit )
{
	MxEeDoit object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPlacementDefaultValue, MxEeDoit )
{
	MxEeDoit object;
	MxEnumAboveBelow expected;
	MxEnumAboveBelow actual = object.getPlacementDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 61.7 ) );
	object.setSpaceLength( MxNumberTenths( 61.7 ) );
	object.setDefaultX( MxNumberTenths( 253.5 ) );
	object.setDefaultY( MxNumberTenths( 253.5 ) );
	object.setRelativeX( MxNumberTenths( 253.5 ) );
	object.setRelativeY( MxNumberTenths( 253.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
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
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" dash-length=\"61.7\" space-length=\"61.7\" default-x=\"253.5\" default-y=\"253.5\" relative-x=\"253.5\" relative-y=\"253.5\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F9FAF9F8\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 61.8 ) );
	object.setSpaceLength( MxNumberTenths( 61.8 ) );
	object.setDefaultX( MxNumberTenths( 253.6 ) );
	object.setDefaultY( MxNumberTenths( 253.6 ) );
	object.setRelativeX( MxNumberTenths( 253.6 ) );
	object.setRelativeY( MxNumberTenths( 253.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" dash-length=\"61.8\" space-length=\"61.8\" default-x=\"253.6\" default-y=\"253.6\" relative-x=\"253.6\" relative-y=\"253.6\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#FCFBFA\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 61.9 ) );
	object.setSpaceLength( MxNumberTenths( 61.9 ) );
	object.setDefaultX( MxNumberTenths( 253.7 ) );
	object.setDefaultY( MxNumberTenths( 253.7 ) );
	object.setRelativeX( MxNumberTenths( 253.7 ) );
	object.setRelativeY( MxNumberTenths( 253.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" dash-length=\"61.9\" space-length=\"61.9\" default-x=\"253.7\" default-y=\"253.7\" relative-x=\"253.7\" relative-y=\"253.7\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#FDFEFDFC\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 62 ) );
	object.setSpaceLength( MxNumberTenths( 62 ) );
	object.setDefaultX( MxNumberTenths( 253.8 ) );
	object.setDefaultY( MxNumberTenths( 253.8 ) );
	object.setRelativeX( MxNumberTenths( 253.8 ) );
	object.setRelativeY( MxNumberTenths( 253.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit space-length=\"62\" default-x=\"253.8\" default-y=\"253.8\" relative-x=\"253.8\" relative-y=\"253.8\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#00FFFE\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 62.1 ) );
	object.setSpaceLength( MxNumberTenths( 62.1 ) );
	object.setDefaultX( MxNumberTenths( 253.9 ) );
	object.setDefaultY( MxNumberTenths( 253.9 ) );
	object.setRelativeX( MxNumberTenths( 253.9 ) );
	object.setRelativeY( MxNumberTenths( 253.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" default-x=\"253.9\" default-y=\"253.9\" relative-x=\"253.9\" relative-y=\"253.9\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#01020100\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 62.2 ) );
	object.setSpaceLength( MxNumberTenths( 62.2 ) );
	object.setDefaultX( MxNumberTenths( 254 ) );
	object.setDefaultY( MxNumberTenths( 254 ) );
	object.setRelativeX( MxNumberTenths( 254 ) );
	object.setRelativeY( MxNumberTenths( 254 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#040302" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" default-y=\"254\" relative-x=\"254\" relative-y=\"254\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#040302\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 62.3 ) );
	object.setSpaceLength( MxNumberTenths( 62.3 ) );
	object.setDefaultX( MxNumberTenths( 254.1 ) );
	object.setDefaultY( MxNumberTenths( 254.1 ) );
	object.setRelativeX( MxNumberTenths( 254.1 ) );
	object.setRelativeY( MxNumberTenths( 254.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" dash-length=\"62.3\" relative-x=\"254.1\" relative-y=\"254.1\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#05060504\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 62.4 ) );
	object.setSpaceLength( MxNumberTenths( 62.4 ) );
	object.setDefaultX( MxNumberTenths( 254.2 ) );
	object.setDefaultY( MxNumberTenths( 254.2 ) );
	object.setRelativeX( MxNumberTenths( 254.2 ) );
	object.setRelativeY( MxNumberTenths( 254.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#080706" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit dash-length=\"62.4\" relative-y=\"254.2\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#080706\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 62.5 ) );
	object.setSpaceLength( MxNumberTenths( 62.5 ) );
	object.setDefaultX( MxNumberTenths( 254.3 ) );
	object.setDefaultY( MxNumberTenths( 254.3 ) );
	object.setRelativeX( MxNumberTenths( 254.3 ) );
	object.setRelativeY( MxNumberTenths( 254.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" dash-length=\"62.5\" space-length=\"62.5\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#090A0908\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 62.6 ) );
	object.setSpaceLength( MxNumberTenths( 62.6 ) );
	object.setDefaultX( MxNumberTenths( 254.4 ) );
	object.setDefaultY( MxNumberTenths( 254.4 ) );
	object.setRelativeX( MxNumberTenths( 254.4 ) );
	object.setRelativeY( MxNumberTenths( 254.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" space-length=\"62.6\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#0C0B0A\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 62.7 ) );
	object.setSpaceLength( MxNumberTenths( 62.7 ) );
	object.setDefaultX( MxNumberTenths( 254.5 ) );
	object.setDefaultY( MxNumberTenths( 254.5 ) );
	object.setRelativeX( MxNumberTenths( 254.5 ) );
	object.setRelativeY( MxNumberTenths( 254.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" space-length=\"62.7\" default-x=\"254.5\" font-size=\"1.1\" font-weight=\"bold\" color=\"#0D0E0D0C\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 62.8 ) );
	object.setSpaceLength( MxNumberTenths( 62.8 ) );
	object.setDefaultX( MxNumberTenths( 254.6 ) );
	object.setDefaultY( MxNumberTenths( 254.6 ) );
	object.setRelativeX( MxNumberTenths( 254.6 ) );
	object.setRelativeY( MxNumberTenths( 254.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit space-length=\"62.8\" default-x=\"254.6\" font-weight=\"normal\" color=\"#100F0E\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 62.9 ) );
	object.setSpaceLength( MxNumberTenths( 62.9 ) );
	object.setDefaultX( MxNumberTenths( 254.7 ) );
	object.setDefaultY( MxNumberTenths( 254.7 ) );
	object.setRelativeX( MxNumberTenths( 254.7 ) );
	object.setRelativeY( MxNumberTenths( 254.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" dash-length=\"62.9\" default-x=\"254.7\" default-y=\"254.7\" color=\"#11121110\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 63 ) );
	object.setSpaceLength( MxNumberTenths( 63 ) );
	object.setDefaultX( MxNumberTenths( 254.8 ) );
	object.setDefaultY( MxNumberTenths( 254.8 ) );
	object.setRelativeX( MxNumberTenths( 254.8 ) );
	object.setRelativeY( MxNumberTenths( 254.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#141312" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" dash-length=\"63\" default-x=\"254.8\" default-y=\"254.8\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 63.1 ) );
	object.setSpaceLength( MxNumberTenths( 63.1 ) );
	object.setDefaultX( MxNumberTenths( 254.9 ) );
	object.setDefaultY( MxNumberTenths( 254.9 ) );
	object.setRelativeX( MxNumberTenths( 254.9 ) );
	object.setRelativeY( MxNumberTenths( 254.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" dash-length=\"63.1\" default-x=\"254.9\" default-y=\"254.9\" relative-x=\"254.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 63.2 ) );
	object.setSpaceLength( MxNumberTenths( 63.2 ) );
	object.setDefaultX( MxNumberTenths( 255 ) );
	object.setDefaultY( MxNumberTenths( 255 ) );
	object.setRelativeX( MxNumberTenths( 255 ) );
	object.setRelativeY( MxNumberTenths( 255 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#181716" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit default-y=\"255\" relative-x=\"255\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 63.3 ) );
	object.setSpaceLength( MxNumberTenths( 63.3 ) );
	object.setDefaultX( MxNumberTenths( 255.1 ) );
	object.setDefaultY( MxNumberTenths( 255.1 ) );
	object.setRelativeX( MxNumberTenths( 255.1 ) );
	object.setRelativeY( MxNumberTenths( 255.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" space-length=\"63.3\" default-y=\"255.1\" relative-x=\"255.1\" relative-y=\"255.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 63.4 ) );
	object.setSpaceLength( MxNumberTenths( 63.4 ) );
	object.setDefaultX( MxNumberTenths( 255.2 ) );
	object.setDefaultY( MxNumberTenths( 255.2 ) );
	object.setRelativeX( MxNumberTenths( 255.2 ) );
	object.setRelativeY( MxNumberTenths( 255.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" space-length=\"63.4\" default-y=\"255.2\" relative-x=\"255.2\" relative-y=\"255.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 63.5 ) );
	object.setSpaceLength( MxNumberTenths( 63.5 ) );
	object.setDefaultX( MxNumberTenths( 255.3 ) );
	object.setDefaultY( MxNumberTenths( 255.3 ) );
	object.setRelativeX( MxNumberTenths( 255.3 ) );
	object.setRelativeY( MxNumberTenths( 255.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" dash-length=\"63.5\" space-length=\"63.5\" relative-x=\"255.3\" relative-y=\"255.3\" font-family=\"DEF\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 63.6 ) );
	object.setSpaceLength( MxNumberTenths( 63.6 ) );
	object.setDefaultX( MxNumberTenths( 255.4 ) );
	object.setDefaultY( MxNumberTenths( 255.4 ) );
	object.setRelativeX( MxNumberTenths( 255.4 ) );
	object.setRelativeY( MxNumberTenths( 255.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit dash-length=\"63.6\" space-length=\"63.6\" relative-x=\"255.4\" relative-y=\"255.4\" font-family=\"XYZ\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 63.7 ) );
	object.setSpaceLength( MxNumberTenths( 63.7 ) );
	object.setDefaultX( MxNumberTenths( 255.5 ) );
	object.setDefaultY( MxNumberTenths( 255.5 ) );
	object.setRelativeX( MxNumberTenths( 255.5 ) );
	object.setRelativeY( MxNumberTenths( 255.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" dash-length=\"63.7\" default-x=\"255.5\" relative-x=\"255.5\" relative-y=\"255.5\" font-family=\"ABC\" font-style=\"italic\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 63.8 ) );
	object.setSpaceLength( MxNumberTenths( 63.8 ) );
	object.setDefaultX( MxNumberTenths( 255.6 ) );
	object.setDefaultY( MxNumberTenths( 255.6 ) );
	object.setRelativeX( MxNumberTenths( 255.6 ) );
	object.setRelativeY( MxNumberTenths( 255.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#242322" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" default-x=\"255.6\" relative-y=\"255.6\" font-family=\"DEF\" font-style=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 63.9 ) );
	object.setSpaceLength( MxNumberTenths( 63.9 ) );
	object.setDefaultX( MxNumberTenths( 255.7 ) );
	object.setDefaultY( MxNumberTenths( 255.7 ) );
	object.setRelativeX( MxNumberTenths( 255.7 ) );
	object.setRelativeY( MxNumberTenths( 255.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" default-x=\"255.7\" relative-y=\"255.7\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 64 ) );
	object.setSpaceLength( MxNumberTenths( 64 ) );
	object.setDefaultX( MxNumberTenths( 255.8 ) );
	object.setDefaultY( MxNumberTenths( 255.8 ) );
	object.setRelativeX( MxNumberTenths( 255.8 ) );
	object.setRelativeY( MxNumberTenths( 255.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#282726" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit default-x=\"255.8\" relative-y=\"255.8\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 64.1 ) );
	object.setSpaceLength( MxNumberTenths( 64.1 ) );
	object.setDefaultX( MxNumberTenths( 255.9 ) );
	object.setDefaultY( MxNumberTenths( 255.9 ) );
	object.setRelativeX( MxNumberTenths( 255.9 ) );
	object.setRelativeY( MxNumberTenths( 255.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" dash-length=\"64.1\" space-length=\"64.1\" default-x=\"255.9\" default-y=\"255.9\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 64.2 ) );
	object.setSpaceLength( MxNumberTenths( 64.2 ) );
	object.setDefaultX( MxNumberTenths( 256 ) );
	object.setDefaultY( MxNumberTenths( 256 ) );
	object.setRelativeX( MxNumberTenths( 256 ) );
	object.setRelativeY( MxNumberTenths( 256 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" dash-length=\"64.2\" space-length=\"64.2\" default-y=\"256\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 64.3 ) );
	object.setSpaceLength( MxNumberTenths( 64.3 ) );
	object.setDefaultX( MxNumberTenths( 256.1 ) );
	object.setDefaultY( MxNumberTenths( 256.1 ) );
	object.setRelativeX( MxNumberTenths( 256.1 ) );
	object.setRelativeY( MxNumberTenths( 256.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" dash-length=\"64.3\" space-length=\"64.3\" default-y=\"256.1\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#2D2E2D2C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 64.4 ) );
	object.setSpaceLength( MxNumberTenths( 64.4 ) );
	object.setDefaultX( MxNumberTenths( 256.2 ) );
	object.setDefaultY( MxNumberTenths( 256.2 ) );
	object.setRelativeX( MxNumberTenths( 256.2 ) );
	object.setRelativeY( MxNumberTenths( 256.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit space-length=\"64.4\" default-y=\"256.2\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#302F2E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 64.5 ) );
	object.setSpaceLength( MxNumberTenths( 64.5 ) );
	object.setDefaultX( MxNumberTenths( 256.3 ) );
	object.setDefaultY( MxNumberTenths( 256.3 ) );
	object.setRelativeX( MxNumberTenths( 256.3 ) );
	object.setRelativeY( MxNumberTenths( 256.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" default-y=\"256.3\" relative-x=\"256.3\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#31323130\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 64.6 ) );
	object.setSpaceLength( MxNumberTenths( 64.6 ) );
	object.setDefaultX( MxNumberTenths( 256.4 ) );
	object.setDefaultY( MxNumberTenths( 256.4 ) );
	object.setRelativeX( MxNumberTenths( 256.4 ) );
	object.setRelativeY( MxNumberTenths( 256.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#343332" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" default-y=\"256.4\" relative-x=\"256.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#343332\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 64.7 ) );
	object.setSpaceLength( MxNumberTenths( 64.7 ) );
	object.setDefaultX( MxNumberTenths( 256.5 ) );
	object.setDefaultY( MxNumberTenths( 256.5 ) );
	object.setRelativeX( MxNumberTenths( 256.5 ) );
	object.setRelativeY( MxNumberTenths( 256.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" dash-length=\"64.7\" default-x=\"256.5\" relative-x=\"256.5\" font-size=\"1.1\" font-weight=\"bold\" color=\"#35363534\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 64.8 ) );
	object.setSpaceLength( MxNumberTenths( 64.8 ) );
	object.setDefaultX( MxNumberTenths( 256.6 ) );
	object.setDefaultY( MxNumberTenths( 256.6 ) );
	object.setRelativeX( MxNumberTenths( 256.6 ) );
	object.setRelativeY( MxNumberTenths( 256.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#383736" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit dash-length=\"64.8\" default-x=\"256.6\" relative-x=\"256.6\" font-size=\"large\" font-weight=\"normal\" color=\"#383736\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 64.9 ) );
	object.setSpaceLength( MxNumberTenths( 64.9 ) );
	object.setDefaultX( MxNumberTenths( 256.7 ) );
	object.setDefaultY( MxNumberTenths( 256.7 ) );
	object.setRelativeX( MxNumberTenths( 256.7 ) );
	object.setRelativeY( MxNumberTenths( 256.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" dash-length=\"64.9\" space-length=\"64.9\" default-x=\"256.7\" relative-x=\"256.7\" relative-y=\"256.7\" font-size=\"1.1\" font-weight=\"bold\" color=\"#393A3938\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 65 ) );
	object.setSpaceLength( MxNumberTenths( 65 ) );
	object.setDefaultX( MxNumberTenths( 256.8 ) );
	object.setDefaultY( MxNumberTenths( 256.8 ) );
	object.setRelativeX( MxNumberTenths( 256.8 ) );
	object.setRelativeY( MxNumberTenths( 256.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" space-length=\"65\" default-x=\"256.8\" relative-x=\"256.8\" relative-y=\"256.8\" font-weight=\"normal\" color=\"#3C3B3A\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 65.1 ) );
	object.setSpaceLength( MxNumberTenths( 65.1 ) );
	object.setDefaultX( MxNumberTenths( 256.9 ) );
	object.setDefaultY( MxNumberTenths( 256.9 ) );
	object.setRelativeX( MxNumberTenths( 256.9 ) );
	object.setRelativeY( MxNumberTenths( 256.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" space-length=\"65.1\" default-x=\"256.9\" relative-x=\"256.9\" relative-y=\"256.9\" font-weight=\"bold\" color=\"#3D3E3D3C\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 65.2 ) );
	object.setSpaceLength( MxNumberTenths( 65.2 ) );
	object.setDefaultX( MxNumberTenths( 257 ) );
	object.setDefaultY( MxNumberTenths( 257 ) );
	object.setRelativeX( MxNumberTenths( 257 ) );
	object.setRelativeY( MxNumberTenths( 257 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit space-length=\"65.2\" relative-y=\"257\" font-weight=\"normal\" color=\"#403F3E\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 65.3 ) );
	object.setSpaceLength( MxNumberTenths( 65.3 ) );
	object.setDefaultX( MxNumberTenths( 257.1 ) );
	object.setDefaultY( MxNumberTenths( 257.1 ) );
	object.setRelativeX( MxNumberTenths( 257.1 ) );
	object.setRelativeY( MxNumberTenths( 257.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" dash-length=\"65.3\" default-y=\"257.1\" relative-y=\"257.1\" font-family=\"DEF\" color=\"#41424140\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 65.4 ) );
	object.setSpaceLength( MxNumberTenths( 65.4 ) );
	object.setDefaultX( MxNumberTenths( 257.2 ) );
	object.setDefaultY( MxNumberTenths( 257.2 ) );
	object.setRelativeX( MxNumberTenths( 257.2 ) );
	object.setRelativeY( MxNumberTenths( 257.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#444342" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" dash-length=\"65.4\" default-y=\"257.2\" relative-y=\"257.2\" font-family=\"XYZ\" color=\"#444342\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 65.5 ) );
	object.setSpaceLength( MxNumberTenths( 65.5 ) );
	object.setDefaultX( MxNumberTenths( 257.3 ) );
	object.setDefaultY( MxNumberTenths( 257.3 ) );
	object.setRelativeX( MxNumberTenths( 257.3 ) );
	object.setRelativeY( MxNumberTenths( 257.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" dash-length=\"65.5\" default-y=\"257.3\" relative-y=\"257.3\" font-family=\"ABC\" color=\"#45464544\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 65.6 ) );
	object.setSpaceLength( MxNumberTenths( 65.6 ) );
	object.setDefaultX( MxNumberTenths( 257.4 ) );
	object.setDefaultY( MxNumberTenths( 257.4 ) );
	object.setRelativeX( MxNumberTenths( 257.4 ) );
	object.setRelativeY( MxNumberTenths( 257.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#484746" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit default-y=\"257.4\" relative-y=\"257.4\" font-family=\"DEF\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 65.7 ) );
	object.setSpaceLength( MxNumberTenths( 65.7 ) );
	object.setDefaultX( MxNumberTenths( 257.5 ) );
	object.setDefaultY( MxNumberTenths( 257.5 ) );
	object.setRelativeX( MxNumberTenths( 257.5 ) );
	object.setRelativeY( MxNumberTenths( 257.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" space-length=\"65.7\" default-x=\"257.5\" default-y=\"257.5\" font-family=\"XYZ\" font-style=\"italic\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 65.8 ) );
	object.setSpaceLength( MxNumberTenths( 65.8 ) );
	object.setDefaultX( MxNumberTenths( 257.6 ) );
	object.setDefaultY( MxNumberTenths( 257.6 ) );
	object.setRelativeX( MxNumberTenths( 257.6 ) );
	object.setRelativeY( MxNumberTenths( 257.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" space-length=\"65.8\" default-x=\"257.6\" default-y=\"257.6\" font-family=\"ABC\" font-style=\"normal\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 65.9 ) );
	object.setSpaceLength( MxNumberTenths( 65.9 ) );
	object.setDefaultX( MxNumberTenths( 257.7 ) );
	object.setDefaultY( MxNumberTenths( 257.7 ) );
	object.setRelativeX( MxNumberTenths( 257.7 ) );
	object.setRelativeY( MxNumberTenths( 257.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" dash-length=\"65.9\" space-length=\"65.9\" default-x=\"257.7\" relative-x=\"257.7\" font-family=\"DEF\" font-style=\"italic\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 66 ) );
	object.setSpaceLength( MxNumberTenths( 66 ) );
	object.setDefaultX( MxNumberTenths( 257.8 ) );
	object.setDefaultY( MxNumberTenths( 257.8 ) );
	object.setRelativeX( MxNumberTenths( 257.8 ) );
	object.setRelativeY( MxNumberTenths( 257.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit dash-length=\"66\" space-length=\"66\" default-x=\"257.8\" relative-x=\"257.8\" font-family=\"XYZ\" font-style=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 66.1 ) );
	object.setSpaceLength( MxNumberTenths( 66.1 ) );
	object.setDefaultX( MxNumberTenths( 257.9 ) );
	object.setDefaultY( MxNumberTenths( 257.9 ) );
	object.setRelativeX( MxNumberTenths( 257.9 ) );
	object.setRelativeY( MxNumberTenths( 257.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" dash-length=\"66.1\" default-x=\"257.9\" relative-x=\"257.9\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 66.2 ) );
	object.setSpaceLength( MxNumberTenths( 66.2 ) );
	object.setDefaultX( MxNumberTenths( 258 ) );
	object.setDefaultY( MxNumberTenths( 258 ) );
	object.setRelativeX( MxNumberTenths( 258 ) );
	object.setRelativeY( MxNumberTenths( 258 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#545352" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" relative-x=\"258\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 66.3 ) );
	object.setSpaceLength( MxNumberTenths( 66.3 ) );
	object.setDefaultX( MxNumberTenths( 258.1 ) );
	object.setDefaultY( MxNumberTenths( 258.1 ) );
	object.setRelativeX( MxNumberTenths( 258.1 ) );
	object.setRelativeY( MxNumberTenths( 258.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" relative-x=\"258.1\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 66.4 ) );
	object.setSpaceLength( MxNumberTenths( 66.4 ) );
	object.setDefaultX( MxNumberTenths( 258.2 ) );
	object.setDefaultY( MxNumberTenths( 258.2 ) );
	object.setRelativeX( MxNumberTenths( 258.2 ) );
	object.setRelativeY( MxNumberTenths( 258.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#585756" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit relative-x=\"258.2\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 66.5 ) );
	object.setSpaceLength( MxNumberTenths( 66.5 ) );
	object.setDefaultX( MxNumberTenths( 258.3 ) );
	object.setDefaultY( MxNumberTenths( 258.3 ) );
	object.setRelativeX( MxNumberTenths( 258.3 ) );
	object.setRelativeY( MxNumberTenths( 258.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" dash-length=\"66.5\" space-length=\"66.5\" default-y=\"258.3\" relative-x=\"258.3\" relative-y=\"258.3\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 66.6 ) );
	object.setSpaceLength( MxNumberTenths( 66.6 ) );
	object.setDefaultX( MxNumberTenths( 258.4 ) );
	object.setDefaultY( MxNumberTenths( 258.4 ) );
	object.setRelativeX( MxNumberTenths( 258.4 ) );
	object.setRelativeY( MxNumberTenths( 258.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" dash-length=\"66.6\" space-length=\"66.6\" default-y=\"258.4\" relative-y=\"258.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 66.7 ) );
	object.setSpaceLength( MxNumberTenths( 66.7 ) );
	object.setDefaultX( MxNumberTenths( 258.5 ) );
	object.setDefaultY( MxNumberTenths( 258.5 ) );
	object.setRelativeX( MxNumberTenths( 258.5 ) );
	object.setRelativeY( MxNumberTenths( 258.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" dash-length=\"66.7\" space-length=\"66.7\" default-x=\"258.5\" default-y=\"258.5\" relative-y=\"258.5\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 66.8 ) );
	object.setSpaceLength( MxNumberTenths( 66.8 ) );
	object.setDefaultX( MxNumberTenths( 258.6 ) );
	object.setDefaultY( MxNumberTenths( 258.6 ) );
	object.setRelativeX( MxNumberTenths( 258.6 ) );
	object.setRelativeY( MxNumberTenths( 258.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit space-length=\"66.8\" default-x=\"258.6\" default-y=\"258.6\" relative-y=\"258.6\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 66.9 ) );
	object.setSpaceLength( MxNumberTenths( 66.9 ) );
	object.setDefaultX( MxNumberTenths( 258.7 ) );
	object.setDefaultY( MxNumberTenths( 258.7 ) );
	object.setRelativeX( MxNumberTenths( 258.7 ) );
	object.setRelativeY( MxNumberTenths( 258.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" default-x=\"258.7\" default-y=\"258.7\" relative-y=\"258.7\" font-size=\"1.1\" font-weight=\"bold\" color=\"#61626160\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 67 ) );
	object.setSpaceLength( MxNumberTenths( 67 ) );
	object.setDefaultX( MxNumberTenths( 258.8 ) );
	object.setDefaultY( MxNumberTenths( 258.8 ) );
	object.setRelativeX( MxNumberTenths( 258.8 ) );
	object.setRelativeY( MxNumberTenths( 258.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" default-x=\"258.8\" default-y=\"258.8\" relative-y=\"258.8\" font-size=\"large\" font-weight=\"normal\" color=\"#646362\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 67.1 ) );
	object.setSpaceLength( MxNumberTenths( 67.1 ) );
	object.setDefaultX( MxNumberTenths( 258.9 ) );
	object.setDefaultY( MxNumberTenths( 258.9 ) );
	object.setRelativeX( MxNumberTenths( 258.9 ) );
	object.setRelativeY( MxNumberTenths( 258.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" dash-length=\"67.1\" default-x=\"258.9\" relative-y=\"258.9\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" color=\"#65666564\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 67.2 ) );
	object.setSpaceLength( MxNumberTenths( 67.2 ) );
	object.setDefaultX( MxNumberTenths( 259 ) );
	object.setDefaultY( MxNumberTenths( 259 ) );
	object.setRelativeX( MxNumberTenths( 259 ) );
	object.setRelativeY( MxNumberTenths( 259 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit dash-length=\"67.2\" relative-y=\"259\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#686766\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 67.3 ) );
	object.setSpaceLength( MxNumberTenths( 67.3 ) );
	object.setDefaultX( MxNumberTenths( 259.1 ) );
	object.setDefaultY( MxNumberTenths( 259.1 ) );
	object.setRelativeX( MxNumberTenths( 259.1 ) );
	object.setRelativeY( MxNumberTenths( 259.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" dash-length=\"67.3\" space-length=\"67.3\" relative-x=\"259.1\" font-family=\"ABC\" font-weight=\"bold\" color=\"#696A6968\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 67.4 ) );
	object.setSpaceLength( MxNumberTenths( 67.4 ) );
	object.setDefaultX( MxNumberTenths( 259.2 ) );
	object.setDefaultY( MxNumberTenths( 259.2 ) );
	object.setRelativeX( MxNumberTenths( 259.2 ) );
	object.setRelativeY( MxNumberTenths( 259.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" space-length=\"67.4\" relative-x=\"259.2\" font-family=\"DEF\" font-weight=\"normal\" color=\"#6C6B6A\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 67.5 ) );
	object.setSpaceLength( MxNumberTenths( 67.5 ) );
	object.setDefaultX( MxNumberTenths( 259.3 ) );
	object.setDefaultY( MxNumberTenths( 259.3 ) );
	object.setRelativeX( MxNumberTenths( 259.3 ) );
	object.setRelativeY( MxNumberTenths( 259.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" space-length=\"67.5\" relative-x=\"259.3\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#6D6E6D6C\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 67.6 ) );
	object.setSpaceLength( MxNumberTenths( 67.6 ) );
	object.setDefaultX( MxNumberTenths( 259.4 ) );
	object.setDefaultY( MxNumberTenths( 259.4 ) );
	object.setRelativeX( MxNumberTenths( 259.4 ) );
	object.setRelativeY( MxNumberTenths( 259.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit space-length=\"67.6\" relative-x=\"259.4\" font-family=\"ABC\" font-weight=\"normal\" color=\"#706F6E\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 67.7 ) );
	object.setSpaceLength( MxNumberTenths( 67.7 ) );
	object.setDefaultX( MxNumberTenths( 259.5 ) );
	object.setDefaultY( MxNumberTenths( 259.5 ) );
	object.setRelativeX( MxNumberTenths( 259.5 ) );
	object.setRelativeY( MxNumberTenths( 259.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" dash-length=\"67.7\" default-x=\"259.5\" default-y=\"259.5\" relative-x=\"259.5\" font-family=\"DEF\" font-style=\"italic\" color=\"#71727170\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 67.8 ) );
	object.setSpaceLength( MxNumberTenths( 67.8 ) );
	object.setDefaultX( MxNumberTenths( 259.6 ) );
	object.setDefaultY( MxNumberTenths( 259.6 ) );
	object.setRelativeX( MxNumberTenths( 259.6 ) );
	object.setRelativeY( MxNumberTenths( 259.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" dash-length=\"67.8\" default-x=\"259.6\" default-y=\"259.6\" relative-x=\"259.6\" font-family=\"XYZ\" font-style=\"normal\" color=\"#747372\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 67.9 ) );
	object.setSpaceLength( MxNumberTenths( 67.9 ) );
	object.setDefaultX( MxNumberTenths( 259.7 ) );
	object.setDefaultY( MxNumberTenths( 259.7 ) );
	object.setRelativeX( MxNumberTenths( 259.7 ) );
	object.setRelativeY( MxNumberTenths( 259.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" dash-length=\"67.9\" default-x=\"259.7\" default-y=\"259.7\" relative-x=\"259.7\" font-family=\"ABC\" font-style=\"italic\" color=\"#75767574\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 68 ) );
	object.setSpaceLength( MxNumberTenths( 68 ) );
	object.setDefaultX( MxNumberTenths( 259.8 ) );
	object.setDefaultY( MxNumberTenths( 259.8 ) );
	object.setRelativeX( MxNumberTenths( 259.8 ) );
	object.setRelativeY( MxNumberTenths( 259.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit default-x=\"259.8\" default-y=\"259.8\" font-style=\"normal\" color=\"#787776\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 68.1 ) );
	object.setSpaceLength( MxNumberTenths( 68.1 ) );
	object.setDefaultX( MxNumberTenths( 259.9 ) );
	object.setDefaultY( MxNumberTenths( 259.9 ) );
	object.setRelativeX( MxNumberTenths( 259.9 ) );
	object.setRelativeY( MxNumberTenths( 259.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" space-length=\"68.1\" default-x=\"259.9\" default-y=\"259.9\" relative-y=\"259.9\" font-style=\"italic\" color=\"#797A7978\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 68.2 ) );
	object.setSpaceLength( MxNumberTenths( 68.2 ) );
	object.setDefaultX( MxNumberTenths( 260 ) );
	object.setDefaultY( MxNumberTenths( 260 ) );
	object.setRelativeX( MxNumberTenths( 260 ) );
	object.setRelativeY( MxNumberTenths( 260 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" space-length=\"68.2\" default-y=\"260\" relative-y=\"260\" font-style=\"normal\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 68.3 ) );
	object.setSpaceLength( MxNumberTenths( 68.3 ) );
	object.setDefaultX( MxNumberTenths( 260.1 ) );
	object.setDefaultY( MxNumberTenths( 260.1 ) );
	object.setRelativeX( MxNumberTenths( 260.1 ) );
	object.setRelativeY( MxNumberTenths( 260.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" dash-length=\"68.3\" space-length=\"68.3\" relative-y=\"260.1\" font-style=\"italic\" font-size=\"1.1\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 68.4 ) );
	object.setSpaceLength( MxNumberTenths( 68.4 ) );
	object.setDefaultX( MxNumberTenths( 260.2 ) );
	object.setDefaultY( MxNumberTenths( 260.2 ) );
	object.setRelativeX( MxNumberTenths( 260.2 ) );
	object.setRelativeY( MxNumberTenths( 260.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit dash-length=\"68.4\" space-length=\"68.4\" relative-y=\"260.2\" font-style=\"normal\" font-size=\"large\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 68.5 ) );
	object.setSpaceLength( MxNumberTenths( 68.5 ) );
	object.setDefaultX( MxNumberTenths( 260.3 ) );
	object.setDefaultY( MxNumberTenths( 260.3 ) );
	object.setRelativeX( MxNumberTenths( 260.3 ) );
	object.setRelativeY( MxNumberTenths( 260.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" dash-length=\"68.5\" relative-y=\"260.3\" font-style=\"italic\" font-size=\"1.1\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 68.6 ) );
	object.setSpaceLength( MxNumberTenths( 68.6 ) );
	object.setDefaultX( MxNumberTenths( 260.4 ) );
	object.setDefaultY( MxNumberTenths( 260.4 ) );
	object.setRelativeX( MxNumberTenths( 260.4 ) );
	object.setRelativeY( MxNumberTenths( 260.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" relative-y=\"260.4\" font-style=\"normal\" font-size=\"large\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 68.7 ) );
	object.setSpaceLength( MxNumberTenths( 68.7 ) );
	object.setDefaultX( MxNumberTenths( 260.5 ) );
	object.setDefaultY( MxNumberTenths( 260.5 ) );
	object.setRelativeX( MxNumberTenths( 260.5 ) );
	object.setRelativeY( MxNumberTenths( 260.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" default-x=\"260.5\" relative-x=\"260.5\" relative-y=\"260.5\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 68.8 ) );
	object.setSpaceLength( MxNumberTenths( 68.8 ) );
	object.setDefaultX( MxNumberTenths( 260.6 ) );
	object.setDefaultY( MxNumberTenths( 260.6 ) );
	object.setRelativeX( MxNumberTenths( 260.6 ) );
	object.setRelativeY( MxNumberTenths( 260.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit default-x=\"260.6\" relative-x=\"260.6\" relative-y=\"260.6\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 68.9 ) );
	object.setSpaceLength( MxNumberTenths( 68.9 ) );
	object.setDefaultX( MxNumberTenths( 260.7 ) );
	object.setDefaultY( MxNumberTenths( 260.7 ) );
	object.setRelativeX( MxNumberTenths( 260.7 ) );
	object.setRelativeY( MxNumberTenths( 260.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" dash-length=\"68.9\" space-length=\"68.9\" default-x=\"260.7\" default-y=\"260.7\" relative-x=\"260.7\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 69 ) );
	object.setSpaceLength( MxNumberTenths( 69 ) );
	object.setDefaultX( MxNumberTenths( 260.8 ) );
	object.setDefaultY( MxNumberTenths( 260.8 ) );
	object.setRelativeX( MxNumberTenths( 260.8 ) );
	object.setRelativeY( MxNumberTenths( 260.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" dash-length=\"69\" space-length=\"69\" default-x=\"260.8\" default-y=\"260.8\" relative-x=\"260.8\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 69.1 ) );
	object.setSpaceLength( MxNumberTenths( 69.1 ) );
	object.setDefaultX( MxNumberTenths( 260.9 ) );
	object.setDefaultY( MxNumberTenths( 260.9 ) );
	object.setRelativeX( MxNumberTenths( 260.9 ) );
	object.setRelativeY( MxNumberTenths( 260.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" dash-length=\"69.1\" space-length=\"69.1\" default-x=\"260.9\" default-y=\"260.9\" relative-x=\"260.9\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 69.2 ) );
	object.setSpaceLength( MxNumberTenths( 69.2 ) );
	object.setDefaultX( MxNumberTenths( 261 ) );
	object.setDefaultY( MxNumberTenths( 261 ) );
	object.setRelativeX( MxNumberTenths( 261 ) );
	object.setRelativeY( MxNumberTenths( 261 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit space-length=\"69.2\" default-y=\"261\" relative-x=\"261\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 69.3 ) );
	object.setSpaceLength( MxNumberTenths( 69.3 ) );
	object.setDefaultX( MxNumberTenths( 261.1 ) );
	object.setDefaultY( MxNumberTenths( 261.1 ) );
	object.setRelativeX( MxNumberTenths( 261.1 ) );
	object.setRelativeY( MxNumberTenths( 261.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" default-y=\"261.1\" relative-x=\"261.1\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 69.4 ) );
	object.setSpaceLength( MxNumberTenths( 69.4 ) );
	object.setDefaultX( MxNumberTenths( 261.2 ) );
	object.setDefaultY( MxNumberTenths( 261.2 ) );
	object.setRelativeX( MxNumberTenths( 261.2 ) );
	object.setRelativeY( MxNumberTenths( 261.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" default-y=\"261.2\" font-family=\"ABC\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 69.5 ) );
	object.setSpaceLength( MxNumberTenths( 69.5 ) );
	object.setDefaultX( MxNumberTenths( 261.3 ) );
	object.setDefaultY( MxNumberTenths( 261.3 ) );
	object.setRelativeX( MxNumberTenths( 261.3 ) );
	object.setRelativeY( MxNumberTenths( 261.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" dash-length=\"69.5\" font-family=\"DEF\" font-weight=\"bold\" color=\"#95969594\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 69.6 ) );
	object.setSpaceLength( MxNumberTenths( 69.6 ) );
	object.setDefaultX( MxNumberTenths( 261.4 ) );
	object.setDefaultY( MxNumberTenths( 261.4 ) );
	object.setRelativeX( MxNumberTenths( 261.4 ) );
	object.setRelativeY( MxNumberTenths( 261.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit dash-length=\"69.6\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#989796\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 69.7 ) );
	object.setSpaceLength( MxNumberTenths( 69.7 ) );
	object.setDefaultX( MxNumberTenths( 261.5 ) );
	object.setDefaultY( MxNumberTenths( 261.5 ) );
	object.setRelativeX( MxNumberTenths( 261.5 ) );
	object.setRelativeY( MxNumberTenths( 261.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" dash-length=\"69.7\" space-length=\"69.7\" default-x=\"261.5\" relative-y=\"261.5\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" color=\"#999A9998\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 69.8 ) );
	object.setSpaceLength( MxNumberTenths( 69.8 ) );
	object.setDefaultX( MxNumberTenths( 261.6 ) );
	object.setDefaultY( MxNumberTenths( 261.6 ) );
	object.setRelativeX( MxNumberTenths( 261.6 ) );
	object.setRelativeY( MxNumberTenths( 261.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" space-length=\"69.8\" default-x=\"261.6\" relative-y=\"261.6\" font-style=\"normal\" font-weight=\"normal\" color=\"#9C9B9A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 69.9 ) );
	object.setSpaceLength( MxNumberTenths( 69.9 ) );
	object.setDefaultX( MxNumberTenths( 261.7 ) );
	object.setDefaultY( MxNumberTenths( 261.7 ) );
	object.setRelativeX( MxNumberTenths( 261.7 ) );
	object.setRelativeY( MxNumberTenths( 261.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" space-length=\"69.9\" default-x=\"261.7\" relative-y=\"261.7\" font-style=\"italic\" font-weight=\"bold\" color=\"#9D9E9D9C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 70 ) );
	object.setSpaceLength( MxNumberTenths( 70 ) );
	object.setDefaultX( MxNumberTenths( 261.8 ) );
	object.setDefaultY( MxNumberTenths( 261.8 ) );
	object.setRelativeX( MxNumberTenths( 261.8 ) );
	object.setRelativeY( MxNumberTenths( 261.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit space-length=\"70\" default-x=\"261.8\" relative-y=\"261.8\" font-style=\"normal\" font-weight=\"normal\" color=\"#A09F9E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 70.1 ) );
	object.setSpaceLength( MxNumberTenths( 70.1 ) );
	object.setDefaultX( MxNumberTenths( 261.9 ) );
	object.setDefaultY( MxNumberTenths( 261.9 ) );
	object.setRelativeX( MxNumberTenths( 261.9 ) );
	object.setRelativeY( MxNumberTenths( 261.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" dash-length=\"70.1\" default-x=\"261.9\" default-y=\"261.9\" relative-x=\"261.9\" relative-y=\"261.9\" font-style=\"italic\" color=\"#A1A2A1A0\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 70.2 ) );
	object.setSpaceLength( MxNumberTenths( 70.2 ) );
	object.setDefaultX( MxNumberTenths( 262 ) );
	object.setDefaultY( MxNumberTenths( 262 ) );
	object.setRelativeX( MxNumberTenths( 262 ) );
	object.setRelativeY( MxNumberTenths( 262 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" dash-length=\"70.2\" default-y=\"262\" relative-x=\"262\" relative-y=\"262\" font-style=\"normal\" color=\"#A4A3A2\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 70.3 ) );
	object.setSpaceLength( MxNumberTenths( 70.3 ) );
	object.setDefaultX( MxNumberTenths( 262.1 ) );
	object.setDefaultY( MxNumberTenths( 262.1 ) );
	object.setRelativeX( MxNumberTenths( 262.1 ) );
	object.setRelativeY( MxNumberTenths( 262.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" dash-length=\"70.3\" default-y=\"262.1\" relative-x=\"262.1\" relative-y=\"262.1\" font-style=\"italic\" color=\"#A5A6A5A4\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 70.4 ) );
	object.setSpaceLength( MxNumberTenths( 70.4 ) );
	object.setDefaultX( MxNumberTenths( 262.2 ) );
	object.setDefaultY( MxNumberTenths( 262.2 ) );
	object.setRelativeX( MxNumberTenths( 262.2 ) );
	object.setRelativeY( MxNumberTenths( 262.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit default-y=\"262.2\" relative-x=\"262.2\" relative-y=\"262.2\" font-style=\"normal\" color=\"#A8A7A6\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 70.5 ) );
	object.setSpaceLength( MxNumberTenths( 70.5 ) );
	object.setDefaultX( MxNumberTenths( 262.3 ) );
	object.setDefaultY( MxNumberTenths( 262.3 ) );
	object.setRelativeX( MxNumberTenths( 262.3 ) );
	object.setRelativeY( MxNumberTenths( 262.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" space-length=\"70.5\" default-y=\"262.3\" relative-x=\"262.3\" font-style=\"italic\" font-size=\"1.1\" color=\"#A9AAA9A8\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 70.6 ) );
	object.setSpaceLength( MxNumberTenths( 70.6 ) );
	object.setDefaultX( MxNumberTenths( 262.4 ) );
	object.setDefaultY( MxNumberTenths( 262.4 ) );
	object.setRelativeX( MxNumberTenths( 262.4 ) );
	object.setRelativeY( MxNumberTenths( 262.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" space-length=\"70.6\" default-y=\"262.4\" relative-x=\"262.4\" font-style=\"normal\" font-size=\"large\" color=\"#ACABAA\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 70.7 ) );
	object.setSpaceLength( MxNumberTenths( 70.7 ) );
	object.setDefaultX( MxNumberTenths( 262.5 ) );
	object.setDefaultY( MxNumberTenths( 262.5 ) );
	object.setRelativeX( MxNumberTenths( 262.5 ) );
	object.setRelativeY( MxNumberTenths( 262.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" dash-length=\"70.7\" space-length=\"70.7\" default-x=\"262.5\" relative-x=\"262.5\" font-family=\"DEF\" font-size=\"1.1\" color=\"#ADAEADAC\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 70.8 ) );
	object.setSpaceLength( MxNumberTenths( 70.8 ) );
	object.setDefaultX( MxNumberTenths( 262.6 ) );
	object.setDefaultY( MxNumberTenths( 262.6 ) );
	object.setRelativeX( MxNumberTenths( 262.6 ) );
	object.setRelativeY( MxNumberTenths( 262.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit dash-length=\"70.8\" space-length=\"70.8\" default-x=\"262.6\" font-family=\"XYZ\" font-size=\"large\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 70.9 ) );
	object.setSpaceLength( MxNumberTenths( 70.9 ) );
	object.setDefaultX( MxNumberTenths( 262.7 ) );
	object.setDefaultY( MxNumberTenths( 262.7 ) );
	object.setRelativeX( MxNumberTenths( 262.7 ) );
	object.setRelativeY( MxNumberTenths( 262.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" dash-length=\"70.9\" default-x=\"262.7\" font-family=\"ABC\" font-size=\"1.1\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 71 ) );
	object.setSpaceLength( MxNumberTenths( 71 ) );
	object.setDefaultX( MxNumberTenths( 262.8 ) );
	object.setDefaultY( MxNumberTenths( 262.8 ) );
	object.setRelativeX( MxNumberTenths( 262.8 ) );
	object.setRelativeY( MxNumberTenths( 262.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" default-x=\"262.8\" font-family=\"DEF\" font-size=\"large\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 71.1 ) );
	object.setSpaceLength( MxNumberTenths( 71.1 ) );
	object.setDefaultX( MxNumberTenths( 262.9 ) );
	object.setDefaultY( MxNumberTenths( 262.9 ) );
	object.setRelativeX( MxNumberTenths( 262.9 ) );
	object.setRelativeY( MxNumberTenths( 262.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" default-x=\"262.9\" font-family=\"XYZ\" font-size=\"1.1\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 71.2 ) );
	object.setSpaceLength( MxNumberTenths( 71.2 ) );
	object.setDefaultX( MxNumberTenths( 263 ) );
	object.setDefaultY( MxNumberTenths( 263 ) );
	object.setRelativeX( MxNumberTenths( 263 ) );
	object.setRelativeY( MxNumberTenths( 263 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit font-family=\"ABC\" font-size=\"large\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 71.3 ) );
	object.setSpaceLength( MxNumberTenths( 71.3 ) );
	object.setDefaultX( MxNumberTenths( 263.1 ) );
	object.setDefaultY( MxNumberTenths( 263.1 ) );
	object.setRelativeX( MxNumberTenths( 263.1 ) );
	object.setRelativeY( MxNumberTenths( 263.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" line-type=\"dashed\" dash-length=\"71.3\" space-length=\"71.3\" default-y=\"263.1\" relative-y=\"263.1\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 71.4 ) );
	object.setSpaceLength( MxNumberTenths( 71.4 ) );
	object.setDefaultX( MxNumberTenths( 263.2 ) );
	object.setDefaultY( MxNumberTenths( 263.2 ) );
	object.setRelativeX( MxNumberTenths( 263.2 ) );
	object.setRelativeY( MxNumberTenths( 263.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit line-type=\"dotted\" dash-length=\"71.4\" space-length=\"71.4\" default-y=\"263.2\" relative-y=\"263.2\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 71.5 ) );
	object.setSpaceLength( MxNumberTenths( 71.5 ) );
	object.setDefaultX( MxNumberTenths( 263.3 ) );
	object.setDefaultY( MxNumberTenths( 263.3 ) );
	object.setRelativeX( MxNumberTenths( 263.3 ) );
	object.setRelativeY( MxNumberTenths( 263.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit line-shape=\"curved\" dash-length=\"71.5\" space-length=\"71.5\" default-y=\"263.3\" relative-x=\"263.3\" relative-y=\"263.3\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 71.6 ) );
	object.setSpaceLength( MxNumberTenths( 71.6 ) );
	object.setDefaultX( MxNumberTenths( 263.4 ) );
	object.setDefaultY( MxNumberTenths( 263.4 ) );
	object.setRelativeX( MxNumberTenths( 263.4 ) );
	object.setRelativeY( MxNumberTenths( 263.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	expected = "<doit space-length=\"71.6\" default-y=\"263.4\" relative-x=\"263.4\" relative-y=\"263.4\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEeDoit )
{
	MxEeDoit object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
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
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 71.7 ) );
	object.setSpaceLength( MxNumberTenths( 71.7 ) );
	object.setDefaultX( MxNumberTenths( 263.5 ) );
	object.setDefaultY( MxNumberTenths( 263.5 ) );
	object.setRelativeX( MxNumberTenths( 263.5 ) );
	object.setRelativeY( MxNumberTenths( 263.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	expected = "<doit/>";
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


