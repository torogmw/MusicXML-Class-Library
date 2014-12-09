/** *******************************************************
  * 
  * MxEsEndingTest.cpp
  * Created: 2014-12-05 20:57:50
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsEnding.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsEnding )
{
	MxEsEnding object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsEnding )
{
	MxEsEnding object;
	std::string expected = ( MxEndingNumber(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsEnding )
{
	MxEsEnding object;
	std::string expected = ( MxEnumStartStopDiscontinue(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsEnding )
{
	MxEsEnding object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::yes ) ).toString();
	std::string actual = object.getPrintObject().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsEnding )
{
	MxEsEnding object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEsEnding )
{
	MxEsEnding object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEsEnding )
{
	MxEsEnding object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEsEnding )
{
	MxEsEnding object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEsEnding )
{
	MxEsEnding object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEsEnding )
{
	MxEsEnding object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEsEnding )
{
	MxEsEnding object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxEsEnding )
{
	MxEsEnding object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxEsEnding )
{
	MxEsEnding object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxEsEnding )
{
	MxEsEnding object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getEndLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxEsEnding )
{
	MxEsEnding object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getTextX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues14, MxEsEnding )
{
	MxEsEnding object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getTextY().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsEnding )
{
	MxEsEnding object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsEnding )
{
	MxEsEnding object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsEnding )
{
	MxEsEnding object( XsString( "" ) );
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
TEST( ctorValue2, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
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
TEST( ctorValue4, MxEsEnding )
{
	MxEsEnding object( XsString( "X,Y,Z" ) );
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
TEST( ctorValue6, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
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
TEST( ctorValue8, MxEsEnding )
{
	MxEsEnding object( XsString( "X,Y,Z" ) );
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

TEST( getClassName, MxEsEnding )
{
	MxEsEnding object;
	std::string expected = "MxEsEnding";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsEnding )
{
	MxEsEnding object;
	std::string expected = "ending";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsEnding )
{
	MxEsEnding object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setNumber0, MxEsEnding )
{
	MxEndingNumber value1( "1,2,3" );
	MxEndingNumber value2( "4,5,6" );
	CHECK( ( value1 != value2 ) )
	MxEsEnding object;
	object.setNumber( value1 );
	MxEndingNumber expected = value1;
	MxEndingNumber actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setType1, MxEsEnding )
{
	MxEnumStartStopDiscontinue value1( lexicon::enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue value2( lexicon::enums::StartStopDiscontinue::stop );
	CHECK( ( value1 != value2 ) )
	MxEsEnding object;
	object.setType( value1 );
	MxEnumStartStopDiscontinue expected = value1;
	MxEnumStartStopDiscontinue actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setPrintObject2, MxEsEnding )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsEnding object;
	object.setPrintObject( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getPrintObject();
	CHECK_EQUAL( expected, actual )
	object.setPrintObject( value2 );
	expected = value2;
	actual = object.getPrintObject();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX3, MxEsEnding )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsEnding object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY4, MxEsEnding )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsEnding object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX5, MxEsEnding )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsEnding object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY6, MxEsEnding )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsEnding object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily7, MxEsEnding )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEsEnding object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle8, MxEsEnding )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEsEnding object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize9, MxEsEnding )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEsEnding object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight10, MxEsEnding )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEsEnding object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor11, MxEsEnding )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsEnding object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setEndLength12, MxEsEnding )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsEnding object;
	object.setEndLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getEndLength();
	CHECK_EQUAL( expected, actual )
	object.setEndLength( value2 );
	expected = value2;
	actual = object.getEndLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setTextX13, MxEsEnding )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsEnding object;
	object.setTextX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getTextX();
	CHECK_EQUAL( expected, actual )
	object.setTextX( value2 );
	expected = value2;
	actual = object.getTextX();
	CHECK_EQUAL( expected, actual )
}
TEST( setTextY14, MxEsEnding )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsEnding object;
	object.setTextY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getTextY();
	CHECK_EQUAL( expected, actual )
	object.setTextY( value2 );
	expected = value2;
	actual = object.getTextY();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsNumberRequired0, MxEsEnding )
{
	MxEsEnding object;
	bool expected = true;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTypeRequired1, MxEsEnding )
{
	MxEsEnding object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPrintObjectRequired2, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsPrintObjectRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired3, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired4, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired5, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired6, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired7, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired8, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired9, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired10, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired11, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEndLengthRequired12, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsEndLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextXRequired13, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsTextXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextYRequired14, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsTextYRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsNumberPresent0, MxEsEnding )
{
	MxEsEnding object;
	bool expected = true;
	bool actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTypePresent1, MxEsEnding )
{
	MxEsEnding object;
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
TEST( getIsPrintObjectPresent2, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsPrintObjectPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPrintObjectPresent( true );
	expected = true;
	actual = object.getIsPrintObjectPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPrintObjectPresent( false );
	expected = false;
	actual = object.getIsPrintObjectPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXPresent3, MxEsEnding )
{
	MxEsEnding object;
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
TEST( getIsDefaultYPresent4, MxEsEnding )
{
	MxEsEnding object;
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
TEST( getIsRelativeXPresent5, MxEsEnding )
{
	MxEsEnding object;
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
TEST( getIsRelativeYPresent6, MxEsEnding )
{
	MxEsEnding object;
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
TEST( getIsFontFamilyPresent7, MxEsEnding )
{
	MxEsEnding object;
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
TEST( getIsFontStylePresent8, MxEsEnding )
{
	MxEsEnding object;
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
TEST( getIsFontSizePresent9, MxEsEnding )
{
	MxEsEnding object;
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
TEST( getIsFontWeightPresent10, MxEsEnding )
{
	MxEsEnding object;
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
TEST( getIsColorPresent11, MxEsEnding )
{
	MxEsEnding object;
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
TEST( getIsEndLengthPresent12, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsEndLengthPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsEndLengthPresent( true );
	expected = true;
	actual = object.getIsEndLengthPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsEndLengthPresent( false );
	expected = false;
	actual = object.getIsEndLengthPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextXPresent13, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsTextXPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTextXPresent( true );
	expected = true;
	actual = object.getIsTextXPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTextXPresent( false );
	expected = false;
	actual = object.getIsTextXPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextYPresent14, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsTextYPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTextYPresent( true );
	expected = true;
	actual = object.getIsTextYPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTextYPresent( false );
	expected = false;
	actual = object.getIsTextYPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsNumberDefaultDefined, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTypeDefaultDefined, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPrintObjectDefaultDefined, MxEsEnding )
{
	MxEsEnding object;
	bool expected = true;
	bool actual = object.getIsPrintObjectDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEndLengthDefaultDefined, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsEndLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextXDefaultDefined, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsTextXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextYDefaultDefined, MxEsEnding )
{
	MxEsEnding object;
	bool expected = false;
	bool actual = object.getIsTextYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getNumberDefaultValue, MxEsEnding )
{
	MxEsEnding object;
	MxEndingNumber expected;
	MxEndingNumber actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTypeDefaultValue, MxEsEnding )
{
	MxEsEnding object;
	MxEnumStartStopDiscontinue expected;
	MxEnumStartStopDiscontinue actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPrintObjectDefaultValue, MxEsEnding )
{
	MxEsEnding object;
	MxEnumYesNo expected( lexicon::enums::YesNo::yes );
	MxEnumYesNo actual = object.getPrintObjectDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEsEnding )
{
	MxEsEnding object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEsEnding )
{
	MxEsEnding object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEsEnding )
{
	MxEsEnding object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEsEnding )
{
	MxEsEnding object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEsEnding )
{
	MxEsEnding object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEsEnding )
{
	MxEsEnding object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEsEnding )
{
	MxEsEnding object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEsEnding )
{
	MxEsEnding object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsEnding )
{
	MxEsEnding object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getEndLengthDefaultValue, MxEsEnding )
{
	MxEsEnding object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getEndLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTextXDefaultValue, MxEsEnding )
{
	MxEsEnding object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getTextXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTextYDefaultValue, MxEsEnding )
{
	MxEsEnding object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getTextYDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 21.1 ) );
	object.setDefaultY( MxNumberTenths( 21.1 ) );
	object.setRelativeX( MxNumberTenths( 21.1 ) );
	object.setRelativeY( MxNumberTenths( 21.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-x=\"21.1\" default-y=\"21.1\" relative-x=\"21.1\" relative-y=\"21.1\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#95969594\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 21.2 ) );
	object.setDefaultY( MxNumberTenths( 21.2 ) );
	object.setRelativeX( MxNumberTenths( 21.2 ) );
	object.setRelativeY( MxNumberTenths( 21.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#989796" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"yes\" default-x=\"21.2\" default-y=\"21.2\" relative-x=\"21.2\" relative-y=\"21.2\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#989796\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 21.3 ) );
	object.setDefaultY( MxNumberTenths( 21.3 ) );
	object.setRelativeX( MxNumberTenths( 21.3 ) );
	object.setRelativeY( MxNumberTenths( 21.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-x=\"21.3\" default-y=\"21.3\" relative-x=\"21.3\" relative-y=\"21.3\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#999A9998\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 21.4 ) );
	object.setDefaultY( MxNumberTenths( 21.4 ) );
	object.setRelativeX( MxNumberTenths( 21.4 ) );
	object.setRelativeY( MxNumberTenths( 21.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"21.4\" default-y=\"21.4\" relative-x=\"21.4\" relative-y=\"21.4\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#9C9B9A\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 21.5 ) );
	object.setDefaultY( MxNumberTenths( 21.5 ) );
	object.setRelativeX( MxNumberTenths( 21.5 ) );
	object.setRelativeY( MxNumberTenths( 21.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-y=\"21.5\" relative-x=\"21.5\" relative-y=\"21.5\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#9D9E9D9C\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 21.6 ) );
	object.setDefaultY( MxNumberTenths( 21.6 ) );
	object.setRelativeX( MxNumberTenths( 21.6 ) );
	object.setRelativeY( MxNumberTenths( 21.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" relative-x=\"21.6\" relative-y=\"21.6\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#A09F9E\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 21.7 ) );
	object.setDefaultY( MxNumberTenths( 21.7 ) );
	object.setRelativeX( MxNumberTenths( 21.7 ) );
	object.setRelativeY( MxNumberTenths( 21.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" relative-y=\"21.7\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#A1A2A1A0\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 21.8 ) );
	object.setDefaultY( MxNumberTenths( 21.8 ) );
	object.setRelativeX( MxNumberTenths( 21.8 ) );
	object.setRelativeY( MxNumberTenths( 21.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"yes\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#A4A3A2\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 21.9 ) );
	object.setDefaultY( MxNumberTenths( 21.9 ) );
	object.setRelativeX( MxNumberTenths( 21.9 ) );
	object.setRelativeY( MxNumberTenths( 21.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-x=\"21.9\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#A5A6A5A4\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 22 ) );
	object.setDefaultY( MxNumberTenths( 22 ) );
	object.setRelativeX( MxNumberTenths( 22 ) );
	object.setRelativeY( MxNumberTenths( 22 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"22\" font-size=\"1.1\" font-weight=\"bold\" color=\"#A8A7A6\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 22.1 ) );
	object.setDefaultY( MxNumberTenths( 22.1 ) );
	object.setRelativeX( MxNumberTenths( 22.1 ) );
	object.setRelativeY( MxNumberTenths( 22.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"22.1\" default-y=\"22.1\" font-weight=\"normal\" color=\"#A9AAA9A8\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 22.2 ) );
	object.setDefaultY( MxNumberTenths( 22.2 ) );
	object.setRelativeX( MxNumberTenths( 22.2 ) );
	object.setRelativeY( MxNumberTenths( 22.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"22.2\" default-y=\"22.2\" color=\"#ACABAA\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 22.3 ) );
	object.setDefaultY( MxNumberTenths( 22.3 ) );
	object.setRelativeX( MxNumberTenths( 22.3 ) );
	object.setRelativeY( MxNumberTenths( 22.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-y=\"22.3\" relative-x=\"22.3\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 22.4 ) );
	object.setDefaultY( MxNumberTenths( 22.4 ) );
	object.setRelativeX( MxNumberTenths( 22.4 ) );
	object.setRelativeY( MxNumberTenths( 22.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"yes\" default-y=\"22.4\" relative-x=\"22.4\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 22.5 ) );
	object.setDefaultY( MxNumberTenths( 22.5 ) );
	object.setRelativeX( MxNumberTenths( 22.5 ) );
	object.setRelativeY( MxNumberTenths( 22.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-y=\"22.5\" relative-x=\"22.5\" relative-y=\"22.5\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 22.6 ) );
	object.setDefaultY( MxNumberTenths( 22.6 ) );
	object.setRelativeX( MxNumberTenths( 22.6 ) );
	object.setRelativeY( MxNumberTenths( 22.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" relative-x=\"22.6\" relative-y=\"22.6\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 22.7 ) );
	object.setDefaultY( MxNumberTenths( 22.7 ) );
	object.setRelativeX( MxNumberTenths( 22.7 ) );
	object.setRelativeY( MxNumberTenths( 22.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"22.7\" relative-x=\"22.7\" relative-y=\"22.7\" font-family=\"ABC\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 22.8 ) );
	object.setDefaultY( MxNumberTenths( 22.8 ) );
	object.setRelativeX( MxNumberTenths( 22.8 ) );
	object.setRelativeY( MxNumberTenths( 22.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"22.8\" relative-x=\"22.8\" relative-y=\"22.8\" font-family=\"DEF\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 22.9 ) );
	object.setDefaultY( MxNumberTenths( 22.9 ) );
	object.setRelativeX( MxNumberTenths( 22.9 ) );
	object.setRelativeY( MxNumberTenths( 22.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-x=\"22.9\" relative-y=\"22.9\" font-family=\"XYZ\" font-style=\"normal\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 23 ) );
	object.setDefaultY( MxNumberTenths( 23 ) );
	object.setRelativeX( MxNumberTenths( 23 ) );
	object.setRelativeY( MxNumberTenths( 23 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"yes\" default-x=\"23\" relative-y=\"23\" font-family=\"ABC\" font-style=\"italic\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 23.1 ) );
	object.setDefaultY( MxNumberTenths( 23.1 ) );
	object.setRelativeX( MxNumberTenths( 23.1 ) );
	object.setRelativeY( MxNumberTenths( 23.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-y=\"23.1\" relative-y=\"23.1\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 23.2 ) );
	object.setDefaultY( MxNumberTenths( 23.2 ) );
	object.setRelativeX( MxNumberTenths( 23.2 ) );
	object.setRelativeY( MxNumberTenths( 23.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-y=\"23.2\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 23.3 ) );
	object.setDefaultY( MxNumberTenths( 23.3 ) );
	object.setRelativeX( MxNumberTenths( 23.3 ) );
	object.setRelativeY( MxNumberTenths( 23.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-y=\"23.3\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 23.4 ) );
	object.setDefaultY( MxNumberTenths( 23.4 ) );
	object.setRelativeX( MxNumberTenths( 23.4 ) );
	object.setRelativeY( MxNumberTenths( 23.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-y=\"23.4\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 23.5 ) );
	object.setDefaultY( MxNumberTenths( 23.5 ) );
	object.setRelativeX( MxNumberTenths( 23.5 ) );
	object.setRelativeY( MxNumberTenths( 23.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-x=\"23.5\" default-y=\"23.5\" relative-x=\"23.5\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#C5C6C5C4\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 23.6 ) );
	object.setDefaultY( MxNumberTenths( 23.6 ) );
	object.setRelativeX( MxNumberTenths( 23.6 ) );
	object.setRelativeY( MxNumberTenths( 23.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"yes\" default-x=\"23.6\" relative-x=\"23.6\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#C8C7C6\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 23.7 ) );
	object.setDefaultY( MxNumberTenths( 23.7 ) );
	object.setRelativeX( MxNumberTenths( 23.7 ) );
	object.setRelativeY( MxNumberTenths( 23.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-x=\"23.7\" relative-x=\"23.7\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#C9CAC9C8\" end-length=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 23.8 ) );
	object.setDefaultY( MxNumberTenths( 23.8 ) );
	object.setRelativeX( MxNumberTenths( 23.8 ) );
	object.setRelativeY( MxNumberTenths( 23.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"23.8\" relative-x=\"23.8\" font-size=\"1.1\" font-weight=\"bold\" color=\"#CCCBCA\" end-length=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 23.9 ) );
	object.setDefaultY( MxNumberTenths( 23.9 ) );
	object.setRelativeX( MxNumberTenths( 23.9 ) );
	object.setRelativeY( MxNumberTenths( 23.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" relative-x=\"23.9\" relative-y=\"23.9\" font-size=\"large\" font-weight=\"normal\" color=\"#CDCECDCC\" end-length=\"1\" text-x=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 24 ) );
	object.setDefaultY( MxNumberTenths( 24 ) );
	object.setRelativeX( MxNumberTenths( 24 ) );
	object.setRelativeY( MxNumberTenths( 24 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" relative-x=\"24\" relative-y=\"24\" font-size=\"1.1\" font-weight=\"bold\" color=\"#D0CFCE\" end-length=\"1\" text-x=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 24.1 ) );
	object.setDefaultY( MxNumberTenths( 24.1 ) );
	object.setRelativeX( MxNumberTenths( 24.1 ) );
	object.setRelativeY( MxNumberTenths( 24.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-y=\"24.1\" relative-y=\"24.1\" font-weight=\"normal\" color=\"#D1D2D1D0\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 24.2 ) );
	object.setDefaultY( MxNumberTenths( 24.2 ) );
	object.setRelativeX( MxNumberTenths( 24.2 ) );
	object.setRelativeY( MxNumberTenths( 24.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"yes\" default-y=\"24.2\" relative-y=\"24.2\" font-weight=\"bold\" color=\"#D4D3D2\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 24.3 ) );
	object.setDefaultY( MxNumberTenths( 24.3 ) );
	object.setRelativeX( MxNumberTenths( 24.3 ) );
	object.setRelativeY( MxNumberTenths( 24.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-x=\"24.3\" default-y=\"24.3\" relative-y=\"24.3\" font-family=\"DEF\" font-weight=\"normal\" color=\"#D5D6D5D4\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 24.4 ) );
	object.setDefaultY( MxNumberTenths( 24.4 ) );
	object.setRelativeX( MxNumberTenths( 24.4 ) );
	object.setRelativeY( MxNumberTenths( 24.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"24.4\" default-y=\"24.4\" relative-y=\"24.4\" font-family=\"XYZ\" color=\"#D8D7D6\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 24.5 ) );
	object.setDefaultY( MxNumberTenths( 24.5 ) );
	object.setRelativeX( MxNumberTenths( 24.5 ) );
	object.setRelativeY( MxNumberTenths( 24.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"24.5\" default-y=\"24.5\" relative-y=\"24.5\" font-family=\"ABC\" color=\"#D9DAD9D8\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 24.6 ) );
	object.setDefaultY( MxNumberTenths( 24.6 ) );
	object.setRelativeX( MxNumberTenths( 24.6 ) );
	object.setRelativeY( MxNumberTenths( 24.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"24.6\" font-family=\"DEF\" color=\"#DCDBDA\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 24.7 ) );
	object.setDefaultY( MxNumberTenths( 24.7 ) );
	object.setRelativeX( MxNumberTenths( 24.7 ) );
	object.setRelativeY( MxNumberTenths( 24.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" relative-x=\"24.7\" font-family=\"XYZ\" font-style=\"normal\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 24.8 ) );
	object.setDefaultY( MxNumberTenths( 24.8 ) );
	object.setRelativeX( MxNumberTenths( 24.8 ) );
	object.setRelativeY( MxNumberTenths( 24.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"yes\" relative-x=\"24.8\" font-family=\"ABC\" font-style=\"italic\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 24.9 ) );
	object.setDefaultY( MxNumberTenths( 24.9 ) );
	object.setRelativeX( MxNumberTenths( 24.9 ) );
	object.setRelativeY( MxNumberTenths( 24.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" relative-x=\"24.9\" font-family=\"DEF\" font-style=\"normal\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 25 ) );
	object.setDefaultY( MxNumberTenths( 25 ) );
	object.setRelativeX( MxNumberTenths( 25 ) );
	object.setRelativeY( MxNumberTenths( 25 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" relative-x=\"25\" font-family=\"XYZ\" font-style=\"italic\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 25.1 ) );
	object.setDefaultY( MxNumberTenths( 25.1 ) );
	object.setRelativeX( MxNumberTenths( 25.1 ) );
	object.setRelativeY( MxNumberTenths( 25.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"25.1\" default-y=\"25.1\" relative-x=\"25.1\" font-style=\"normal\" font-size=\"large\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 25.2 ) );
	object.setDefaultY( MxNumberTenths( 25.2 ) );
	object.setRelativeX( MxNumberTenths( 25.2 ) );
	object.setRelativeY( MxNumberTenths( 25.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"25.2\" default-y=\"25.2\" relative-x=\"25.2\" font-style=\"italic\" font-size=\"1.1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 25.3 ) );
	object.setDefaultY( MxNumberTenths( 25.3 ) );
	object.setRelativeX( MxNumberTenths( 25.3 ) );
	object.setRelativeY( MxNumberTenths( 25.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-x=\"25.3\" default-y=\"25.3\" relative-y=\"25.3\" font-style=\"normal\" font-size=\"large\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 25.4 ) );
	object.setDefaultY( MxNumberTenths( 25.4 ) );
	object.setRelativeX( MxNumberTenths( 25.4 ) );
	object.setRelativeY( MxNumberTenths( 25.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"yes\" default-x=\"25.4\" default-y=\"25.4\" relative-y=\"25.4\" font-style=\"italic\" font-size=\"1.1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 25.5 ) );
	object.setDefaultY( MxNumberTenths( 25.5 ) );
	object.setRelativeX( MxNumberTenths( 25.5 ) );
	object.setRelativeY( MxNumberTenths( 25.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-y=\"25.5\" relative-y=\"25.5\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 25.6 ) );
	object.setDefaultY( MxNumberTenths( 25.6 ) );
	object.setRelativeX( MxNumberTenths( 25.6 ) );
	object.setRelativeY( MxNumberTenths( 25.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" relative-y=\"25.6\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 25.7 ) );
	object.setDefaultY( MxNumberTenths( 25.7 ) );
	object.setRelativeX( MxNumberTenths( 25.7 ) );
	object.setRelativeY( MxNumberTenths( 25.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" relative-y=\"25.7\" font-size=\"large\" font-weight=\"normal\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 25.8 ) );
	object.setDefaultY( MxNumberTenths( 25.8 ) );
	object.setRelativeX( MxNumberTenths( 25.8 ) );
	object.setRelativeY( MxNumberTenths( 25.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" relative-y=\"25.8\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 25.9 ) );
	object.setDefaultY( MxNumberTenths( 25.9 ) );
	object.setRelativeX( MxNumberTenths( 25.9 ) );
	object.setRelativeY( MxNumberTenths( 25.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-x=\"25.9\" relative-x=\"25.9\" relative-y=\"25.9\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" color=\"#F5F6F5F4\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 26 ) );
	object.setDefaultY( MxNumberTenths( 26 ) );
	object.setRelativeX( MxNumberTenths( 26 ) );
	object.setRelativeY( MxNumberTenths( 26 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"yes\" default-x=\"26\" relative-x=\"26\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F8F7F6\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 26.1 ) );
	object.setDefaultY( MxNumberTenths( 26.1 ) );
	object.setRelativeX( MxNumberTenths( 26.1 ) );
	object.setRelativeY( MxNumberTenths( 26.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-x=\"26.1\" default-y=\"26.1\" relative-x=\"26.1\" font-family=\"DEF\" font-weight=\"normal\" color=\"#F9FAF9F8\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 26.2 ) );
	object.setDefaultY( MxNumberTenths( 26.2 ) );
	object.setRelativeX( MxNumberTenths( 26.2 ) );
	object.setRelativeY( MxNumberTenths( 26.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"26.2\" default-y=\"26.2\" relative-x=\"26.2\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#FCFBFA\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 26.3 ) );
	object.setDefaultY( MxNumberTenths( 26.3 ) );
	object.setRelativeX( MxNumberTenths( 26.3 ) );
	object.setRelativeY( MxNumberTenths( 26.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-y=\"26.3\" relative-x=\"26.3\" font-family=\"ABC\" font-weight=\"normal\" color=\"#FDFEFDFC\" end-length=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 26.4 ) );
	object.setDefaultY( MxNumberTenths( 26.4 ) );
	object.setRelativeX( MxNumberTenths( 26.4 ) );
	object.setRelativeY( MxNumberTenths( 26.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-y=\"26.4\" relative-x=\"26.4\" font-family=\"DEF\" font-weight=\"bold\" color=\"#00FFFE\" end-length=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 26.5 ) );
	object.setDefaultY( MxNumberTenths( 26.5 ) );
	object.setRelativeX( MxNumberTenths( 26.5 ) );
	object.setRelativeY( MxNumberTenths( 26.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-y=\"26.5\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" color=\"#01020100\" end-length=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 26.6 ) );
	object.setDefaultY( MxNumberTenths( 26.6 ) );
	object.setRelativeX( MxNumberTenths( 26.6 ) );
	object.setRelativeY( MxNumberTenths( 26.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#040302" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"yes\" font-family=\"ABC\" font-style=\"italic\" color=\"#040302\" end-length=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 26.7 ) );
	object.setDefaultY( MxNumberTenths( 26.7 ) );
	object.setRelativeX( MxNumberTenths( 26.7 ) );
	object.setRelativeY( MxNumberTenths( 26.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-x=\"26.7\" relative-y=\"26.7\" font-style=\"normal\" color=\"#05060504\" end-length=\"1\" text-x=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 26.8 ) );
	object.setDefaultY( MxNumberTenths( 26.8 ) );
	object.setRelativeX( MxNumberTenths( 26.8 ) );
	object.setRelativeY( MxNumberTenths( 26.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#080706" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"26.8\" relative-y=\"26.8\" font-style=\"italic\" color=\"#080706\" end-length=\"1\" text-x=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 26.9 ) );
	object.setDefaultY( MxNumberTenths( 26.9 ) );
	object.setRelativeX( MxNumberTenths( 26.9 ) );
	object.setRelativeY( MxNumberTenths( 26.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"26.9\" relative-y=\"26.9\" font-style=\"normal\" color=\"#090A0908\" end-length=\"1\" text-x=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 27 ) );
	object.setDefaultY( MxNumberTenths( 27 ) );
	object.setRelativeX( MxNumberTenths( 27 ) );
	object.setRelativeY( MxNumberTenths( 27 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"27\" relative-y=\"27\" font-style=\"italic\" color=\"#0C0B0A\" end-length=\"1\" text-x=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 27.1 ) );
	object.setDefaultY( MxNumberTenths( 27.1 ) );
	object.setRelativeX( MxNumberTenths( 27.1 ) );
	object.setRelativeY( MxNumberTenths( 27.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-y=\"27.1\" relative-x=\"27.1\" relative-y=\"27.1\" font-style=\"normal\" font-size=\"large\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 27.2 ) );
	object.setDefaultY( MxNumberTenths( 27.2 ) );
	object.setRelativeX( MxNumberTenths( 27.2 ) );
	object.setRelativeY( MxNumberTenths( 27.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"yes\" default-y=\"27.2\" relative-x=\"27.2\" relative-y=\"27.2\" font-style=\"italic\" font-size=\"1.1\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 27.3 ) );
	object.setDefaultY( MxNumberTenths( 27.3 ) );
	object.setRelativeX( MxNumberTenths( 27.3 ) );
	object.setRelativeY( MxNumberTenths( 27.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-y=\"27.3\" relative-x=\"27.3\" relative-y=\"27.3\" font-style=\"normal\" font-size=\"large\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 27.4 ) );
	object.setDefaultY( MxNumberTenths( 27.4 ) );
	object.setRelativeX( MxNumberTenths( 27.4 ) );
	object.setRelativeY( MxNumberTenths( 27.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#141312" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-y=\"27.4\" relative-x=\"27.4\" font-size=\"1.1\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 27.5 ) );
	object.setDefaultY( MxNumberTenths( 27.5 ) );
	object.setRelativeX( MxNumberTenths( 27.5 ) );
	object.setRelativeY( MxNumberTenths( 27.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"27.5\" default-y=\"27.5\" relative-x=\"27.5\" font-family=\"ABC\" font-size=\"large\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 27.6 ) );
	object.setDefaultY( MxNumberTenths( 27.6 ) );
	object.setRelativeX( MxNumberTenths( 27.6 ) );
	object.setRelativeY( MxNumberTenths( 27.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"27.6\" relative-x=\"27.6\" font-family=\"DEF\" font-size=\"1.1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 27.7 ) );
	object.setDefaultY( MxNumberTenths( 27.7 ) );
	object.setRelativeX( MxNumberTenths( 27.7 ) );
	object.setRelativeY( MxNumberTenths( 27.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-x=\"27.7\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 27.8 ) );
	object.setDefaultY( MxNumberTenths( 27.8 ) );
	object.setRelativeX( MxNumberTenths( 27.8 ) );
	object.setRelativeY( MxNumberTenths( 27.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"yes\" default-x=\"27.8\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 27.9 ) );
	object.setDefaultY( MxNumberTenths( 27.9 ) );
	object.setRelativeX( MxNumberTenths( 27.9 ) );
	object.setRelativeY( MxNumberTenths( 27.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 28 ) );
	object.setDefaultY( MxNumberTenths( 28 ) );
	object.setRelativeX( MxNumberTenths( 28 ) );
	object.setRelativeY( MxNumberTenths( 28 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 28.1 ) );
	object.setDefaultY( MxNumberTenths( 28.1 ) );
	object.setRelativeX( MxNumberTenths( 28.1 ) );
	object.setRelativeY( MxNumberTenths( 28.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-y=\"28.1\" relative-y=\"28.1\" font-family=\"ABC\" font-weight=\"normal\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 28.2 ) );
	object.setDefaultY( MxNumberTenths( 28.2 ) );
	object.setRelativeX( MxNumberTenths( 28.2 ) );
	object.setRelativeY( MxNumberTenths( 28.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#242322" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-y=\"28.2\" relative-y=\"28.2\" font-family=\"DEF\" font-weight=\"bold\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 28.3 ) );
	object.setDefaultY( MxNumberTenths( 28.3 ) );
	object.setRelativeX( MxNumberTenths( 28.3 ) );
	object.setRelativeY( MxNumberTenths( 28.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-x=\"28.3\" default-y=\"28.3\" relative-x=\"28.3\" relative-y=\"28.3\" font-style=\"normal\" font-weight=\"normal\" color=\"#25262524\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 28.4 ) );
	object.setDefaultY( MxNumberTenths( 28.4 ) );
	object.setRelativeX( MxNumberTenths( 28.4 ) );
	object.setRelativeY( MxNumberTenths( 28.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#282726" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"yes\" default-x=\"28.4\" default-y=\"28.4\" relative-x=\"28.4\" relative-y=\"28.4\" font-style=\"italic\" font-weight=\"bold\" color=\"#282726\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 28.5 ) );
	object.setDefaultY( MxNumberTenths( 28.5 ) );
	object.setRelativeX( MxNumberTenths( 28.5 ) );
	object.setRelativeY( MxNumberTenths( 28.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-x=\"28.5\" default-y=\"28.5\" relative-x=\"28.5\" relative-y=\"28.5\" font-style=\"normal\" font-weight=\"normal\" color=\"#292A2928\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 28.6 ) );
	object.setDefaultY( MxNumberTenths( 28.6 ) );
	object.setRelativeX( MxNumberTenths( 28.6 ) );
	object.setRelativeY( MxNumberTenths( 28.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"28.6\" relative-x=\"28.6\" relative-y=\"28.6\" font-style=\"italic\" font-weight=\"bold\" color=\"#2C2B2A\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 28.7 ) );
	object.setDefaultY( MxNumberTenths( 28.7 ) );
	object.setRelativeX( MxNumberTenths( 28.7 ) );
	object.setRelativeY( MxNumberTenths( 28.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" relative-x=\"28.7\" relative-y=\"28.7\" font-style=\"normal\" font-weight=\"normal\" color=\"#2D2E2D2C\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 28.8 ) );
	object.setDefaultY( MxNumberTenths( 28.8 ) );
	object.setRelativeX( MxNumberTenths( 28.8 ) );
	object.setRelativeY( MxNumberTenths( 28.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" relative-x=\"28.8\" font-style=\"italic\" color=\"#302F2E\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 28.9 ) );
	object.setDefaultY( MxNumberTenths( 28.9 ) );
	object.setRelativeX( MxNumberTenths( 28.9 ) );
	object.setRelativeY( MxNumberTenths( 28.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" font-style=\"normal\" color=\"#31323130\" end-length=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 29 ) );
	object.setDefaultY( MxNumberTenths( 29 ) );
	object.setRelativeX( MxNumberTenths( 29 ) );
	object.setRelativeY( MxNumberTenths( 29 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"yes\" font-style=\"italic\" color=\"#343332\" end-length=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 29.1 ) );
	object.setDefaultY( MxNumberTenths( 29.1 ) );
	object.setRelativeX( MxNumberTenths( 29.1 ) );
	object.setRelativeY( MxNumberTenths( 29.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-x=\"29.1\" default-y=\"29.1\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#35363534\" end-length=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 29.2 ) );
	object.setDefaultY( MxNumberTenths( 29.2 ) );
	object.setRelativeX( MxNumberTenths( 29.2 ) );
	object.setRelativeY( MxNumberTenths( 29.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"29.2\" default-y=\"29.2\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#383736\" end-length=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 29.3 ) );
	object.setDefaultY( MxNumberTenths( 29.3 ) );
	object.setRelativeX( MxNumberTenths( 29.3 ) );
	object.setRelativeY( MxNumberTenths( 29.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"29.3\" default-y=\"29.3\" font-family=\"ABC\" font-size=\"large\" color=\"#393A3938\" end-length=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 29.4 ) );
	object.setDefaultY( MxNumberTenths( 29.4 ) );
	object.setRelativeX( MxNumberTenths( 29.4 ) );
	object.setRelativeY( MxNumberTenths( 29.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"29.4\" default-y=\"29.4\" font-family=\"DEF\" font-size=\"1.1\" color=\"#3C3B3A\" end-length=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 29.5 ) );
	object.setDefaultY( MxNumberTenths( 29.5 ) );
	object.setRelativeX( MxNumberTenths( 29.5 ) );
	object.setRelativeY( MxNumberTenths( 29.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-y=\"29.5\" relative-x=\"29.5\" relative-y=\"29.5\" font-family=\"XYZ\" font-size=\"large\" end-length=\"1\" text-x=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 29.6 ) );
	object.setDefaultY( MxNumberTenths( 29.6 ) );
	object.setRelativeX( MxNumberTenths( 29.6 ) );
	object.setRelativeY( MxNumberTenths( 29.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"yes\" relative-x=\"29.6\" relative-y=\"29.6\" font-family=\"ABC\" font-size=\"1.1\" end-length=\"1\" text-x=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 29.7 ) );
	object.setDefaultY( MxNumberTenths( 29.7 ) );
	object.setRelativeX( MxNumberTenths( 29.7 ) );
	object.setRelativeY( MxNumberTenths( 29.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" relative-x=\"29.7\" relative-y=\"29.7\" font-family=\"DEF\" font-size=\"large\" end-length=\"1\" text-x=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 29.8 ) );
	object.setDefaultY( MxNumberTenths( 29.8 ) );
	object.setRelativeX( MxNumberTenths( 29.8 ) );
	object.setRelativeY( MxNumberTenths( 29.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" relative-x=\"29.8\" relative-y=\"29.8\" font-family=\"XYZ\" font-size=\"1.1\" end-length=\"1\" text-x=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 29.9 ) );
	object.setDefaultY( MxNumberTenths( 29.9 ) );
	object.setRelativeX( MxNumberTenths( 29.9 ) );
	object.setRelativeY( MxNumberTenths( 29.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"29.9\" relative-x=\"29.9\" relative-y=\"29.9\" font-size=\"large\" font-weight=\"normal\" end-length=\"1\" text-x=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 30 ) );
	object.setDefaultY( MxNumberTenths( 30 ) );
	object.setRelativeX( MxNumberTenths( 30 ) );
	object.setRelativeY( MxNumberTenths( 30 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"30\" relative-x=\"30\" relative-y=\"30\" font-size=\"1.1\" font-weight=\"bold\" end-length=\"1\" text-x=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 30.1 ) );
	object.setDefaultY( MxNumberTenths( 30.1 ) );
	object.setRelativeX( MxNumberTenths( 30.1 ) );
	object.setRelativeY( MxNumberTenths( 30.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-x=\"30.1\" default-y=\"30.1\" relative-y=\"30.1\" font-style=\"normal\" font-weight=\"normal\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 30.2 ) );
	object.setDefaultY( MxNumberTenths( 30.2 ) );
	object.setRelativeX( MxNumberTenths( 30.2 ) );
	object.setRelativeY( MxNumberTenths( 30.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"yes\" default-x=\"30.2\" default-y=\"30.2\" font-style=\"italic\" font-weight=\"bold\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 30.3 ) );
	object.setDefaultY( MxNumberTenths( 30.3 ) );
	object.setRelativeX( MxNumberTenths( 30.3 ) );
	object.setRelativeY( MxNumberTenths( 30.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-y=\"30.3\" font-style=\"normal\" font-weight=\"normal\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 30.4 ) );
	object.setDefaultY( MxNumberTenths( 30.4 ) );
	object.setRelativeX( MxNumberTenths( 30.4 ) );
	object.setRelativeY( MxNumberTenths( 30.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-y=\"30.4\" font-style=\"italic\" font-weight=\"bold\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 30.5 ) );
	object.setDefaultY( MxNumberTenths( 30.5 ) );
	object.setRelativeX( MxNumberTenths( 30.5 ) );
	object.setRelativeY( MxNumberTenths( 30.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-y=\"30.5\" font-style=\"normal\" font-weight=\"normal\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 30.6 ) );
	object.setDefaultY( MxNumberTenths( 30.6 ) );
	object.setRelativeX( MxNumberTenths( 30.6 ) );
	object.setRelativeY( MxNumberTenths( 30.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#545352" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" font-style=\"italic\" font-weight=\"bold\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 30.7 ) );
	object.setDefaultY( MxNumberTenths( 30.7 ) );
	object.setRelativeX( MxNumberTenths( 30.7 ) );
	object.setRelativeY( MxNumberTenths( 30.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-x=\"30.7\" relative-x=\"30.7\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" color=\"#55565554\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( true );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 30.8 ) );
	object.setDefaultY( MxNumberTenths( 30.8 ) );
	object.setRelativeX( MxNumberTenths( 30.8 ) );
	object.setRelativeY( MxNumberTenths( 30.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#585756" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"yes\" default-x=\"30.8\" relative-x=\"30.8\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" color=\"#585756\" text-x=\"1\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 30.9 ) );
	object.setDefaultY( MxNumberTenths( 30.9 ) );
	object.setRelativeX( MxNumberTenths( 30.9 ) );
	object.setRelativeY( MxNumberTenths( 30.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" print-object=\"no\" default-x=\"30.9\" relative-x=\"30.9\" relative-y=\"30.9\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" color=\"#595A5958\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( true );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 31 ) );
	object.setDefaultY( MxNumberTenths( 31 ) );
	object.setRelativeX( MxNumberTenths( 31 ) );
	object.setRelativeY( MxNumberTenths( 31 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\" default-x=\"31\" relative-x=\"31\" relative-y=\"31\" font-family=\"XYZ\" color=\"#5C5B5A\" text-y=\"1\">D,E,F</ending>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEsEnding )
{
	MxEsEnding object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsTextXPresent( false );
	object.setIsTextYPresent( false );
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 31.1 ) );
	object.setDefaultY( MxNumberTenths( 31.1 ) );
	object.setRelativeX( MxNumberTenths( 31.1 ) );
	object.setRelativeY( MxNumberTenths( 31.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<ending number=\"\" type=\"start\">D,E,F</ending>";
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


