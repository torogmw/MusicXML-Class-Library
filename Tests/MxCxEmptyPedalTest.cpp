/** *******************************************************
  * 
  * MxCxEmptyPedalTest.cpp
  * Created: 2014-12-03 16:31:29
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyPedal.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	std::string expected = ( MxEnumStartStopChangeContinue(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getLine().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getSign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getHalign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	std::string expected = ( MxEnumValign(  ) ).toString();
	std::string actual = object.getValign().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	std::string expected = "MxCxEmptyPedal";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	std::string expected = "pedal";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	std::string expected = "The pedal type represents piano pedal marks. The line attribute is yes if pedal lines are used. The sign attribute is yes if Ped and * signs are used. For MusicXML 2.0 compatibility, the sign attribute is yes by default if the line attribute is no, and is no by default if the line attribute is yes. The change and continue types are used when the line attribute is yes. The change type indicates a pedal lift and retake indicated with an inverted V marking. The continue type allows more precise formatting across system breaks and for more complex pedaling lines. The alignment attributes are ignored if the line attribute is yes.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxEmptyPedal )
{
	MxEnumStartStopChangeContinue value1( lexicon::enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue value2( lexicon::enums::StartStopChangeContinue::change );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyPedal object;
	object.setType( value1 );
	MxEnumStartStopChangeContinue expected = value1;
	MxEnumStartStopChangeContinue actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setLine1, MxCxEmptyPedal )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyPedal object;
	object.setLine( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getLine();
	CHECK_EQUAL( expected, actual )
	object.setLine( value2 );
	expected = value2;
	actual = object.getLine();
	CHECK_EQUAL( expected, actual )
}
TEST( setSign2, MxCxEmptyPedal )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyPedal object;
	object.setSign( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getSign();
	CHECK_EQUAL( expected, actual )
	object.setSign( value2 );
	expected = value2;
	actual = object.getSign();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX3, MxCxEmptyPedal )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyPedal object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY4, MxCxEmptyPedal )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyPedal object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX5, MxCxEmptyPedal )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyPedal object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY6, MxCxEmptyPedal )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyPedal object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily7, MxCxEmptyPedal )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyPedal object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle8, MxCxEmptyPedal )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyPedal object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize9, MxCxEmptyPedal )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyPedal object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight10, MxCxEmptyPedal )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyPedal object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor11, MxCxEmptyPedal )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyPedal object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setHalign12, MxCxEmptyPedal )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyPedal object;
	object.setHalign( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
	object.setHalign( value2 );
	expected = value2;
	actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
}
TEST( setValign13, MxCxEmptyPedal )
{
	MxEnumValign value1( lexicon::enums::Valign::baseline );
	MxEnumValign value2( lexicon::enums::Valign::bottom );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyPedal object;
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

TEST( getIsTypeRequired0, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineRequired1, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsLineRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSignRequired2, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsSignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired3, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired4, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired5, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired6, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired7, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired8, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired9, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired10, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired11, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignRequired12, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsHalignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignRequired13, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsValignRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
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
TEST( getIsLinePresent1, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsLinePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLinePresent( true );
	expected = true;
	actual = object.getIsLinePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLinePresent( false );
	expected = false;
	actual = object.getIsLinePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSignPresent2, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsSignPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSignPresent( true );
	expected = true;
	actual = object.getIsSignPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSignPresent( false );
	expected = false;
	actual = object.getIsSignPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXPresent3, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
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
TEST( getIsDefaultYPresent4, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
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
TEST( getIsRelativeXPresent5, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
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
TEST( getIsRelativeYPresent6, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
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
TEST( getIsFontFamilyPresent7, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
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
TEST( getIsFontStylePresent8, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
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
TEST( getIsFontSizePresent9, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
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
TEST( getIsFontWeightPresent10, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
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
TEST( getIsColorPresent11, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
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
TEST( getIsHalignPresent12, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
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
TEST( getIsValignPresent13, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
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

TEST( getIsTypeDefaultDefined, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineDefaultDefined, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsLineDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSignDefaultDefined, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsSignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignDefaultDefined, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsHalignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignDefaultDefined, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	bool expected = false;
	bool actual = object.getIsValignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	MxEnumStartStopChangeContinue expected;
	MxEnumStartStopChangeContinue actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineDefaultValue, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getLineDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSignDefaultValue, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getSignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getHalignDefaultValue, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getHalignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValignDefaultValue, MxCxEmptyPedal )
{
	MxCxEmptyPedal object;
	MxEnumValign expected;
	MxEnumValign actual = object.getValignDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 112.1 ) );
	object.setDefaultY( MxNumberTenths( 112.1 ) );
	object.setRelativeX( MxNumberTenths( 112.1 ) );
	object.setRelativeY( MxNumberTenths( 112.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
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
	expected = "<booksmart type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"112.1\" default-y=\"112.1\" relative-x=\"112.1\" relative-y=\"112.1\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#EDEEEDEC\" halign=\"left\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
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
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 112.2 ) );
	object.setDefaultY( MxNumberTenths( 112.2 ) );
	object.setRelativeX( MxNumberTenths( 112.2 ) );
	object.setRelativeY( MxNumberTenths( 112.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<quiet type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"112.2\" default-y=\"112.2\" relative-x=\"112.2\" relative-y=\"112.2\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F0EFEE\" halign=\"center\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
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
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 112.3 ) );
	object.setDefaultY( MxNumberTenths( 112.3 ) );
	object.setRelativeX( MxNumberTenths( 112.3 ) );
	object.setRelativeY( MxNumberTenths( 112.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<musicxmlishard type=\"start\" sign=\"yes\" default-x=\"112.3\" default-y=\"112.3\" relative-x=\"112.3\" relative-y=\"112.3\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#F1F2F1F0\" halign=\"right\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
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
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 112.4 ) );
	object.setDefaultY( MxNumberTenths( 112.4 ) );
	object.setRelativeX( MxNumberTenths( 112.4 ) );
	object.setRelativeY( MxNumberTenths( 112.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<bishop type=\"start\" default-x=\"112.4\" default-y=\"112.4\" relative-x=\"112.4\" relative-y=\"112.4\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F4F3F2\" halign=\"left\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
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
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 112.5 ) );
	object.setDefaultY( MxNumberTenths( 112.5 ) );
	object.setRelativeX( MxNumberTenths( 112.5 ) );
	object.setRelativeY( MxNumberTenths( 112.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<charlie type=\"start\" line=\"yes\" default-y=\"112.5\" relative-x=\"112.5\" relative-y=\"112.5\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#F5F6F5F4\" halign=\"center\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
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
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 112.6 ) );
	object.setDefaultY( MxNumberTenths( 112.6 ) );
	object.setRelativeX( MxNumberTenths( 112.6 ) );
	object.setRelativeY( MxNumberTenths( 112.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<booksmart type=\"start\" line=\"yes\" relative-x=\"112.6\" relative-y=\"112.6\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F8F7F6\" halign=\"right\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
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
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 112.7 ) );
	object.setDefaultY( MxNumberTenths( 112.7 ) );
	object.setRelativeX( MxNumberTenths( 112.7 ) );
	object.setRelativeY( MxNumberTenths( 112.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<quiet type=\"start\" sign=\"yes\" relative-y=\"112.7\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#F9FAF9F8\" halign=\"left\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 112.8 ) );
	object.setDefaultY( MxNumberTenths( 112.8 ) );
	object.setRelativeX( MxNumberTenths( 112.8 ) );
	object.setRelativeY( MxNumberTenths( 112.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<musicxmlishard type=\"start\" sign=\"yes\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#FCFBFA\" halign=\"center\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 112.9 ) );
	object.setDefaultY( MxNumberTenths( 112.9 ) );
	object.setRelativeX( MxNumberTenths( 112.9 ) );
	object.setRelativeY( MxNumberTenths( 112.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<bishop type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"112.9\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#FDFEFDFC\" halign=\"right\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 113 ) );
	object.setDefaultY( MxNumberTenths( 113 ) );
	object.setRelativeX( MxNumberTenths( 113 ) );
	object.setRelativeY( MxNumberTenths( 113 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<charlie type=\"start\" line=\"yes\" default-x=\"113\" font-size=\"1.1\" font-weight=\"bold\" color=\"#00FFFE\" halign=\"left\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 113.1 ) );
	object.setDefaultY( MxNumberTenths( 113.1 ) );
	object.setRelativeX( MxNumberTenths( 113.1 ) );
	object.setRelativeY( MxNumberTenths( 113.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<booksmart type=\"start\" default-x=\"113.1\" default-y=\"113.1\" font-weight=\"normal\" color=\"#01020100\" halign=\"center\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 113.2 ) );
	object.setDefaultY( MxNumberTenths( 113.2 ) );
	object.setRelativeX( MxNumberTenths( 113.2 ) );
	object.setRelativeY( MxNumberTenths( 113.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#040302" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<quiet type=\"start\" default-x=\"113.2\" default-y=\"113.2\" color=\"#040302\" halign=\"right\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 113.3 ) );
	object.setDefaultY( MxNumberTenths( 113.3 ) );
	object.setRelativeX( MxNumberTenths( 113.3 ) );
	object.setRelativeY( MxNumberTenths( 113.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<musicxmlishard type=\"start\" line=\"yes\" sign=\"yes\" default-y=\"113.3\" relative-x=\"113.3\" halign=\"left\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 113.4 ) );
	object.setDefaultY( MxNumberTenths( 113.4 ) );
	object.setRelativeX( MxNumberTenths( 113.4 ) );
	object.setRelativeY( MxNumberTenths( 113.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#080706" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<bishop type=\"start\" line=\"yes\" sign=\"yes\" default-y=\"113.4\" relative-x=\"113.4\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 113.5 ) );
	object.setDefaultY( MxNumberTenths( 113.5 ) );
	object.setRelativeX( MxNumberTenths( 113.5 ) );
	object.setRelativeY( MxNumberTenths( 113.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<charlie type=\"start\" sign=\"yes\" default-y=\"113.5\" relative-x=\"113.5\" relative-y=\"113.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 113.6 ) );
	object.setDefaultY( MxNumberTenths( 113.6 ) );
	object.setRelativeX( MxNumberTenths( 113.6 ) );
	object.setRelativeY( MxNumberTenths( 113.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<booksmart type=\"start\" relative-x=\"113.6\" relative-y=\"113.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 113.7 ) );
	object.setDefaultY( MxNumberTenths( 113.7 ) );
	object.setRelativeX( MxNumberTenths( 113.7 ) );
	object.setRelativeY( MxNumberTenths( 113.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<quiet type=\"start\" line=\"yes\" default-x=\"113.7\" relative-x=\"113.7\" relative-y=\"113.7\" font-family=\"ABC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 113.8 ) );
	object.setDefaultY( MxNumberTenths( 113.8 ) );
	object.setRelativeX( MxNumberTenths( 113.8 ) );
	object.setRelativeY( MxNumberTenths( 113.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<musicxmlishard type=\"start\" line=\"yes\" default-x=\"113.8\" relative-x=\"113.8\" relative-y=\"113.8\" font-family=\"DEF\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 113.9 ) );
	object.setDefaultY( MxNumberTenths( 113.9 ) );
	object.setRelativeX( MxNumberTenths( 113.9 ) );
	object.setRelativeY( MxNumberTenths( 113.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<bishop type=\"start\" sign=\"yes\" default-x=\"113.9\" relative-y=\"113.9\" font-family=\"XYZ\" font-style=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 114 ) );
	object.setDefaultY( MxNumberTenths( 114 ) );
	object.setRelativeX( MxNumberTenths( 114 ) );
	object.setRelativeY( MxNumberTenths( 114 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#141312" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<charlie type=\"start\" sign=\"yes\" default-x=\"114\" relative-y=\"114\" font-family=\"ABC\" font-style=\"italic\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 114.1 ) );
	object.setDefaultY( MxNumberTenths( 114.1 ) );
	object.setRelativeX( MxNumberTenths( 114.1 ) );
	object.setRelativeY( MxNumberTenths( 114.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<booksmart type=\"start\" line=\"yes\" sign=\"yes\" default-y=\"114.1\" relative-y=\"114.1\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 114.2 ) );
	object.setDefaultY( MxNumberTenths( 114.2 ) );
	object.setRelativeX( MxNumberTenths( 114.2 ) );
	object.setRelativeY( MxNumberTenths( 114.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<quiet type=\"start\" line=\"yes\" default-y=\"114.2\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 114.3 ) );
	object.setDefaultY( MxNumberTenths( 114.3 ) );
	object.setRelativeX( MxNumberTenths( 114.3 ) );
	object.setRelativeY( MxNumberTenths( 114.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<musicxmlishard type=\"start\" default-y=\"114.3\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 114.4 ) );
	object.setDefaultY( MxNumberTenths( 114.4 ) );
	object.setRelativeX( MxNumberTenths( 114.4 ) );
	object.setRelativeY( MxNumberTenths( 114.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<bishop type=\"start\" default-y=\"114.4\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 114.5 ) );
	object.setDefaultY( MxNumberTenths( 114.5 ) );
	object.setRelativeX( MxNumberTenths( 114.5 ) );
	object.setRelativeY( MxNumberTenths( 114.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<charlie type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"114.5\" default-y=\"114.5\" relative-x=\"114.5\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#1D1E1D1C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 114.6 ) );
	object.setDefaultY( MxNumberTenths( 114.6 ) );
	object.setRelativeX( MxNumberTenths( 114.6 ) );
	object.setRelativeY( MxNumberTenths( 114.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<booksmart type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"114.6\" relative-x=\"114.6\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#201F1E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 114.7 ) );
	object.setDefaultY( MxNumberTenths( 114.7 ) );
	object.setRelativeX( MxNumberTenths( 114.7 ) );
	object.setRelativeY( MxNumberTenths( 114.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<quiet type=\"start\" sign=\"yes\" default-x=\"114.7\" relative-x=\"114.7\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#21222120\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
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
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 114.8 ) );
	object.setDefaultY( MxNumberTenths( 114.8 ) );
	object.setRelativeX( MxNumberTenths( 114.8 ) );
	object.setRelativeY( MxNumberTenths( 114.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#242322" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"114.8\" relative-x=\"114.8\" font-size=\"1.1\" font-weight=\"bold\" color=\"#242322\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 114.9 ) );
	object.setDefaultY( MxNumberTenths( 114.9 ) );
	object.setRelativeX( MxNumberTenths( 114.9 ) );
	object.setRelativeY( MxNumberTenths( 114.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<bishop type=\"start\" line=\"yes\" relative-x=\"114.9\" relative-y=\"114.9\" font-size=\"large\" font-weight=\"normal\" color=\"#25262524\" halign=\"center\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 115 ) );
	object.setDefaultY( MxNumberTenths( 115 ) );
	object.setRelativeX( MxNumberTenths( 115 ) );
	object.setRelativeY( MxNumberTenths( 115 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#282726" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<charlie type=\"start\" line=\"yes\" relative-x=\"115\" relative-y=\"115\" font-size=\"1.1\" font-weight=\"bold\" color=\"#282726\" halign=\"right\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 115.1 ) );
	object.setDefaultY( MxNumberTenths( 115.1 ) );
	object.setRelativeX( MxNumberTenths( 115.1 ) );
	object.setRelativeY( MxNumberTenths( 115.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<booksmart type=\"start\" sign=\"yes\" default-y=\"115.1\" relative-y=\"115.1\" font-weight=\"normal\" color=\"#292A2928\" halign=\"left\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 115.2 ) );
	object.setDefaultY( MxNumberTenths( 115.2 ) );
	object.setRelativeX( MxNumberTenths( 115.2 ) );
	object.setRelativeY( MxNumberTenths( 115.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<quiet type=\"start\" sign=\"yes\" default-y=\"115.2\" relative-y=\"115.2\" font-weight=\"bold\" color=\"#2C2B2A\" halign=\"center\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 115.3 ) );
	object.setDefaultY( MxNumberTenths( 115.3 ) );
	object.setRelativeX( MxNumberTenths( 115.3 ) );
	object.setRelativeY( MxNumberTenths( 115.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<musicxmlishard type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"115.3\" default-y=\"115.3\" relative-y=\"115.3\" font-family=\"DEF\" font-weight=\"normal\" color=\"#2D2E2D2C\" halign=\"right\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 115.4 ) );
	object.setDefaultY( MxNumberTenths( 115.4 ) );
	object.setRelativeX( MxNumberTenths( 115.4 ) );
	object.setRelativeY( MxNumberTenths( 115.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<bishop type=\"start\" line=\"yes\" default-x=\"115.4\" default-y=\"115.4\" relative-y=\"115.4\" font-family=\"XYZ\" color=\"#302F2E\" halign=\"left\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 115.5 ) );
	object.setDefaultY( MxNumberTenths( 115.5 ) );
	object.setRelativeX( MxNumberTenths( 115.5 ) );
	object.setRelativeY( MxNumberTenths( 115.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<charlie type=\"start\" default-x=\"115.5\" default-y=\"115.5\" relative-y=\"115.5\" font-family=\"ABC\" color=\"#31323130\" halign=\"center\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 115.6 ) );
	object.setDefaultY( MxNumberTenths( 115.6 ) );
	object.setRelativeX( MxNumberTenths( 115.6 ) );
	object.setRelativeY( MxNumberTenths( 115.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<booksmart type=\"start\" default-x=\"115.6\" font-family=\"DEF\" color=\"#343332\" halign=\"right\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 115.7 ) );
	object.setDefaultY( MxNumberTenths( 115.7 ) );
	object.setRelativeX( MxNumberTenths( 115.7 ) );
	object.setRelativeY( MxNumberTenths( 115.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<quiet type=\"start\" line=\"yes\" sign=\"yes\" relative-x=\"115.7\" font-family=\"XYZ\" font-style=\"normal\" halign=\"left\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 115.8 ) );
	object.setDefaultY( MxNumberTenths( 115.8 ) );
	object.setRelativeX( MxNumberTenths( 115.8 ) );
	object.setRelativeY( MxNumberTenths( 115.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<musicxmlishard type=\"start\" line=\"yes\" sign=\"yes\" relative-x=\"115.8\" font-family=\"ABC\" font-style=\"italic\" halign=\"center\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 115.9 ) );
	object.setDefaultY( MxNumberTenths( 115.9 ) );
	object.setRelativeX( MxNumberTenths( 115.9 ) );
	object.setRelativeY( MxNumberTenths( 115.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<bishop type=\"start\" sign=\"yes\" relative-x=\"115.9\" font-family=\"DEF\" font-style=\"normal\" halign=\"right\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 116 ) );
	object.setDefaultY( MxNumberTenths( 116 ) );
	object.setRelativeX( MxNumberTenths( 116 ) );
	object.setRelativeY( MxNumberTenths( 116 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<charlie type=\"start\" relative-x=\"116\" font-family=\"XYZ\" font-style=\"italic\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 116.1 ) );
	object.setDefaultY( MxNumberTenths( 116.1 ) );
	object.setRelativeX( MxNumberTenths( 116.1 ) );
	object.setRelativeY( MxNumberTenths( 116.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<booksmart type=\"start\" line=\"yes\" default-x=\"116.1\" default-y=\"116.1\" relative-x=\"116.1\" font-style=\"normal\" font-size=\"large\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 116.2 ) );
	object.setDefaultY( MxNumberTenths( 116.2 ) );
	object.setRelativeX( MxNumberTenths( 116.2 ) );
	object.setRelativeY( MxNumberTenths( 116.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<quiet type=\"start\" line=\"yes\" default-x=\"116.2\" default-y=\"116.2\" relative-x=\"116.2\" font-style=\"italic\" font-size=\"1.1\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 116.3 ) );
	object.setDefaultY( MxNumberTenths( 116.3 ) );
	object.setRelativeX( MxNumberTenths( 116.3 ) );
	object.setRelativeY( MxNumberTenths( 116.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<musicxmlishard type=\"start\" sign=\"yes\" default-x=\"116.3\" default-y=\"116.3\" relative-y=\"116.3\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 116.4 ) );
	object.setDefaultY( MxNumberTenths( 116.4 ) );
	object.setRelativeX( MxNumberTenths( 116.4 ) );
	object.setRelativeY( MxNumberTenths( 116.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<bishop type=\"start\" sign=\"yes\" default-x=\"116.4\" default-y=\"116.4\" relative-y=\"116.4\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
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
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 116.5 ) );
	object.setDefaultY( MxNumberTenths( 116.5 ) );
	object.setRelativeX( MxNumberTenths( 116.5 ) );
	object.setRelativeY( MxNumberTenths( 116.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<charlie type=\"start\" line=\"yes\" sign=\"yes\" default-y=\"116.5\" relative-y=\"116.5\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 116.6 ) );
	object.setDefaultY( MxNumberTenths( 116.6 ) );
	object.setRelativeX( MxNumberTenths( 116.6 ) );
	object.setRelativeY( MxNumberTenths( 116.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<booksmart type=\"start\" line=\"yes\" relative-y=\"116.6\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 116.7 ) );
	object.setDefaultY( MxNumberTenths( 116.7 ) );
	object.setRelativeX( MxNumberTenths( 116.7 ) );
	object.setRelativeY( MxNumberTenths( 116.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<quiet type=\"start\" relative-y=\"116.7\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 116.8 ) );
	object.setDefaultY( MxNumberTenths( 116.8 ) );
	object.setRelativeX( MxNumberTenths( 116.8 ) );
	object.setRelativeY( MxNumberTenths( 116.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<musicxmlishard type=\"start\" relative-y=\"116.8\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 116.9 ) );
	object.setDefaultY( MxNumberTenths( 116.9 ) );
	object.setRelativeX( MxNumberTenths( 116.9 ) );
	object.setRelativeY( MxNumberTenths( 116.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<bishop type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"116.9\" relative-x=\"116.9\" relative-y=\"116.9\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" color=\"#4D4E4D4C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 117 ) );
	object.setDefaultY( MxNumberTenths( 117 ) );
	object.setRelativeX( MxNumberTenths( 117 ) );
	object.setRelativeY( MxNumberTenths( 117 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<charlie type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"117\" relative-x=\"117\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" color=\"#504F4E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 117.1 ) );
	object.setDefaultY( MxNumberTenths( 117.1 ) );
	object.setRelativeX( MxNumberTenths( 117.1 ) );
	object.setRelativeY( MxNumberTenths( 117.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<booksmart type=\"start\" sign=\"yes\" default-x=\"117.1\" default-y=\"117.1\" relative-x=\"117.1\" font-family=\"DEF\" font-weight=\"normal\" color=\"#51525150\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 117.2 ) );
	object.setDefaultY( MxNumberTenths( 117.2 ) );
	object.setRelativeX( MxNumberTenths( 117.2 ) );
	object.setRelativeY( MxNumberTenths( 117.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#545352" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<quiet type=\"start\" default-x=\"117.2\" default-y=\"117.2\" relative-x=\"117.2\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#545352\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 117.3 ) );
	object.setDefaultY( MxNumberTenths( 117.3 ) );
	object.setRelativeX( MxNumberTenths( 117.3 ) );
	object.setRelativeY( MxNumberTenths( 117.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<musicxmlishard type=\"start\" line=\"yes\" default-y=\"117.3\" relative-x=\"117.3\" font-family=\"ABC\" font-weight=\"normal\" color=\"#55565554\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 117.4 ) );
	object.setDefaultY( MxNumberTenths( 117.4 ) );
	object.setRelativeX( MxNumberTenths( 117.4 ) );
	object.setRelativeY( MxNumberTenths( 117.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#585756" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<bishop type=\"start\" line=\"yes\" default-y=\"117.4\" relative-x=\"117.4\" font-family=\"DEF\" font-weight=\"bold\" color=\"#585756\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 117.5 ) );
	object.setDefaultY( MxNumberTenths( 117.5 ) );
	object.setRelativeX( MxNumberTenths( 117.5 ) );
	object.setRelativeY( MxNumberTenths( 117.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<charlie type=\"start\" sign=\"yes\" default-y=\"117.5\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" color=\"#595A5958\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 117.6 ) );
	object.setDefaultY( MxNumberTenths( 117.6 ) );
	object.setRelativeX( MxNumberTenths( 117.6 ) );
	object.setRelativeY( MxNumberTenths( 117.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<booksmart type=\"start\" sign=\"yes\" font-family=\"ABC\" font-style=\"italic\" color=\"#5C5B5A\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 117.7 ) );
	object.setDefaultY( MxNumberTenths( 117.7 ) );
	object.setRelativeX( MxNumberTenths( 117.7 ) );
	object.setRelativeY( MxNumberTenths( 117.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<quiet type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"117.7\" relative-y=\"117.7\" font-style=\"normal\" color=\"#5D5E5D5C\" halign=\"right\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 117.8 ) );
	object.setDefaultY( MxNumberTenths( 117.8 ) );
	object.setRelativeX( MxNumberTenths( 117.8 ) );
	object.setRelativeY( MxNumberTenths( 117.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<musicxmlishard type=\"start\" line=\"yes\" default-x=\"117.8\" relative-y=\"117.8\" font-style=\"italic\" color=\"#605F5E\" halign=\"left\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 117.9 ) );
	object.setDefaultY( MxNumberTenths( 117.9 ) );
	object.setRelativeX( MxNumberTenths( 117.9 ) );
	object.setRelativeY( MxNumberTenths( 117.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<bishop type=\"start\" default-x=\"117.9\" relative-y=\"117.9\" font-style=\"normal\" color=\"#61626160\" halign=\"center\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 118 ) );
	object.setDefaultY( MxNumberTenths( 118 ) );
	object.setRelativeX( MxNumberTenths( 118 ) );
	object.setRelativeY( MxNumberTenths( 118 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#646362" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<charlie type=\"start\" default-x=\"118\" relative-y=\"118\" font-style=\"italic\" color=\"#646362\" halign=\"right\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 118.1 ) );
	object.setDefaultY( MxNumberTenths( 118.1 ) );
	object.setRelativeX( MxNumberTenths( 118.1 ) );
	object.setRelativeY( MxNumberTenths( 118.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<booksmart type=\"start\" line=\"yes\" sign=\"yes\" default-y=\"118.1\" relative-x=\"118.1\" relative-y=\"118.1\" font-style=\"normal\" font-size=\"large\" halign=\"left\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 118.2 ) );
	object.setDefaultY( MxNumberTenths( 118.2 ) );
	object.setRelativeX( MxNumberTenths( 118.2 ) );
	object.setRelativeY( MxNumberTenths( 118.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#686766" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<quiet type=\"start\" line=\"yes\" sign=\"yes\" default-y=\"118.2\" relative-x=\"118.2\" relative-y=\"118.2\" font-style=\"italic\" font-size=\"1.1\" halign=\"center\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 118.3 ) );
	object.setDefaultY( MxNumberTenths( 118.3 ) );
	object.setRelativeX( MxNumberTenths( 118.3 ) );
	object.setRelativeY( MxNumberTenths( 118.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<musicxmlishard type=\"start\" sign=\"yes\" default-y=\"118.3\" relative-x=\"118.3\" relative-y=\"118.3\" font-style=\"normal\" font-size=\"large\" halign=\"right\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 118.4 ) );
	object.setDefaultY( MxNumberTenths( 118.4 ) );
	object.setRelativeX( MxNumberTenths( 118.4 ) );
	object.setRelativeY( MxNumberTenths( 118.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<bishop type=\"start\" default-y=\"118.4\" relative-x=\"118.4\" font-size=\"1.1\" halign=\"left\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 118.5 ) );
	object.setDefaultY( MxNumberTenths( 118.5 ) );
	object.setRelativeX( MxNumberTenths( 118.5 ) );
	object.setRelativeY( MxNumberTenths( 118.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<charlie type=\"start\" line=\"yes\" default-x=\"118.5\" default-y=\"118.5\" relative-x=\"118.5\" font-family=\"ABC\" font-size=\"large\" halign=\"center\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
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
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 118.6 ) );
	object.setDefaultY( MxNumberTenths( 118.6 ) );
	object.setRelativeX( MxNumberTenths( 118.6 ) );
	object.setRelativeY( MxNumberTenths( 118.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<booksmart type=\"start\" line=\"yes\" default-x=\"118.6\" relative-x=\"118.6\" font-family=\"DEF\" font-size=\"1.1\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
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
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 118.7 ) );
	object.setDefaultY( MxNumberTenths( 118.7 ) );
	object.setRelativeX( MxNumberTenths( 118.7 ) );
	object.setRelativeY( MxNumberTenths( 118.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<quiet type=\"start\" sign=\"yes\" default-x=\"118.7\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
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
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 118.8 ) );
	object.setDefaultY( MxNumberTenths( 118.8 ) );
	object.setRelativeX( MxNumberTenths( 118.8 ) );
	object.setRelativeY( MxNumberTenths( 118.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#747372" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<musicxmlishard type=\"start\" sign=\"yes\" default-x=\"118.8\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
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
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 118.9 ) );
	object.setDefaultY( MxNumberTenths( 118.9 ) );
	object.setRelativeX( MxNumberTenths( 118.9 ) );
	object.setRelativeY( MxNumberTenths( 118.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<bishop type=\"start\" line=\"yes\" sign=\"yes\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
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
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 119 ) );
	object.setDefaultY( MxNumberTenths( 119 ) );
	object.setRelativeX( MxNumberTenths( 119 ) );
	object.setRelativeY( MxNumberTenths( 119 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#787776" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<charlie type=\"start\" line=\"yes\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 119.1 ) );
	object.setDefaultY( MxNumberTenths( 119.1 ) );
	object.setRelativeX( MxNumberTenths( 119.1 ) );
	object.setRelativeY( MxNumberTenths( 119.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<booksmart type=\"start\" default-y=\"119.1\" relative-y=\"119.1\" font-family=\"ABC\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 119.2 ) );
	object.setDefaultY( MxNumberTenths( 119.2 ) );
	object.setRelativeX( MxNumberTenths( 119.2 ) );
	object.setRelativeY( MxNumberTenths( 119.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<quiet type=\"start\" default-y=\"119.2\" relative-y=\"119.2\" font-family=\"DEF\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
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
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 119.3 ) );
	object.setDefaultY( MxNumberTenths( 119.3 ) );
	object.setRelativeX( MxNumberTenths( 119.3 ) );
	object.setRelativeY( MxNumberTenths( 119.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<musicxmlishard type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"119.3\" default-y=\"119.3\" relative-x=\"119.3\" relative-y=\"119.3\" font-style=\"normal\" font-weight=\"normal\" color=\"#7D7E7D7C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
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
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 119.4 ) );
	object.setDefaultY( MxNumberTenths( 119.4 ) );
	object.setRelativeX( MxNumberTenths( 119.4 ) );
	object.setRelativeY( MxNumberTenths( 119.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<bishop type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"119.4\" default-y=\"119.4\" relative-x=\"119.4\" relative-y=\"119.4\" font-style=\"italic\" font-weight=\"bold\" color=\"#807F7E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
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
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 119.5 ) );
	object.setDefaultY( MxNumberTenths( 119.5 ) );
	object.setRelativeX( MxNumberTenths( 119.5 ) );
	object.setRelativeY( MxNumberTenths( 119.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<charlie type=\"start\" sign=\"yes\" default-x=\"119.5\" default-y=\"119.5\" relative-x=\"119.5\" relative-y=\"119.5\" font-style=\"normal\" font-weight=\"normal\" color=\"#81828180\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 119.6 ) );
	object.setDefaultY( MxNumberTenths( 119.6 ) );
	object.setRelativeX( MxNumberTenths( 119.6 ) );
	object.setRelativeY( MxNumberTenths( 119.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<booksmart type=\"start\" default-x=\"119.6\" relative-x=\"119.6\" relative-y=\"119.6\" font-style=\"italic\" font-weight=\"bold\" color=\"#848382\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 119.7 ) );
	object.setDefaultY( MxNumberTenths( 119.7 ) );
	object.setRelativeX( MxNumberTenths( 119.7 ) );
	object.setRelativeY( MxNumberTenths( 119.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<quiet type=\"start\" line=\"yes\" relative-x=\"119.7\" relative-y=\"119.7\" font-style=\"normal\" font-weight=\"normal\" color=\"#85868584\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 119.8 ) );
	object.setDefaultY( MxNumberTenths( 119.8 ) );
	object.setRelativeX( MxNumberTenths( 119.8 ) );
	object.setRelativeY( MxNumberTenths( 119.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<musicxmlishard type=\"start\" line=\"yes\" relative-x=\"119.8\" font-style=\"italic\" color=\"#888786\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 119.9 ) );
	object.setDefaultY( MxNumberTenths( 119.9 ) );
	object.setRelativeX( MxNumberTenths( 119.9 ) );
	object.setRelativeY( MxNumberTenths( 119.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<bishop type=\"start\" sign=\"yes\" font-style=\"normal\" color=\"#898A8988\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 120 ) );
	object.setDefaultY( MxNumberTenths( 120 ) );
	object.setRelativeX( MxNumberTenths( 120 ) );
	object.setRelativeY( MxNumberTenths( 120 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<charlie type=\"start\" sign=\"yes\" font-style=\"italic\" color=\"#8C8B8A\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 120.1 ) );
	object.setDefaultY( MxNumberTenths( 120.1 ) );
	object.setRelativeX( MxNumberTenths( 120.1 ) );
	object.setRelativeY( MxNumberTenths( 120.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<booksmart type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"120.1\" default-y=\"120.1\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#8D8E8D8C\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 120.2 ) );
	object.setDefaultY( MxNumberTenths( 120.2 ) );
	object.setRelativeX( MxNumberTenths( 120.2 ) );
	object.setRelativeY( MxNumberTenths( 120.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<quiet type=\"start\" line=\"yes\" default-x=\"120.2\" default-y=\"120.2\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#908F8E\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 120.3 ) );
	object.setDefaultY( MxNumberTenths( 120.3 ) );
	object.setRelativeX( MxNumberTenths( 120.3 ) );
	object.setRelativeY( MxNumberTenths( 120.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"120.3\" default-y=\"120.3\" font-family=\"ABC\" font-size=\"large\" color=\"#91929190\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 120.4 ) );
	object.setDefaultY( MxNumberTenths( 120.4 ) );
	object.setRelativeX( MxNumberTenths( 120.4 ) );
	object.setRelativeY( MxNumberTenths( 120.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#949392" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<bishop type=\"start\" default-x=\"120.4\" default-y=\"120.4\" font-family=\"DEF\" font-size=\"1.1\" color=\"#949392\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 120.5 ) );
	object.setDefaultY( MxNumberTenths( 120.5 ) );
	object.setRelativeX( MxNumberTenths( 120.5 ) );
	object.setRelativeY( MxNumberTenths( 120.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<charlie type=\"start\" line=\"yes\" sign=\"yes\" default-y=\"120.5\" relative-x=\"120.5\" relative-y=\"120.5\" font-family=\"XYZ\" font-size=\"large\" halign=\"left\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 120.6 ) );
	object.setDefaultY( MxNumberTenths( 120.6 ) );
	object.setRelativeX( MxNumberTenths( 120.6 ) );
	object.setRelativeY( MxNumberTenths( 120.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#989796" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<booksmart type=\"start\" line=\"yes\" sign=\"yes\" relative-x=\"120.6\" relative-y=\"120.6\" font-family=\"ABC\" font-size=\"1.1\" halign=\"center\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 120.7 ) );
	object.setDefaultY( MxNumberTenths( 120.7 ) );
	object.setRelativeX( MxNumberTenths( 120.7 ) );
	object.setRelativeY( MxNumberTenths( 120.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<quiet type=\"start\" sign=\"yes\" relative-x=\"120.7\" relative-y=\"120.7\" font-family=\"DEF\" font-size=\"large\" halign=\"right\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 120.8 ) );
	object.setDefaultY( MxNumberTenths( 120.8 ) );
	object.setRelativeX( MxNumberTenths( 120.8 ) );
	object.setRelativeY( MxNumberTenths( 120.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<musicxmlishard type=\"start\" relative-x=\"120.8\" relative-y=\"120.8\" font-family=\"XYZ\" font-size=\"1.1\" halign=\"left\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 120.9 ) );
	object.setDefaultY( MxNumberTenths( 120.9 ) );
	object.setRelativeX( MxNumberTenths( 120.9 ) );
	object.setRelativeY( MxNumberTenths( 120.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<bishop type=\"start\" line=\"yes\" default-x=\"120.9\" relative-x=\"120.9\" relative-y=\"120.9\" font-size=\"large\" font-weight=\"normal\" halign=\"center\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 121 ) );
	object.setDefaultY( MxNumberTenths( 121 ) );
	object.setRelativeX( MxNumberTenths( 121 ) );
	object.setRelativeY( MxNumberTenths( 121 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<charlie type=\"start\" line=\"yes\" default-x=\"121\" relative-x=\"121\" relative-y=\"121\" font-size=\"1.1\" font-weight=\"bold\" halign=\"right\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 121.1 ) );
	object.setDefaultY( MxNumberTenths( 121.1 ) );
	object.setRelativeX( MxNumberTenths( 121.1 ) );
	object.setRelativeY( MxNumberTenths( 121.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<booksmart type=\"start\" sign=\"yes\" default-x=\"121.1\" default-y=\"121.1\" relative-y=\"121.1\" font-style=\"normal\" font-weight=\"normal\" halign=\"left\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 121.2 ) );
	object.setDefaultY( MxNumberTenths( 121.2 ) );
	object.setRelativeX( MxNumberTenths( 121.2 ) );
	object.setRelativeY( MxNumberTenths( 121.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<quiet type=\"start\" sign=\"yes\" default-x=\"121.2\" default-y=\"121.2\" font-style=\"italic\" font-weight=\"bold\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 121.3 ) );
	object.setDefaultY( MxNumberTenths( 121.3 ) );
	object.setRelativeX( MxNumberTenths( 121.3 ) );
	object.setRelativeY( MxNumberTenths( 121.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<musicxmlishard type=\"start\" line=\"yes\" sign=\"yes\" default-y=\"121.3\" font-style=\"normal\" font-weight=\"normal\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 121.4 ) );
	object.setDefaultY( MxNumberTenths( 121.4 ) );
	object.setRelativeX( MxNumberTenths( 121.4 ) );
	object.setRelativeY( MxNumberTenths( 121.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<bishop type=\"start\" line=\"yes\" default-y=\"121.4\" font-style=\"italic\" font-weight=\"bold\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 121.5 ) );
	object.setDefaultY( MxNumberTenths( 121.5 ) );
	object.setRelativeX( MxNumberTenths( 121.5 ) );
	object.setRelativeY( MxNumberTenths( 121.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<charlie type=\"start\" default-y=\"121.5\" font-style=\"normal\" font-weight=\"normal\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 121.6 ) );
	object.setDefaultY( MxNumberTenths( 121.6 ) );
	object.setRelativeX( MxNumberTenths( 121.6 ) );
	object.setRelativeY( MxNumberTenths( 121.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<booksmart type=\"start\" font-style=\"italic\" font-weight=\"bold\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 121.7 ) );
	object.setDefaultY( MxNumberTenths( 121.7 ) );
	object.setRelativeX( MxNumberTenths( 121.7 ) );
	object.setRelativeY( MxNumberTenths( 121.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<quiet type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"121.7\" relative-x=\"121.7\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" color=\"#ADAEADAC\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( true );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 121.8 ) );
	object.setDefaultY( MxNumberTenths( 121.8 ) );
	object.setRelativeX( MxNumberTenths( 121.8 ) );
	object.setRelativeY( MxNumberTenths( 121.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<musicxmlishard type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"121.8\" relative-x=\"121.8\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" color=\"#B0AFAE\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 121.9 ) );
	object.setDefaultY( MxNumberTenths( 121.9 ) );
	object.setRelativeX( MxNumberTenths( 121.9 ) );
	object.setRelativeY( MxNumberTenths( 121.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<bishop type=\"start\" sign=\"yes\" default-x=\"121.9\" relative-x=\"121.9\" relative-y=\"121.9\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" color=\"#B1B2B1B0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 122 ) );
	object.setDefaultY( MxNumberTenths( 122 ) );
	object.setRelativeX( MxNumberTenths( 122 ) );
	object.setRelativeY( MxNumberTenths( 122 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<charlie type=\"start\" default-x=\"122\" relative-x=\"122\" relative-y=\"122\" font-family=\"XYZ\" color=\"#B4B3B2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxEmptyPedal )
{
	MxCxEmptyPedal object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsLinePresent( false );
	object.setIsSignPresent( false );
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
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 122.1 ) );
	object.setDefaultY( MxNumberTenths( 122.1 ) );
	object.setRelativeX( MxNumberTenths( 122.1 ) );
	object.setRelativeY( MxNumberTenths( 122.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<booksmart type=\"start\"/>";
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


