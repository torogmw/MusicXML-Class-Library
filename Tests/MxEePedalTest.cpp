/** *******************************************************
  * 
  * MxEePedalTest.cpp
  * Created: 2014-12-05 16:47:04
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEePedal.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEePedal )
{
	MxEePedal object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEePedal )
{
	MxEePedal object;
	std::string expected = ( MxEnumStartStopChangeContinue(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEePedal )
{
	MxEePedal object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getLine().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEePedal )
{
	MxEePedal object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getSign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEePedal )
{
	MxEePedal object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEePedal )
{
	MxEePedal object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEePedal )
{
	MxEePedal object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEePedal )
{
	MxEePedal object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEePedal )
{
	MxEePedal object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEePedal )
{
	MxEePedal object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEePedal )
{
	MxEePedal object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxEePedal )
{
	MxEePedal object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxEePedal )
{
	MxEePedal object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxEePedal )
{
	MxEePedal object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getHalign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxEePedal )
{
	MxEePedal object;
	std::string expected = ( MxEnumValign(  ) ).toString();
	std::string actual = object.getValign().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEePedal )
{
	MxEePedal object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEePedal )
{
	MxEePedal object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEePedal )
{
	MxEePedal object;
	std::string expected = "MxEePedal";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEePedal )
{
	MxEePedal object;
	std::string expected = "pedal";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEePedal )
{
	MxEePedal object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxEePedal )
{
	MxEnumStartStopChangeContinue value1( lexicon::enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue value2( lexicon::enums::StartStopChangeContinue::change );
	CHECK( ( value1 != value2 ) )
	MxEePedal object;
	object.setType( value1 );
	MxEnumStartStopChangeContinue expected = value1;
	MxEnumStartStopChangeContinue actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setLine1, MxEePedal )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEePedal object;
	object.setLine( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getLine();
	CHECK_EQUAL( expected, actual )
	object.setLine( value2 );
	expected = value2;
	actual = object.getLine();
	CHECK_EQUAL( expected, actual )
}
TEST( setSign2, MxEePedal )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEePedal object;
	object.setSign( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getSign();
	CHECK_EQUAL( expected, actual )
	object.setSign( value2 );
	expected = value2;
	actual = object.getSign();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX3, MxEePedal )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEePedal object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY4, MxEePedal )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEePedal object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX5, MxEePedal )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEePedal object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY6, MxEePedal )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEePedal object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily7, MxEePedal )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEePedal object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle8, MxEePedal )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEePedal object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize9, MxEePedal )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEePedal object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight10, MxEePedal )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEePedal object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor11, MxEePedal )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEePedal object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setHalign12, MxEePedal )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxEePedal object;
	object.setHalign( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
	object.setHalign( value2 );
	expected = value2;
	actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
}
TEST( setValign13, MxEePedal )
{
	MxEnumValign value1( lexicon::enums::Valign::baseline );
	MxEnumValign value2( lexicon::enums::Valign::bottom );
	CHECK( ( value1 != value2 ) )
	MxEePedal object;
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

TEST( getIsTypeRequired0, MxEePedal )
{
	MxEePedal object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineRequired1, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsLineRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSignRequired2, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsSignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired3, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired4, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired5, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired6, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired7, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired8, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired9, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired10, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired11, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignRequired12, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsHalignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignRequired13, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsValignRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxEePedal )
{
	MxEePedal object;
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
TEST( getIsLinePresent1, MxEePedal )
{
	MxEePedal object;
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
TEST( getIsSignPresent2, MxEePedal )
{
	MxEePedal object;
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
TEST( getIsDefaultXPresent3, MxEePedal )
{
	MxEePedal object;
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
TEST( getIsDefaultYPresent4, MxEePedal )
{
	MxEePedal object;
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
TEST( getIsRelativeXPresent5, MxEePedal )
{
	MxEePedal object;
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
TEST( getIsRelativeYPresent6, MxEePedal )
{
	MxEePedal object;
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
TEST( getIsFontFamilyPresent7, MxEePedal )
{
	MxEePedal object;
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
TEST( getIsFontStylePresent8, MxEePedal )
{
	MxEePedal object;
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
TEST( getIsFontSizePresent9, MxEePedal )
{
	MxEePedal object;
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
TEST( getIsFontWeightPresent10, MxEePedal )
{
	MxEePedal object;
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
TEST( getIsColorPresent11, MxEePedal )
{
	MxEePedal object;
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
TEST( getIsHalignPresent12, MxEePedal )
{
	MxEePedal object;
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
TEST( getIsValignPresent13, MxEePedal )
{
	MxEePedal object;
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

TEST( getIsTypeDefaultDefined, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineDefaultDefined, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsLineDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSignDefaultDefined, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsSignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignDefaultDefined, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsHalignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignDefaultDefined, MxEePedal )
{
	MxEePedal object;
	bool expected = false;
	bool actual = object.getIsValignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxEePedal )
{
	MxEePedal object;
	MxEnumStartStopChangeContinue expected;
	MxEnumStartStopChangeContinue actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineDefaultValue, MxEePedal )
{
	MxEePedal object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getLineDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSignDefaultValue, MxEePedal )
{
	MxEePedal object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getSignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEePedal )
{
	MxEePedal object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEePedal )
{
	MxEePedal object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEePedal )
{
	MxEePedal object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEePedal )
{
	MxEePedal object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEePedal )
{
	MxEePedal object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEePedal )
{
	MxEePedal object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEePedal )
{
	MxEePedal object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEePedal )
{
	MxEePedal object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEePedal )
{
	MxEePedal object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getHalignDefaultValue, MxEePedal )
{
	MxEePedal object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getHalignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValignDefaultValue, MxEePedal )
{
	MxEePedal object;
	MxEnumValign expected;
	MxEnumValign actual = object.getValignDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEePedal )
{
	MxEePedal object;
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStopChangeContinue( lexicon::enums::StartStopChangeContinue::start ) );
	object.setLine( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSign( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 81.9 ) );
	object.setDefaultY( MxNumberTenths( 81.9 ) );
	object.setRelativeX( MxNumberTenths( 81.9 ) );
	object.setRelativeY( MxNumberTenths( 81.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
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
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"81.9\" default-y=\"81.9\" relative-x=\"81.9\" relative-y=\"81.9\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#51525150\" halign=\"left\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 82 ) );
	object.setDefaultY( MxNumberTenths( 82 ) );
	object.setRelativeX( MxNumberTenths( 82 ) );
	object.setRelativeY( MxNumberTenths( 82 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#545352" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"82\" default-y=\"82\" relative-x=\"82\" relative-y=\"82\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#545352\" halign=\"center\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 82.1 ) );
	object.setDefaultY( MxNumberTenths( 82.1 ) );
	object.setRelativeX( MxNumberTenths( 82.1 ) );
	object.setRelativeY( MxNumberTenths( 82.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" sign=\"yes\" default-x=\"82.1\" default-y=\"82.1\" relative-x=\"82.1\" relative-y=\"82.1\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#55565554\" halign=\"right\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 82.2 ) );
	object.setDefaultY( MxNumberTenths( 82.2 ) );
	object.setRelativeX( MxNumberTenths( 82.2 ) );
	object.setRelativeY( MxNumberTenths( 82.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#585756" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" default-x=\"82.2\" default-y=\"82.2\" relative-x=\"82.2\" relative-y=\"82.2\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#585756\" halign=\"left\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 82.3 ) );
	object.setDefaultY( MxNumberTenths( 82.3 ) );
	object.setRelativeX( MxNumberTenths( 82.3 ) );
	object.setRelativeY( MxNumberTenths( 82.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" default-y=\"82.3\" relative-x=\"82.3\" relative-y=\"82.3\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#595A5958\" halign=\"center\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 82.4 ) );
	object.setDefaultY( MxNumberTenths( 82.4 ) );
	object.setRelativeX( MxNumberTenths( 82.4 ) );
	object.setRelativeY( MxNumberTenths( 82.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" relative-x=\"82.4\" relative-y=\"82.4\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#5C5B5A\" halign=\"right\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 82.5 ) );
	object.setDefaultY( MxNumberTenths( 82.5 ) );
	object.setRelativeX( MxNumberTenths( 82.5 ) );
	object.setRelativeY( MxNumberTenths( 82.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" sign=\"yes\" relative-y=\"82.5\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#5D5E5D5C\" halign=\"left\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 82.6 ) );
	object.setDefaultY( MxNumberTenths( 82.6 ) );
	object.setRelativeX( MxNumberTenths( 82.6 ) );
	object.setRelativeY( MxNumberTenths( 82.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" sign=\"yes\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#605F5E\" halign=\"center\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 82.7 ) );
	object.setDefaultY( MxNumberTenths( 82.7 ) );
	object.setRelativeX( MxNumberTenths( 82.7 ) );
	object.setRelativeY( MxNumberTenths( 82.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"82.7\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#61626160\" halign=\"right\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 82.8 ) );
	object.setDefaultY( MxNumberTenths( 82.8 ) );
	object.setRelativeX( MxNumberTenths( 82.8 ) );
	object.setRelativeY( MxNumberTenths( 82.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" default-x=\"82.8\" font-size=\"large\" font-weight=\"normal\" color=\"#646362\" halign=\"left\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 82.9 ) );
	object.setDefaultY( MxNumberTenths( 82.9 ) );
	object.setRelativeX( MxNumberTenths( 82.9 ) );
	object.setRelativeY( MxNumberTenths( 82.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" default-x=\"82.9\" default-y=\"82.9\" font-weight=\"bold\" color=\"#65666564\" halign=\"center\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 83 ) );
	object.setDefaultY( MxNumberTenths( 83 ) );
	object.setRelativeX( MxNumberTenths( 83 ) );
	object.setRelativeY( MxNumberTenths( 83 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" default-x=\"83\" default-y=\"83\" color=\"#686766\" halign=\"right\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 83.1 ) );
	object.setDefaultY( MxNumberTenths( 83.1 ) );
	object.setRelativeX( MxNumberTenths( 83.1 ) );
	object.setRelativeY( MxNumberTenths( 83.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-y=\"83.1\" relative-x=\"83.1\" halign=\"left\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 83.2 ) );
	object.setDefaultY( MxNumberTenths( 83.2 ) );
	object.setRelativeX( MxNumberTenths( 83.2 ) );
	object.setRelativeY( MxNumberTenths( 83.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-y=\"83.2\" relative-x=\"83.2\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 83.3 ) );
	object.setDefaultY( MxNumberTenths( 83.3 ) );
	object.setRelativeX( MxNumberTenths( 83.3 ) );
	object.setRelativeY( MxNumberTenths( 83.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" sign=\"yes\" default-y=\"83.3\" relative-x=\"83.3\" relative-y=\"83.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 83.4 ) );
	object.setDefaultY( MxNumberTenths( 83.4 ) );
	object.setRelativeX( MxNumberTenths( 83.4 ) );
	object.setRelativeY( MxNumberTenths( 83.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" relative-x=\"83.4\" relative-y=\"83.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 83.5 ) );
	object.setDefaultY( MxNumberTenths( 83.5 ) );
	object.setRelativeX( MxNumberTenths( 83.5 ) );
	object.setRelativeY( MxNumberTenths( 83.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" default-x=\"83.5\" relative-x=\"83.5\" relative-y=\"83.5\" font-family=\"ABC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 83.6 ) );
	object.setDefaultY( MxNumberTenths( 83.6 ) );
	object.setRelativeX( MxNumberTenths( 83.6 ) );
	object.setRelativeY( MxNumberTenths( 83.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" default-x=\"83.6\" relative-x=\"83.6\" relative-y=\"83.6\" font-family=\"DEF\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 83.7 ) );
	object.setDefaultY( MxNumberTenths( 83.7 ) );
	object.setRelativeX( MxNumberTenths( 83.7 ) );
	object.setRelativeY( MxNumberTenths( 83.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" sign=\"yes\" default-x=\"83.7\" relative-y=\"83.7\" font-family=\"XYZ\" font-style=\"italic\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 83.8 ) );
	object.setDefaultY( MxNumberTenths( 83.8 ) );
	object.setRelativeX( MxNumberTenths( 83.8 ) );
	object.setRelativeY( MxNumberTenths( 83.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" sign=\"yes\" default-x=\"83.8\" relative-y=\"83.8\" font-family=\"ABC\" font-style=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 83.9 ) );
	object.setDefaultY( MxNumberTenths( 83.9 ) );
	object.setRelativeX( MxNumberTenths( 83.9 ) );
	object.setRelativeY( MxNumberTenths( 83.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-y=\"83.9\" relative-y=\"83.9\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 84 ) );
	object.setDefaultY( MxNumberTenths( 84 ) );
	object.setRelativeX( MxNumberTenths( 84 ) );
	object.setRelativeY( MxNumberTenths( 84 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" default-y=\"84\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 84.1 ) );
	object.setDefaultY( MxNumberTenths( 84.1 ) );
	object.setRelativeX( MxNumberTenths( 84.1 ) );
	object.setRelativeY( MxNumberTenths( 84.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" default-y=\"84.1\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 84.2 ) );
	object.setDefaultY( MxNumberTenths( 84.2 ) );
	object.setRelativeX( MxNumberTenths( 84.2 ) );
	object.setRelativeY( MxNumberTenths( 84.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" default-y=\"84.2\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 84.3 ) );
	object.setDefaultY( MxNumberTenths( 84.3 ) );
	object.setRelativeX( MxNumberTenths( 84.3 ) );
	object.setRelativeY( MxNumberTenths( 84.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"84.3\" default-y=\"84.3\" relative-x=\"84.3\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#81828180\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 84.4 ) );
	object.setDefaultY( MxNumberTenths( 84.4 ) );
	object.setRelativeX( MxNumberTenths( 84.4 ) );
	object.setRelativeY( MxNumberTenths( 84.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"84.4\" relative-x=\"84.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#848382\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 84.5 ) );
	object.setDefaultY( MxNumberTenths( 84.5 ) );
	object.setRelativeX( MxNumberTenths( 84.5 ) );
	object.setRelativeY( MxNumberTenths( 84.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" sign=\"yes\" default-x=\"84.5\" relative-x=\"84.5\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#85868584\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 84.6 ) );
	object.setDefaultY( MxNumberTenths( 84.6 ) );
	object.setRelativeX( MxNumberTenths( 84.6 ) );
	object.setRelativeY( MxNumberTenths( 84.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" default-x=\"84.6\" relative-x=\"84.6\" font-size=\"large\" font-weight=\"normal\" color=\"#888786\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 84.7 ) );
	object.setDefaultY( MxNumberTenths( 84.7 ) );
	object.setRelativeX( MxNumberTenths( 84.7 ) );
	object.setRelativeY( MxNumberTenths( 84.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" relative-x=\"84.7\" relative-y=\"84.7\" font-size=\"1.1\" font-weight=\"bold\" color=\"#898A8988\" halign=\"center\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 84.8 ) );
	object.setDefaultY( MxNumberTenths( 84.8 ) );
	object.setRelativeX( MxNumberTenths( 84.8 ) );
	object.setRelativeY( MxNumberTenths( 84.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" relative-x=\"84.8\" relative-y=\"84.8\" font-size=\"large\" font-weight=\"normal\" color=\"#8C8B8A\" halign=\"right\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 84.9 ) );
	object.setDefaultY( MxNumberTenths( 84.9 ) );
	object.setRelativeX( MxNumberTenths( 84.9 ) );
	object.setRelativeY( MxNumberTenths( 84.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" sign=\"yes\" default-y=\"84.9\" relative-y=\"84.9\" font-weight=\"bold\" color=\"#8D8E8D8C\" halign=\"left\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 85 ) );
	object.setDefaultY( MxNumberTenths( 85 ) );
	object.setRelativeX( MxNumberTenths( 85 ) );
	object.setRelativeY( MxNumberTenths( 85 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" sign=\"yes\" default-y=\"85\" relative-y=\"85\" font-weight=\"normal\" color=\"#908F8E\" halign=\"center\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 85.1 ) );
	object.setDefaultY( MxNumberTenths( 85.1 ) );
	object.setRelativeX( MxNumberTenths( 85.1 ) );
	object.setRelativeY( MxNumberTenths( 85.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"85.1\" default-y=\"85.1\" relative-y=\"85.1\" font-family=\"DEF\" font-weight=\"bold\" color=\"#91929190\" halign=\"right\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 85.2 ) );
	object.setDefaultY( MxNumberTenths( 85.2 ) );
	object.setRelativeX( MxNumberTenths( 85.2 ) );
	object.setRelativeY( MxNumberTenths( 85.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" default-x=\"85.2\" default-y=\"85.2\" relative-y=\"85.2\" font-family=\"XYZ\" color=\"#949392\" halign=\"left\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 85.3 ) );
	object.setDefaultY( MxNumberTenths( 85.3 ) );
	object.setRelativeX( MxNumberTenths( 85.3 ) );
	object.setRelativeY( MxNumberTenths( 85.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" default-x=\"85.3\" default-y=\"85.3\" relative-y=\"85.3\" font-family=\"ABC\" color=\"#95969594\" halign=\"center\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 85.4 ) );
	object.setDefaultY( MxNumberTenths( 85.4 ) );
	object.setRelativeX( MxNumberTenths( 85.4 ) );
	object.setRelativeY( MxNumberTenths( 85.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" default-x=\"85.4\" font-family=\"DEF\" color=\"#989796\" halign=\"right\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 85.5 ) );
	object.setDefaultY( MxNumberTenths( 85.5 ) );
	object.setRelativeX( MxNumberTenths( 85.5 ) );
	object.setRelativeY( MxNumberTenths( 85.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" relative-x=\"85.5\" font-family=\"XYZ\" font-style=\"italic\" halign=\"left\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 85.6 ) );
	object.setDefaultY( MxNumberTenths( 85.6 ) );
	object.setRelativeX( MxNumberTenths( 85.6 ) );
	object.setRelativeY( MxNumberTenths( 85.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" relative-x=\"85.6\" font-family=\"ABC\" font-style=\"normal\" halign=\"center\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 85.7 ) );
	object.setDefaultY( MxNumberTenths( 85.7 ) );
	object.setRelativeX( MxNumberTenths( 85.7 ) );
	object.setRelativeY( MxNumberTenths( 85.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" sign=\"yes\" relative-x=\"85.7\" font-family=\"DEF\" font-style=\"italic\" halign=\"right\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 85.8 ) );
	object.setDefaultY( MxNumberTenths( 85.8 ) );
	object.setRelativeX( MxNumberTenths( 85.8 ) );
	object.setRelativeY( MxNumberTenths( 85.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" relative-x=\"85.8\" font-family=\"XYZ\" font-style=\"normal\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 85.9 ) );
	object.setDefaultY( MxNumberTenths( 85.9 ) );
	object.setRelativeX( MxNumberTenths( 85.9 ) );
	object.setRelativeY( MxNumberTenths( 85.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" default-x=\"85.9\" default-y=\"85.9\" relative-x=\"85.9\" font-style=\"italic\" font-size=\"1.1\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 86 ) );
	object.setDefaultY( MxNumberTenths( 86 ) );
	object.setRelativeX( MxNumberTenths( 86 ) );
	object.setRelativeY( MxNumberTenths( 86 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" default-x=\"86\" default-y=\"86\" relative-x=\"86\" font-style=\"normal\" font-size=\"large\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 86.1 ) );
	object.setDefaultY( MxNumberTenths( 86.1 ) );
	object.setRelativeX( MxNumberTenths( 86.1 ) );
	object.setRelativeY( MxNumberTenths( 86.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" sign=\"yes\" default-x=\"86.1\" default-y=\"86.1\" relative-y=\"86.1\" font-style=\"italic\" font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 86.2 ) );
	object.setDefaultY( MxNumberTenths( 86.2 ) );
	object.setRelativeX( MxNumberTenths( 86.2 ) );
	object.setRelativeY( MxNumberTenths( 86.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" sign=\"yes\" default-x=\"86.2\" default-y=\"86.2\" relative-y=\"86.2\" font-style=\"normal\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 86.3 ) );
	object.setDefaultY( MxNumberTenths( 86.3 ) );
	object.setRelativeX( MxNumberTenths( 86.3 ) );
	object.setRelativeY( MxNumberTenths( 86.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-y=\"86.3\" relative-y=\"86.3\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 86.4 ) );
	object.setDefaultY( MxNumberTenths( 86.4 ) );
	object.setRelativeX( MxNumberTenths( 86.4 ) );
	object.setRelativeY( MxNumberTenths( 86.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" relative-y=\"86.4\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 86.5 ) );
	object.setDefaultY( MxNumberTenths( 86.5 ) );
	object.setRelativeX( MxNumberTenths( 86.5 ) );
	object.setRelativeY( MxNumberTenths( 86.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" relative-y=\"86.5\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 86.6 ) );
	object.setDefaultY( MxNumberTenths( 86.6 ) );
	object.setRelativeX( MxNumberTenths( 86.6 ) );
	object.setRelativeY( MxNumberTenths( 86.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" relative-y=\"86.6\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 86.7 ) );
	object.setDefaultY( MxNumberTenths( 86.7 ) );
	object.setRelativeX( MxNumberTenths( 86.7 ) );
	object.setRelativeY( MxNumberTenths( 86.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"86.7\" relative-x=\"86.7\" relative-y=\"86.7\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" color=\"#B1B2B1B0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 86.8 ) );
	object.setDefaultY( MxNumberTenths( 86.8 ) );
	object.setRelativeX( MxNumberTenths( 86.8 ) );
	object.setRelativeY( MxNumberTenths( 86.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"86.8\" relative-x=\"86.8\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" color=\"#B4B3B2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 86.9 ) );
	object.setDefaultY( MxNumberTenths( 86.9 ) );
	object.setRelativeX( MxNumberTenths( 86.9 ) );
	object.setRelativeY( MxNumberTenths( 86.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" sign=\"yes\" default-x=\"86.9\" default-y=\"86.9\" relative-x=\"86.9\" font-family=\"DEF\" font-weight=\"bold\" color=\"#B5B6B5B4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 87 ) );
	object.setDefaultY( MxNumberTenths( 87 ) );
	object.setRelativeX( MxNumberTenths( 87 ) );
	object.setRelativeY( MxNumberTenths( 87 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" default-x=\"87\" default-y=\"87\" relative-x=\"87\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#B8B7B6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 87.1 ) );
	object.setDefaultY( MxNumberTenths( 87.1 ) );
	object.setRelativeX( MxNumberTenths( 87.1 ) );
	object.setRelativeY( MxNumberTenths( 87.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" default-y=\"87.1\" relative-x=\"87.1\" font-family=\"ABC\" font-weight=\"bold\" color=\"#B9BAB9B8\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 87.2 ) );
	object.setDefaultY( MxNumberTenths( 87.2 ) );
	object.setRelativeX( MxNumberTenths( 87.2 ) );
	object.setRelativeY( MxNumberTenths( 87.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" default-y=\"87.2\" relative-x=\"87.2\" font-family=\"DEF\" font-weight=\"normal\" color=\"#BCBBBA\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 87.3 ) );
	object.setDefaultY( MxNumberTenths( 87.3 ) );
	object.setRelativeX( MxNumberTenths( 87.3 ) );
	object.setRelativeY( MxNumberTenths( 87.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" sign=\"yes\" default-y=\"87.3\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" color=\"#BDBEBDBC\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 87.4 ) );
	object.setDefaultY( MxNumberTenths( 87.4 ) );
	object.setRelativeX( MxNumberTenths( 87.4 ) );
	object.setRelativeY( MxNumberTenths( 87.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" sign=\"yes\" font-family=\"ABC\" font-style=\"normal\" color=\"#C0BFBE\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 87.5 ) );
	object.setDefaultY( MxNumberTenths( 87.5 ) );
	object.setRelativeX( MxNumberTenths( 87.5 ) );
	object.setRelativeY( MxNumberTenths( 87.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"87.5\" relative-y=\"87.5\" font-style=\"italic\" color=\"#C1C2C1C0\" halign=\"right\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 87.6 ) );
	object.setDefaultY( MxNumberTenths( 87.6 ) );
	object.setRelativeX( MxNumberTenths( 87.6 ) );
	object.setRelativeY( MxNumberTenths( 87.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" default-x=\"87.6\" relative-y=\"87.6\" font-style=\"normal\" color=\"#C4C3C2\" halign=\"left\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 87.7 ) );
	object.setDefaultY( MxNumberTenths( 87.7 ) );
	object.setRelativeX( MxNumberTenths( 87.7 ) );
	object.setRelativeY( MxNumberTenths( 87.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" default-x=\"87.7\" relative-y=\"87.7\" font-style=\"italic\" color=\"#C5C6C5C4\" halign=\"center\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 87.8 ) );
	object.setDefaultY( MxNumberTenths( 87.8 ) );
	object.setRelativeX( MxNumberTenths( 87.8 ) );
	object.setRelativeY( MxNumberTenths( 87.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" default-x=\"87.8\" relative-y=\"87.8\" font-style=\"normal\" color=\"#C8C7C6\" halign=\"right\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 87.9 ) );
	object.setDefaultY( MxNumberTenths( 87.9 ) );
	object.setRelativeX( MxNumberTenths( 87.9 ) );
	object.setRelativeY( MxNumberTenths( 87.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-y=\"87.9\" relative-x=\"87.9\" relative-y=\"87.9\" font-style=\"italic\" font-size=\"1.1\" halign=\"left\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 88 ) );
	object.setDefaultY( MxNumberTenths( 88 ) );
	object.setRelativeX( MxNumberTenths( 88 ) );
	object.setRelativeY( MxNumberTenths( 88 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-y=\"88\" relative-x=\"88\" relative-y=\"88\" font-style=\"normal\" font-size=\"large\" halign=\"center\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 88.1 ) );
	object.setDefaultY( MxNumberTenths( 88.1 ) );
	object.setRelativeX( MxNumberTenths( 88.1 ) );
	object.setRelativeY( MxNumberTenths( 88.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" sign=\"yes\" default-y=\"88.1\" relative-x=\"88.1\" relative-y=\"88.1\" font-style=\"italic\" font-size=\"1.1\" halign=\"right\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 88.2 ) );
	object.setDefaultY( MxNumberTenths( 88.2 ) );
	object.setRelativeX( MxNumberTenths( 88.2 ) );
	object.setRelativeY( MxNumberTenths( 88.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" default-y=\"88.2\" relative-x=\"88.2\" font-size=\"large\" halign=\"left\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 88.3 ) );
	object.setDefaultY( MxNumberTenths( 88.3 ) );
	object.setRelativeX( MxNumberTenths( 88.3 ) );
	object.setRelativeY( MxNumberTenths( 88.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" default-x=\"88.3\" default-y=\"88.3\" relative-x=\"88.3\" font-family=\"ABC\" font-size=\"1.1\" halign=\"center\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 88.4 ) );
	object.setDefaultY( MxNumberTenths( 88.4 ) );
	object.setRelativeX( MxNumberTenths( 88.4 ) );
	object.setRelativeY( MxNumberTenths( 88.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" default-x=\"88.4\" relative-x=\"88.4\" font-family=\"DEF\" font-size=\"large\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 88.5 ) );
	object.setDefaultY( MxNumberTenths( 88.5 ) );
	object.setRelativeX( MxNumberTenths( 88.5 ) );
	object.setRelativeY( MxNumberTenths( 88.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" sign=\"yes\" default-x=\"88.5\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 88.6 ) );
	object.setDefaultY( MxNumberTenths( 88.6 ) );
	object.setRelativeX( MxNumberTenths( 88.6 ) );
	object.setRelativeY( MxNumberTenths( 88.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" sign=\"yes\" default-x=\"88.6\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 88.7 ) );
	object.setDefaultY( MxNumberTenths( 88.7 ) );
	object.setRelativeX( MxNumberTenths( 88.7 ) );
	object.setRelativeY( MxNumberTenths( 88.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 88.8 ) );
	object.setDefaultY( MxNumberTenths( 88.8 ) );
	object.setRelativeX( MxNumberTenths( 88.8 ) );
	object.setRelativeY( MxNumberTenths( 88.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 88.9 ) );
	object.setDefaultY( MxNumberTenths( 88.9 ) );
	object.setRelativeX( MxNumberTenths( 88.9 ) );
	object.setRelativeY( MxNumberTenths( 88.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" default-y=\"88.9\" relative-y=\"88.9\" font-family=\"ABC\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 89 ) );
	object.setDefaultY( MxNumberTenths( 89 ) );
	object.setRelativeX( MxNumberTenths( 89 ) );
	object.setRelativeY( MxNumberTenths( 89 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" default-y=\"89\" relative-y=\"89\" font-family=\"DEF\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 89.1 ) );
	object.setDefaultY( MxNumberTenths( 89.1 ) );
	object.setRelativeX( MxNumberTenths( 89.1 ) );
	object.setRelativeY( MxNumberTenths( 89.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"89.1\" default-y=\"89.1\" relative-x=\"89.1\" relative-y=\"89.1\" font-style=\"italic\" font-weight=\"bold\" color=\"#E1E2E1E0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 89.2 ) );
	object.setDefaultY( MxNumberTenths( 89.2 ) );
	object.setRelativeX( MxNumberTenths( 89.2 ) );
	object.setRelativeY( MxNumberTenths( 89.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"89.2\" default-y=\"89.2\" relative-x=\"89.2\" relative-y=\"89.2\" font-style=\"normal\" font-weight=\"normal\" color=\"#E4E3E2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 89.3 ) );
	object.setDefaultY( MxNumberTenths( 89.3 ) );
	object.setRelativeX( MxNumberTenths( 89.3 ) );
	object.setRelativeY( MxNumberTenths( 89.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" sign=\"yes\" default-x=\"89.3\" default-y=\"89.3\" relative-x=\"89.3\" relative-y=\"89.3\" font-style=\"italic\" font-weight=\"bold\" color=\"#E5E6E5E4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 89.4 ) );
	object.setDefaultY( MxNumberTenths( 89.4 ) );
	object.setRelativeX( MxNumberTenths( 89.4 ) );
	object.setRelativeY( MxNumberTenths( 89.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" default-x=\"89.4\" relative-x=\"89.4\" relative-y=\"89.4\" font-style=\"normal\" font-weight=\"normal\" color=\"#E8E7E6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 89.5 ) );
	object.setDefaultY( MxNumberTenths( 89.5 ) );
	object.setRelativeX( MxNumberTenths( 89.5 ) );
	object.setRelativeY( MxNumberTenths( 89.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" relative-x=\"89.5\" relative-y=\"89.5\" font-style=\"italic\" font-weight=\"bold\" color=\"#E9EAE9E8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 89.6 ) );
	object.setDefaultY( MxNumberTenths( 89.6 ) );
	object.setRelativeX( MxNumberTenths( 89.6 ) );
	object.setRelativeY( MxNumberTenths( 89.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" relative-x=\"89.6\" font-style=\"normal\" color=\"#ECEBEA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 89.7 ) );
	object.setDefaultY( MxNumberTenths( 89.7 ) );
	object.setRelativeX( MxNumberTenths( 89.7 ) );
	object.setRelativeY( MxNumberTenths( 89.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" sign=\"yes\" font-style=\"italic\" color=\"#EDEEEDEC\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 89.8 ) );
	object.setDefaultY( MxNumberTenths( 89.8 ) );
	object.setRelativeX( MxNumberTenths( 89.8 ) );
	object.setRelativeY( MxNumberTenths( 89.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" sign=\"yes\" font-style=\"normal\" color=\"#F0EFEE\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 89.9 ) );
	object.setDefaultY( MxNumberTenths( 89.9 ) );
	object.setRelativeX( MxNumberTenths( 89.9 ) );
	object.setRelativeY( MxNumberTenths( 89.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"89.9\" default-y=\"89.9\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#F1F2F1F0\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 90 ) );
	object.setDefaultY( MxNumberTenths( 90 ) );
	object.setRelativeX( MxNumberTenths( 90 ) );
	object.setRelativeY( MxNumberTenths( 90 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" default-x=\"90\" default-y=\"90\" font-family=\"XYZ\" font-size=\"large\" color=\"#F4F3F2\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 90.1 ) );
	object.setDefaultY( MxNumberTenths( 90.1 ) );
	object.setRelativeX( MxNumberTenths( 90.1 ) );
	object.setRelativeY( MxNumberTenths( 90.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" default-x=\"90.1\" default-y=\"90.1\" font-family=\"ABC\" font-size=\"1.1\" color=\"#F5F6F5F4\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 90.2 ) );
	object.setDefaultY( MxNumberTenths( 90.2 ) );
	object.setRelativeX( MxNumberTenths( 90.2 ) );
	object.setRelativeY( MxNumberTenths( 90.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" default-x=\"90.2\" default-y=\"90.2\" font-family=\"DEF\" font-size=\"large\" color=\"#F8F7F6\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 90.3 ) );
	object.setDefaultY( MxNumberTenths( 90.3 ) );
	object.setRelativeX( MxNumberTenths( 90.3 ) );
	object.setRelativeY( MxNumberTenths( 90.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-y=\"90.3\" relative-x=\"90.3\" relative-y=\"90.3\" font-family=\"XYZ\" font-size=\"1.1\" halign=\"left\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 90.4 ) );
	object.setDefaultY( MxNumberTenths( 90.4 ) );
	object.setRelativeX( MxNumberTenths( 90.4 ) );
	object.setRelativeY( MxNumberTenths( 90.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" relative-x=\"90.4\" relative-y=\"90.4\" font-family=\"ABC\" font-size=\"large\" halign=\"center\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 90.5 ) );
	object.setDefaultY( MxNumberTenths( 90.5 ) );
	object.setRelativeX( MxNumberTenths( 90.5 ) );
	object.setRelativeY( MxNumberTenths( 90.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" sign=\"yes\" relative-x=\"90.5\" relative-y=\"90.5\" font-family=\"DEF\" font-size=\"1.1\" halign=\"right\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 90.6 ) );
	object.setDefaultY( MxNumberTenths( 90.6 ) );
	object.setRelativeX( MxNumberTenths( 90.6 ) );
	object.setRelativeY( MxNumberTenths( 90.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" relative-x=\"90.6\" relative-y=\"90.6\" font-family=\"XYZ\" font-size=\"large\" halign=\"left\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 90.7 ) );
	object.setDefaultY( MxNumberTenths( 90.7 ) );
	object.setRelativeX( MxNumberTenths( 90.7 ) );
	object.setRelativeY( MxNumberTenths( 90.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" default-x=\"90.7\" relative-x=\"90.7\" relative-y=\"90.7\" font-size=\"1.1\" font-weight=\"bold\" halign=\"center\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 90.8 ) );
	object.setDefaultY( MxNumberTenths( 90.8 ) );
	object.setRelativeX( MxNumberTenths( 90.8 ) );
	object.setRelativeY( MxNumberTenths( 90.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#040302" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" default-x=\"90.8\" relative-x=\"90.8\" relative-y=\"90.8\" font-size=\"large\" font-weight=\"normal\" halign=\"right\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 90.9 ) );
	object.setDefaultY( MxNumberTenths( 90.9 ) );
	object.setRelativeX( MxNumberTenths( 90.9 ) );
	object.setRelativeY( MxNumberTenths( 90.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" sign=\"yes\" default-x=\"90.9\" default-y=\"90.9\" relative-y=\"90.9\" font-style=\"italic\" font-weight=\"bold\" halign=\"left\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 91 ) );
	object.setDefaultY( MxNumberTenths( 91 ) );
	object.setRelativeX( MxNumberTenths( 91 ) );
	object.setRelativeY( MxNumberTenths( 91 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#080706" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" sign=\"yes\" default-x=\"91\" default-y=\"91\" font-style=\"normal\" font-weight=\"normal\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 91.1 ) );
	object.setDefaultY( MxNumberTenths( 91.1 ) );
	object.setRelativeX( MxNumberTenths( 91.1 ) );
	object.setRelativeY( MxNumberTenths( 91.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-y=\"91.1\" font-style=\"italic\" font-weight=\"bold\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 91.2 ) );
	object.setDefaultY( MxNumberTenths( 91.2 ) );
	object.setRelativeX( MxNumberTenths( 91.2 ) );
	object.setRelativeY( MxNumberTenths( 91.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" default-y=\"91.2\" font-style=\"normal\" font-weight=\"normal\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 91.3 ) );
	object.setDefaultY( MxNumberTenths( 91.3 ) );
	object.setRelativeX( MxNumberTenths( 91.3 ) );
	object.setRelativeY( MxNumberTenths( 91.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" default-y=\"91.3\" font-style=\"italic\" font-weight=\"bold\" valign=\"baseline\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 91.4 ) );
	object.setDefaultY( MxNumberTenths( 91.4 ) );
	object.setRelativeX( MxNumberTenths( 91.4 ) );
	object.setRelativeY( MxNumberTenths( 91.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" font-style=\"normal\" font-weight=\"normal\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 91.5 ) );
	object.setDefaultY( MxNumberTenths( 91.5 ) );
	object.setRelativeX( MxNumberTenths( 91.5 ) );
	object.setRelativeY( MxNumberTenths( 91.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"91.5\" relative-x=\"91.5\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" color=\"#11121110\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 91.6 ) );
	object.setDefaultY( MxNumberTenths( 91.6 ) );
	object.setRelativeX( MxNumberTenths( 91.6 ) );
	object.setRelativeY( MxNumberTenths( 91.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#141312" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::bottom ) );
	expected = "<pedal type=\"start\" line=\"yes\" sign=\"yes\" default-x=\"91.6\" relative-x=\"91.6\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" color=\"#141312\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 91.7 ) );
	object.setDefaultY( MxNumberTenths( 91.7 ) );
	object.setRelativeX( MxNumberTenths( 91.7 ) );
	object.setRelativeY( MxNumberTenths( 91.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::baseline ) );
	expected = "<pedal type=\"start\" sign=\"yes\" default-x=\"91.7\" relative-x=\"91.7\" relative-y=\"91.7\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" color=\"#15161514\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 91.8 ) );
	object.setDefaultY( MxNumberTenths( 91.8 ) );
	object.setRelativeX( MxNumberTenths( 91.8 ) );
	object.setRelativeY( MxNumberTenths( 91.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#181716" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::top ) );
	expected = "<pedal type=\"start\" default-x=\"91.8\" relative-x=\"91.8\" relative-y=\"91.8\" font-family=\"XYZ\" color=\"#181716\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEePedal )
{
	MxEePedal object;
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
	object.setDefaultX( MxNumberTenths( 91.9 ) );
	object.setDefaultY( MxNumberTenths( 91.9 ) );
	object.setRelativeX( MxNumberTenths( 91.9 ) );
	object.setRelativeY( MxNumberTenths( 91.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValign( lexicon::enums::Valign::middle ) );
	expected = "<pedal type=\"start\"/>";
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


