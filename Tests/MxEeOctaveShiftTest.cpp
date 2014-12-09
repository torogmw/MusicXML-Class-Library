/** *******************************************************
  * 
  * MxEeOctaveShiftTest.cpp
  * Created: 2014-12-05 16:47:04
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeOctaveShift.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected = ( MxEnumUpDownStopContinue(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected = ( MxNumberNumberLevel(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected = ( XsPositiveInteger( 8 ) ).toString();
	std::string actual = object.getSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDashLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getSpaceLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected = "MxEeOctaveShift";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected = "octave-shift";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxEeOctaveShift )
{
	MxEnumUpDownStopContinue value1( lexicon::enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue value2( lexicon::enums::UpDownStopContinue::stop );
	CHECK( ( value1 != value2 ) )
	MxEeOctaveShift object;
	object.setType( value1 );
	MxEnumUpDownStopContinue expected = value1;
	MxEnumUpDownStopContinue actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setNumber1, MxEeOctaveShift )
{
	MxNumberNumberLevel value1( 1 );
	MxNumberNumberLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEeOctaveShift object;
	object.setNumber( value1 );
	MxNumberNumberLevel expected = value1;
	MxNumberNumberLevel actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setSize2, MxEeOctaveShift )
{
	XsPositiveInteger value1( 1 );
	XsPositiveInteger value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEeOctaveShift object;
	object.setSize( value1 );
	XsPositiveInteger expected = value1;
	XsPositiveInteger actual = object.getSize();
	CHECK_EQUAL( expected, actual )
	object.setSize( value2 );
	expected = value2;
	actual = object.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setDashLength3, MxEeOctaveShift )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeOctaveShift object;
	object.setDashLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
	object.setDashLength( value2 );
	expected = value2;
	actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setSpaceLength4, MxEeOctaveShift )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeOctaveShift object;
	object.setSpaceLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
	object.setSpaceLength( value2 );
	expected = value2;
	actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX5, MxEeOctaveShift )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeOctaveShift object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY6, MxEeOctaveShift )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeOctaveShift object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX7, MxEeOctaveShift )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeOctaveShift object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY8, MxEeOctaveShift )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeOctaveShift object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily9, MxEeOctaveShift )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEeOctaveShift object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle10, MxEeOctaveShift )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEeOctaveShift object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize11, MxEeOctaveShift )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEeOctaveShift object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight12, MxEeOctaveShift )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEeOctaveShift object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor13, MxEeOctaveShift )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEeOctaveShift object;
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

TEST( getIsTypeRequired0, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberRequired1, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSizeRequired2, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthRequired3, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsDashLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthRequired4, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired5, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired6, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired7, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired8, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired9, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired10, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired11, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired12, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired13, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = true;
	bool actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberPresent1, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNumberPresent( true );
	expected = true;
	actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNumberPresent( false );
	expected = false;
	actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSizePresent2, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsSizePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSizePresent( true );
	expected = true;
	actual = object.getIsSizePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSizePresent( false );
	expected = false;
	actual = object.getIsSizePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthPresent3, MxEeOctaveShift )
{
	MxEeOctaveShift object;
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
TEST( getIsSpaceLengthPresent4, MxEeOctaveShift )
{
	MxEeOctaveShift object;
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
TEST( getIsDefaultXPresent5, MxEeOctaveShift )
{
	MxEeOctaveShift object;
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
TEST( getIsDefaultYPresent6, MxEeOctaveShift )
{
	MxEeOctaveShift object;
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
TEST( getIsRelativeXPresent7, MxEeOctaveShift )
{
	MxEeOctaveShift object;
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
TEST( getIsRelativeYPresent8, MxEeOctaveShift )
{
	MxEeOctaveShift object;
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
TEST( getIsFontFamilyPresent9, MxEeOctaveShift )
{
	MxEeOctaveShift object;
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
TEST( getIsFontStylePresent10, MxEeOctaveShift )
{
	MxEeOctaveShift object;
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
TEST( getIsFontSizePresent11, MxEeOctaveShift )
{
	MxEeOctaveShift object;
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
TEST( getIsFontWeightPresent12, MxEeOctaveShift )
{
	MxEeOctaveShift object;
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
TEST( getIsColorPresent13, MxEeOctaveShift )
{
	MxEeOctaveShift object;
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

TEST( getIsTypeDefaultDefined, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberDefaultDefined, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSizeDefaultDefined, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = true;
	bool actual = object.getIsSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthDefaultDefined, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsDashLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthDefaultDefined, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	MxEnumUpDownStopContinue expected;
	MxEnumUpDownStopContinue actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNumberDefaultValue, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	MxNumberNumberLevel expected;
	MxNumberNumberLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSizeDefaultValue, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	XsPositiveInteger expected( 8 );
	XsPositiveInteger actual = object.getSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDashLengthDefaultValue, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDashLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSpaceLengthDefaultValue, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getSpaceLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 31.4 ) );
	object.setSpaceLength( MxNumberTenths( 31.4 ) );
	object.setDefaultX( MxNumberTenths( 92 ) );
	object.setDefaultY( MxNumberTenths( 92 ) );
	object.setRelativeX( MxNumberTenths( 92 ) );
	object.setRelativeY( MxNumberTenths( 92 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
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
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" dash-length=\"31.4\" space-length=\"31.4\" default-x=\"92\" default-y=\"92\" relative-x=\"92\" relative-y=\"92\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#1C1B1A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
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
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 31.5 ) );
	object.setSpaceLength( MxNumberTenths( 31.5 ) );
	object.setDefaultX( MxNumberTenths( 92.1 ) );
	object.setDefaultY( MxNumberTenths( 92.1 ) );
	object.setRelativeX( MxNumberTenths( 92.1 ) );
	object.setRelativeY( MxNumberTenths( 92.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" dash-length=\"31.5\" space-length=\"31.5\" default-x=\"92.1\" default-y=\"92.1\" relative-x=\"92.1\" relative-y=\"92.1\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#1D1E1D1C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
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
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 31.6 ) );
	object.setSpaceLength( MxNumberTenths( 31.6 ) );
	object.setDefaultX( MxNumberTenths( 92.2 ) );
	object.setDefaultY( MxNumberTenths( 92.2 ) );
	object.setRelativeX( MxNumberTenths( 92.2 ) );
	object.setRelativeY( MxNumberTenths( 92.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" dash-length=\"31.6\" space-length=\"31.6\" default-x=\"92.2\" default-y=\"92.2\" relative-x=\"92.2\" relative-y=\"92.2\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#201F1E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
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
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 31.7 ) );
	object.setSpaceLength( MxNumberTenths( 31.7 ) );
	object.setDefaultX( MxNumberTenths( 92.3 ) );
	object.setDefaultY( MxNumberTenths( 92.3 ) );
	object.setRelativeX( MxNumberTenths( 92.3 ) );
	object.setRelativeY( MxNumberTenths( 92.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<octave-shift type=\"up\" dash-length=\"31.7\" space-length=\"31.7\" default-x=\"92.3\" default-y=\"92.3\" relative-x=\"92.3\" relative-y=\"92.3\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#21222120\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
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
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 31.8 ) );
	object.setSpaceLength( MxNumberTenths( 31.8 ) );
	object.setDefaultX( MxNumberTenths( 92.4 ) );
	object.setDefaultY( MxNumberTenths( 92.4 ) );
	object.setRelativeX( MxNumberTenths( 92.4 ) );
	object.setRelativeY( MxNumberTenths( 92.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" space-length=\"31.8\" default-x=\"92.4\" default-y=\"92.4\" relative-x=\"92.4\" relative-y=\"92.4\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#242322\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
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
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 31.9 ) );
	object.setSpaceLength( MxNumberTenths( 31.9 ) );
	object.setDefaultX( MxNumberTenths( 92.5 ) );
	object.setDefaultY( MxNumberTenths( 92.5 ) );
	object.setRelativeX( MxNumberTenths( 92.5 ) );
	object.setRelativeY( MxNumberTenths( 92.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" default-x=\"92.5\" default-y=\"92.5\" relative-x=\"92.5\" relative-y=\"92.5\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#25262524\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
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
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 32 ) );
	object.setSpaceLength( MxNumberTenths( 32 ) );
	object.setDefaultX( MxNumberTenths( 92.6 ) );
	object.setDefaultY( MxNumberTenths( 92.6 ) );
	object.setRelativeX( MxNumberTenths( 92.6 ) );
	object.setRelativeY( MxNumberTenths( 92.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" default-y=\"92.6\" relative-x=\"92.6\" relative-y=\"92.6\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#282726\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
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
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 32.1 ) );
	object.setSpaceLength( MxNumberTenths( 32.1 ) );
	object.setDefaultX( MxNumberTenths( 92.7 ) );
	object.setDefaultY( MxNumberTenths( 92.7 ) );
	object.setRelativeX( MxNumberTenths( 92.7 ) );
	object.setRelativeY( MxNumberTenths( 92.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" relative-x=\"92.7\" relative-y=\"92.7\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#292A2928\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
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
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 32.2 ) );
	object.setSpaceLength( MxNumberTenths( 32.2 ) );
	object.setDefaultX( MxNumberTenths( 92.8 ) );
	object.setDefaultY( MxNumberTenths( 92.8 ) );
	object.setRelativeX( MxNumberTenths( 92.8 ) );
	object.setRelativeY( MxNumberTenths( 92.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" dash-length=\"32.2\" relative-y=\"92.8\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#2C2B2A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 32.3 ) );
	object.setSpaceLength( MxNumberTenths( 32.3 ) );
	object.setDefaultX( MxNumberTenths( 92.9 ) );
	object.setDefaultY( MxNumberTenths( 92.9 ) );
	object.setRelativeX( MxNumberTenths( 92.9 ) );
	object.setRelativeY( MxNumberTenths( 92.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" dash-length=\"32.3\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#2D2E2D2C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
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
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 32.4 ) );
	object.setSpaceLength( MxNumberTenths( 32.4 ) );
	object.setDefaultX( MxNumberTenths( 93 ) );
	object.setDefaultY( MxNumberTenths( 93 ) );
	object.setRelativeX( MxNumberTenths( 93 ) );
	object.setRelativeY( MxNumberTenths( 93 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<octave-shift type=\"up\" dash-length=\"32.4\" space-length=\"32.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#302F2E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 32.5 ) );
	object.setSpaceLength( MxNumberTenths( 32.5 ) );
	object.setDefaultX( MxNumberTenths( 93.1 ) );
	object.setDefaultY( MxNumberTenths( 93.1 ) );
	object.setRelativeX( MxNumberTenths( 93.1 ) );
	object.setRelativeY( MxNumberTenths( 93.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<octave-shift type=\"up\" dash-length=\"32.5\" space-length=\"32.5\" font-size=\"1.1\" font-weight=\"bold\" color=\"#31323130\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
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
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 32.6 ) );
	object.setSpaceLength( MxNumberTenths( 32.6 ) );
	object.setDefaultX( MxNumberTenths( 93.2 ) );
	object.setDefaultY( MxNumberTenths( 93.2 ) );
	object.setRelativeX( MxNumberTenths( 93.2 ) );
	object.setRelativeY( MxNumberTenths( 93.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" space-length=\"32.6\" default-x=\"93.2\" font-weight=\"normal\" color=\"#343332\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 32.7 ) );
	object.setSpaceLength( MxNumberTenths( 32.7 ) );
	object.setDefaultX( MxNumberTenths( 93.3 ) );
	object.setDefaultY( MxNumberTenths( 93.3 ) );
	object.setRelativeX( MxNumberTenths( 93.3 ) );
	object.setRelativeY( MxNumberTenths( 93.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" space-length=\"32.7\" default-x=\"93.3\" color=\"#35363534\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 32.8 ) );
	object.setSpaceLength( MxNumberTenths( 32.8 ) );
	object.setDefaultX( MxNumberTenths( 93.4 ) );
	object.setDefaultY( MxNumberTenths( 93.4 ) );
	object.setRelativeX( MxNumberTenths( 93.4 ) );
	object.setRelativeY( MxNumberTenths( 93.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" space-length=\"32.8\" default-x=\"93.4\" default-y=\"93.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
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
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 32.9 ) );
	object.setSpaceLength( MxNumberTenths( 32.9 ) );
	object.setDefaultX( MxNumberTenths( 93.5 ) );
	object.setDefaultY( MxNumberTenths( 93.5 ) );
	object.setRelativeX( MxNumberTenths( 93.5 ) );
	object.setRelativeY( MxNumberTenths( 93.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<octave-shift type=\"up\" default-x=\"93.5\" default-y=\"93.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
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
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 33 ) );
	object.setSpaceLength( MxNumberTenths( 33 ) );
	object.setDefaultX( MxNumberTenths( 93.6 ) );
	object.setDefaultY( MxNumberTenths( 93.6 ) );
	object.setRelativeX( MxNumberTenths( 93.6 ) );
	object.setRelativeY( MxNumberTenths( 93.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" dash-length=\"33\" default-x=\"93.6\" default-y=\"93.6\" relative-x=\"93.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
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
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 33.1 ) );
	object.setSpaceLength( MxNumberTenths( 33.1 ) );
	object.setDefaultX( MxNumberTenths( 93.7 ) );
	object.setDefaultY( MxNumberTenths( 93.7 ) );
	object.setRelativeX( MxNumberTenths( 93.7 ) );
	object.setRelativeY( MxNumberTenths( 93.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" dash-length=\"33.1\" default-x=\"93.7\" default-y=\"93.7\" relative-x=\"93.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 33.2 ) );
	object.setSpaceLength( MxNumberTenths( 33.2 ) );
	object.setDefaultX( MxNumberTenths( 93.8 ) );
	object.setDefaultY( MxNumberTenths( 93.8 ) );
	object.setRelativeX( MxNumberTenths( 93.8 ) );
	object.setRelativeY( MxNumberTenths( 93.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" dash-length=\"33.2\" default-y=\"93.8\" relative-x=\"93.8\" relative-y=\"93.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 33.3 ) );
	object.setSpaceLength( MxNumberTenths( 33.3 ) );
	object.setDefaultX( MxNumberTenths( 93.9 ) );
	object.setDefaultY( MxNumberTenths( 93.9 ) );
	object.setRelativeX( MxNumberTenths( 93.9 ) );
	object.setRelativeY( MxNumberTenths( 93.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" dash-length=\"33.3\" default-y=\"93.9\" relative-x=\"93.9\" relative-y=\"93.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 33.4 ) );
	object.setSpaceLength( MxNumberTenths( 33.4 ) );
	object.setDefaultX( MxNumberTenths( 94 ) );
	object.setDefaultY( MxNumberTenths( 94 ) );
	object.setRelativeX( MxNumberTenths( 94 ) );
	object.setRelativeY( MxNumberTenths( 94 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" space-length=\"33.4\" default-y=\"94\" relative-x=\"94\" relative-y=\"94\" font-family=\"ABC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
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
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 33.5 ) );
	object.setSpaceLength( MxNumberTenths( 33.5 ) );
	object.setDefaultX( MxNumberTenths( 94.1 ) );
	object.setDefaultY( MxNumberTenths( 94.1 ) );
	object.setRelativeX( MxNumberTenths( 94.1 ) );
	object.setRelativeY( MxNumberTenths( 94.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" space-length=\"33.5\" relative-x=\"94.1\" relative-y=\"94.1\" font-family=\"DEF\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 33.6 ) );
	object.setSpaceLength( MxNumberTenths( 33.6 ) );
	object.setDefaultX( MxNumberTenths( 94.2 ) );
	object.setDefaultY( MxNumberTenths( 94.2 ) );
	object.setRelativeX( MxNumberTenths( 94.2 ) );
	object.setRelativeY( MxNumberTenths( 94.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<octave-shift type=\"up\" space-length=\"33.6\" relative-x=\"94.2\" relative-y=\"94.2\" font-family=\"XYZ\" font-style=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 33.7 ) );
	object.setSpaceLength( MxNumberTenths( 33.7 ) );
	object.setDefaultX( MxNumberTenths( 94.3 ) );
	object.setDefaultY( MxNumberTenths( 94.3 ) );
	object.setRelativeX( MxNumberTenths( 94.3 ) );
	object.setRelativeY( MxNumberTenths( 94.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<octave-shift type=\"up\" space-length=\"33.7\" relative-x=\"94.3\" relative-y=\"94.3\" font-family=\"ABC\" font-style=\"italic\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 33.8 ) );
	object.setSpaceLength( MxNumberTenths( 33.8 ) );
	object.setDefaultX( MxNumberTenths( 94.4 ) );
	object.setDefaultY( MxNumberTenths( 94.4 ) );
	object.setRelativeX( MxNumberTenths( 94.4 ) );
	object.setRelativeY( MxNumberTenths( 94.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" dash-length=\"33.8\" space-length=\"33.8\" default-x=\"94.4\" relative-y=\"94.4\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
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
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 33.9 ) );
	object.setSpaceLength( MxNumberTenths( 33.9 ) );
	object.setDefaultX( MxNumberTenths( 94.5 ) );
	object.setDefaultY( MxNumberTenths( 94.5 ) );
	object.setRelativeX( MxNumberTenths( 94.5 ) );
	object.setRelativeY( MxNumberTenths( 94.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" dash-length=\"33.9\" default-x=\"94.5\" relative-y=\"94.5\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 34 ) );
	object.setSpaceLength( MxNumberTenths( 34 ) );
	object.setDefaultX( MxNumberTenths( 94.6 ) );
	object.setDefaultY( MxNumberTenths( 94.6 ) );
	object.setRelativeX( MxNumberTenths( 94.6 ) );
	object.setRelativeY( MxNumberTenths( 94.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" dash-length=\"34\" default-x=\"94.6\" relative-y=\"94.6\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 34.1 ) );
	object.setSpaceLength( MxNumberTenths( 34.1 ) );
	object.setDefaultX( MxNumberTenths( 94.7 ) );
	object.setDefaultY( MxNumberTenths( 94.7 ) );
	object.setRelativeX( MxNumberTenths( 94.7 ) );
	object.setRelativeY( MxNumberTenths( 94.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<octave-shift type=\"up\" dash-length=\"34.1\" default-x=\"94.7\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 34.2 ) );
	object.setSpaceLength( MxNumberTenths( 34.2 ) );
	object.setDefaultX( MxNumberTenths( 94.8 ) );
	object.setDefaultY( MxNumberTenths( 94.8 ) );
	object.setRelativeX( MxNumberTenths( 94.8 ) );
	object.setRelativeY( MxNumberTenths( 94.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" default-x=\"94.8\" default-y=\"94.8\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#545352\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 34.3 ) );
	object.setSpaceLength( MxNumberTenths( 34.3 ) );
	object.setDefaultX( MxNumberTenths( 94.9 ) );
	object.setDefaultY( MxNumberTenths( 94.9 ) );
	object.setRelativeX( MxNumberTenths( 94.9 ) );
	object.setRelativeY( MxNumberTenths( 94.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#55565554" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" default-x=\"94.9\" default-y=\"94.9\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#55565554\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
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
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 34.4 ) );
	object.setSpaceLength( MxNumberTenths( 34.4 ) );
	object.setDefaultX( MxNumberTenths( 95 ) );
	object.setDefaultY( MxNumberTenths( 95 ) );
	object.setRelativeX( MxNumberTenths( 95 ) );
	object.setRelativeY( MxNumberTenths( 95 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#585756" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" space-length=\"34.4\" default-y=\"95\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#585756\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
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
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 34.5 ) );
	object.setSpaceLength( MxNumberTenths( 34.5 ) );
	object.setDefaultX( MxNumberTenths( 95.1 ) );
	object.setDefaultY( MxNumberTenths( 95.1 ) );
	object.setRelativeX( MxNumberTenths( 95.1 ) );
	object.setRelativeY( MxNumberTenths( 95.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#595A5958" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" space-length=\"34.5\" default-y=\"95.1\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#595A5958\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 34.6 ) );
	object.setSpaceLength( MxNumberTenths( 34.6 ) );
	object.setDefaultX( MxNumberTenths( 95.2 ) );
	object.setDefaultY( MxNumberTenths( 95.2 ) );
	object.setRelativeX( MxNumberTenths( 95.2 ) );
	object.setRelativeY( MxNumberTenths( 95.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" dash-length=\"34.6\" space-length=\"34.6\" default-y=\"95.2\" relative-x=\"95.2\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#5C5B5A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 34.7 ) );
	object.setSpaceLength( MxNumberTenths( 34.7 ) );
	object.setDefaultX( MxNumberTenths( 95.3 ) );
	object.setDefaultY( MxNumberTenths( 95.3 ) );
	object.setRelativeX( MxNumberTenths( 95.3 ) );
	object.setRelativeY( MxNumberTenths( 95.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" dash-length=\"34.7\" space-length=\"34.7\" default-y=\"95.3\" relative-x=\"95.3\" font-size=\"1.1\" font-weight=\"bold\" color=\"#5D5E5D5C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 34.8 ) );
	object.setSpaceLength( MxNumberTenths( 34.8 ) );
	object.setDefaultX( MxNumberTenths( 95.4 ) );
	object.setDefaultY( MxNumberTenths( 95.4 ) );
	object.setRelativeX( MxNumberTenths( 95.4 ) );
	object.setRelativeY( MxNumberTenths( 95.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#605F5E" ) );
	expected = "<octave-shift type=\"up\" dash-length=\"34.8\" space-length=\"34.8\" default-y=\"95.4\" relative-x=\"95.4\" font-size=\"large\" font-weight=\"normal\" color=\"#605F5E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 34.9 ) );
	object.setSpaceLength( MxNumberTenths( 34.9 ) );
	object.setDefaultX( MxNumberTenths( 95.5 ) );
	object.setDefaultY( MxNumberTenths( 95.5 ) );
	object.setRelativeX( MxNumberTenths( 95.5 ) );
	object.setRelativeY( MxNumberTenths( 95.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<octave-shift type=\"up\" dash-length=\"34.9\" relative-x=\"95.5\" font-size=\"1.1\" font-weight=\"bold\" color=\"#61626160\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 35 ) );
	object.setSpaceLength( MxNumberTenths( 35 ) );
	object.setDefaultX( MxNumberTenths( 95.6 ) );
	object.setDefaultY( MxNumberTenths( 95.6 ) );
	object.setRelativeX( MxNumberTenths( 95.6 ) );
	object.setRelativeY( MxNumberTenths( 95.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" default-x=\"95.6\" relative-x=\"95.6\" relative-y=\"95.6\" font-weight=\"normal\" color=\"#646362\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 35.1 ) );
	object.setSpaceLength( MxNumberTenths( 35.1 ) );
	object.setDefaultX( MxNumberTenths( 95.7 ) );
	object.setDefaultY( MxNumberTenths( 95.7 ) );
	object.setRelativeX( MxNumberTenths( 95.7 ) );
	object.setRelativeY( MxNumberTenths( 95.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" default-x=\"95.7\" relative-x=\"95.7\" relative-y=\"95.7\" font-weight=\"bold\" color=\"#65666564\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 35.2 ) );
	object.setSpaceLength( MxNumberTenths( 35.2 ) );
	object.setDefaultX( MxNumberTenths( 95.8 ) );
	object.setDefaultY( MxNumberTenths( 95.8 ) );
	object.setRelativeX( MxNumberTenths( 95.8 ) );
	object.setRelativeY( MxNumberTenths( 95.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" default-x=\"95.8\" relative-x=\"95.8\" relative-y=\"95.8\" font-weight=\"normal\" color=\"#686766\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 35.3 ) );
	object.setSpaceLength( MxNumberTenths( 35.3 ) );
	object.setDefaultX( MxNumberTenths( 95.9 ) );
	object.setDefaultY( MxNumberTenths( 95.9 ) );
	object.setRelativeX( MxNumberTenths( 95.9 ) );
	object.setRelativeY( MxNumberTenths( 95.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<octave-shift type=\"up\" default-x=\"95.9\" relative-x=\"95.9\" relative-y=\"95.9\" color=\"#696A6968\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 35.4 ) );
	object.setSpaceLength( MxNumberTenths( 35.4 ) );
	object.setDefaultX( MxNumberTenths( 96 ) );
	object.setDefaultY( MxNumberTenths( 96 ) );
	object.setRelativeX( MxNumberTenths( 96 ) );
	object.setRelativeY( MxNumberTenths( 96 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" dash-length=\"35.4\" space-length=\"35.4\" default-x=\"96\" relative-y=\"96\" font-family=\"XYZ\" color=\"#6C6B6A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 35.5 ) );
	object.setSpaceLength( MxNumberTenths( 35.5 ) );
	object.setDefaultX( MxNumberTenths( 96.1 ) );
	object.setDefaultY( MxNumberTenths( 96.1 ) );
	object.setRelativeX( MxNumberTenths( 96.1 ) );
	object.setRelativeY( MxNumberTenths( 96.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" dash-length=\"35.5\" space-length=\"35.5\" default-x=\"96.1\" relative-y=\"96.1\" font-family=\"ABC\" color=\"#6D6E6D6C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 35.6 ) );
	object.setSpaceLength( MxNumberTenths( 35.6 ) );
	object.setDefaultX( MxNumberTenths( 96.2 ) );
	object.setDefaultY( MxNumberTenths( 96.2 ) );
	object.setRelativeX( MxNumberTenths( 96.2 ) );
	object.setRelativeY( MxNumberTenths( 96.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" dash-length=\"35.6\" space-length=\"35.6\" default-y=\"96.2\" relative-y=\"96.2\" font-family=\"DEF\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 35.7 ) );
	object.setSpaceLength( MxNumberTenths( 35.7 ) );
	object.setDefaultX( MxNumberTenths( 96.3 ) );
	object.setDefaultY( MxNumberTenths( 96.3 ) );
	object.setRelativeX( MxNumberTenths( 96.3 ) );
	object.setRelativeY( MxNumberTenths( 96.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" dash-length=\"35.7\" space-length=\"35.7\" default-y=\"96.3\" relative-y=\"96.3\" font-family=\"XYZ\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 35.8 ) );
	object.setSpaceLength( MxNumberTenths( 35.8 ) );
	object.setDefaultX( MxNumberTenths( 96.4 ) );
	object.setDefaultY( MxNumberTenths( 96.4 ) );
	object.setRelativeX( MxNumberTenths( 96.4 ) );
	object.setRelativeY( MxNumberTenths( 96.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" space-length=\"35.8\" default-y=\"96.4\" relative-y=\"96.4\" font-family=\"ABC\" font-style=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 35.9 ) );
	object.setSpaceLength( MxNumberTenths( 35.9 ) );
	object.setDefaultX( MxNumberTenths( 96.5 ) );
	object.setDefaultY( MxNumberTenths( 96.5 ) );
	object.setRelativeX( MxNumberTenths( 96.5 ) );
	object.setRelativeY( MxNumberTenths( 96.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" default-y=\"96.5\" font-family=\"DEF\" font-style=\"italic\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 36 ) );
	object.setSpaceLength( MxNumberTenths( 36 ) );
	object.setDefaultX( MxNumberTenths( 96.6 ) );
	object.setDefaultY( MxNumberTenths( 96.6 ) );
	object.setRelativeX( MxNumberTenths( 96.6 ) );
	object.setRelativeY( MxNumberTenths( 96.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<octave-shift type=\"up\" default-y=\"96.6\" font-family=\"XYZ\" font-style=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 36.1 ) );
	object.setSpaceLength( MxNumberTenths( 36.1 ) );
	object.setDefaultX( MxNumberTenths( 96.7 ) );
	object.setDefaultY( MxNumberTenths( 96.7 ) );
	object.setRelativeX( MxNumberTenths( 96.7 ) );
	object.setRelativeY( MxNumberTenths( 96.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<octave-shift type=\"up\" default-y=\"96.7\" font-family=\"ABC\" font-style=\"italic\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 36.2 ) );
	object.setSpaceLength( MxNumberTenths( 36.2 ) );
	object.setDefaultX( MxNumberTenths( 96.8 ) );
	object.setDefaultY( MxNumberTenths( 96.8 ) );
	object.setRelativeX( MxNumberTenths( 96.8 ) );
	object.setRelativeY( MxNumberTenths( 96.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" dash-length=\"36.2\" default-x=\"96.8\" default-y=\"96.8\" relative-x=\"96.8\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
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
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 36.3 ) );
	object.setSpaceLength( MxNumberTenths( 36.3 ) );
	object.setDefaultX( MxNumberTenths( 96.9 ) );
	object.setDefaultY( MxNumberTenths( 96.9 ) );
	object.setRelativeX( MxNumberTenths( 96.9 ) );
	object.setRelativeY( MxNumberTenths( 96.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" dash-length=\"36.3\" default-x=\"96.9\" relative-x=\"96.9\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 36.4 ) );
	object.setSpaceLength( MxNumberTenths( 36.4 ) );
	object.setDefaultX( MxNumberTenths( 97 ) );
	object.setDefaultY( MxNumberTenths( 97 ) );
	object.setRelativeX( MxNumberTenths( 97 ) );
	object.setRelativeY( MxNumberTenths( 97 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" dash-length=\"36.4\" space-length=\"36.4\" default-x=\"97\" relative-x=\"97\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 36.5 ) );
	object.setSpaceLength( MxNumberTenths( 36.5 ) );
	object.setDefaultX( MxNumberTenths( 97.1 ) );
	object.setDefaultY( MxNumberTenths( 97.1 ) );
	object.setRelativeX( MxNumberTenths( 97.1 ) );
	object.setRelativeY( MxNumberTenths( 97.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<octave-shift type=\"up\" dash-length=\"36.5\" space-length=\"36.5\" default-x=\"97.1\" relative-x=\"97.1\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 36.6 ) );
	object.setSpaceLength( MxNumberTenths( 36.6 ) );
	object.setDefaultX( MxNumberTenths( 97.2 ) );
	object.setDefaultY( MxNumberTenths( 97.2 ) );
	object.setRelativeX( MxNumberTenths( 97.2 ) );
	object.setRelativeY( MxNumberTenths( 97.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" space-length=\"36.6\" default-x=\"97.2\" relative-x=\"97.2\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 36.7 ) );
	object.setSpaceLength( MxNumberTenths( 36.7 ) );
	object.setDefaultX( MxNumberTenths( 97.3 ) );
	object.setDefaultY( MxNumberTenths( 97.3 ) );
	object.setRelativeX( MxNumberTenths( 97.3 ) );
	object.setRelativeY( MxNumberTenths( 97.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" space-length=\"36.7\" default-x=\"97.3\" relative-x=\"97.3\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 36.8 ) );
	object.setSpaceLength( MxNumberTenths( 36.8 ) );
	object.setDefaultX( MxNumberTenths( 97.4 ) );
	object.setDefaultY( MxNumberTenths( 97.4 ) );
	object.setRelativeX( MxNumberTenths( 97.4 ) );
	object.setRelativeY( MxNumberTenths( 97.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" space-length=\"36.8\" relative-x=\"97.4\" relative-y=\"97.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 36.9 ) );
	object.setSpaceLength( MxNumberTenths( 36.9 ) );
	object.setDefaultX( MxNumberTenths( 97.5 ) );
	object.setDefaultY( MxNumberTenths( 97.5 ) );
	object.setRelativeX( MxNumberTenths( 97.5 ) );
	object.setRelativeY( MxNumberTenths( 97.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" relative-x=\"97.5\" relative-y=\"97.5\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 37 ) );
	object.setSpaceLength( MxNumberTenths( 37 ) );
	object.setDefaultX( MxNumberTenths( 97.6 ) );
	object.setDefaultY( MxNumberTenths( 97.6 ) );
	object.setRelativeX( MxNumberTenths( 97.6 ) );
	object.setRelativeY( MxNumberTenths( 97.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" dash-length=\"37\" default-y=\"97.6\" relative-y=\"97.6\" font-size=\"large\" font-weight=\"normal\" color=\"#8C8B8A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 37.1 ) );
	object.setSpaceLength( MxNumberTenths( 37.1 ) );
	object.setDefaultX( MxNumberTenths( 97.7 ) );
	object.setDefaultY( MxNumberTenths( 97.7 ) );
	object.setRelativeX( MxNumberTenths( 97.7 ) );
	object.setRelativeY( MxNumberTenths( 97.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" dash-length=\"37.1\" default-y=\"97.7\" relative-y=\"97.7\" font-size=\"1.1\" font-weight=\"bold\" color=\"#8D8E8D8C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 37.2 ) );
	object.setSpaceLength( MxNumberTenths( 37.2 ) );
	object.setDefaultX( MxNumberTenths( 97.8 ) );
	object.setDefaultY( MxNumberTenths( 97.8 ) );
	object.setRelativeX( MxNumberTenths( 97.8 ) );
	object.setRelativeY( MxNumberTenths( 97.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<octave-shift type=\"up\" dash-length=\"37.2\" default-y=\"97.8\" relative-y=\"97.8\" font-size=\"large\" font-weight=\"normal\" color=\"#908F8E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 37.3 ) );
	object.setSpaceLength( MxNumberTenths( 37.3 ) );
	object.setDefaultX( MxNumberTenths( 97.9 ) );
	object.setDefaultY( MxNumberTenths( 97.9 ) );
	object.setRelativeX( MxNumberTenths( 97.9 ) );
	object.setRelativeY( MxNumberTenths( 97.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<octave-shift type=\"up\" dash-length=\"37.3\" default-y=\"97.9\" relative-y=\"97.9\" font-size=\"1.1\" font-weight=\"bold\" color=\"#91929190\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 37.4 ) );
	object.setSpaceLength( MxNumberTenths( 37.4 ) );
	object.setDefaultX( MxNumberTenths( 98 ) );
	object.setDefaultY( MxNumberTenths( 98 ) );
	object.setRelativeX( MxNumberTenths( 98 ) );
	object.setRelativeY( MxNumberTenths( 98 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" space-length=\"37.4\" default-x=\"98\" default-y=\"98\" relative-y=\"98\" font-family=\"DEF\" font-weight=\"normal\" color=\"#949392\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 37.5 ) );
	object.setSpaceLength( MxNumberTenths( 37.5 ) );
	object.setDefaultX( MxNumberTenths( 98.1 ) );
	object.setDefaultY( MxNumberTenths( 98.1 ) );
	object.setRelativeX( MxNumberTenths( 98.1 ) );
	object.setRelativeY( MxNumberTenths( 98.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" space-length=\"37.5\" default-x=\"98.1\" default-y=\"98.1\" relative-y=\"98.1\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#95969594\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 37.6 ) );
	object.setSpaceLength( MxNumberTenths( 37.6 ) );
	object.setDefaultX( MxNumberTenths( 98.2 ) );
	object.setDefaultY( MxNumberTenths( 98.2 ) );
	object.setRelativeX( MxNumberTenths( 98.2 ) );
	object.setRelativeY( MxNumberTenths( 98.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" space-length=\"37.6\" default-x=\"98.2\" default-y=\"98.2\" relative-y=\"98.2\" font-family=\"ABC\" font-weight=\"normal\" color=\"#989796\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 37.7 ) );
	object.setSpaceLength( MxNumberTenths( 37.7 ) );
	object.setDefaultX( MxNumberTenths( 98.3 ) );
	object.setDefaultY( MxNumberTenths( 98.3 ) );
	object.setRelativeX( MxNumberTenths( 98.3 ) );
	object.setRelativeY( MxNumberTenths( 98.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<octave-shift type=\"up\" space-length=\"37.7\" default-x=\"98.3\" font-family=\"DEF\" font-weight=\"bold\" color=\"#999A9998\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 37.8 ) );
	object.setSpaceLength( MxNumberTenths( 37.8 ) );
	object.setDefaultX( MxNumberTenths( 98.4 ) );
	object.setDefaultY( MxNumberTenths( 98.4 ) );
	object.setRelativeX( MxNumberTenths( 98.4 ) );
	object.setRelativeY( MxNumberTenths( 98.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" dash-length=\"37.8\" space-length=\"37.8\" default-x=\"98.4\" relative-x=\"98.4\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#9C9B9A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 37.9 ) );
	object.setSpaceLength( MxNumberTenths( 37.9 ) );
	object.setDefaultX( MxNumberTenths( 98.5 ) );
	object.setDefaultY( MxNumberTenths( 98.5 ) );
	object.setRelativeX( MxNumberTenths( 98.5 ) );
	object.setRelativeY( MxNumberTenths( 98.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" dash-length=\"37.9\" default-x=\"98.5\" relative-x=\"98.5\" font-family=\"ABC\" color=\"#9D9E9D9C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 38 ) );
	object.setSpaceLength( MxNumberTenths( 38 ) );
	object.setDefaultX( MxNumberTenths( 98.6 ) );
	object.setDefaultY( MxNumberTenths( 98.6 ) );
	object.setRelativeX( MxNumberTenths( 98.6 ) );
	object.setRelativeY( MxNumberTenths( 98.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" dash-length=\"38\" relative-x=\"98.6\" font-family=\"DEF\" font-style=\"normal\" color=\"#A09F9E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 38.1 ) );
	object.setSpaceLength( MxNumberTenths( 38.1 ) );
	object.setDefaultX( MxNumberTenths( 98.7 ) );
	object.setDefaultY( MxNumberTenths( 98.7 ) );
	object.setRelativeX( MxNumberTenths( 98.7 ) );
	object.setRelativeY( MxNumberTenths( 98.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" dash-length=\"38.1\" relative-x=\"98.7\" font-family=\"XYZ\" font-style=\"italic\" color=\"#A1A2A1A0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 38.2 ) );
	object.setSpaceLength( MxNumberTenths( 38.2 ) );
	object.setDefaultX( MxNumberTenths( 98.8 ) );
	object.setDefaultY( MxNumberTenths( 98.8 ) );
	object.setRelativeX( MxNumberTenths( 98.8 ) );
	object.setRelativeY( MxNumberTenths( 98.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" relative-x=\"98.8\" font-family=\"ABC\" font-style=\"normal\" color=\"#A4A3A2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 38.3 ) );
	object.setSpaceLength( MxNumberTenths( 38.3 ) );
	object.setDefaultX( MxNumberTenths( 98.9 ) );
	object.setDefaultY( MxNumberTenths( 98.9 ) );
	object.setRelativeX( MxNumberTenths( 98.9 ) );
	object.setRelativeY( MxNumberTenths( 98.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" relative-x=\"98.9\" font-family=\"DEF\" font-style=\"italic\" color=\"#A5A6A5A4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 38.4 ) );
	object.setSpaceLength( MxNumberTenths( 38.4 ) );
	object.setDefaultX( MxNumberTenths( 99 ) );
	object.setDefaultY( MxNumberTenths( 99 ) );
	object.setRelativeX( MxNumberTenths( 99 ) );
	object.setRelativeY( MxNumberTenths( 99 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<octave-shift type=\"up\" space-length=\"38.4\" default-y=\"99\" relative-x=\"99\" font-style=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 38.5 ) );
	object.setSpaceLength( MxNumberTenths( 38.5 ) );
	object.setDefaultX( MxNumberTenths( 99.1 ) );
	object.setDefaultY( MxNumberTenths( 99.1 ) );
	object.setRelativeX( MxNumberTenths( 99.1 ) );
	object.setRelativeY( MxNumberTenths( 99.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<octave-shift type=\"up\" space-length=\"38.5\" default-y=\"99.1\" relative-x=\"99.1\" font-style=\"italic\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 38.6 ) );
	object.setSpaceLength( MxNumberTenths( 38.6 ) );
	object.setDefaultX( MxNumberTenths( 99.2 ) );
	object.setDefaultY( MxNumberTenths( 99.2 ) );
	object.setRelativeX( MxNumberTenths( 99.2 ) );
	object.setRelativeY( MxNumberTenths( 99.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" dash-length=\"38.6\" space-length=\"38.6\" default-x=\"99.2\" default-y=\"99.2\" relative-y=\"99.2\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 38.7 ) );
	object.setSpaceLength( MxNumberTenths( 38.7 ) );
	object.setDefaultX( MxNumberTenths( 99.3 ) );
	object.setDefaultY( MxNumberTenths( 99.3 ) );
	object.setRelativeX( MxNumberTenths( 99.3 ) );
	object.setRelativeY( MxNumberTenths( 99.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" dash-length=\"38.7\" space-length=\"38.7\" default-x=\"99.3\" default-y=\"99.3\" relative-y=\"99.3\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 38.8 ) );
	object.setSpaceLength( MxNumberTenths( 38.8 ) );
	object.setDefaultX( MxNumberTenths( 99.4 ) );
	object.setDefaultY( MxNumberTenths( 99.4 ) );
	object.setRelativeX( MxNumberTenths( 99.4 ) );
	object.setRelativeY( MxNumberTenths( 99.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" dash-length=\"38.8\" space-length=\"38.8\" default-x=\"99.4\" default-y=\"99.4\" relative-y=\"99.4\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 38.9 ) );
	object.setSpaceLength( MxNumberTenths( 38.9 ) );
	object.setDefaultX( MxNumberTenths( 99.5 ) );
	object.setDefaultY( MxNumberTenths( 99.5 ) );
	object.setRelativeX( MxNumberTenths( 99.5 ) );
	object.setRelativeY( MxNumberTenths( 99.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<octave-shift type=\"up\" dash-length=\"38.9\" default-x=\"99.5\" default-y=\"99.5\" relative-y=\"99.5\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 39 ) );
	object.setSpaceLength( MxNumberTenths( 39 ) );
	object.setDefaultX( MxNumberTenths( 99.6 ) );
	object.setDefaultY( MxNumberTenths( 99.6 ) );
	object.setRelativeX( MxNumberTenths( 99.6 ) );
	object.setRelativeY( MxNumberTenths( 99.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" default-x=\"99.6\" default-y=\"99.6\" relative-y=\"99.6\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 39.1 ) );
	object.setSpaceLength( MxNumberTenths( 39.1 ) );
	object.setDefaultX( MxNumberTenths( 99.7 ) );
	object.setDefaultY( MxNumberTenths( 99.7 ) );
	object.setRelativeX( MxNumberTenths( 99.7 ) );
	object.setRelativeY( MxNumberTenths( 99.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" default-x=\"99.7\" relative-y=\"99.7\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 39.2 ) );
	object.setSpaceLength( MxNumberTenths( 39.2 ) );
	object.setDefaultX( MxNumberTenths( 99.8 ) );
	object.setDefaultY( MxNumberTenths( 99.8 ) );
	object.setRelativeX( MxNumberTenths( 99.8 ) );
	object.setRelativeY( MxNumberTenths( 99.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" relative-y=\"99.8\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 39.3 ) );
	object.setSpaceLength( MxNumberTenths( 39.3 ) );
	object.setDefaultX( MxNumberTenths( 99.9 ) );
	object.setDefaultY( MxNumberTenths( 99.9 ) );
	object.setRelativeX( MxNumberTenths( 99.9 ) );
	object.setRelativeY( MxNumberTenths( 99.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" relative-y=\"99.9\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 39.4 ) );
	object.setSpaceLength( MxNumberTenths( 39.4 ) );
	object.setDefaultX( MxNumberTenths( 100 ) );
	object.setDefaultY( MxNumberTenths( 100 ) );
	object.setRelativeX( MxNumberTenths( 100 ) );
	object.setRelativeY( MxNumberTenths( 100 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" dash-length=\"39.4\" space-length=\"39.4\" relative-x=\"100\" relative-y=\"100\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 39.5 ) );
	object.setSpaceLength( MxNumberTenths( 39.5 ) );
	object.setDefaultX( MxNumberTenths( 100.1 ) );
	object.setDefaultY( MxNumberTenths( 100.1 ) );
	object.setRelativeX( MxNumberTenths( 100.1 ) );
	object.setRelativeY( MxNumberTenths( 100.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" dash-length=\"39.5\" space-length=\"39.5\" relative-x=\"100.1\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 39.6 ) );
	object.setSpaceLength( MxNumberTenths( 39.6 ) );
	object.setDefaultX( MxNumberTenths( 100.2 ) );
	object.setDefaultY( MxNumberTenths( 100.2 ) );
	object.setRelativeX( MxNumberTenths( 100.2 ) );
	object.setRelativeY( MxNumberTenths( 100.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<octave-shift type=\"up\" dash-length=\"39.6\" space-length=\"39.6\" relative-x=\"100.2\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 39.7 ) );
	object.setSpaceLength( MxNumberTenths( 39.7 ) );
	object.setDefaultX( MxNumberTenths( 100.3 ) );
	object.setDefaultY( MxNumberTenths( 100.3 ) );
	object.setRelativeX( MxNumberTenths( 100.3 ) );
	object.setRelativeY( MxNumberTenths( 100.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<octave-shift type=\"up\" dash-length=\"39.7\" space-length=\"39.7\" relative-x=\"100.3\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 39.8 ) );
	object.setSpaceLength( MxNumberTenths( 39.8 ) );
	object.setDefaultX( MxNumberTenths( 100.4 ) );
	object.setDefaultY( MxNumberTenths( 100.4 ) );
	object.setRelativeX( MxNumberTenths( 100.4 ) );
	object.setRelativeY( MxNumberTenths( 100.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" space-length=\"39.8\" default-x=\"100.4\" default-y=\"100.4\" relative-x=\"100.4\" font-family=\"DEF\" font-weight=\"normal\" color=\"#C4C3C2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 39.9 ) );
	object.setSpaceLength( MxNumberTenths( 39.9 ) );
	object.setDefaultX( MxNumberTenths( 100.5 ) );
	object.setDefaultY( MxNumberTenths( 100.5 ) );
	object.setRelativeX( MxNumberTenths( 100.5 ) );
	object.setRelativeY( MxNumberTenths( 100.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" default-x=\"100.5\" default-y=\"100.5\" relative-x=\"100.5\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#C5C6C5C4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 40 ) );
	object.setSpaceLength( MxNumberTenths( 40 ) );
	object.setDefaultX( MxNumberTenths( 100.6 ) );
	object.setDefaultY( MxNumberTenths( 100.6 ) );
	object.setRelativeX( MxNumberTenths( 100.6 ) );
	object.setRelativeY( MxNumberTenths( 100.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" default-x=\"100.6\" default-y=\"100.6\" relative-x=\"100.6\" font-family=\"ABC\" font-weight=\"normal\" color=\"#C8C7C6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 40.1 ) );
	object.setSpaceLength( MxNumberTenths( 40.1 ) );
	object.setDefaultX( MxNumberTenths( 100.7 ) );
	object.setDefaultY( MxNumberTenths( 100.7 ) );
	object.setRelativeX( MxNumberTenths( 100.7 ) );
	object.setRelativeY( MxNumberTenths( 100.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<octave-shift type=\"up\" default-x=\"100.7\" default-y=\"100.7\" relative-x=\"100.7\" font-family=\"DEF\" font-weight=\"bold\" color=\"#C9CAC9C8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 40.2 ) );
	object.setSpaceLength( MxNumberTenths( 40.2 ) );
	object.setDefaultX( MxNumberTenths( 100.8 ) );
	object.setDefaultY( MxNumberTenths( 100.8 ) );
	object.setRelativeX( MxNumberTenths( 100.8 ) );
	object.setRelativeY( MxNumberTenths( 100.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" dash-length=\"40.2\" default-x=\"100.8\" default-y=\"100.8\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" color=\"#CCCBCA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 40.3 ) );
	object.setSpaceLength( MxNumberTenths( 40.3 ) );
	object.setDefaultX( MxNumberTenths( 100.9 ) );
	object.setDefaultY( MxNumberTenths( 100.9 ) );
	object.setRelativeX( MxNumberTenths( 100.9 ) );
	object.setRelativeY( MxNumberTenths( 100.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" dash-length=\"40.3\" default-x=\"100.9\" default-y=\"100.9\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" color=\"#CDCECDCC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 40.4 ) );
	object.setSpaceLength( MxNumberTenths( 40.4 ) );
	object.setDefaultX( MxNumberTenths( 101 ) );
	object.setDefaultY( MxNumberTenths( 101 ) );
	object.setRelativeX( MxNumberTenths( 101 ) );
	object.setRelativeY( MxNumberTenths( 101 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" dash-length=\"40.4\" space-length=\"40.4\" default-y=\"101\" relative-y=\"101\" font-style=\"normal\" font-weight=\"normal\" color=\"#D0CFCE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 40.5 ) );
	object.setSpaceLength( MxNumberTenths( 40.5 ) );
	object.setDefaultX( MxNumberTenths( 101.1 ) );
	object.setDefaultY( MxNumberTenths( 101.1 ) );
	object.setRelativeX( MxNumberTenths( 101.1 ) );
	object.setRelativeY( MxNumberTenths( 101.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" dash-length=\"40.5\" space-length=\"40.5\" relative-y=\"101.1\" font-style=\"italic\" color=\"#D1D2D1D0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 40.6 ) );
	object.setSpaceLength( MxNumberTenths( 40.6 ) );
	object.setDefaultX( MxNumberTenths( 101.2 ) );
	object.setDefaultY( MxNumberTenths( 101.2 ) );
	object.setRelativeX( MxNumberTenths( 101.2 ) );
	object.setRelativeY( MxNumberTenths( 101.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" space-length=\"40.6\" relative-y=\"101.2\" font-style=\"normal\" color=\"#D4D3D2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 40.7 ) );
	object.setSpaceLength( MxNumberTenths( 40.7 ) );
	object.setDefaultX( MxNumberTenths( 101.3 ) );
	object.setDefaultY( MxNumberTenths( 101.3 ) );
	object.setRelativeX( MxNumberTenths( 101.3 ) );
	object.setRelativeY( MxNumberTenths( 101.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" space-length=\"40.7\" relative-y=\"101.3\" font-style=\"italic\" color=\"#D5D6D5D4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 40.8 ) );
	object.setSpaceLength( MxNumberTenths( 40.8 ) );
	object.setDefaultX( MxNumberTenths( 101.4 ) );
	object.setDefaultY( MxNumberTenths( 101.4 ) );
	object.setRelativeX( MxNumberTenths( 101.4 ) );
	object.setRelativeY( MxNumberTenths( 101.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<octave-shift type=\"up\" space-length=\"40.8\" relative-y=\"101.4\" font-style=\"normal\" color=\"#D8D7D6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 40.9 ) );
	object.setSpaceLength( MxNumberTenths( 40.9 ) );
	object.setDefaultX( MxNumberTenths( 101.5 ) );
	object.setDefaultY( MxNumberTenths( 101.5 ) );
	object.setRelativeX( MxNumberTenths( 101.5 ) );
	object.setRelativeY( MxNumberTenths( 101.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<octave-shift type=\"up\" relative-y=\"101.5\" font-style=\"italic\" color=\"#D9DAD9D8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 41 ) );
	object.setSpaceLength( MxNumberTenths( 41 ) );
	object.setDefaultX( MxNumberTenths( 101.6 ) );
	object.setDefaultY( MxNumberTenths( 101.6 ) );
	object.setRelativeX( MxNumberTenths( 101.6 ) );
	object.setRelativeY( MxNumberTenths( 101.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" dash-length=\"41\" default-x=\"101.6\" relative-x=\"101.6\" relative-y=\"101.6\" font-style=\"normal\" font-size=\"large\" color=\"#DCDBDA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 41.1 ) );
	object.setSpaceLength( MxNumberTenths( 41.1 ) );
	object.setDefaultX( MxNumberTenths( 101.7 ) );
	object.setDefaultY( MxNumberTenths( 101.7 ) );
	object.setRelativeX( MxNumberTenths( 101.7 ) );
	object.setRelativeY( MxNumberTenths( 101.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<octave-shift type=\"up\" number=\"1\" size=\"1\" dash-length=\"41.1\" default-x=\"101.7\" relative-x=\"101.7\" relative-y=\"101.7\" font-style=\"italic\" font-size=\"1.1\" color=\"#DDDEDDDC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 41.2 ) );
	object.setSpaceLength( MxNumberTenths( 41.2 ) );
	object.setDefaultX( MxNumberTenths( 101.8 ) );
	object.setDefaultY( MxNumberTenths( 101.8 ) );
	object.setRelativeX( MxNumberTenths( 101.8 ) );
	object.setRelativeY( MxNumberTenths( 101.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<octave-shift type=\"up\" size=\"1\" dash-length=\"41.2\" default-x=\"101.8\" default-y=\"101.8\" relative-x=\"101.8\" relative-y=\"101.8\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 41.3 ) );
	object.setSpaceLength( MxNumberTenths( 41.3 ) );
	object.setDefaultX( MxNumberTenths( 101.9 ) );
	object.setDefaultY( MxNumberTenths( 101.9 ) );
	object.setRelativeX( MxNumberTenths( 101.9 ) );
	object.setRelativeY( MxNumberTenths( 101.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<octave-shift type=\"up\" dash-length=\"41.3\" default-x=\"101.9\" default-y=\"101.9\" relative-x=\"101.9\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEeOctaveShift )
{
	MxEeOctaveShift object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSizePresent( false );
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
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 41.4 ) );
	object.setSpaceLength( MxNumberTenths( 41.4 ) );
	object.setDefaultX( MxNumberTenths( 102 ) );
	object.setDefaultY( MxNumberTenths( 102 ) );
	object.setRelativeX( MxNumberTenths( 102 ) );
	object.setRelativeY( MxNumberTenths( 102 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<octave-shift type=\"up\"/>";
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


