/** *******************************************************
  * 
  * MxCxEmptyOctaveShiftTest.cpp
  * Created: 2014-12-03 16:31:29
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyOctaveShift.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	std::string expected = ( MxEnumUpDownStopContinue(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	std::string expected = ( MxNumberNumberLevel(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	std::string expected = ( XsPositiveInteger( 8 ) ).toString();
	std::string actual = object.getSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDashLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getSpaceLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	std::string expected = "MxCxEmptyOctaveShift";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	std::string expected = "octave-shift";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	std::string expected = "The octave shift type indicates where notes are shifted up or down from their true pitched values because of printing difficulty. Thus a treble clef line noted with 8va will be indicated with an octave-shift down from the pitch data indicated in the notes. A size of 8 indicates one octave; a size of 15 indicates two octaves.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxEmptyOctaveShift )
{
	MxEnumUpDownStopContinue value1( lexicon::enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue value2( lexicon::enums::UpDownStopContinue::stop );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyOctaveShift object;
	object.setType( value1 );
	MxEnumUpDownStopContinue expected = value1;
	MxEnumUpDownStopContinue actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setNumber1, MxCxEmptyOctaveShift )
{
	MxNumberNumberLevel value1( 1 );
	MxNumberNumberLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyOctaveShift object;
	object.setNumber( value1 );
	MxNumberNumberLevel expected = value1;
	MxNumberNumberLevel actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setSize2, MxCxEmptyOctaveShift )
{
	XsPositiveInteger value1( 1 );
	XsPositiveInteger value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyOctaveShift object;
	object.setSize( value1 );
	XsPositiveInteger expected = value1;
	XsPositiveInteger actual = object.getSize();
	CHECK_EQUAL( expected, actual )
	object.setSize( value2 );
	expected = value2;
	actual = object.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setDashLength3, MxCxEmptyOctaveShift )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyOctaveShift object;
	object.setDashLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
	object.setDashLength( value2 );
	expected = value2;
	actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setSpaceLength4, MxCxEmptyOctaveShift )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyOctaveShift object;
	object.setSpaceLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
	object.setSpaceLength( value2 );
	expected = value2;
	actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX5, MxCxEmptyOctaveShift )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyOctaveShift object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY6, MxCxEmptyOctaveShift )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyOctaveShift object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX7, MxCxEmptyOctaveShift )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyOctaveShift object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY8, MxCxEmptyOctaveShift )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyOctaveShift object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily9, MxCxEmptyOctaveShift )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyOctaveShift object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle10, MxCxEmptyOctaveShift )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyOctaveShift object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize11, MxCxEmptyOctaveShift )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyOctaveShift object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight12, MxCxEmptyOctaveShift )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyOctaveShift object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor13, MxCxEmptyOctaveShift )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyOctaveShift object;
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

TEST( getIsTypeRequired0, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberRequired1, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSizeRequired2, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthRequired3, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsDashLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthRequired4, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired5, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired6, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired7, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired8, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired9, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired10, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired11, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired12, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired13, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
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
TEST( getIsNumberPresent1, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
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
TEST( getIsSizePresent2, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
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
TEST( getIsDashLengthPresent3, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
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
TEST( getIsSpaceLengthPresent4, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
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
TEST( getIsDefaultXPresent5, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
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
TEST( getIsDefaultYPresent6, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
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
TEST( getIsRelativeXPresent7, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
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
TEST( getIsRelativeYPresent8, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
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
TEST( getIsFontFamilyPresent9, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
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
TEST( getIsFontStylePresent10, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
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
TEST( getIsFontSizePresent11, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
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
TEST( getIsFontWeightPresent12, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
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
TEST( getIsColorPresent13, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
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

TEST( getIsTypeDefaultDefined, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberDefaultDefined, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSizeDefaultDefined, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = true;
	bool actual = object.getIsSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthDefaultDefined, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsDashLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthDefaultDefined, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	MxEnumUpDownStopContinue expected;
	MxEnumUpDownStopContinue actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNumberDefaultValue, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	MxNumberNumberLevel expected;
	MxNumberNumberLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSizeDefaultValue, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	XsPositiveInteger expected( 8 );
	XsPositiveInteger actual = object.getSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDashLengthDefaultValue, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDashLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSpaceLengthDefaultValue, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getSpaceLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setType( MxEnumUpDownStopContinue( lexicon::enums::UpDownStopContinue::up ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSize( XsPositiveInteger( 1 ) );
	object.setDashLength( MxNumberTenths( 21.3 ) );
	object.setSpaceLength( MxNumberTenths( 21.3 ) );
	object.setDefaultX( MxNumberTenths( 102 ) );
	object.setDefaultY( MxNumberTenths( 102 ) );
	object.setRelativeX( MxNumberTenths( 102 ) );
	object.setRelativeY( MxNumberTenths( 102 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#242322" ) );
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
	expected = "<booksmart type=\"up\" number=\"1\" size=\"1\" dash-length=\"21.3\" space-length=\"21.3\" default-x=\"102\" default-y=\"102\" relative-x=\"102\" relative-y=\"102\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#242322\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 21.4 ) );
	object.setSpaceLength( MxNumberTenths( 21.4 ) );
	object.setDefaultX( MxNumberTenths( 102.1 ) );
	object.setDefaultY( MxNumberTenths( 102.1 ) );
	object.setRelativeX( MxNumberTenths( 102.1 ) );
	object.setRelativeY( MxNumberTenths( 102.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<quiet type=\"up\" number=\"1\" size=\"1\" dash-length=\"21.4\" space-length=\"21.4\" default-x=\"102.1\" default-y=\"102.1\" relative-x=\"102.1\" relative-y=\"102.1\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#25262524\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 21.5 ) );
	object.setSpaceLength( MxNumberTenths( 21.5 ) );
	object.setDefaultX( MxNumberTenths( 102.2 ) );
	object.setDefaultY( MxNumberTenths( 102.2 ) );
	object.setRelativeX( MxNumberTenths( 102.2 ) );
	object.setRelativeY( MxNumberTenths( 102.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<musicxmlishard type=\"up\" size=\"1\" dash-length=\"21.5\" space-length=\"21.5\" default-x=\"102.2\" default-y=\"102.2\" relative-x=\"102.2\" relative-y=\"102.2\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#282726\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 21.6 ) );
	object.setSpaceLength( MxNumberTenths( 21.6 ) );
	object.setDefaultX( MxNumberTenths( 102.3 ) );
	object.setDefaultY( MxNumberTenths( 102.3 ) );
	object.setRelativeX( MxNumberTenths( 102.3 ) );
	object.setRelativeY( MxNumberTenths( 102.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<bishop type=\"up\" dash-length=\"21.6\" space-length=\"21.6\" default-x=\"102.3\" default-y=\"102.3\" relative-x=\"102.3\" relative-y=\"102.3\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#292A2928\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 21.7 ) );
	object.setSpaceLength( MxNumberTenths( 21.7 ) );
	object.setDefaultX( MxNumberTenths( 102.4 ) );
	object.setDefaultY( MxNumberTenths( 102.4 ) );
	object.setRelativeX( MxNumberTenths( 102.4 ) );
	object.setRelativeY( MxNumberTenths( 102.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<charlie type=\"up\" number=\"1\" space-length=\"21.7\" default-x=\"102.4\" default-y=\"102.4\" relative-x=\"102.4\" relative-y=\"102.4\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#2C2B2A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 21.8 ) );
	object.setSpaceLength( MxNumberTenths( 21.8 ) );
	object.setDefaultX( MxNumberTenths( 102.5 ) );
	object.setDefaultY( MxNumberTenths( 102.5 ) );
	object.setRelativeX( MxNumberTenths( 102.5 ) );
	object.setRelativeY( MxNumberTenths( 102.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<booksmart type=\"up\" number=\"1\" default-x=\"102.5\" default-y=\"102.5\" relative-x=\"102.5\" relative-y=\"102.5\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#2D2E2D2C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 21.9 ) );
	object.setSpaceLength( MxNumberTenths( 21.9 ) );
	object.setDefaultX( MxNumberTenths( 102.6 ) );
	object.setDefaultY( MxNumberTenths( 102.6 ) );
	object.setRelativeX( MxNumberTenths( 102.6 ) );
	object.setRelativeY( MxNumberTenths( 102.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<quiet type=\"up\" size=\"1\" default-y=\"102.6\" relative-x=\"102.6\" relative-y=\"102.6\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#302F2E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 22 ) );
	object.setSpaceLength( MxNumberTenths( 22 ) );
	object.setDefaultX( MxNumberTenths( 102.7 ) );
	object.setDefaultY( MxNumberTenths( 102.7 ) );
	object.setRelativeX( MxNumberTenths( 102.7 ) );
	object.setRelativeY( MxNumberTenths( 102.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<musicxmlishard type=\"up\" size=\"1\" relative-x=\"102.7\" relative-y=\"102.7\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#31323130\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 22.1 ) );
	object.setSpaceLength( MxNumberTenths( 22.1 ) );
	object.setDefaultX( MxNumberTenths( 102.8 ) );
	object.setDefaultY( MxNumberTenths( 102.8 ) );
	object.setRelativeX( MxNumberTenths( 102.8 ) );
	object.setRelativeY( MxNumberTenths( 102.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<bishop type=\"up\" number=\"1\" size=\"1\" dash-length=\"22.1\" relative-y=\"102.8\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#343332\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 22.2 ) );
	object.setSpaceLength( MxNumberTenths( 22.2 ) );
	object.setDefaultX( MxNumberTenths( 102.9 ) );
	object.setDefaultY( MxNumberTenths( 102.9 ) );
	object.setRelativeX( MxNumberTenths( 102.9 ) );
	object.setRelativeY( MxNumberTenths( 102.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<charlie type=\"up\" number=\"1\" dash-length=\"22.2\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#35363534\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 22.3 ) );
	object.setSpaceLength( MxNumberTenths( 22.3 ) );
	object.setDefaultX( MxNumberTenths( 103 ) );
	object.setDefaultY( MxNumberTenths( 103 ) );
	object.setRelativeX( MxNumberTenths( 103 ) );
	object.setRelativeY( MxNumberTenths( 103 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<booksmart type=\"up\" dash-length=\"22.3\" space-length=\"22.3\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#383736\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 22.4 ) );
	object.setSpaceLength( MxNumberTenths( 22.4 ) );
	object.setDefaultX( MxNumberTenths( 103.1 ) );
	object.setDefaultY( MxNumberTenths( 103.1 ) );
	object.setRelativeX( MxNumberTenths( 103.1 ) );
	object.setRelativeY( MxNumberTenths( 103.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<quiet type=\"up\" dash-length=\"22.4\" space-length=\"22.4\" font-size=\"large\" font-weight=\"normal\" color=\"#393A3938\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 22.5 ) );
	object.setSpaceLength( MxNumberTenths( 22.5 ) );
	object.setDefaultX( MxNumberTenths( 103.2 ) );
	object.setDefaultY( MxNumberTenths( 103.2 ) );
	object.setRelativeX( MxNumberTenths( 103.2 ) );
	object.setRelativeY( MxNumberTenths( 103.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<musicxmlishard type=\"up\" number=\"1\" size=\"1\" space-length=\"22.5\" default-x=\"103.2\" font-weight=\"bold\" color=\"#3C3B3A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 22.6 ) );
	object.setSpaceLength( MxNumberTenths( 22.6 ) );
	object.setDefaultX( MxNumberTenths( 103.3 ) );
	object.setDefaultY( MxNumberTenths( 103.3 ) );
	object.setRelativeX( MxNumberTenths( 103.3 ) );
	object.setRelativeY( MxNumberTenths( 103.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<bishop type=\"up\" number=\"1\" size=\"1\" space-length=\"22.6\" default-x=\"103.3\" color=\"#3D3E3D3C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 22.7 ) );
	object.setSpaceLength( MxNumberTenths( 22.7 ) );
	object.setDefaultX( MxNumberTenths( 103.4 ) );
	object.setDefaultY( MxNumberTenths( 103.4 ) );
	object.setRelativeX( MxNumberTenths( 103.4 ) );
	object.setRelativeY( MxNumberTenths( 103.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<charlie type=\"up\" size=\"1\" space-length=\"22.7\" default-x=\"103.4\" default-y=\"103.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 22.8 ) );
	object.setSpaceLength( MxNumberTenths( 22.8 ) );
	object.setDefaultX( MxNumberTenths( 103.5 ) );
	object.setDefaultY( MxNumberTenths( 103.5 ) );
	object.setRelativeX( MxNumberTenths( 103.5 ) );
	object.setRelativeY( MxNumberTenths( 103.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<booksmart type=\"up\" default-x=\"103.5\" default-y=\"103.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 22.9 ) );
	object.setSpaceLength( MxNumberTenths( 22.9 ) );
	object.setDefaultX( MxNumberTenths( 103.6 ) );
	object.setDefaultY( MxNumberTenths( 103.6 ) );
	object.setRelativeX( MxNumberTenths( 103.6 ) );
	object.setRelativeY( MxNumberTenths( 103.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<quiet type=\"up\" number=\"1\" dash-length=\"22.9\" default-x=\"103.6\" default-y=\"103.6\" relative-x=\"103.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 23 ) );
	object.setSpaceLength( MxNumberTenths( 23 ) );
	object.setDefaultX( MxNumberTenths( 103.7 ) );
	object.setDefaultY( MxNumberTenths( 103.7 ) );
	object.setRelativeX( MxNumberTenths( 103.7 ) );
	object.setRelativeY( MxNumberTenths( 103.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<musicxmlishard type=\"up\" number=\"1\" dash-length=\"23\" default-x=\"103.7\" default-y=\"103.7\" relative-x=\"103.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 23.1 ) );
	object.setSpaceLength( MxNumberTenths( 23.1 ) );
	object.setDefaultX( MxNumberTenths( 103.8 ) );
	object.setDefaultY( MxNumberTenths( 103.8 ) );
	object.setRelativeX( MxNumberTenths( 103.8 ) );
	object.setRelativeY( MxNumberTenths( 103.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<bishop type=\"up\" size=\"1\" dash-length=\"23.1\" default-y=\"103.8\" relative-x=\"103.8\" relative-y=\"103.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 23.2 ) );
	object.setSpaceLength( MxNumberTenths( 23.2 ) );
	object.setDefaultX( MxNumberTenths( 103.9 ) );
	object.setDefaultY( MxNumberTenths( 103.9 ) );
	object.setRelativeX( MxNumberTenths( 103.9 ) );
	object.setRelativeY( MxNumberTenths( 103.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<charlie type=\"up\" size=\"1\" dash-length=\"23.2\" default-y=\"103.9\" relative-x=\"103.9\" relative-y=\"103.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 23.3 ) );
	object.setSpaceLength( MxNumberTenths( 23.3 ) );
	object.setDefaultX( MxNumberTenths( 104 ) );
	object.setDefaultY( MxNumberTenths( 104 ) );
	object.setRelativeX( MxNumberTenths( 104 ) );
	object.setRelativeY( MxNumberTenths( 104 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<booksmart type=\"up\" number=\"1\" size=\"1\" space-length=\"23.3\" default-y=\"104\" relative-x=\"104\" relative-y=\"104\" font-family=\"XYZ\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 23.4 ) );
	object.setSpaceLength( MxNumberTenths( 23.4 ) );
	object.setDefaultX( MxNumberTenths( 104.1 ) );
	object.setDefaultY( MxNumberTenths( 104.1 ) );
	object.setRelativeX( MxNumberTenths( 104.1 ) );
	object.setRelativeY( MxNumberTenths( 104.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<quiet type=\"up\" number=\"1\" space-length=\"23.4\" relative-x=\"104.1\" relative-y=\"104.1\" font-family=\"ABC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 23.5 ) );
	object.setSpaceLength( MxNumberTenths( 23.5 ) );
	object.setDefaultX( MxNumberTenths( 104.2 ) );
	object.setDefaultY( MxNumberTenths( 104.2 ) );
	object.setRelativeX( MxNumberTenths( 104.2 ) );
	object.setRelativeY( MxNumberTenths( 104.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<musicxmlishard type=\"up\" space-length=\"23.5\" relative-x=\"104.2\" relative-y=\"104.2\" font-family=\"DEF\" font-style=\"italic\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 23.6 ) );
	object.setSpaceLength( MxNumberTenths( 23.6 ) );
	object.setDefaultX( MxNumberTenths( 104.3 ) );
	object.setDefaultY( MxNumberTenths( 104.3 ) );
	object.setRelativeX( MxNumberTenths( 104.3 ) );
	object.setRelativeY( MxNumberTenths( 104.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<bishop type=\"up\" space-length=\"23.6\" relative-x=\"104.3\" relative-y=\"104.3\" font-family=\"XYZ\" font-style=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 23.7 ) );
	object.setSpaceLength( MxNumberTenths( 23.7 ) );
	object.setDefaultX( MxNumberTenths( 104.4 ) );
	object.setDefaultY( MxNumberTenths( 104.4 ) );
	object.setRelativeX( MxNumberTenths( 104.4 ) );
	object.setRelativeY( MxNumberTenths( 104.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<charlie type=\"up\" number=\"1\" size=\"1\" dash-length=\"23.7\" space-length=\"23.7\" default-x=\"104.4\" relative-y=\"104.4\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 23.8 ) );
	object.setSpaceLength( MxNumberTenths( 23.8 ) );
	object.setDefaultX( MxNumberTenths( 104.5 ) );
	object.setDefaultY( MxNumberTenths( 104.5 ) );
	object.setRelativeX( MxNumberTenths( 104.5 ) );
	object.setRelativeY( MxNumberTenths( 104.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#55565554" ) );
	expected = "<booksmart type=\"up\" number=\"1\" size=\"1\" dash-length=\"23.8\" default-x=\"104.5\" relative-y=\"104.5\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 23.9 ) );
	object.setSpaceLength( MxNumberTenths( 23.9 ) );
	object.setDefaultX( MxNumberTenths( 104.6 ) );
	object.setDefaultY( MxNumberTenths( 104.6 ) );
	object.setRelativeX( MxNumberTenths( 104.6 ) );
	object.setRelativeY( MxNumberTenths( 104.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#585756" ) );
	expected = "<quiet type=\"up\" size=\"1\" dash-length=\"23.9\" default-x=\"104.6\" relative-y=\"104.6\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 24 ) );
	object.setSpaceLength( MxNumberTenths( 24 ) );
	object.setDefaultX( MxNumberTenths( 104.7 ) );
	object.setDefaultY( MxNumberTenths( 104.7 ) );
	object.setRelativeX( MxNumberTenths( 104.7 ) );
	object.setRelativeY( MxNumberTenths( 104.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
	expected = "<musicxmlishard type=\"up\" dash-length=\"24\" default-x=\"104.7\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 24.1 ) );
	object.setSpaceLength( MxNumberTenths( 24.1 ) );
	object.setDefaultX( MxNumberTenths( 104.8 ) );
	object.setDefaultY( MxNumberTenths( 104.8 ) );
	object.setRelativeX( MxNumberTenths( 104.8 ) );
	object.setRelativeY( MxNumberTenths( 104.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	expected = "<bishop type=\"up\" number=\"1\" default-x=\"104.8\" default-y=\"104.8\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#5C5B5A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 24.2 ) );
	object.setSpaceLength( MxNumberTenths( 24.2 ) );
	object.setDefaultX( MxNumberTenths( 104.9 ) );
	object.setDefaultY( MxNumberTenths( 104.9 ) );
	object.setRelativeX( MxNumberTenths( 104.9 ) );
	object.setRelativeY( MxNumberTenths( 104.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	expected = "<charlie type=\"up\" number=\"1\" default-x=\"104.9\" default-y=\"104.9\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#5D5E5D5C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 24.3 ) );
	object.setSpaceLength( MxNumberTenths( 24.3 ) );
	object.setDefaultX( MxNumberTenths( 105 ) );
	object.setDefaultY( MxNumberTenths( 105 ) );
	object.setRelativeX( MxNumberTenths( 105 ) );
	object.setRelativeY( MxNumberTenths( 105 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
	expected = "<booksmart type=\"up\" size=\"1\" space-length=\"24.3\" default-y=\"105\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#605F5E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 24.4 ) );
	object.setSpaceLength( MxNumberTenths( 24.4 ) );
	object.setDefaultX( MxNumberTenths( 105.1 ) );
	object.setDefaultY( MxNumberTenths( 105.1 ) );
	object.setRelativeX( MxNumberTenths( 105.1 ) );
	object.setRelativeY( MxNumberTenths( 105.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<quiet type=\"up\" size=\"1\" space-length=\"24.4\" default-y=\"105.1\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#61626160\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 24.5 ) );
	object.setSpaceLength( MxNumberTenths( 24.5 ) );
	object.setDefaultX( MxNumberTenths( 105.2 ) );
	object.setDefaultY( MxNumberTenths( 105.2 ) );
	object.setRelativeX( MxNumberTenths( 105.2 ) );
	object.setRelativeY( MxNumberTenths( 105.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<musicxmlishard type=\"up\" number=\"1\" size=\"1\" dash-length=\"24.5\" space-length=\"24.5\" default-y=\"105.2\" relative-x=\"105.2\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#646362\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 24.6 ) );
	object.setSpaceLength( MxNumberTenths( 24.6 ) );
	object.setDefaultX( MxNumberTenths( 105.3 ) );
	object.setDefaultY( MxNumberTenths( 105.3 ) );
	object.setRelativeX( MxNumberTenths( 105.3 ) );
	object.setRelativeY( MxNumberTenths( 105.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<bishop type=\"up\" number=\"1\" dash-length=\"24.6\" space-length=\"24.6\" default-y=\"105.3\" relative-x=\"105.3\" font-size=\"large\" font-weight=\"normal\" color=\"#65666564\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 24.7 ) );
	object.setSpaceLength( MxNumberTenths( 24.7 ) );
	object.setDefaultX( MxNumberTenths( 105.4 ) );
	object.setDefaultY( MxNumberTenths( 105.4 ) );
	object.setRelativeX( MxNumberTenths( 105.4 ) );
	object.setRelativeY( MxNumberTenths( 105.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<charlie type=\"up\" dash-length=\"24.7\" space-length=\"24.7\" default-y=\"105.4\" relative-x=\"105.4\" font-size=\"1.1\" font-weight=\"bold\" color=\"#686766\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 24.8 ) );
	object.setSpaceLength( MxNumberTenths( 24.8 ) );
	object.setDefaultX( MxNumberTenths( 105.5 ) );
	object.setDefaultY( MxNumberTenths( 105.5 ) );
	object.setRelativeX( MxNumberTenths( 105.5 ) );
	object.setRelativeY( MxNumberTenths( 105.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<booksmart type=\"up\" dash-length=\"24.8\" relative-x=\"105.5\" font-size=\"large\" font-weight=\"normal\" color=\"#696A6968\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 24.9 ) );
	object.setSpaceLength( MxNumberTenths( 24.9 ) );
	object.setDefaultX( MxNumberTenths( 105.6 ) );
	object.setDefaultY( MxNumberTenths( 105.6 ) );
	object.setRelativeX( MxNumberTenths( 105.6 ) );
	object.setRelativeY( MxNumberTenths( 105.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<quiet type=\"up\" number=\"1\" size=\"1\" default-x=\"105.6\" relative-x=\"105.6\" relative-y=\"105.6\" font-weight=\"bold\" color=\"#6C6B6A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 25 ) );
	object.setSpaceLength( MxNumberTenths( 25 ) );
	object.setDefaultX( MxNumberTenths( 105.7 ) );
	object.setDefaultY( MxNumberTenths( 105.7 ) );
	object.setRelativeX( MxNumberTenths( 105.7 ) );
	object.setRelativeY( MxNumberTenths( 105.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<musicxmlishard type=\"up\" number=\"1\" size=\"1\" default-x=\"105.7\" relative-x=\"105.7\" relative-y=\"105.7\" font-weight=\"normal\" color=\"#6D6E6D6C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 25.1 ) );
	object.setSpaceLength( MxNumberTenths( 25.1 ) );
	object.setDefaultX( MxNumberTenths( 105.8 ) );
	object.setDefaultY( MxNumberTenths( 105.8 ) );
	object.setRelativeX( MxNumberTenths( 105.8 ) );
	object.setRelativeY( MxNumberTenths( 105.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<bishop type=\"up\" size=\"1\" default-x=\"105.8\" relative-x=\"105.8\" relative-y=\"105.8\" font-weight=\"bold\" color=\"#706F6E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 25.2 ) );
	object.setSpaceLength( MxNumberTenths( 25.2 ) );
	object.setDefaultX( MxNumberTenths( 105.9 ) );
	object.setDefaultY( MxNumberTenths( 105.9 ) );
	object.setRelativeX( MxNumberTenths( 105.9 ) );
	object.setRelativeY( MxNumberTenths( 105.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<charlie type=\"up\" default-x=\"105.9\" relative-x=\"105.9\" relative-y=\"105.9\" color=\"#71727170\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 25.3 ) );
	object.setSpaceLength( MxNumberTenths( 25.3 ) );
	object.setDefaultX( MxNumberTenths( 106 ) );
	object.setDefaultY( MxNumberTenths( 106 ) );
	object.setRelativeX( MxNumberTenths( 106 ) );
	object.setRelativeY( MxNumberTenths( 106 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<booksmart type=\"up\" number=\"1\" dash-length=\"25.3\" space-length=\"25.3\" default-x=\"106\" relative-y=\"106\" font-family=\"DEF\" color=\"#747372\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 25.4 ) );
	object.setSpaceLength( MxNumberTenths( 25.4 ) );
	object.setDefaultX( MxNumberTenths( 106.1 ) );
	object.setDefaultY( MxNumberTenths( 106.1 ) );
	object.setRelativeX( MxNumberTenths( 106.1 ) );
	object.setRelativeY( MxNumberTenths( 106.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<quiet type=\"up\" number=\"1\" dash-length=\"25.4\" space-length=\"25.4\" default-x=\"106.1\" relative-y=\"106.1\" font-family=\"XYZ\" color=\"#75767574\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 25.5 ) );
	object.setSpaceLength( MxNumberTenths( 25.5 ) );
	object.setDefaultX( MxNumberTenths( 106.2 ) );
	object.setDefaultY( MxNumberTenths( 106.2 ) );
	object.setRelativeX( MxNumberTenths( 106.2 ) );
	object.setRelativeY( MxNumberTenths( 106.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<musicxmlishard type=\"up\" size=\"1\" dash-length=\"25.5\" space-length=\"25.5\" default-y=\"106.2\" relative-y=\"106.2\" font-family=\"ABC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 25.6 ) );
	object.setSpaceLength( MxNumberTenths( 25.6 ) );
	object.setDefaultX( MxNumberTenths( 106.3 ) );
	object.setDefaultY( MxNumberTenths( 106.3 ) );
	object.setRelativeX( MxNumberTenths( 106.3 ) );
	object.setRelativeY( MxNumberTenths( 106.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<bishop type=\"up\" size=\"1\" dash-length=\"25.6\" space-length=\"25.6\" default-y=\"106.3\" relative-y=\"106.3\" font-family=\"DEF\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 25.7 ) );
	object.setSpaceLength( MxNumberTenths( 25.7 ) );
	object.setDefaultX( MxNumberTenths( 106.4 ) );
	object.setDefaultY( MxNumberTenths( 106.4 ) );
	object.setRelativeX( MxNumberTenths( 106.4 ) );
	object.setRelativeY( MxNumberTenths( 106.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<charlie type=\"up\" number=\"1\" size=\"1\" space-length=\"25.7\" default-y=\"106.4\" relative-y=\"106.4\" font-family=\"XYZ\" font-style=\"italic\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 25.8 ) );
	object.setSpaceLength( MxNumberTenths( 25.8 ) );
	object.setDefaultX( MxNumberTenths( 106.5 ) );
	object.setDefaultY( MxNumberTenths( 106.5 ) );
	object.setRelativeX( MxNumberTenths( 106.5 ) );
	object.setRelativeY( MxNumberTenths( 106.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<booksmart type=\"up\" number=\"1\" default-y=\"106.5\" font-family=\"ABC\" font-style=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 25.9 ) );
	object.setSpaceLength( MxNumberTenths( 25.9 ) );
	object.setDefaultX( MxNumberTenths( 106.6 ) );
	object.setDefaultY( MxNumberTenths( 106.6 ) );
	object.setRelativeX( MxNumberTenths( 106.6 ) );
	object.setRelativeY( MxNumberTenths( 106.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<quiet type=\"up\" default-y=\"106.6\" font-family=\"DEF\" font-style=\"italic\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 26 ) );
	object.setSpaceLength( MxNumberTenths( 26 ) );
	object.setDefaultX( MxNumberTenths( 106.7 ) );
	object.setDefaultY( MxNumberTenths( 106.7 ) );
	object.setRelativeX( MxNumberTenths( 106.7 ) );
	object.setRelativeY( MxNumberTenths( 106.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<musicxmlishard type=\"up\" default-y=\"106.7\" font-family=\"XYZ\" font-style=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 26.1 ) );
	object.setSpaceLength( MxNumberTenths( 26.1 ) );
	object.setDefaultX( MxNumberTenths( 106.8 ) );
	object.setDefaultY( MxNumberTenths( 106.8 ) );
	object.setRelativeX( MxNumberTenths( 106.8 ) );
	object.setRelativeY( MxNumberTenths( 106.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<bishop type=\"up\" number=\"1\" size=\"1\" dash-length=\"26.1\" default-x=\"106.8\" default-y=\"106.8\" relative-x=\"106.8\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 26.2 ) );
	object.setSpaceLength( MxNumberTenths( 26.2 ) );
	object.setDefaultX( MxNumberTenths( 106.9 ) );
	object.setDefaultY( MxNumberTenths( 106.9 ) );
	object.setRelativeX( MxNumberTenths( 106.9 ) );
	object.setRelativeY( MxNumberTenths( 106.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<charlie type=\"up\" number=\"1\" size=\"1\" dash-length=\"26.2\" default-x=\"106.9\" relative-x=\"106.9\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 26.3 ) );
	object.setSpaceLength( MxNumberTenths( 26.3 ) );
	object.setDefaultX( MxNumberTenths( 107 ) );
	object.setDefaultY( MxNumberTenths( 107 ) );
	object.setRelativeX( MxNumberTenths( 107 ) );
	object.setRelativeY( MxNumberTenths( 107 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<booksmart type=\"up\" size=\"1\" dash-length=\"26.3\" space-length=\"26.3\" default-x=\"107\" relative-x=\"107\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 26.4 ) );
	object.setSpaceLength( MxNumberTenths( 26.4 ) );
	object.setDefaultX( MxNumberTenths( 107.1 ) );
	object.setDefaultY( MxNumberTenths( 107.1 ) );
	object.setRelativeX( MxNumberTenths( 107.1 ) );
	object.setRelativeY( MxNumberTenths( 107.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<quiet type=\"up\" dash-length=\"26.4\" space-length=\"26.4\" default-x=\"107.1\" relative-x=\"107.1\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 26.5 ) );
	object.setSpaceLength( MxNumberTenths( 26.5 ) );
	object.setDefaultX( MxNumberTenths( 107.2 ) );
	object.setDefaultY( MxNumberTenths( 107.2 ) );
	object.setRelativeX( MxNumberTenths( 107.2 ) );
	object.setRelativeY( MxNumberTenths( 107.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<musicxmlishard type=\"up\" number=\"1\" space-length=\"26.5\" default-x=\"107.2\" relative-x=\"107.2\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 26.6 ) );
	object.setSpaceLength( MxNumberTenths( 26.6 ) );
	object.setDefaultX( MxNumberTenths( 107.3 ) );
	object.setDefaultY( MxNumberTenths( 107.3 ) );
	object.setRelativeX( MxNumberTenths( 107.3 ) );
	object.setRelativeY( MxNumberTenths( 107.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<bishop type=\"up\" number=\"1\" space-length=\"26.6\" default-x=\"107.3\" relative-x=\"107.3\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 26.7 ) );
	object.setSpaceLength( MxNumberTenths( 26.7 ) );
	object.setDefaultX( MxNumberTenths( 107.4 ) );
	object.setDefaultY( MxNumberTenths( 107.4 ) );
	object.setRelativeX( MxNumberTenths( 107.4 ) );
	object.setRelativeY( MxNumberTenths( 107.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<charlie type=\"up\" size=\"1\" space-length=\"26.7\" relative-x=\"107.4\" relative-y=\"107.4\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 26.8 ) );
	object.setSpaceLength( MxNumberTenths( 26.8 ) );
	object.setDefaultX( MxNumberTenths( 107.5 ) );
	object.setDefaultY( MxNumberTenths( 107.5 ) );
	object.setRelativeX( MxNumberTenths( 107.5 ) );
	object.setRelativeY( MxNumberTenths( 107.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<booksmart type=\"up\" size=\"1\" relative-x=\"107.5\" relative-y=\"107.5\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 26.9 ) );
	object.setSpaceLength( MxNumberTenths( 26.9 ) );
	object.setDefaultX( MxNumberTenths( 107.6 ) );
	object.setDefaultY( MxNumberTenths( 107.6 ) );
	object.setRelativeX( MxNumberTenths( 107.6 ) );
	object.setRelativeY( MxNumberTenths( 107.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<quiet type=\"up\" number=\"1\" size=\"1\" dash-length=\"26.9\" default-y=\"107.6\" relative-y=\"107.6\" font-size=\"1.1\" font-weight=\"bold\" color=\"#949392\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 27 ) );
	object.setSpaceLength( MxNumberTenths( 27 ) );
	object.setDefaultX( MxNumberTenths( 107.7 ) );
	object.setDefaultY( MxNumberTenths( 107.7 ) );
	object.setRelativeX( MxNumberTenths( 107.7 ) );
	object.setRelativeY( MxNumberTenths( 107.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<musicxmlishard type=\"up\" number=\"1\" dash-length=\"27\" default-y=\"107.7\" relative-y=\"107.7\" font-size=\"large\" font-weight=\"normal\" color=\"#95969594\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 27.1 ) );
	object.setSpaceLength( MxNumberTenths( 27.1 ) );
	object.setDefaultX( MxNumberTenths( 107.8 ) );
	object.setDefaultY( MxNumberTenths( 107.8 ) );
	object.setRelativeX( MxNumberTenths( 107.8 ) );
	object.setRelativeY( MxNumberTenths( 107.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<bishop type=\"up\" dash-length=\"27.1\" default-y=\"107.8\" relative-y=\"107.8\" font-size=\"1.1\" font-weight=\"bold\" color=\"#989796\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 27.2 ) );
	object.setSpaceLength( MxNumberTenths( 27.2 ) );
	object.setDefaultX( MxNumberTenths( 107.9 ) );
	object.setDefaultY( MxNumberTenths( 107.9 ) );
	object.setRelativeX( MxNumberTenths( 107.9 ) );
	object.setRelativeY( MxNumberTenths( 107.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<charlie type=\"up\" dash-length=\"27.2\" default-y=\"107.9\" relative-y=\"107.9\" font-size=\"large\" font-weight=\"normal\" color=\"#999A9998\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 27.3 ) );
	object.setSpaceLength( MxNumberTenths( 27.3 ) );
	object.setDefaultX( MxNumberTenths( 108 ) );
	object.setDefaultY( MxNumberTenths( 108 ) );
	object.setRelativeX( MxNumberTenths( 108 ) );
	object.setRelativeY( MxNumberTenths( 108 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<booksmart type=\"up\" number=\"1\" size=\"1\" space-length=\"27.3\" default-x=\"108\" default-y=\"108\" relative-y=\"108\" font-family=\"ABC\" font-weight=\"bold\" color=\"#9C9B9A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 27.4 ) );
	object.setSpaceLength( MxNumberTenths( 27.4 ) );
	object.setDefaultX( MxNumberTenths( 108.1 ) );
	object.setDefaultY( MxNumberTenths( 108.1 ) );
	object.setRelativeX( MxNumberTenths( 108.1 ) );
	object.setRelativeY( MxNumberTenths( 108.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<quiet type=\"up\" number=\"1\" size=\"1\" space-length=\"27.4\" default-x=\"108.1\" default-y=\"108.1\" relative-y=\"108.1\" font-family=\"DEF\" font-weight=\"normal\" color=\"#9D9E9D9C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 27.5 ) );
	object.setSpaceLength( MxNumberTenths( 27.5 ) );
	object.setDefaultX( MxNumberTenths( 108.2 ) );
	object.setDefaultY( MxNumberTenths( 108.2 ) );
	object.setRelativeX( MxNumberTenths( 108.2 ) );
	object.setRelativeY( MxNumberTenths( 108.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<musicxmlishard type=\"up\" size=\"1\" space-length=\"27.5\" default-x=\"108.2\" default-y=\"108.2\" relative-y=\"108.2\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#A09F9E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 27.6 ) );
	object.setSpaceLength( MxNumberTenths( 27.6 ) );
	object.setDefaultX( MxNumberTenths( 108.3 ) );
	object.setDefaultY( MxNumberTenths( 108.3 ) );
	object.setRelativeX( MxNumberTenths( 108.3 ) );
	object.setRelativeY( MxNumberTenths( 108.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<bishop type=\"up\" space-length=\"27.6\" default-x=\"108.3\" font-family=\"ABC\" font-weight=\"normal\" color=\"#A1A2A1A0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 27.7 ) );
	object.setSpaceLength( MxNumberTenths( 27.7 ) );
	object.setDefaultX( MxNumberTenths( 108.4 ) );
	object.setDefaultY( MxNumberTenths( 108.4 ) );
	object.setRelativeX( MxNumberTenths( 108.4 ) );
	object.setRelativeY( MxNumberTenths( 108.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<charlie type=\"up\" number=\"1\" dash-length=\"27.7\" space-length=\"27.7\" default-x=\"108.4\" relative-x=\"108.4\" font-family=\"DEF\" font-weight=\"bold\" color=\"#A4A3A2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 27.8 ) );
	object.setSpaceLength( MxNumberTenths( 27.8 ) );
	object.setDefaultX( MxNumberTenths( 108.5 ) );
	object.setDefaultY( MxNumberTenths( 108.5 ) );
	object.setRelativeX( MxNumberTenths( 108.5 ) );
	object.setRelativeY( MxNumberTenths( 108.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<booksmart type=\"up\" number=\"1\" dash-length=\"27.8\" default-x=\"108.5\" relative-x=\"108.5\" font-family=\"XYZ\" color=\"#A5A6A5A4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 27.9 ) );
	object.setSpaceLength( MxNumberTenths( 27.9 ) );
	object.setDefaultX( MxNumberTenths( 108.6 ) );
	object.setDefaultY( MxNumberTenths( 108.6 ) );
	object.setRelativeX( MxNumberTenths( 108.6 ) );
	object.setRelativeY( MxNumberTenths( 108.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<quiet type=\"up\" size=\"1\" dash-length=\"27.9\" relative-x=\"108.6\" font-family=\"ABC\" font-style=\"italic\" color=\"#A8A7A6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 28 ) );
	object.setSpaceLength( MxNumberTenths( 28 ) );
	object.setDefaultX( MxNumberTenths( 108.7 ) );
	object.setDefaultY( MxNumberTenths( 108.7 ) );
	object.setRelativeX( MxNumberTenths( 108.7 ) );
	object.setRelativeY( MxNumberTenths( 108.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<musicxmlishard type=\"up\" size=\"1\" dash-length=\"28\" relative-x=\"108.7\" font-family=\"DEF\" font-style=\"normal\" color=\"#A9AAA9A8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 28.1 ) );
	object.setSpaceLength( MxNumberTenths( 28.1 ) );
	object.setDefaultX( MxNumberTenths( 108.8 ) );
	object.setDefaultY( MxNumberTenths( 108.8 ) );
	object.setRelativeX( MxNumberTenths( 108.8 ) );
	object.setRelativeY( MxNumberTenths( 108.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<bishop type=\"up\" number=\"1\" size=\"1\" relative-x=\"108.8\" font-family=\"XYZ\" font-style=\"italic\" color=\"#ACABAA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 28.2 ) );
	object.setSpaceLength( MxNumberTenths( 28.2 ) );
	object.setDefaultX( MxNumberTenths( 108.9 ) );
	object.setDefaultY( MxNumberTenths( 108.9 ) );
	object.setRelativeX( MxNumberTenths( 108.9 ) );
	object.setRelativeY( MxNumberTenths( 108.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<charlie type=\"up\" number=\"1\" relative-x=\"108.9\" font-family=\"ABC\" font-style=\"normal\" color=\"#ADAEADAC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 28.3 ) );
	object.setSpaceLength( MxNumberTenths( 28.3 ) );
	object.setDefaultX( MxNumberTenths( 109 ) );
	object.setDefaultY( MxNumberTenths( 109 ) );
	object.setRelativeX( MxNumberTenths( 109 ) );
	object.setRelativeY( MxNumberTenths( 109 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<booksmart type=\"up\" space-length=\"28.3\" default-y=\"109\" relative-x=\"109\" font-style=\"italic\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 28.4 ) );
	object.setSpaceLength( MxNumberTenths( 28.4 ) );
	object.setDefaultX( MxNumberTenths( 109.1 ) );
	object.setDefaultY( MxNumberTenths( 109.1 ) );
	object.setRelativeX( MxNumberTenths( 109.1 ) );
	object.setRelativeY( MxNumberTenths( 109.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<quiet type=\"up\" space-length=\"28.4\" default-y=\"109.1\" relative-x=\"109.1\" font-style=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 28.5 ) );
	object.setSpaceLength( MxNumberTenths( 28.5 ) );
	object.setDefaultX( MxNumberTenths( 109.2 ) );
	object.setDefaultY( MxNumberTenths( 109.2 ) );
	object.setRelativeX( MxNumberTenths( 109.2 ) );
	object.setRelativeY( MxNumberTenths( 109.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<musicxmlishard type=\"up\" number=\"1\" size=\"1\" dash-length=\"28.5\" space-length=\"28.5\" default-x=\"109.2\" default-y=\"109.2\" relative-y=\"109.2\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 28.6 ) );
	object.setSpaceLength( MxNumberTenths( 28.6 ) );
	object.setDefaultX( MxNumberTenths( 109.3 ) );
	object.setDefaultY( MxNumberTenths( 109.3 ) );
	object.setRelativeX( MxNumberTenths( 109.3 ) );
	object.setRelativeY( MxNumberTenths( 109.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<bishop type=\"up\" number=\"1\" size=\"1\" dash-length=\"28.6\" space-length=\"28.6\" default-x=\"109.3\" default-y=\"109.3\" relative-y=\"109.3\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 28.7 ) );
	object.setSpaceLength( MxNumberTenths( 28.7 ) );
	object.setDefaultX( MxNumberTenths( 109.4 ) );
	object.setDefaultY( MxNumberTenths( 109.4 ) );
	object.setRelativeX( MxNumberTenths( 109.4 ) );
	object.setRelativeY( MxNumberTenths( 109.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<charlie type=\"up\" size=\"1\" dash-length=\"28.7\" space-length=\"28.7\" default-x=\"109.4\" default-y=\"109.4\" relative-y=\"109.4\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 28.8 ) );
	object.setSpaceLength( MxNumberTenths( 28.8 ) );
	object.setDefaultX( MxNumberTenths( 109.5 ) );
	object.setDefaultY( MxNumberTenths( 109.5 ) );
	object.setRelativeX( MxNumberTenths( 109.5 ) );
	object.setRelativeY( MxNumberTenths( 109.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<booksmart type=\"up\" dash-length=\"28.8\" default-x=\"109.5\" default-y=\"109.5\" relative-y=\"109.5\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 28.9 ) );
	object.setSpaceLength( MxNumberTenths( 28.9 ) );
	object.setDefaultX( MxNumberTenths( 109.6 ) );
	object.setDefaultY( MxNumberTenths( 109.6 ) );
	object.setRelativeX( MxNumberTenths( 109.6 ) );
	object.setRelativeY( MxNumberTenths( 109.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<quiet type=\"up\" number=\"1\" default-x=\"109.6\" default-y=\"109.6\" relative-y=\"109.6\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 29 ) );
	object.setSpaceLength( MxNumberTenths( 29 ) );
	object.setDefaultX( MxNumberTenths( 109.7 ) );
	object.setDefaultY( MxNumberTenths( 109.7 ) );
	object.setRelativeX( MxNumberTenths( 109.7 ) );
	object.setRelativeY( MxNumberTenths( 109.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<musicxmlishard type=\"up\" number=\"1\" default-x=\"109.7\" relative-y=\"109.7\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 29.1 ) );
	object.setSpaceLength( MxNumberTenths( 29.1 ) );
	object.setDefaultX( MxNumberTenths( 109.8 ) );
	object.setDefaultY( MxNumberTenths( 109.8 ) );
	object.setRelativeX( MxNumberTenths( 109.8 ) );
	object.setRelativeY( MxNumberTenths( 109.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<bishop type=\"up\" size=\"1\" relative-y=\"109.8\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 29.2 ) );
	object.setSpaceLength( MxNumberTenths( 29.2 ) );
	object.setDefaultX( MxNumberTenths( 109.9 ) );
	object.setDefaultY( MxNumberTenths( 109.9 ) );
	object.setRelativeX( MxNumberTenths( 109.9 ) );
	object.setRelativeY( MxNumberTenths( 109.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<charlie type=\"up\" size=\"1\" relative-y=\"109.9\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 29.3 ) );
	object.setSpaceLength( MxNumberTenths( 29.3 ) );
	object.setDefaultX( MxNumberTenths( 110 ) );
	object.setDefaultY( MxNumberTenths( 110 ) );
	object.setRelativeX( MxNumberTenths( 110 ) );
	object.setRelativeY( MxNumberTenths( 110 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<booksmart type=\"up\" number=\"1\" size=\"1\" dash-length=\"29.3\" space-length=\"29.3\" relative-x=\"110\" relative-y=\"110\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 29.4 ) );
	object.setSpaceLength( MxNumberTenths( 29.4 ) );
	object.setDefaultX( MxNumberTenths( 110.1 ) );
	object.setDefaultY( MxNumberTenths( 110.1 ) );
	object.setRelativeX( MxNumberTenths( 110.1 ) );
	object.setRelativeY( MxNumberTenths( 110.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<quiet type=\"up\" number=\"1\" dash-length=\"29.4\" space-length=\"29.4\" relative-x=\"110.1\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 29.5 ) );
	object.setSpaceLength( MxNumberTenths( 29.5 ) );
	object.setDefaultX( MxNumberTenths( 110.2 ) );
	object.setDefaultY( MxNumberTenths( 110.2 ) );
	object.setRelativeX( MxNumberTenths( 110.2 ) );
	object.setRelativeY( MxNumberTenths( 110.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<musicxmlishard type=\"up\" dash-length=\"29.5\" space-length=\"29.5\" relative-x=\"110.2\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 29.6 ) );
	object.setSpaceLength( MxNumberTenths( 29.6 ) );
	object.setDefaultX( MxNumberTenths( 110.3 ) );
	object.setDefaultY( MxNumberTenths( 110.3 ) );
	object.setRelativeX( MxNumberTenths( 110.3 ) );
	object.setRelativeY( MxNumberTenths( 110.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<bishop type=\"up\" dash-length=\"29.6\" space-length=\"29.6\" relative-x=\"110.3\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 29.7 ) );
	object.setSpaceLength( MxNumberTenths( 29.7 ) );
	object.setDefaultX( MxNumberTenths( 110.4 ) );
	object.setDefaultY( MxNumberTenths( 110.4 ) );
	object.setRelativeX( MxNumberTenths( 110.4 ) );
	object.setRelativeY( MxNumberTenths( 110.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<charlie type=\"up\" number=\"1\" size=\"1\" space-length=\"29.7\" default-x=\"110.4\" default-y=\"110.4\" relative-x=\"110.4\" font-family=\"ABC\" font-weight=\"bold\" color=\"#CCCBCA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 29.8 ) );
	object.setSpaceLength( MxNumberTenths( 29.8 ) );
	object.setDefaultX( MxNumberTenths( 110.5 ) );
	object.setDefaultY( MxNumberTenths( 110.5 ) );
	object.setRelativeX( MxNumberTenths( 110.5 ) );
	object.setRelativeY( MxNumberTenths( 110.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<booksmart type=\"up\" number=\"1\" size=\"1\" default-x=\"110.5\" default-y=\"110.5\" relative-x=\"110.5\" font-family=\"DEF\" font-weight=\"normal\" color=\"#CDCECDCC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 29.9 ) );
	object.setSpaceLength( MxNumberTenths( 29.9 ) );
	object.setDefaultX( MxNumberTenths( 110.6 ) );
	object.setDefaultY( MxNumberTenths( 110.6 ) );
	object.setRelativeX( MxNumberTenths( 110.6 ) );
	object.setRelativeY( MxNumberTenths( 110.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<quiet type=\"up\" size=\"1\" default-x=\"110.6\" default-y=\"110.6\" relative-x=\"110.6\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#D0CFCE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 30 ) );
	object.setSpaceLength( MxNumberTenths( 30 ) );
	object.setDefaultX( MxNumberTenths( 110.7 ) );
	object.setDefaultY( MxNumberTenths( 110.7 ) );
	object.setRelativeX( MxNumberTenths( 110.7 ) );
	object.setRelativeY( MxNumberTenths( 110.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<musicxmlishard type=\"up\" default-x=\"110.7\" default-y=\"110.7\" relative-x=\"110.7\" font-family=\"ABC\" font-weight=\"normal\" color=\"#D1D2D1D0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 30.1 ) );
	object.setSpaceLength( MxNumberTenths( 30.1 ) );
	object.setDefaultX( MxNumberTenths( 110.8 ) );
	object.setDefaultY( MxNumberTenths( 110.8 ) );
	object.setRelativeX( MxNumberTenths( 110.8 ) );
	object.setRelativeY( MxNumberTenths( 110.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<bishop type=\"up\" number=\"1\" dash-length=\"30.1\" default-x=\"110.8\" default-y=\"110.8\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" color=\"#D4D3D2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 30.2 ) );
	object.setSpaceLength( MxNumberTenths( 30.2 ) );
	object.setDefaultX( MxNumberTenths( 110.9 ) );
	object.setDefaultY( MxNumberTenths( 110.9 ) );
	object.setRelativeX( MxNumberTenths( 110.9 ) );
	object.setRelativeY( MxNumberTenths( 110.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<charlie type=\"up\" number=\"1\" dash-length=\"30.2\" default-x=\"110.9\" default-y=\"110.9\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" color=\"#D5D6D5D4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 30.3 ) );
	object.setSpaceLength( MxNumberTenths( 30.3 ) );
	object.setDefaultX( MxNumberTenths( 111 ) );
	object.setDefaultY( MxNumberTenths( 111 ) );
	object.setRelativeX( MxNumberTenths( 111 ) );
	object.setRelativeY( MxNumberTenths( 111 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<booksmart type=\"up\" size=\"1\" dash-length=\"30.3\" space-length=\"30.3\" default-y=\"111\" relative-y=\"111\" font-style=\"italic\" font-weight=\"bold\" color=\"#D8D7D6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 30.4 ) );
	object.setSpaceLength( MxNumberTenths( 30.4 ) );
	object.setDefaultX( MxNumberTenths( 111.1 ) );
	object.setDefaultY( MxNumberTenths( 111.1 ) );
	object.setRelativeX( MxNumberTenths( 111.1 ) );
	object.setRelativeY( MxNumberTenths( 111.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<quiet type=\"up\" size=\"1\" dash-length=\"30.4\" space-length=\"30.4\" relative-y=\"111.1\" font-style=\"normal\" color=\"#D9DAD9D8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 30.5 ) );
	object.setSpaceLength( MxNumberTenths( 30.5 ) );
	object.setDefaultX( MxNumberTenths( 111.2 ) );
	object.setDefaultY( MxNumberTenths( 111.2 ) );
	object.setRelativeX( MxNumberTenths( 111.2 ) );
	object.setRelativeY( MxNumberTenths( 111.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<musicxmlishard type=\"up\" number=\"1\" size=\"1\" space-length=\"30.5\" relative-y=\"111.2\" font-style=\"italic\" color=\"#DCDBDA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 30.6 ) );
	object.setSpaceLength( MxNumberTenths( 30.6 ) );
	object.setDefaultX( MxNumberTenths( 111.3 ) );
	object.setDefaultY( MxNumberTenths( 111.3 ) );
	object.setRelativeX( MxNumberTenths( 111.3 ) );
	object.setRelativeY( MxNumberTenths( 111.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<bishop type=\"up\" number=\"1\" space-length=\"30.6\" relative-y=\"111.3\" font-style=\"normal\" color=\"#DDDEDDDC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 30.7 ) );
	object.setSpaceLength( MxNumberTenths( 30.7 ) );
	object.setDefaultX( MxNumberTenths( 111.4 ) );
	object.setDefaultY( MxNumberTenths( 111.4 ) );
	object.setRelativeX( MxNumberTenths( 111.4 ) );
	object.setRelativeY( MxNumberTenths( 111.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<charlie type=\"up\" space-length=\"30.7\" relative-y=\"111.4\" font-style=\"italic\" color=\"#E0DFDE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 30.8 ) );
	object.setSpaceLength( MxNumberTenths( 30.8 ) );
	object.setDefaultX( MxNumberTenths( 111.5 ) );
	object.setDefaultY( MxNumberTenths( 111.5 ) );
	object.setRelativeX( MxNumberTenths( 111.5 ) );
	object.setRelativeY( MxNumberTenths( 111.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<booksmart type=\"up\" relative-y=\"111.5\" font-style=\"normal\" color=\"#E1E2E1E0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 30.9 ) );
	object.setSpaceLength( MxNumberTenths( 30.9 ) );
	object.setDefaultX( MxNumberTenths( 111.6 ) );
	object.setDefaultY( MxNumberTenths( 111.6 ) );
	object.setRelativeX( MxNumberTenths( 111.6 ) );
	object.setRelativeY( MxNumberTenths( 111.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<quiet type=\"up\" number=\"1\" size=\"1\" dash-length=\"30.9\" default-x=\"111.6\" relative-x=\"111.6\" relative-y=\"111.6\" font-style=\"italic\" font-size=\"1.1\" color=\"#E4E3E2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 31 ) );
	object.setSpaceLength( MxNumberTenths( 31 ) );
	object.setDefaultX( MxNumberTenths( 111.7 ) );
	object.setDefaultY( MxNumberTenths( 111.7 ) );
	object.setRelativeX( MxNumberTenths( 111.7 ) );
	object.setRelativeY( MxNumberTenths( 111.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	expected = "<musicxmlishard type=\"up\" number=\"1\" size=\"1\" dash-length=\"31\" default-x=\"111.7\" relative-x=\"111.7\" relative-y=\"111.7\" font-style=\"normal\" font-size=\"large\" color=\"#E5E6E5E4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 31.1 ) );
	object.setSpaceLength( MxNumberTenths( 31.1 ) );
	object.setDefaultX( MxNumberTenths( 111.8 ) );
	object.setDefaultY( MxNumberTenths( 111.8 ) );
	object.setRelativeX( MxNumberTenths( 111.8 ) );
	object.setRelativeY( MxNumberTenths( 111.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	expected = "<bishop type=\"up\" size=\"1\" dash-length=\"31.1\" default-x=\"111.8\" default-y=\"111.8\" relative-x=\"111.8\" relative-y=\"111.8\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 31.2 ) );
	object.setSpaceLength( MxNumberTenths( 31.2 ) );
	object.setDefaultX( MxNumberTenths( 111.9 ) );
	object.setDefaultY( MxNumberTenths( 111.9 ) );
	object.setRelativeX( MxNumberTenths( 111.9 ) );
	object.setRelativeY( MxNumberTenths( 111.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	expected = "<charlie type=\"up\" dash-length=\"31.2\" default-x=\"111.9\" default-y=\"111.9\" relative-x=\"111.9\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxEmptyOctaveShift )
{
	MxCxEmptyOctaveShift object( "booksmart" );
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
	object.setDashLength( MxNumberTenths( 31.3 ) );
	object.setSpaceLength( MxNumberTenths( 31.3 ) );
	object.setDefaultX( MxNumberTenths( 112 ) );
	object.setDefaultY( MxNumberTenths( 112 ) );
	object.setRelativeX( MxNumberTenths( 112 ) );
	object.setRelativeY( MxNumberTenths( 112 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	expected = "<booksmart type=\"up\"/>";
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


